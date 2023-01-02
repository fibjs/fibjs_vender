# Update v8

### get source
```
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
depot_tools/fetch v8 
```
### checkout
```
git checkout $tag
gclient sync
```

### generate args.gn
```
fibjs mk_gen.js
```
### todo
* threadlocal variable
* mips64
