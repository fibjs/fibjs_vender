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

var src_list = get_src('src');

src_list.forEach(fname => {
    const regex = /\n[ \t]*((static|extern)\s+)?thread_local\s+[^;]+;/g;
    var ms = {};

    var f = fs.readTextFile(fname);

    const found = f.match(regex);
    if (found) {
        console.log("======================", fname, "======================");
        found.forEach(m => {
            console.log(JSON.stringify(m));

            var m1 = m.replace('V8_CONSTINIT', '');
            var def;

            var r = /((static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*(=\s+([^;\s]+))\s*;/.exec(m1); // static thread_local int a = 0;
            if (!r)
                r = /((static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*(\(\s*([^;\s]+)\s*\))\s*;/.exec(m1); // static thread_local int a(0);
            if (!r)
                r = /((static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*(\{\s*([^;\s]+)\s*\})\s*;/.exec(m1); // static thread_local int a{0};
            if (!r)
                r = /((static|extern)\s+)?thread_local\s+([^;]+?)\s+([\w:]+)\s*;/.exec(m1); // static thread_local int a;

            var def = {
                modifier: r[2],
                type: r[3],
                name: r[4],
                init: r[6] || ""
            };

            var m2 = `\n${def.modifier ? def.modifier + " " : ""}exlib::fiber_local<${def.type}> ${def.name}${def.init ? "(" + def.init + ")" : ""};`;
            console.log(JSON.stringify(m2));

            f = f.replace(m, m2);
        });

        fs.writeTextFile(fname, "#include <exlib/include/fbTls.h>\n" + f);
    }
});
