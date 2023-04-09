var fs = require('fs');
var path = require('path');
var util = require('util');

const arch_bits = {
    i386: 32,
    amd64: 64,
    arm: 32,
    arm64: 64,
    mips64: 64,
    riscv64: 64,
    ppc64: 64,
    s390x: 64,
    loong64: 64
}

const arch_opts = {
    amd64: "V8_TARGET_ARCH_X64",
    i386: "V8_TARGET_ARCH_IA32",
    arm: "V8_TARGET_ARCH_ARM",
    arm64: "V8_TARGET_ARCH_ARM64",
    mips64: "V8_TARGET_ARCH_MIPS64",
    ppc64: "V8_TARGET_ARCH_PPC64",
    s390: "V8_TARGET_ARCH_S390",
    riscv64: "V8_TARGET_ARCH_RISCV64",
    loong64: "V8_TARGET_ARCH_LOONG64",
    riscv: "V8_TARGET_ARCH_RISCV32"
}

const skip_list = [
    "^src/base/ubsan.cc",

    "^src/base/platform/platform-\\w*.cc",
    "^src/base/platform/mutex.cc",
    "^src/base/platform/condition-variable.cc",
    "^src/base/platform/semaphore.cc",

    "^src/base/platform/memory-protection-key.cc",


    "^src/debug/wasm/gdb-server/",

    "^src/deoptimizer/deoptimizer-cfi-empty.cc",

    "^src/diagnostics/unwinding-info-win64.cc",

    "^src/d8/",

    "^src/extensions/vtunedomain-support-extension.cc",

    "^src/heap/conservative-stack-visitor.cc",
    "^src/heap/cppgc/caged-heap.cc",

    "^src/init/setup-isolate-full.cc",
    "^src/inspector/",

    "^src/libplatform/tracing/recorder-mac.cc",
    "^src/libplatform/tracing/recorder-win.cc",
    "^src/libplatform/tracing/trace-event-listener.cc",

    "^src/maglev/",

    "^src/snapshot/snapshot-empty.cc",
    "^src/snapshot/snapshot-compression.cc",
    "^src/snapshot/snapshot-external.cc",
    "^src/snapshot/embedded/embedded-empty.cc",

    "^src/trap-handler/handler-inside-",
    "^src/trap-handler/handler-outside-",

    "^src/third_party/vtune/",
];

function get_src() {
    var src_list = [];

    for (var i = 0; i < arguments.length; i++) {
        var folder = arguments[i];
        fs.readdir(folder).forEach(name => {
            var fname = path.join(folder, name);
            var f = fs.stat(fname);

            if (f.isDirectory())
                src_list = src_list.concat(get_src(fname));
            else if (path.extname(fname) == ".cc" || path.extname(fname) == ".c")
                src_list.push(fname);
        });
    }

    return src_list;
}

function gen_list(arch, os) {
    var src_list = get_src('src', `gen/${arch_bits[arch]}`, 'patch/src');

    function skip_src(match) {
        var skips = [];

        src_list.forEach(fname => {
            var src = fs.readTextFile(fname);
            if (src.search(match) > -1)
                skips.push(fname);
        });

        src_list = util.difference(src_list, skips);
    }

    function get_list(match) {
        var list = [];

        src_list.forEach(fname => {
            if (fname.search(match) > -1)
                list.push(fname);
        });

        if (list.length == 0)
            throw new Error(`${match} found nothing.`);

        return list;
    }

    function skip_name(match) {
        src_list = util.difference(src_list, get_list(match));
    }

    function filter_arch() {
        var arm_list = get_list("/arm/");
        var arm64_list = get_list("/arm64/");
        var i386_list = get_list("/ia32/");
        var loong64_list = get_list("/loong64/");
        var mips64_list = get_list("/mips64/");
        var ppc_list = get_list("/ppc/");
        var riscv_list = get_list("/riscv/");
        var s390_list = get_list("/s390/");
        var x86_shared_list = get_list("/shared-ia32-x64/");
        var x64_list = get_list("/x64/");

        src_list = util.difference(src_list, arm_list, arm64_list, i386_list,
            loong64_list, mips64_list, ppc_list, riscv_list, s390_list,
            x86_shared_list, x64_list);

        switch (arch) {
            case "amd64":
                src_list = src_list.concat(x64_list, x86_shared_list);
                break;
            case "i386":
                src_list = src_list.concat(i386_list, x86_shared_list);
                break;
            case "arm64":
                src_list = src_list.concat(arm64_list);
                break;
            case "arm":
                src_list = src_list.concat(arm_list);
                break;
            case "loong64":
                src_list = src_list.concat(loong64_list);
                break;
            case "mips64":
                src_list = src_list.concat(mips64_list);
                break;
            case "ppc64":
                src_list = src_list.concat(ppc_list);
                break;
            case "riscv64":
                src_list = src_list.concat(riscv_list);
                skip_name("^src/compiler/backend/riscv/instruction-selector-riscv32.cc");
                break;
            case "s390":
                src_list = src_list.concat(s390_list);
                break;
        }
    }

    function filter_os() {
        var win_list = get_list("[-_]win.cc");
        var mac_list = get_list("[-_]mac.cc");
        var posix_list = get_list("[-_]posix.cc");
        var android_list = get_list("[-_]android.cc");
        var fuchsia_list = get_list("[-_]fuchsia.cc");

        if (os == "Windows") {
            skip_name("^src/base/platform/platform-posix-time.cc");

            src_list = util.difference(src_list, mac_list, posix_list, android_list, fuchsia_list);
            skip_name("^src/diagnostics/etw-jit-win.cc")

            if (arch == "i386") {
                skip_name("^src/heap/base/asm/ia32/save_registers_asm.cc")
                src_list.push("src/heap/base/asm/ia32/save_registers_masm.asm")
            } else {
                src_list.push(
                    "src/trap-handler/handler-outside-win.cc",
                    "src/diagnostics/unwinding-info-win64.cc"
                );

                if (arch == "amd64") {
                    src_list.push("src/trap-handler/handler-inside-win.cc");

                    skip_name("^src/heap/base/asm/x64/save_registers_asm.cc")
                    src_list.push("src/heap/base/asm/x64/save_registers_masm.asm")
                } else if (arch == "arm64") {
                    skip_name("^src/heap/base/asm/arm64/save_registers_asm.cc")
                    src_list.push("src/heap/base/asm/arm64/save_registers_masm.S")
                }
            }
            src_list.push("src/snapshot/embedded/platform-embedded-file-writer-mac.cc")
        } else {
            if (os == "Darwin") {
                src_list = util.difference(src_list, win_list, android_list, fuchsia_list);

                src_list.push(
                    "src/base/platform/platform-darwin.cc",
                    "src/base/platform/platform-macos.cc"
                )
            } else if (os == "iPhone") {
                src_list = util.difference(src_list, win_list, android_list, fuchsia_list);

                src_list.push("src/base/platform/platform-darwin.cc")
            } else if (os == "Linux" || os == "Android") {
                src_list = util.difference(src_list, win_list, mac_list, android_list, fuchsia_list);

                src_list.push(
                    "src/base/platform/platform-linux.cc",
                    "src/snapshot/embedded/platform-embedded-file-writer-mac.cc"
                )
            }

            src_list.push(
                "src/trap-handler/handler-inside-posix.cc",
                "src/trap-handler/handler-outside-posix.cc",
                "src/snapshot/embedded/platform-embedded-file-writer-win.cc"
            )
        }
    }

    skip_src(/int main\(/);
    // skip_src('#error Internationalization is expected to be enabled.');

    skip_list.forEach(skip_name);

    filter_arch();
    filter_os();

    if (os == "Android") {
        skip_name("^src/base/debug/stack_trace_posix.cc");
        src_list.push(
            "src/base/debug/stack_trace_android.cc",
            `patch/snapshot/embedded-${arch}-Linux.S`,
            `patch/snapshot/snapshot-${arch}-Linux.cc`
        );
    }
    else if (os == "iPhone")
        src_list.push(
            `patch/snapshot/embedded-${arch}-Darwin.S`,
            `patch/snapshot/snapshot-${arch}-Darwin.cc`
        );
    else
        src_list.push(
            `patch/snapshot/embedded-${arch}-${os}.${os == "Windows" ? "asm" : "S"}`,
            `patch/snapshot/snapshot-${arch}-${os}.cc`
        );

    src_list.sort();

    var txts = [];

    txts.push(`add_definitions(-D${arch_opts[arch]})\n`);

    txts.push("set(src_list\n	${PROJECT_SOURCE_DIR}/" +
        src_list.join("\n	${PROJECT_SOURCE_DIR}/") +
        "\n)\n");

    fs.writeFile(`cmake/v8-${arch}-${os}.cmake`, txts.join('\n'));
    console.log(`v8-${arch}-${os}.cmake generated`);
}

gen_list("amd64", "Linux");
gen_list("i386", "Linux");
gen_list("arm64", "Linux");
gen_list("arm", "Linux");
gen_list("mips64", "Linux");
gen_list("ppc64", "Linux");
gen_list("riscv64", "Linux");
gen_list("loong64", "Linux");

gen_list("amd64", "Darwin");
gen_list("arm64", "Darwin");

gen_list("arm64", "iPhone");

gen_list("amd64", "Windows");
gen_list("i386", "Windows");
gen_list("arm64", "Windows");

gen_list("amd64", "Android");
gen_list("i386", "Android");
gen_list("arm64", "Android");
gen_list("arm", "Android");
