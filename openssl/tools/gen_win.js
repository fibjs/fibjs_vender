const child_process = require('child_process');
const fs = require('fs');

const windows_config = {
    "x64": {
        "arch": "VC-WIN64A",
        "target": "x64"
    },
    "arm64": {
        "arch": "VC-WIN64-ARM",
        "target": "arm64"
    },
    "ia32": {
        "arch": "VC-WIN32",
        "target": "x86"
    }
};

for (var arch in windows_config) {
    var config = windows_config[arch];

    try {
        fs.mkdir(`build\\windows_${arch}`, {
            recursive: true
        });
    } catch (e) { }

    var opts = {
        cwd: `build\\windows_${arch}`,
        env: {
            ...process.env,
            Platform: config.target,
            LIB: process.env.LIB.replace(/\\(arm64|x64|x86)/ig, `\\${config.target}`),
            Path: process.env.Path.replace(/\\bin\\HostX64\\(arm64|x64|x86)/ig, `\\bin\\HostX64\\${config.target}`),
            VSCMD_ARG_HOST_ARCH: config.target,
            VSCMD_ARG_TGT_ARCH: config.target
        }
    };

    if (child_process.run("perl", ["..\\..\\openssl\\Configure", config.arch, "no-shared", "no-module", "no-md4", "no-mdc2", "no-whirlpool", "-w"], opts))
        throw new Error("openssl config failed");
    if (child_process.run("nmake", ["build_libs"], opts))
        throw new Error("openssl build failed");
}
