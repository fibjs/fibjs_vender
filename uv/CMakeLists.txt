cmake_minimum_required(VERSION 2.6)

cmake_policy(SET CMP0057 NEW) # Enable IN_LIST operator
cmake_policy(SET CMP0064 NEW) # Support if (TEST) operator

include(CheckCCompilerFlag)

set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD 90)

option(QEMU "build for qemu" OFF)
# if(QEMU)
if(QEMU OR CMAKE_SYSTEM_NAME STREQUAL "Linux") # we use qemu to make build for Linux in docker
  add_definitions(-D__QEMU__=1)
endif()

check_c_compiler_flag(/W4 UV_LINT_W4)

# TODO: Place these into its own function
check_c_compiler_flag(-Wno-unused-parameter UV_LINT_NO_UNUSED_PARAMETER)
check_c_compiler_flag(-Wstrict-prototypes UV_LINT_STRICT_PROTOTYPES)
check_c_compiler_flag(-Wextra UV_LINT_EXTRA)

set(lint-no-unused-parameter $<$<BOOL:${UV_LINT_NO_UNUSED_PARAMETER}>:-Wno-unused-parameter>)
set(lint-strict-prototypes $<$<BOOL:${UV_LINT_STRICT_PROTOTYPES}>:-Wstrict-prototypes>)
set(lint-extra $<$<BOOL:${UV_LINT_EXTRA}>:-Wextra>)
set(lint-w4 $<$<BOOL:${UV_LINT_W4}>:/W4>)

list(APPEND uv_cflags ${lint-strict-prototypes} ${lint-extra} ${lint-default} ${lint-w4})

set(uv_sources
    src/fs-poll.c
    src/idna.c
    src/inet.c
    src/random.c
    src/strscpy.c
    src/threadpool.c
    src/timer.c
    src/uv-common.c
    src/uv-data-getter-setters.c
	src/version.c)

if(WIN32)
	list(APPEND uv_defines WIN32_LEAN_AND_MEAN _WIN32_WINNT=0x0600)
	list(APPEND uv_sources
		 src/win/async.c
		 src/win/core.c
		 src/win/detect-wakeup.c
		 src/win/dl.c
		 src/win/error.c
		 src/win/fs.c
		 src/win/fs-event.c
		 src/win/getaddrinfo.c
		 src/win/getnameinfo.c
		 src/win/handle.c
		 src/win/loop-watcher.c
		 src/win/pipe.c
		 src/win/thread.c
		 src/win/poll.c
		 src/win/process.c
		 src/win/process-stdio.c
		 src/win/signal.c
		 src/win/snprintf.c
		 src/win/stream.c
		 src/win/tcp.c
		 src/win/tty.c
		 src/win/udp.c
		 src/win/util.c
		 src/win/winapi.c
		 src/win/winsock.c)
	list(APPEND uv_test_libraries ws2_32)
else()
	list(APPEND uv_defines _FILE_OFFSET_BITS=64 _LARGEFILE_SOURCE)
	list(APPEND uv_sources
			src/unix/async.c
			src/unix/core.c
			src/unix/dl.c
			src/unix/fs.c
			src/unix/getaddrinfo.c
			src/unix/getnameinfo.c
			src/unix/loop-watcher.c
			src/unix/loop.c
			src/unix/pipe.c
			src/unix/poll.c
			src/unix/process.c
			src/unix/random-devurandom.c
			src/unix/signal.c
			src/unix/stream.c
			src/unix/tcp.c
			src/unix/thread.c
			src/unix/tty.c
			src/unix/udp.c)
endif()

if(APPLE OR CMAKE_SYSTEM_NAME MATCHES "Android|Linux|OS390")
  list(APPEND uv_sources src/unix/proctitle.c)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "DragonFly|FreeBSD")
  list(APPEND uv_sources src/unix/freebsd.c)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "DragonFly|FreeBSD|NetBSD|OpenBSD")
  list(APPEND uv_sources src/unix/posix-hrtime.c src/unix/bsd-proctitle.c)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Android|Linux")
  list(APPEND uv_sources src/unix/epoll.c)
endif()

if(APPLE OR CMAKE_SYSTEM_NAME MATCHES "DragonFly|FreeBSD|NetBSD|OpenBSD")
  list(APPEND uv_sources src/unix/bsd-ifaddrs.c src/unix/kqueue.c)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
  list(APPEND uv_sources src/unix/random-getrandom.c)
endif()

if(APPLE OR CMAKE_SYSTEM_NAME STREQUAL "OpenBSD")
  list(APPEND uv_sources src/unix/random-getentropy.c)
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Android")
  list(APPEND uv_sources 
  	   src/unix/android-ifaddrs.c
	   src/unix/pthread-fixes.c)
endif()

if(APPLE)
  list(APPEND uv_defines _DARWIN_UNLIMITED_SELECT=1 _DARWIN_USE_64_BIT_INODE=1)
  list(APPEND uv_sources
       src/unix/darwin-proctitle.c
       src/unix/darwin.c
       src/unix/fsevents.c)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Android|Linux")
  list(APPEND uv_defines _GNU_SOURCE _POSIX_C_SOURCE=200112)
  list(APPEND uv_sources
       src/unix/linux-core.c
       src/unix/linux-inotify.c
       src/unix/linux-syscalls.c
       src/unix/procfs-exepath.c
       src/unix/random-getrandom.c
       src/unix/random-sysctl-linux.c
	   src/unix/sysinfo-loadavg.c
	   src/unix/sysinfo-memory.c)
endif()

set(c_flags "${uv_cflags}")
set(src_list "${uv_sources}")

include(../build_tools/cmake/Library.cmake)

target_compile_definitions(${PROJECT_NAME} PRIVATE ${uv_defines})

include_directories(
	PUBLIC
		${PROJECT_SOURCE_DIR}
		"${PROJECT_SOURCE_DIR}/include"
		"${PROJECT_SOURCE_DIR}/../"
	PRIVATE
		"${PROJECT_SOURCE_DIR}/src"
)