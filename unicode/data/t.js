var fs = require('fs');

var dat = fs.readFile('icudtl.dat');

var txts = [];

var txt = "    ";
for (var i = 0; i < dat.length; i += 4) {
    if (i > 0 && i % 64 == 0) {
        txts.push(txt);
        txt = "    ";
    }

    txt += "0x" + dat.readUInt32LE(i).toString(16) + ", ";
}
txts.push(txt);

fs.writeTextFile('icudtl_dat.c', 
`#include <stdint.h>

int32_t icudt73_dat[] = {
${txts.join('\n')}
};
`);