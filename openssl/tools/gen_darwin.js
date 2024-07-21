const child_process = require('child_process');
const fs = require('fs');

const gen_config = require("./gen_config.json");

const darwin_config = {
    "x64": {
        "arch": "darwin64-x86_64"
    },
    "arm64": {
        "arch": "darwin64-arm64"
    },
};

for (var arch in darwin_config) {
    var config = darwin_config[arch];

    try {
        fs.mkdir(`build/darwin_${arch}`, {
            recursive: true
        });
    } catch (e) { }

    if (child_process.run("bash", ["../../openssl/config", config.arch].concat(gen_config), {
        cwd: `build/darwin_${arch}`
    }))
        throw new Error("openssl config failed");
    const cwd = process.cwd();
    if (child_process.run("make", ["build_libs", "-j8"], {
        cwd: `build/darwin_${arch}`
    }))
        throw new Error("openssl build failed");
}
