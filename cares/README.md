## fibjs 说明（vendored c-ares 1.34.8）

- 版本：**c-ares 1.34.8**（2026-07-07），取源为 GitHub tag 归档
  `https://github.com/c-ares/c-ares/archive/refs/tags/v1.34.8.tar.gz`（sha256 见提交说明）。
  注意 **不要**用 release 包 `c-ares-1.34.8.tar.gz`：它没有仓库里的 `config/<os>/ares_config.h`，
  且 `include/ares_build.h` 是"在构建机 configure 生成"的版本（会固化 build host 的探测结果）。
- 目录内容：
  - `include/`：`ares.h`、`ares_dns.h`、`ares_dns_record.h`、`ares_nameser.h`、`ares_version.h` 来自 tag 归档；
    `ares_build.h` 由上游的 **`ares_build.h.dist`**（"non-configure systems" 版本，含 `_WIN32` 与 `__GNUC__` 两支）改名而来，
    与 node 的处理一致——它不依赖 configure，交叉编译不需要为每个目标再生成一次。
  - `src/lib/**`：c-ares 库源码（**不含** `src/tools`，那里有 `adig.c` 的 `main()`；因此可以交给
    `option_src.cmake` 的 `file(GLOB_RECURSE src/*.c*)` 自动收集，不需要显式源清单）。
  - `config/<os>/ares_config.h`：POSIX 下由 `ares_setup.h` 在 `HAVE_CONFIG_H` 时包含的平台配置。
    `config/iphone/` 是 `config/darwin/` 的副本，只是去掉了 `HAVE_SYS_RANDOM_H`
    （iOS SDK 没有 `<sys/random.h>`，c-ares 会退回 `arc4random_buf`）。
    `config/linux/` 是用本仓库 vendored 的 **1.34.8** 源码执行 `./configure --disable-shared` 生成；
    其余平台（aix/android/cygwin/darwin/freebsd/netbsd/openbsd/sunos）沿用 node `deps/cares/config/`
    （1.26 世代生成、已被 node 用在 1.34.x 上）。若某个平台编译报缺宏，用该平台的 configure/CMake 重新生成即可。
  - Windows 不使用 `ares_config.h`：`ares_setup.h` 走 `src/lib/config-win32.h`。
- 构建：`CMakeLists.txt` 只做三件事——`CARES_STATICLIB`、按平台选 `config/<os>` 与 `HAVE_CONFIG_H`（Windows 换成
  `CARES_PULL_WS2TCPIP_H`）、POSIX 追加 `-std=gnu11`；其余交给 `build_tools/cmake/Library.cmake`。
- 用法（fibjs 侧）：`dns.resolve*` / `dns.reverse` / `Resolver` / `getServers` / `setServers`，
  即 Node 用 c-ares 的那部分；`dns.lookup` / `lookupService` 与 Node 一致走 libuv。
  详见 `plans/dns-cares-node-compat-plan.md`。

---

# [![c-ares logo](https://c-ares.org/art/c-ares-logo.svg)](https://c-ares.org/)

[![Build Status](https://github.com/c-ares/c-ares/actions/workflows/ubuntu-latest.yml/badge.svg?branch=main)](https://github.com/c-ares/c-ares/actions/workflows/ubuntu-latest.yml)
[![Windows Build Status](https://github.com/c-ares/c-ares/actions/workflows/windows.yml/badge.svg?branch=main)](https://github.com/c-ares/c-ares/actions/workflows/windows.yml)
[![Coverage Status](https://coveralls.io/repos/github/c-ares/c-ares/badge.svg?branch=main)](https://coveralls.io/github/c-ares/c-ares?branch=main)
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/291/badge)](https://bestpractices.coreinfrastructure.org/projects/291)
[![Fuzzing Status](https://oss-fuzz-build-logs.storage.googleapis.com/badges/c-ares.svg)](https://bugs.chromium.org/p/oss-fuzz/issues/list?sort=-opened&can=1&q=proj:c-ares)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=c-ares_c-ares&metric=bugs)](https://sonarcloud.io/summary/new_code?id=c-ares_c-ares)
[![Coverity Scan Status](https://scan.coverity.com/projects/c-ares/badge.svg)](https://scan.coverity.com/projects/c-ares)

- [Overview](#overview)
- [Code](#code)
- [Communication](#communication)
- [Release Keys](#release-keys)
  - [Verifying signatures](#verifying-signatures)
- [Features](#features)
  - [RFCs and Proposals](#supported-rfcs-and-proposals)

## Overview
[c-ares](https://c-ares.org) is a modern DNS (stub) resolver library, written in
C. It provides interfaces for asynchronous queries while trying to abstract the
intricacies of the underlying DNS protocol.  It was originally intended for
applications which need to perform DNS queries without blocking, or need to
perform multiple DNS queries in parallel.

One of the goals of c-ares is to be a better DNS resolver than is provided by
your system, regardless of which system you use.  We recommend using
the c-ares library in all network applications even if the initial goal of
asynchronous resolution is not necessary to your application.

c-ares will build with any C89 compiler and is [MIT licensed](LICENSE.md),
which makes it suitable for both free and commercial software. c-ares runs on
Linux, FreeBSD, OpenBSD, MacOS, Solaris, AIX, Windows, Android, iOS and many
more operating systems.

c-ares has a strong focus on security, implementing safe parsers and data
builders used throughout the code, thus avoiding many of the common pitfalls
of other C libraries.  Through automated testing with our extensive testing
framework, c-ares is constantly validated with a range of static and dynamic
analyzers, as well as being constantly fuzzed by [OSS Fuzz](https://github.com/google/oss-fuzz).

While c-ares has been around for over 20 years, it has been actively maintained
both in regards to the latest DNS RFCs as well as updated to follow the latest
best practices in regards to C coding standards.

## Code

The full source code and revision history is available in our
[GitHub  repository](https://github.com/c-ares/c-ares).  Our signed releases
are available in the [release archives](https://c-ares.org/download/).


See the [INSTALL.md](INSTALL.md) file for build information.

## Communication

**Issues** and **Feature Requests** should be reported to our
[GitHub Issues](https://github.com/c-ares/c-ares/issues) page.

**Discussions** around c-ares and its use, are held on
[GitHub Discussions](https://github.com/c-ares/c-ares/discussions/categories/q-a)
or the [Mailing List](https://lists.haxx.se/mailman/listinfo/c-ares).  Mailing
List archive [here](https://lists.haxx.se/pipermail/c-ares/).
Please, do not mail volunteers privately about c-ares.

**Security vulnerabilities** are treated according to our
[Security Procedure](SECURITY.md), please email c-ares-security at
 haxx.se if you suspect one.


## Release keys

Primary GPG keys for c-ares Releasers (some Releasers sign with subkeys):

* **Daniel Stenberg** <<daniel@haxx.se>>
  `27EDEAF22F3ABCEB50DB9A125CC908FDB71E12C2`
* **Brad House** <<brad@brad-house.com>>
  `DA7D64E4C82C6294CB73A20E22E3D13B5411B7CA`

To import the full set of trusted release keys (including subkeys possibly used
to sign releases):

```bash
gpg --keyserver hkps://keyserver.ubuntu.com --recv-keys 27EDEAF22F3ABCEB50DB9A125CC908FDB71E12C2 # Daniel Stenberg
gpg --keyserver hkps://keyserver.ubuntu.com --recv-keys DA7D64E4C82C6294CB73A20E22E3D13B5411B7CA # Brad House
```

### Verifying signatures

For each release `c-ares-X.Y.Z.tar.gz` there is a corresponding
`c-ares-X.Y.Z.tar.gz.asc` file which contains the detached signature for the
release.

After fetching all of the possible valid signing keys and loading into your
keychain as per the prior section, you can simply run the command below on
the downloaded package and detached signature:

```bash
% gpg -v --verify c-ares-1.29.0.tar.gz.asc c-ares-1.29.0.tar.gz
gpg: enabled compatibility flags:
gpg: Signature made Fri May 24 02:50:38 2024 EDT
gpg:                using RSA key 27EDEAF22F3ABCEB50DB9A125CC908FDB71E12C2
gpg: using pgp trust model
gpg: Good signature from "Daniel Stenberg <daniel@haxx.se>" [unknown]
gpg: WARNING: This key is not certified with a trusted signature!
gpg:          There is no indication that the signature belongs to the owner.
Primary key fingerprint: 27ED EAF2 2F3A BCEB 50DB  9A12 5CC9 08FD B71E 12C2
gpg: binary signature, digest algorithm SHA512, key algorithm rsa2048
```

## Features

See [Features](FEATURES.md)

### Supported RFCs and Proposals
- [RFC1035](https://datatracker.ietf.org/doc/html/rfc1035).
  Initial/Base DNS RFC
- [RFC2671](https://datatracker.ietf.org/doc/html/rfc2671),
  [RFC6891](https://datatracker.ietf.org/doc/html/rfc6891).
  EDNS0 option (meta-RR)
- [RFC3596](https://datatracker.ietf.org/doc/html/rfc3596).
  IPv6 Address. `AAAA` Record.
- [RFC2782](https://datatracker.ietf.org/doc/html/rfc2782).
  Server Selection. `SRV` Record.
- [RFC3403](https://datatracker.ietf.org/doc/html/rfc3403).
  Naming Authority Pointer. `NAPTR` Record.
- [RFC6698](https://datatracker.ietf.org/doc/html/rfc6698).
  DNS-Based Authentication of Named Entities (DANE) Transport Layer Security (TLS) Protocol.
  `TLSA` Record.
- [RFC9460](https://datatracker.ietf.org/doc/html/rfc9460).
  General Purpose Service Binding, Service Binding type for use with HTTPS.
  `SVCB` and `HTTPS` Records.
- [RFC7553](https://datatracker.ietf.org/doc/html/rfc7553).
  Uniform Resource Identifier. `URI` Record.
- [RFC6844](https://datatracker.ietf.org/doc/html/rfc6844).
  Certification Authority Authorization. `CAA` Record.
- [RFC2535](https://datatracker.ietf.org/doc/html/rfc2535),
  [RFC2931](https://datatracker.ietf.org/doc/html/rfc2931).
  `SIG0` Record. Only basic parser, not full implementation.
- [RFC7873](https://datatracker.ietf.org/doc/html/rfc7873),
  [RFC9018](https://datatracker.ietf.org/doc/html/rfc9018).
  DNS Cookie off-path dns poisoning and amplification mitigation.
- [draft-vixie-dnsext-dns0x20-00](https://datatracker.ietf.org/doc/html/draft-vixie-dnsext-dns0x20-00).
  DNS 0x20 query name case randomization to prevent cache poisioning attacks.
- [RFC7686](https://datatracker.ietf.org/doc/html/rfc7686).
  Reject queries for `.onion` domain names with `NXDOMAIN`.
- [RFC2606](https://datatracker.ietf.org/doc/html/rfc2606),
  [RFC6761](https://datatracker.ietf.org/doc/html/rfc6761).
  Special case treatment for `localhost`/`.localhost`.
- [RFC2308](https://datatracker.ietf.org/doc/html/rfc2308),
  [RFC9520](https://datatracker.ietf.org/doc/html/rfc9520).
  Negative Caching of DNS Resolution Failures.
- [RFC6724](https://datatracker.ietf.org/doc/html/rfc6724).
  IPv6 address sorting as used by `ares_getaddrinfo()`.
- [RFC7413](https://datatracker.ietf.org/doc/html/rfc7413).
  TCP FastOpen (TFO) for 0-RTT TCP Connection Resumption.
- [RFC3986](https://datatracker.ietf.org/doc/html/rfc3986).
  Uniform Resource Identifier (URI). Used for server configuration.
