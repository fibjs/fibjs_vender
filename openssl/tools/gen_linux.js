const child_process = require('child_process');
const fs = require('fs');

const linux_config = {
    "x64": {
        "arch": "linux-x86_64",
        "prefix": "/usr/bin/x86_64-linux-gnu-"
    },
    "ia32": {
        "arch": "linux-x86",
        "prefix": "/usr/bin/i686-linux-gnu-"
    },
    "arm64": {
        "arch": "linux-aarch64",
        "prefix": "/usr/bin/aarch64-linux-gnu-"
    },
    "arm": {
        "arch": "linux-armv4",
        "prefix": "/usr/bin/arm-linux-gnueabihf-"
    },
    "mips64": {
        "arch": "linux64-mips64",
        "prefix": "/usr/bin/mips64el-linux-gnuabi64-"
    },
    "ppc64": {
        "arch": "linux-ppc64le",
        "prefix": "/usr/bin/powerpc64le-linux-gnu-"
    },
    "riscv64": {
        "arch": "linux64-riscv64",
        "prefix": "/usr/bin/riscv64-linux-gnu-"
    },
    "loong64": {
        "arch": "linux64-loongarch64",
        "prefix": "/usr/cross-tools/bin/loongarch64-unknown-linux-gnu-"
    },
};

const cwd = process.cwd();

for (var arch in linux_config) {
    var config = linux_config[arch];

    try {
        fs.mkdir(`build/linux_${arch}`, {
            recursive: true
        });
    } catch (e) { }

    if(child_process.run("bash", ["../../openssl/config", config.arch, "-fPIC", "no-shared", "no-md4", "no-mdc2", "no-whirlpool", "-w"], {
        cwd: `build/linux_${arch}`,
        env: {
            CC: config.prefix + "gcc",
            CXX: config.prefix + "g++",
            AR: config.prefix + "ar",
            LD: config.prefix + "ld"
        }
    }))
        throw new Error("openssl config failed");
    if(child_process.run("docker", ["run", "-it", "--rm", "-v", `${cwd}:${cwd}`, "-w", `${cwd}/build/linux_${arch}`,
        `fibjs/linux-build-env:${arch}`, "make", "build_libs", "-j8"]))
        throw new Error("openssl build failed");
}
