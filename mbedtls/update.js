var fs = require('fs');
var os = require('os');
var argv = process.argv;
var datas;


var mbedtls_git_path = argv[2];
var fibjs_mbedtls_path = __dirname;

//删除 fibjs/vender/mbedtls/mbedtls 下的 .h文件
var head_file_path = fibjs_mbedtls_path + '/mbedtls';
var files = fs.readdirSync(head_file_path);

files.forEach(file => {
    fs.unlinkSync(head_file_path + '/' + file)
})

var c_file_path = fibjs_mbedtls_path + '/src'
files = fs.readdirSync(c_file_path);

for (var i = 0; i < files.length; i++) {
    fs.unlinkSync(c_file_path + '/' + files[i])
}


//移动 mbedtls git 仓库下的文件至 fibjs 相应目录下
// *.h 文件
files = fs.readdirSync(mbedtls_git_path + '/include/mbedtls');

files.forEach(file => {
    fs.copySync(mbedtls_git_path + '/include/mbedtls/' + file, fibjs_mbedtls_path + '/mbedtls/' + file)
})

// *.c 文件
files = fs.readdirSync(mbedtls_git_path + '/library');

files.forEach(file => {
    var patt = /\.c$/
    if (patt.test(file)) {
        fs.copySync(mbedtls_git_path + '/library/' + file, fibjs_mbedtls_path + '/src/' + file)
    }
})


files = fs.readdirSync(mbedtls_git_path + '/library');

files.forEach(file => {
    var patt = /\.c$/
    if (patt.test(file)) {
        fs.copySync(mbedtls_git_path + '/library/' + file, fibjs_mbedtls_path + '/src/' + file)
    }
})



// ================================ rename  ===============================================

var old_file_names = [
    'version.c',
    'debug.c',
    'bignum.c'
]

old_file_names.forEach(old_file_name => {
    fs.renameSync(fibjs_mbedtls_path + '/src/' + old_file_name, fibjs_mbedtls_path + '/src/ssl_' + old_file_name)
})

// ==============================  src/x509_crt.c =========================================
//替换第一个2048
var string = fs.readTextFile(fibjs_mbedtls_path + '/src/x509_crt.c')
var txt = string.replace(/2048/, '1024')
fs.writeFileSync(fibjs_mbedtls_path + '/src/x509_crt.c', txt)

console.notice("x509_crt.c")

// ============================== src/cipher_wrap.c =======================================

file_path = fibjs_mbedtls_path + '/src/cipher_wrap.c';
datas = fs.readLines(file_path);
var line1 = datas.indexOf("static const mbedtls_cipher_info_t arc4_128_info = {");
var line2 = datas.indexOf("    { MBEDTLS_CIPHER_ARC4_128,             &arc4_128_info },");

var insert1 = 'static const mbedtls_cipher_info_t arc4_40_info = {\n    MBEDTLS_CIPHER_ARC4_40,\n    MBEDTLS_MODE_STREAM,\n    40,\n    "ARC4-40",\n    0,\n    0,\n    1,\n    &arc4_base_info\n};\nstatic const mbedtls_cipher_info_t arc4_56_info = {\n    MBEDTLS_CIPHER_ARC4_56,\n    MBEDTLS_MODE_STREAM,\n    56,\n    "ARC4-56",\n    0,\n    0,\n    1,\n    &arc4_base_info\n};\n\nstatic const mbedtls_cipher_info_t arc4_64_info = {\n    MBEDTLS_CIPHER_ARC4_64,\n    MBEDTLS_MODE_STREAM,\n    64,\n   "ARC4-64",\n    0,\n    0,\n    1,\n    &arc4_base_info\n};';
var insert2 = '    { MBEDTLS_CIPHER_ARC4_40,              &arc4_40_info },\n    { MBEDTLS_CIPHER_ARC4_56,              &arc4_56_info },\n    { MBEDTLS_CIPHER_ARC4_64,              &arc4_64_info },';

datas.splice(line1 - 1, 0, insert1)
datas.splice(line2 + 1, 0, insert2)
fs.writeFileSync(file_path, datas.join('\n'))

console.notice("cipher_wrap.c")
// ===================================== src/threading.c ==================================

file_path = fibjs_mbedtls_path + '/src/threading.c';
datas = fs.readLines(file_path);
line1 = datas.indexOf("#if defined(MBEDTLS_THREADING_PTHREAD)");
line2 = datas.indexOf("void (*mbedtls_mutex_init)( mbedtls_threading_mutex_t * ) = threading_mutex_init_pthread;");
line3 = datas.indexOf("#ifndef MUTEX_INIT")

insert = "#ifdef _WIN32\nstatic void threading_mutex_init_pthread( mbedtls_threading_mutex_t *mutex )\n{\n    if ( mutex == NULL )\n        return;\n    InitializeCriticalSection( mutex );\n}\n\nstatic void threading_mutex_free_pthread( mbedtls_threading_mutex_t *mutex )\n{\n    if ( mutex == NULL )\n        return;\n\n    DeleteCriticalSection( mutex );\n}\n\nstatic int threading_mutex_lock_pthread( mbedtls_threading_mutex_t *mutex )\n{\n    if ( mutex == NULL )\n        return ( MBEDTLS_ERR_THREADING_BAD_INPUT_DATA );\n\n    EnterCriticalSection( mutex );\n\n    return ( 0 );\n}\n\nstatic int threading_mutex_unlock_pthread( mbedtls_threading_mutex_t *mutex )\n{\n    if ( mutex == NULL )\n        return ( MBEDTLS_ERR_THREADING_BAD_INPUT_DATA );\n\n    LeaveCriticalSection( mutex );\n\n    return ( 0 );\n}\n\n#else\n";

datas.splice(line1 + 1, 0, insert)
datas.splice(line2, 0, "#endif")
datas.splice(line3 + 2, 0, "#ifndef _WIN32")
datas.push("#endif")
fs.writeFileSync(file_path, datas.join('\n'))

console.notice("threading.c")


//=========================================== mbedtls/cipher.h ============================

file_path = fibjs_mbedtls_path + '/mbedtls/cipher.h';

datas = fs.readLines(file_path);
line = datas.indexOf("    MBEDTLS_CIPHER_ARC4_128,");
if (line != -1) {
    insert = '    MBEDTLS_CIPHER_ARC4_40,\n    MBEDTLS_CIPHER_ARC4_56,\n    MBEDTLS_CIPHER_ARC4_64,';
    datas.splice(line, 0, insert)
    fs.writeFileSync(file_path, datas.join('\n'))
}
console.notice("cipher.h")


//=========================================== mbedtls/threading.h =========================

file_path = fibjs_mbedtls_path + '/mbedtls/threading.h';
datas = fs.readLines(file_path);
line1 = datas.indexOf("#if defined(MBEDTLS_THREADING_PTHREAD)");
line2 = datas.indexOf("#if defined(MBEDTLS_THREADING_ALT)")
if (line1 != -1 && line2 != -1) {
    insert = '#ifdef _WIN32\n#include <winsock2.h>\n#include <windows.h>\ntypedef CRITICAL_SECTION mbedtls_threading_mutex_t;\n\n#else';
    datas.splice(line1 + 1, 0, insert)
    datas.splice(line2, 0, "#endif")
    fs.writeFileSync(file_path, datas.join('\n'))
}

console.notice("threading.h")

//=========================================== mbedtls/config.h ============================

file_path = fibjs_mbedtls_path + '/mbedtls/config.h';
datas = fs.readLines(file_path);

var configs = [
    "#define MBEDTLS_ECDSA_DETERMINISTIC",
    "#define MBEDTLS_DEBUG_C",
    "//#define MBEDTLS_SSL_PROTO_SSL3",
    "//#define MBEDTLS_THREADING_PTHREAD",
    "//#define MBEDTLS_X509_ALLOW_EXTENSIONS_NON_V3",
    "//#define MBEDTLS_HAVEGE_C",
    "//#define MBEDTLS_MD2_C",
    "//#define MBEDTLS_MD4_C",
    "//#define MBEDTLS_THREADING_C",
    "// #define MBEDTLS_TLS_DEFAULT_ALLOW_SHA1_IN_CERTIFICATES"
]

configs.forEach((config, index) => {
    var line = datas.indexOf(config);
    if (line != -1) {
        if (index == 0 || index == 1) {
            datas.splice(line, 1, "//" + config)
        } else {
            datas.splice(line, 1, config.substr(2, config.length).trim())
        }
    }
});
fs.writeFileSync(file_path, datas.join('\n'))

console.notice("config.h")

run('../tools/vsmake.js');