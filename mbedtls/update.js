var fs = require('fs');
var os = require('os');
var process = require('process');
var argv = process.argv;
var datas;


var mbedtls_git_path = argv[2];
var fibjs_mbedtls_path = __dirname;

//删除 fibjs/vender/mbedtls/mbedtls 下的 .h文件
var head_file_path = fibjs_mbedtls_path + '/mbedtls';
var files = fs.readdirSync(head_file_path);

files.forEach(file => {
    var patt = /sm[2-4]{1}\.h$/
    if (!patt.test(file)) {
        fs.unlinkSync(head_file_path + '/' + file)
    }
})

var c_file_path = fibjs_mbedtls_path + '/src'
files = fs.readdirSync(c_file_path);

files.forEach(file => {
    var patt = /sm[2-4]{1}\.c$/
    if (!patt.test(file)) {
        fs.unlinkSync(c_file_path + '/' + file)
    }
})


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

process.chdir(__dirname);
var p = process.run("patch", ["-p1", "-i", "./patch-mbedtls-v2.7.12.diff"]);