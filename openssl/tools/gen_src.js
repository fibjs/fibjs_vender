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

const asm_target = {
    "windows_arm64": ".asm",
    "windows_ia32": ".S",
    "windows_x64": ".asm"
};

fs.readdir("build").forEach(target => {
    const src_list = [];
    ['crypto', 'providers', 'ssl'].forEach(m => {
        const files = fs.readdir(`build/${target}/${m}`, { recursive: true });
        files.forEach(file => {
            const folder = path.dirname(file);
            const ext = path.extname(file);
            var genfile;

            if (asm_target[target]) {
                if (ext === asm_target[target])
                    genfile = path.join(path.basename(file, ext) + ".asm");
                else if (ext === ".c")
                    genfile = path.basename(file);
            } else {
                if (ext === ".s" || ext === ".S" || ext === ".c")
                    genfile = path.basename(file);
            }

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

    // src_list.forEach(f => console.log(f));
});


/*
linux_arm64  -DBSAES_ASM -DECP_NISTZ256_ASM -DECP_SM2P256_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_MONT -DOPENSSL_CPUID_OBJ -DOPENSSL_SM3_ASM -DPOLY1305_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DSM4_ASM -DVPAES_ASM -DVPSM4_ASM
linux_x64    -DAES_ASM -DBSAES_ASM -DCMLL_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DPADLOCK_ASM -DPOLY1305_ASM -DRC4_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DVPAES_ASM -DWHIRLPOOL_ASM -DX25519_ASM
linux_arm    -DAES_ASM -DBSAES_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_CPUID_OBJ -DPOLY1305_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM



*/