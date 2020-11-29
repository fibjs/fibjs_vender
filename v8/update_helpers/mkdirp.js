const path = require('path');
const fs = require('fs');
const _0777 = parseInt('0777', 8);

module.exports = mkdirP;

const errCode = process.platform === 'win32' ? 3 : 2;

function mkdirP(p, opts, made) {
    if (!opts || typeof opts !== 'object') {
        opts = {
            mode: opts
        };
    }

    let mode = opts.mode;
    const xfs = opts.fs || fs;

    if (mode === undefined) {
        mode = _0777 & (~process.umask());
    }
    if (!made) made = null;

    p = path.resolve(p);

    try {
        xfs.mkdir(p, mode);
        made = made || p;
    } catch (err0) {
        switch (err0.number) {
            case errCode:
                made = mkdirP(path.dirname(p), opts, made);
                mkdirP(p, opts, made);
                break;

            // In the case of any other error, just see if there's a dir
            // there already.  If so, then hooray!  If not, then something
            // is borked.
            default:
                let stat;
                try {
                    stat = xfs.stat(p);
                } catch (err1) {
                    throw err0;
                }
                if (!stat.isDirectory()) throw err0;
                break;
        }
    }

    return made;
}