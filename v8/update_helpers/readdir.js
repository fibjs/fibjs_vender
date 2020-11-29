const fs = require('fs');
const path = require('path');

function read(root, filter, files, prefix) {
    prefix = prefix || '';
    files = files || [];
    filter = filter || noDotFiles;

    const dir = path.join(root, prefix);
    if (!fs.exists(dir)) return files;
    if (fs.stat(dir).isDirectory())
        fs.readdir(dir)
            .filter(filter)
            .forEach(name => read(root, filter, files, path.join(prefix, name)));
    else
        files.push(prefix);

    return files;
}

function noDotFiles(x) {
    return x[0] !== '.';
}

module.exports = read;