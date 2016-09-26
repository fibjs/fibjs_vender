#!/bin/js

var fs = require('fs');
var path = require('path');
var process = require('process');

var v8Folder = process.argv[2];

var paltFolder = 'src/base/platform';
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
	plats.forEach(function(f) {
		console.log("save", paltFolder + '/' + f);
		platTxts.push(fs.readFile(paltFolder + '/' + f));
	});
}

function update_plat() {
	var i;
	var a = paltFolder.split('/');

	for (i = 1; i < a.length; i++) {
		try {
			fs.mkdir(a.slice(0, i + 1).join('/'));
		} catch (e) {}
	}

	for (i = 0; i < plats.length; i++) {
		console.log("update", paltFolder + '/' + plats[i]);
		fs.writeFile(paltFolder + '/' + plats[i], platTxts[i]);
	}
}

function clean_folder(path) {
	var dir = fs.readdir(path);
	console.log("clean", path);
	dir.forEach(function(f) {
		var name = f.name;
		if (name !== '.' && name !== '..') {
			var fname = path + '/' + name;
			if (f.isDirectory()) {
				clean_folder(fname);
				fs.rmdir(fname);
			} else
				fs.unlink(fname);
		}
	});
}

var files = {
	'src/v8dll-main.cc': 1,
	'src/interpreter/mkpeephole.cc': 1,
	'src/snapshot/mksnapshot.cc': 1,
	'src/snapshot/natives-external.cc': 1,
	'src/snapshot/snapshot-external.cc': 1,
	'src/base/platform/platform-qnx.cc': 1,
	'src/base/platform/platform-cygwin.cc': 1
};

var re = [
	/^src\/d8.*$/,
	/^src\/i18n\..*$/,
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

function cp_folder(path, to) {
	var dir = fs.readdir(v8Folder + '/' + path);
	dir.forEach(function(f) {
		var name = f.name;
		if (name !== '.' && name !== '..') {
			var fname = path + '/' + name;
			var fnameto = to ? to + '/' + fname : fname;

			if (f.isDirectory()) {
				console.log(fnameto);
				fs.mkdir(fnameto);
				cp_folder(fname, to);
			} else {
				if (chk_file(fnameto)) {
					console.log("copy", fnameto);
					var txt = fs.readFile(v8Folder + '/' + fname);
					txt = txt.replace('#include "testing/gtest', '// #include "testing/gtest');
					txt = txt.replace(/FRIEND_TEST/g, '// FRIEND_TEST');
					fs.writeFile(fnameto, txt);
				}
			}
		}
	});
}


var gens = [
	'/out/ia32.release/obj/gen/libraries.cc',
	'/out/ia32.release/obj/gen/experimental-libraries.cc',
	'/out/ia32.release/obj/gen/extras-libraries.cc',
	'/out/ia32.release/obj/gen/experimental-extras-libraries.cc',
	'/out/ia32.release/obj.target/v8_base/geni/bytecode-peephole-table.cc'
];

function cp_gen() {
	fs.mkdir('src/gen');
	gens.forEach(function(f) {
		console.log("cp " + f);
		fs.writeFile('src/gen/' + path.basename(f), fs.readFile(v8Folder + f));
	});
}

function fix_src(path, val) {
	var dir = fs.readdir(path);
	dir.forEach(function(f) {
		var name = f.name;
		if (name.substr(name.length - 3, 3) == '.cc') {
			var fname = path + '/' + name;
			var txt = fs.readFile(fname);

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
	dir.forEach(function(f) {
		var name = f.name;
		if (name !== '.' && name !== '..') {
			var fname = path + '/' + name;
			if (f.isDirectory()) {
				if (archs[name])
					fix_src(fname, archs[name]);
				else
					patch_src(fname);
			}
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
	'posix': "#ifndef Windows"
};

function patch_plat() {
	for (var f in plats1) {
		var fname = paltFolder + '/platform-' + f + '.cc';
		var txt = fs.readFile(fname);
		var txt1;
		var val = plats1[f];

		console.log("patch", fname);
		txt = '#include <exlib/include/osconfig.h>\n\n' + val + '\n\n' + txt + '\n\n#endif';
		txt1 = txt.replace('void OS::Sleep', 'void OS_Sleep');
		txt1 = txt1.replace('class Thread::PlatformData {', '#if 0\nclass Thread::PlatformData {');

		if (txt != txt1) {
			var idx = txt1.indexOf('}  // namespace base', txt1.lastIndexOf('Thread::'));

			txt1 = txt1.substr(0, idx) + '#endif\n\n' + txt1.substr(idx);
		}

		fs.writeFile(fname, txt1);
	}
}


var traces = {
	'android': "V8_OS_ANDROID",
	'posix': "V8_OS_POSIX",
	'win': "V8_OS_WIN"
};

function patch_trace() {
	for (var f in traces) {
		var fname = 'src/base/debug/stack_trace_' + f + '.cc';
		var txt = fs.readFile(fname);
		var txt1;
		var val = traces[f];

		console.log("patch", fname);
		txt1 = txt.replace('#include "src/base/debug/stack_trace.h"\n', '#include "src/base/debug/stack_trace.h"\n#ifdef ' + val);

		fs.writeFile(fname, txt1 + "\n#endif");
	}
}

function patch_samp() {
	var fname = "src/profiler/sampler.cc";
	var txt = fs.readFile(fname);

	var idx = txt.lastIndexOf("#if defined(USE_SIGNALS)");
	if (idx < 0)
		return;

	var txt1 = txt.substr(0, idx);
	txt1 += "#if 0\n\n";
	txt1 += txt.substr(idx);

	txt = txt1;
	idx = txt.lastIndexOf("#endif  // USE_SIGNALS");

	txt1 = txt.substr(0, idx);
	txt1 += "#endif\n\n";
	txt1 += txt.substr(idx);

	fs.writeFile(fname, txt1);
}

function patch_macro() {
	var fname = "src/macro-assembler.h";
	var txt = fs.readFile(fname);
	fs.writeFile(fname, '#include "src/v8.h"\n\n' + txt);
}

function patch_flag() {
	var fname = "src/flags.cc";
	var txt = fs.readFile(fname);

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
	var txt = fs.readFile(fname);
	txt = txt.replace("if (source_hash", "// if (source_hash");
	txt = txt.replace("if (flags_hash", "// if (flags_hash");
	fs.writeFile(fname, txt);
}

save_plat();

clean_folder('include');
clean_folder('src');

cp_folder('include');
cp_folder('src');

fs.mkdir('include/base');
cp_folder('base', 'include');

cp_gen();

clean_folder('src/third_party/vtune');
fs.rmdir('src/third_party/vtune');

clean_folder('src/inspector');
fs.rmdir('src/inspector');

update_plat();
//patch_samp();

patch_src('src');
patch_plat();
patch_trace();
patch_macro();
patch_flag();
patch_serializer();

//fs.unlink('src/version_gen.cc');

run('./vsmake.js');