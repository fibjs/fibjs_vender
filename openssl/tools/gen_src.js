const fs = require('fs');
const path = require('path');

['crypto', 'providers', 'ssl'].forEach(m => {
    fs.readdir(`openssl/${m}`, { recursive: true }).forEach(file => {
        const ext = path.extname(file);
        if (ext === ".c" || ext === ".h" || ext === ".inc") {
            const folder = path.dirname(file);
            console.log(`Copying openssl/${m}/${file} to src/${m}/${file}`);
            fs.mkdir(`src/${m}/${folder}`, { recursive: true });
            try {
                fs.copyFile(`openssl/${m}/${file}`, `src/${m}/${file}`);
            } catch (e) { }
        }
    });
})

const windows_target = {
    "windows_arm64": true,
    "windows_ia32": true,
    "windows_x64": true
};

fs.readdir("build").forEach(target => {
    const src_list = [];
    ['crypto', 'providers', 'ssl'].forEach(m => {
        const files = fs.readdir(`build/${target}/${m}`, { recursive: true });
        files.forEach(file => {
            const folder = path.dirname(file);
            const ext = path.extname(file);
            var genfile;

            if (windows_target[target]) {
                if (ext === ".asm")
                    genfile = path.basename(file).replace(/lib.*-lib-/g, '').replace(/\.obj\.asm/g, ".asm");
                else if (ext === ".c")
                    genfile = path.basename(file);
            } else if (ext === ".s" || ext === ".S" || ext === ".c")
                genfile = path.basename(file);

            if (genfile) {
                const src = path.join('src', m, folder, 'gen', target, genfile);
                src_list.push(src);
                fs.mkdir(path.join('src', m, folder, 'gen', target), { recursive: true });
                try {
                    fs.copyFile(`build/${target}/${m}/${file}`, src);
                } catch (e) { }
            } else if (ext === '.o' || ext === '.obj') {
                var basename = path.basename(file, ext).replace(/lib.*-lib-/g, '');
                const src = path.join('src', m, folder, `${basename}.c`);
                console.log(src);
                if (fs.exists(src))
                    src_list.push(src);
            }
        });
    });

    const makescript = fs.readFile(`build/${target}/Makefile`, 'utf8');

    var defs;
    const m1 = /implementations\/include +(-D.*) +\$\(LIB_CFLAGS\)/.exec(makescript);
    if (m1)
        defs = m1[1];
    else {
        const m2 = /-D(BS)?AES_ASM( +(-D\S*))+/.exec(makescript);
        if (m2)
            defs = m2[0];
    }

    fs.mkdir('cmake', { recursive: true });
    fs.writeFile(`cmake/${target}.cmake`,
        "set(src_list\n    ${PROJECT_SOURCE_DIR}/" + src_list.sort().join("\n    ${PROJECT_SOURCE_DIR}/") + "\n)");

    if (defs)
        fs.appendFile(`cmake/${target}.cmake`, `\n\nadd_definitions(${defs})\n`);
});
