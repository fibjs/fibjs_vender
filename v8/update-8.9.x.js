#!/bin/js

var fs = require('fs');
var path = require('path');
var process = require('process');
var os = require('os');

var mkdirp = require('./update_helpers/mkdirp');
var readdir2 = require('./update_helpers/readdir');

var workFolder = process.cwd();
var profileFolder = process.env.HOME || process.env.USERPROFILE;
// for debug
process.env.V8_DIR = path.fullpath(profileFolder + "./projects/v8/v8");
process.env.DEPT_TOOLS_DIR = path.resolve("C:\\src\\depot_tools");

var v8Folder = process.env.V8_DIR || path.fullpath(profileFolder + "./works/source/js/v8/v8");
var deptToolsFolder = process.env.DEPT_TOOLS_DIR || path.fullpath(profileFolder + "./works/source/js/v8/depot_tools");

console.log(`v8 is located in: ${v8Folder}`);
console.log(`dept_tools is located in: ${deptToolsFolder}`);

process.chdir(v8Folder);

if (process.env.NO_CODEGEN != '1') {
    process.run("python", [
        `tools/dev/v8gen.py`,
        "x64.release",
        "--",
        "is_debug=false",
        "is_component_build=true",
        "v8_static_library=false",
    ]);

    /**
     * @notice you must add dept_tools folder to your environment variable `PATH`
     */
    // process.run(`${deptToolsFolder}/ninja`, [
    process.run(`ninja`, [
        "-C",
        "out.gn/x64.release",
        "d8",
        "-j",
        // "64"
        `${(os.cpuNumbers() || 1) * 4}`,
    ]);
}

process.chdir(workFolder);

var platFolder = 'src/base/platform';
var plats = [
    'platform-fiber.cc',
    'condition-variable.cc',
    'condition-variable.h',
    'mutex.cc',
    'mutex.h',
    'semaphore.cc',
    'semaphore.h'
];
var platTxts = [];

function save_plat() {
    platTxts = [];
    plats.forEach(function (f) {
        console.log("save", platFolder + '/' + f);
        platTxts.push(fs.readTextFile(platFolder + '/' + f));
    });
}

function update_plat() {
    var i;
    var a = platFolder.split('/');

    for (i = 1; i < a.length; i++) {
        try {
            fs.mkdir(a.slice(0, i + 1).join('/'));
        } catch (e) { }
    }

    for (i = 0; i < plats.length; i++) {
        console.log("update", platFolder + '/' + plats[i]);
        fs.writeFile(platFolder + '/' + plats[i], platTxts[i]);
    }
}

function clean_folder(path) {
    var dir = fs.readdir(path);
    console.log("clean", path);
    dir.forEach(function (name) {
        var fname = path + '/' + name;
        var f = fs.stat(fname);
        if (f.isDirectory()) {
            clean_folder(fname);
            fs.rmdir(fname);
        } else
            fs.unlink(fname);
    });
}

var files = {
    'src/async-hooks-wrapper.cc': 1,
    'src/async-hooks-wrapper.h': 1,
    'src/v8dll-main.cc': 1,
    'src/setup-isolate-deserialize.cc': 1,
    'src/interpreter/mkpeephole.cc': 1,
    'src/snapshot/mksnapshot.cc': 1,
    'src/snapshot/natives-external.cc': 1,
    'src/snapshot/snapshot-external.cc': 1,
    'src/snapshot/snapshot-empty.cc': 1,
    'src/base/platform/platform-qnx.cc': 1,
    'src/base/platform/platform-cygwin.cc': 1,
    'src/base/platform/platform-fuchsia.cc': 1,
    'src/base/debug/stack_trace_fuchsia.cc': 1,
    'src/builtins/builtins-intl.cc': 1,
    'src/builtins/builtins-intl-gen.cc': 1,
    'src/char-predicates.cc': 1,
    'src/intl.cc': 1,
    'src/intl.h': 1,
    'src/objects/intl-objects.cc': 1,
    'src/objects/intl-objects.h': 1,
    'src/objects/js-locale-inl.h': 1,
    'src/objects/js-locale.cc': 1,
    'src/objects/js-locale.h': 1,
    'src/objects/js-relative-time-format-inl.h': 1,
    'src/objects/js-relative-time-format.cc': 1,
    'src/objects/js-relative-time-format.h': 1,
    'src/runtime/runtime-intl.cc': 1
};

var re = [
    /^src\/d8.*$/,
    /^.*unittest.*\.cc$/,
    /^src\/test\/.*\.cc$/
];

function chk_file(fname) {
    var len = fname.length;
    if (fname.substr(len - 2, 2) != '.h' && fname.substr(len - 3, 3) != '.cc')
        return false;

    if (files[fname])
        return false;

    for (var i = 0; i < re.length; i++)
        if (re[i].test(fname))
            return false;

    return true;
}

var replaces = {
    '#include "testing/gtest/include/gtest': '#include "gtest'
};

var reanmes = {
    // 'src/float.h': 'src/float1.h'
};

function cp_folder(path, to) {
    var dir = fs.readdir(v8Folder + '/' + path);
    dir.forEach(function (name) {
        if (name.substr(0, 1) != '.') {
            var fname = path + '/' + name;
            var fnameto = to ? to + '/' + fname : fname;

            var f = fs.stat(v8Folder + '/' + fname);
            if (f.isDirectory()) {
                console.log(fnameto);
                fs.mkdir(fnameto);
                cp_folder(fname, to);
            } else {
                if (chk_file(fnameto)) {
                    console.log("[cp_folder] copy", fnameto);
                    var txt = fs.readTextFile(v8Folder + '/' + fname);
                    for (var t1 in replaces)
                        txt = txt.replace(t1, replaces[t1]);

                    if (reanmes[fnameto])
                        fnameto = reanmes[fnameto];

                    fs.writeFile(fnameto, txt);
                }
            }
        }
    });
}

var gens = [
    // '/out.gn/x64.release/gen/libraries.cc',
    // '/out.gn/x64.release/gen/extras-libraries.cc',
    // '/out.gn/x64.release/gen/experimental-extras-libraries.cc'
];

function cp_gen() {
    fs.mkdir('src/gen');
    gens.forEach(function (f) {
        console.log("cp " + f);
        fs.writeFile('src/gen/' + path.basename(f), fs.readTextFile(v8Folder + f));
    });

    mkdirp('src/builtins/torque-generated');
    var bFolder = path.resolve(v8Folder, './out.gn/x64.release/gen/torque-generated');
    var fnames = readdir2(bFolder);
    fnames.forEach(function (name) {
        var sfile = path.resolve(bFolder, name);
        var tfile = path.resolve('src/builtins/torque-generated/' + name)
        console.log(`cp ${sfile} to ${tfile}`);
        mkdirp(path.dirname(tfile));
        fs.copy(sfile, tfile);
    });

    mkdirp('src/builtins/builtins-generated');
    var bFolder = path.resolve(v8Folder, './out.gn/x64.release/gen/builtins-generated');
    var dir = fs.readdir(bFolder);
    dir.forEach(function (name) {
        var sfile = path.resolve(bFolder, name);
        console.log("cp " + sfile);
        fs.copy(sfile,
            'src/builtins/builtins-generated/' + name);
    });

    mkdirp('src/builtins/include/inspector');
    var bFolder = path.resolve(v8Folder, './out.gn/x64.release/gen/include/inspector');
    var dir = fs.readdir(bFolder);
    dir.forEach(function (name) {
        var sfile = path.resolve(bFolder, name);
        console.log("cp " + sfile);
        fs.copy(sfile,
            'src/builtins/include/inspector/' + name);
    });
}

function fix_src(path, val) {
    var dir = fs.readdir(path);
    dir.forEach(function (name) {
        if (name.substr(name.length - 3, 3) == '.cc') {
            var fname = path + '/' + name;
            var txt = fs.readTextFile(fname);

            console.log("fix", fname);
            fs.writeFile(fname, '#include "src/v8.h"\n\n#if ' + val + '\n\n' + txt + '\n\n#endif  // ' + val);
        }
    });
}

var archs = {
    arm: 'V8_TARGET_ARCH_ARM',
    arm64: 'V8_TARGET_ARCH_ARM64',
    mips: 'V8_TARGET_ARCH_MIPS',
    mips64: 'V8_TARGET_ARCH_MIPS64',
    ppc: "V8_TARGET_ARCH_PPC",
    ia32: 'V8_TARGET_ARCH_IA32',
    s390: 'V8_TARGET_ARCH_S390',
    x64: 'V8_TARGET_ARCH_X64',
    x87: 'V8_TARGET_ARCH_X87'
};

function patch_src(path) {
    var dir = fs.readdir(path);
    dir.forEach(function (name) {
        var fname = path + '/' + name;
        var f = fs.stat(fname);
        if (f.isDirectory()) {
            if (archs[name])
                fix_src(fname, archs[name]);
            else
                patch_src(fname);
        }
    });
}

var plats1 = {
    'aix': "#ifdef AIX",
    'freebsd': "#ifdef FreeBSD",
    'linux': "#ifdef Linux",
    'macos': "#ifdef Darwin",
    'openbsd': "#ifdef OpenBSD",
    'solaris': "#ifdef Solaris",
    'win32': "#ifdef Windows",
    'posix': "#ifndef Windows",
    'posix-time': "#ifndef Windows"
};

function patch_plat() {
    function patch_plat_file(fname, plat) {
        if (!fs.exists(fname)) {
            warning_unexisted_file(fname, 'patch_plat_file')
            return;
        }
        var txt = fs.readTextFile(fname);
        var txt1;

        console.log("patch", fname);
        txt = '#include <exlib/include/osconfig.h>\n\n' + plat + '\n\n' + txt + '\n\n#endif';
        txt1 = txt.replace('void OS::Sleep', 'void OS_Sleep');
        txt1 = txt1.replace('class Thread::PlatformData {', '#if 0\nclass Thread::PlatformData {');

        if (txt != txt1) {
            var idx = txt1.indexOf('}  // namespace base', txt1.lastIndexOf('Thread::'));

            txt1 = txt1.substr(0, idx) + '#endif\n\n' + txt1.substr(idx);

            txt1 = txt1.replace('int GetProtectionFromMemoryPermission', '#endif\n#if 1\nint GetProtectionFromMemoryPermission');
        }

        fs.writeFile(fname, txt1);
    }

    for (var f in plats1)
        patch_plat_file(platFolder + '/platform-' + f + '.cc', plats1[f]);

    patch_plat_file('src/trap-handler/handler-inside-posix.cc', '#include "src/trap-handler/trap-handler.h"\n\n#if V8_TRAP_HANDLER_SUPPORTED');
    patch_plat_file('src/trap-handler/handler-outside-posix.cc', '#ifdef Linux');
    patch_plat_file('src/trap-handler/handler-outside-win.cc', '#ifdef Windows');
}

var traces = {
    'android': "V8_OS_ANDROID",
    'posix': "V8_OS_POSIX",
    'win': "V8_OS_WIN"
};

function patch_trace() {
    for (var f in traces) {
        var fname = 'src/base/debug/stack_trace_' + f + '.cc';
        var txt = fs.readTextFile(fname);
        var txt1;
        var val = traces[f];

        console.log("patch", fname);
        txt1 = txt.replace('#include "src/base/debug/stack_trace.h"\n', '#include "src/base/debug/stack_trace.h"\n#ifdef ' + val);

        fs.writeFile(fname, txt1 + "\n#endif");
    }
}

function patch_trace_win() {
    var fname = "src/base/debug/stack_trace_win.cc";

    console.log("patch", fname);
    var txt = fs.readTextFile(fname);
    txt = txt.replace("bool InitializeSymbols()",
        "bool InitializeSymbols() {\n" +
        "  g_init_error = ERROR_SUCCESS;\n" +
        "  return true;\n" +
        "}\n" +
        "\n" +
        "inline bool InitializeSymbols1()");
    fs.writeFile(fname, txt);
}

function warning_unexisted_file(fname, _for = '') {
    console.warn(`[${_for}] file ${fname} doesn't exist.`)
}

function patch_macro() {
    // var fname = "src/macro-assembler.h";
    var fname = "src/codegen/macro-assembler.h";

    console.log("patch", fname);

    if (!fs.exists(fname)) {
        warning_unexisted_file(fname, 'patch_macro')
        return;
    }

    var txt = fs.readTextFile(fname);
    fs.writeFile(fname, '#include "src/v8.h"\n\n' + txt);
}

function patch_flag() {
    // var fname = "src/flags.cc";
    var fname = "src/flags/flags.cc";

    console.log("patch", fname);

    if (!fs.exists(fname)) {
        warning_unexisted_file(fname, 'patch_flag')
        return;
    }

    var txt = fs.readTextFile(fname);

    var idx1 = txt.lastIndexOf("CpuFeatures::PrintTarget();");
    var idx2 = txt.lastIndexOf("<< \"Options:\\n\";");
    if (idx1 < 0 || idx2 < 0)
        return;

    var txt1 = txt.substr(0, idx1);
    txt1 += "OFStream os(stdout);\n";
    txt1 += "  os ";
    txt1 += txt.substr(idx2);

    fs.writeFile(fname, txt1);
}

function patch_serializer() {
    var fname = "src/snapshot/code-serializer.cc";

    console.log("patch", fname);
    var txt = fs.readTextFile(fname);
    txt = txt.replace("if (source_hash", "if (0 && source_hash");
    txt = txt.replace("if (flags_hash", "if (0 && flags_hash");
    txt = txt.replace("if (cpu_features", "if (0 && cpu_features");
    fs.writeFile(fname, txt);

    var fname = "src/snapshot/snapshot-common.cc";
}

function patch_version_hash() {
    // var fname = "src/version.h";
    var fname = "src/utils/version.h";

    console.log("patch", fname);

    if (!fs.exists(fname)) {
        warning_unexisted_file(fname, 'patch_version_hash')
        return;
    }

    var txt = fs.readTextFile(fname);
    txt = txt.replace("major_, minor_, build_, patch_", "major_, minor_");
    fs.writeFile(fname, txt);
}

function patch_ntver() {
    var fname = "src/base/win32-headers.h";

    console.log("patch", fname);
    var txt = fs.readTextFile(fname);
    txt = "#ifndef _WIN32_WINNT\n#define _WIN32_WINNT 0x0501\n#endif\n\n" + txt;
    fs.writeFile(fname, txt);
}

function patch_trap() {
    var fname = 'src/trap-handler/handler-inside.cc';
    console.log("patch", fname);

    var txt = fs.readTextFile(fname);
    txt = "#ifndef _WIN32\n\n" + txt + "\n\n#endif\n";
    fs.writeFile(fname, txt);
}

function patch_snapshot() {
    fs.mkdir("src/snapshot/snapshots")
    var archs = {
        arm: 'V8_TARGET_ARCH_ARM',
        arm64: 'V8_TARGET_ARCH_ARM64',
        mips: 'V8_TARGET_ARCH_MIPS',
        mips64: 'V8_TARGET_ARCH_MIPS64',
        ppc: "V8_TARGET_ARCH_PPC",
        ppc64: "V8_TARGET_ARCH_PPC64",
        ia32: 'V8_TARGET_ARCH_IA32',
        s390: 'V8_TARGET_ARCH_S390',
        x64: 'V8_TARGET_ARCH_X64'
    };

    var arch_x86 = {
        x64: true,
        ia32: true
    }

    var oss = ["Windows", "Linux", "FreeBSD", "Darwin"];

    try {
        fs.unlink("test/src/mksnapshot.inl")
        fs.copy(v8Folder + "./src/snapshot/mksnapshot.cc", "test/src/mksnapshot.inl");
    } catch (error) {
        console.error(error);
    }

    var txt = fs.readTextFile(v8Folder + "/src/snapshot/snapshot-empty.cc");

    for (var arch in archs) {
        if (arch_x86[arch])
            oss.forEach(os => {
                fs.writeFile(`src/snapshot/snapshots/snapshot-${arch}-${os}.cc`,
                    `#include <exlib/include/osconfig.h>\n#ifdef ${os}\n\n#include "src/v8.h"\n\n#if ${archs[arch]}\n\n${txt}\n\n#endif  // ${archs[arch]}\n\n#endif // ${os}`);
            });
        else
            fs.writeFile(`src/snapshot/snapshots/snapshot-${arch}-Linux.cc`,
                `#include "src/v8.h"\n\n#if ${archs[arch]}\n\n${txt}\n\n#endif  // ${archs[arch]}`);
    }
}

save_plat();

clean_folder('include');
clean_folder('src');

cp_folder('include');
cp_folder('src');

update_plat();

patch_plat();

fs.mkdir('include/base');
cp_folder('base', 'include');

cp_gen();

clean_folder('src/third_party/vtune');
fs.rmdir('src/third_party/vtune');

clean_folder('src/inspector');
fs.rmdir('src/inspector');

clean_folder('src/torque');
fs.rmdir('src/torque');

patch_src('src');
patch_trace();
patch_trace_win();
patch_macro();
patch_flag();
patch_version_hash();
patch_serializer();
patch_ntver();
patch_trap();

patch_snapshot();

// run('../tools/vsmake.js');