var fs = require('fs');
var path = require('path');

function get_src(folder) {
    var src_list = [];

    fs.readdir(folder).forEach(name => {
        var fname = path.join(folder, name);
        var f = fs.stat(fname);

        if (f.isDirectory())
            src_list = src_list.concat(get_src(fname));
        else if (path.extname(fname) == ".cc" || path.extname(fname) == ".h")
            src_list.push(fname);
    });

    return src_list;
}

console.log("====================== src/base/build_config.h ======================");
var f = fs.readTextFile('src/base/build_config.h');
f = f.replace(/#define\s+V8_HAS_PKU_JIT_WRITE_PROTECT\s+1/, '#define V8_HAS_PKU_JIT_WRITE_PROTECT 0');
fs.writeTextFile('src/base/build_config.h', f);

var src_list = get_src('src');

src_list.forEach(fname => {
    const regex = /\n\s*((\w+\s+)?(static|extern)\s+)?thread_local\s+[^;]+;/g;
    var ms = {};

    var f = fs.readTextFile(fname);

    const found = f.match(regex);
    if (found) {
        console.log("======================", fname, "======================");
        found.forEach(m => {
            console.log(JSON.stringify(m));

            var m1 = m.replace('V8_CONSTINIT', '');
            var def;

            var r = /((\w+\s+)?(static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*(=\s+([^;\s]+))\s*;/.exec(m1); // static thread_local int a = 0;
            if (!r)
                r = /((\w+\s+)?(static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*(\(\s*([^;\s]+)\s*\))\s*;/.exec(m1); // static thread_local int a(0);
            if (!r)
                r = /((\w+\s+)?(static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*(\{\s*([^;\s]+)\s*\})\s*;/.exec(m1); // static thread_local int a{0};
            if (!r)
                r = /((\w+\s+)?(static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*;/.exec(m1); // static thread_local int a;

            var def = {
                modifier: r[1],
                type: r[4],
                name: r[5],
                init: r[7] || ""
            };

            if (def.init == 'nullptr' || def.init == 'false' || def.init == '0')
                def.init = '';

            var m2 = `\n${def.modifier ? def.modifier + " " : ""}exlib::fiber_local<${def.type}> ${def.name}${def.init ? "{" + def.init + "}" : ""};`;
            console.log(JSON.stringify(m2));

            f = f.replace(m, m2);

            console.log('');
        });

        fs.writeTextFile(fname, "#include <exlib/include/fbTls.h>\n" + f);
    }
});
