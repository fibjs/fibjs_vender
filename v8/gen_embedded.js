var fs = require('fs');
var path = require('path');

var src = fs.readTextFile(path.join(__dirname, "gen/embedded.cc"));
var txts = [];

txts = src.split('\n');
txts = txts.map(txt => txt.replace(/(^ *\")|(\\n\"$)/g, ''));
txts = txts.filter(txt => !txt.match(/^(\/\/)|(\.file)|(__asm__)|(\);)|(\.loc)|(\.def)/g));

function hex_number(d) {
    d = d.replace(/^0*/g, '');
    if (d == '')
        return '0h';
    return d.replace(/^[a-z]/g, c => `0${c}`) + 'h';
}

var seg_name;
var bytes = 0;

txts = txts.map(txt => {
    var line = /^ *(\.[a-z]+) *(.*) *$/g.exec(txt);
    if (!line)
        return txt;

    switch (line[1]) {
        case '.octa':
            var data = line[2].replace(/0x([0-9a-f]+)/g, (s, d) => {
                d = '00000000000000000000000000000000' + d;
                var l = d.length;
                var d0 = d.substr(0, l - 16);
                var d1 = d.substr(l - 16);
                bytes += 16;
                return `${hex_number(d1)},${hex_number(d0)}`;
            });
            txt = `  dq ${data}`;
            break;
        case '.quad':
            txt = `  dq ${line[2]}`;
            break;
        case '.byte':
            var data = line[2].replace(/0x([0-9a-z]+)/g, (s, d) => {
                bytes += 1;
                return hex_number(d);
            });
            txt = `  db ${data}`;
            break;
        case '.long':
            txt = `  dd ${line[2]}`;
            break;
        case '.balign':
            if (line[2] != '32')
                txt = `  align ${line[2]}`;
            else
                txt = '';
            break;
        case '.rva':
            txt = `  dd IMAGEREL ${line[2]}`;
            break;
        case '.global':
            txt = `  PUBLIC ${line[2]}`;
            break;
        case '.section':
            bytes = 0;
            var seg = line[2];
            switch (seg) {
                case ".text":
                    txt = '.code';
                    break;
                case ".data":
                    txt = '.data';
                    break;
                default:
                    seg = seg.replace('\.', '_')
                    txt = `${seg} SEGMENT ALIGN(32) ALIAS("${line[2]}") READONLY`;
                    if (seg_name)
                        txt = `${seg_name} ENDS\n\n${txt}`;
                    seg_name = seg;
            }
            break;
        default:
            console.log(line);
    }

    return txt;
});

txts.unshift("EXTERN CrashForExceptionInNonABICompliantCodeRange : PROC");
txts.push(`${seg_name} ENDS\n\n`);
txts.push("END");

fs.writeTextFile(path.join(__dirname, "gen/embedded.asm"), txts.join('\n'));