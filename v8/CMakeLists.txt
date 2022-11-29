cmake_minimum_required(VERSION 2.6)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	enable_language(ASM_MASM)
	add_definitions(-D_UNICODE -DUNICODE -D_WIN32_WINNT=0x0600)
else()
	include_directories("/usr/local/include/")
endif()

file(GLOB_RECURSE src_list "src/*.c*" "gen/*.c*")

if(ANDROID)
	list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/src/base/debug/stack_trace_posix.cc")
endif()

file(GLOB_RECURSE temp_excluded_list
	"src/trap-handler/handler-inside-*.*"
	"src/trap-handler/handler-outside-*.*"
	"src/diagnostics/unwinding-info-win64.h"
	"src/diagnostics/unwinding-info-win64.cc"
)
list(REMOVE_ITEM src_list ${temp_excluded_list})

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	if (${ARCH} STREQUAL "amd64")
		list(APPEND src_list
			"src/trap-handler/handler-inside-win.cc"
			"src/trap-handler/handler-outside-win.cc"
			"src/diagnostics/unwinding-info-win64.cc"
		)
	elseif(${ARCH} STREQUAL "arm64")
		list(APPEND src_list
			"src/trap-handler/handler-outside-win.cc"
			"src/diagnostics/unwinding-info-win64.cc"
		)
	endif()
	set_property(SOURCE src/diagnostics/unwinding-info-win64.cc
		APPEND PROPERTY
		COMPILE_DEFINITIONS
		UNICODE
		_WIN32_WINNT=0x0602
	)
elseif(${ARCH} STREQUAL "amd64")
	list(APPEND src_list
		"src/trap-handler/handler-inside-posix.cc"
		"src/trap-handler/handler-outside-posix.cc"
	)
endif()

list(APPEND src_list ${snapshots_list} ${trap_handler_list})

list(REMOVE_ITEM src_list
	# remove files about V8_INTL_SUPPORT :start
	"${PROJECT_SOURCE_DIR}/src/builtins/builtins-intl.cc",
	"${PROJECT_SOURCE_DIR}/src/builtins/builtins-intl-gen.cc",
	"${PROJECT_SOURCE_DIR}/src/intl.cc",
	"${PROJECT_SOURCE_DIR}/src/intl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/intl-objects-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/intl-objects.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/intl-objects.h",

	"${PROJECT_SOURCE_DIR}/src/objects/js-collator-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-collator.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-collator.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-locale-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-locale.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-locale.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-relative-time-format-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-relative-time-format.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-relative-time-format.h",

	"${PROJECT_SOURCE_DIR}/src/objects/js-list-format-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-list-format.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-list-format.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-plural-rules-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-plural-rules.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-plural-rules.h",

	"${PROJECT_SOURCE_DIR}/src/runtime/runtime-intl.cc",

	# added in 7.1
	"${PROJECT_SOURCE_DIR}/src/objects/js-break-iterator-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-break-iterator.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-break-iterator.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-number-format-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-number-format.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-number-format.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-date-time-format-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-date-time-format.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-date-time-format.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-segmenter-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-segmenter.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-segmenter.h",

	# added in 7.2
	"${PROJECT_SOURCE_DIR}/src/objects/js-segment-iterator-inl.h",
	"${PROJECT_SOURCE_DIR}/src/objects/js-segment-iterator.cc",
	"${PROJECT_SOURCE_DIR}/src/objects/js-segment-iterator.h",
	
	# added in 7.6
	"${PROJECT_SOURCE_DIR}/src/strings/char-predicates-inl.h"
	"${PROJECT_SOURCE_DIR}/src/strings/char-predicates-inl.cc"
	"${PROJECT_SOURCE_DIR}/src/strings/char-predicates.cc"
	"${PROJECT_SOURCE_DIR}/src/strings/string-builder-inl.h"
	"${PROJECT_SOURCE_DIR}/src/strings/string-hasher-inl.h"
	# remove files about V8_INTL_SUPPORT :end

	# added in 7.7~7.8
	"${PROJECT_SOURCE_DIR}/src/regexp/gen-regexp-special-case.cc" # only used on v8_enable_i18n_support=true
	# remove files about V8_INTL_SUPPORT :end
	
	# remove files required on v8_use_perfetto=true :start
	"${PROJECT_SOURCE_DIR}/src/libplatform/tracing/json-trace-event-listener.cc"
	"${PROJECT_SOURCE_DIR}/src/libplatform/tracing/json-trace-event-listener.h"
	"${PROJECT_SOURCE_DIR}/src/libplatform/tracing/trace-event-listener.cc"
	"${PROJECT_SOURCE_DIR}/src/libplatform/tracing/trace-event-listener.h"

	# files about protobuf, which is required if v8_use_perfetto=true
	"${PROJECT_SOURCE_DIR}/src/protobuf/protobuf-compiler-main.cc"

	# remove files required on v8_use_perfetto=true :end
)

# in v8 7.6,
# regardless of v8_use_snapshot, these files would be used:
# - "$target_gen_dir/extras-libraries.cc"

# if !v8_enable_embedded_builtins && !emit_builtins_as_inline_asm, these files would be used
# - "src/snapshot/embedded/embedded-empty.cc"
#
# if v8_use_snapshot, these files would be used:
# - "src/snapshot/snapshot-empty.cc"(equals to default status of "src/snapshot/snapshots/<arch_os_vary_file>.cc")
# - "src/init/setup-isolate-deserialize.cc"
#
list(REMOVE_ITEM src_list
	# remove files when v8_use_snapshot = true :start
	"${PROJECT_SOURCE_DIR}/src/init/setup-isolate-deserialize.cc"
	# remove files when v8_use_snapshot = true :end
)

if(${ARCH} STREQUAL "mips" OR ${ARCH} STREQUAL "mips64")
	set(flags "${flags} -Wno-c++11-narrowing")
endif()

# As of BUILD.gn in v8@7.8, on Windows, only clang(with vcruntime) tested by official team,
# which leads emit_builtins_as_inline_asm( = is_win && is_clang) always true.
#
# That is, it's expected to compile v8 source with
# - `gen/out.x64/embedded.cc`
# - or `gen/out.x64/embedded.S`
# which is only geneareted if v8_enable_embedded_builtins=true in `args.gn` before running `ninja -C out.gn/x64.release d8`.
# For other platform, we could use both files above, for clang on windows, it's forced to use
#`gen/out.x64/embedded.cc`(just c-wrapper for `gen/out.x64/embedded.S`) to speed up compilation(emit_builtins_as_inline_asm enabled).
#
# So, we put all important files for x64-Windows in this repo:
# * (required) v8/gen/embedded.cc
# * (optional) v8/gen/snapshot.cc --> src/snapshot/snapshots/snapshot-x64-Windows.cc
#
# And we provide required compile definitions:
# * -DV8_EMBEDDED_BUILTINS (due to v8_enable_embedded_builtins=true)
#
# That's not finished! If you just use clang as compiler on windows, that works well! But if you use MSVC,
# it's a trouble to compile for target windows-x64: embedded data (from `embedded.cc` or `embedded.cc`), 
# which structed with at&t assembly format(That's why the filename ends with extension '.S'), incompatible with ASM_MASM, which used by MSVC.
# 
# So xicilion write a convertion program `v8/gen_embedded.js`, to convert `v8/gen/embedded.cc` to 
# `v8/gen/embedded.asm`, and add it to source when you use MSVC as compiler on Windows, as you can see below.
#
# Finally, NOTICE: for embedded data on v8@7.8, you must make sure snapshot generation use same flags with v8 build process.
# If you don't know clearly the build flags of v8 in this repo, DON'T overwrite the snapshot file for windows x64(v8/src/snapshot/snapshots/snapshot-x64-Windows.cc).
if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows" AND ${ARCH} STREQUAL "amd64")
	add_definitions(-DV8_EMBEDDED_BUILTINS)
	list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/src/snapshot/embedded/embedded-empty.cc")

	# for clang, use embedded.cc, for msvc, use embedded.asm
	if(MSVC)
		list(APPEND src_list "${PROJECT_SOURCE_DIR}/gen/embedded.asm")
		list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/gen/embedded.cc")
	endif()
else()
	# it's optional to use embedded.cc on other platforms, we exclude it.
	list(REMOVE_ITEM src_list "${PROJECT_SOURCE_DIR}/gen/embedded.cc")
endif()

include(../build_tools/cmake/Library.cmake)

include_directories(
	${PROJECT_SOURCE_DIR}
	"${PROJECT_SOURCE_DIR}/gen"
	"${PROJECT_SOURCE_DIR}/gen/include"
)

add_definitions(
	-DV8_NO_FAST_TLS=1
	-DV8_DEPRECATION_WARNINGS=1
	-DV8_CONCURRENT_MARKING=1
	-DENABLE_HANDLE_ZAPPING=1
	-DDISABLE_UNTRUSTED_CODE_MITIGATIONS=1
	-DV8_TYPED_ARRAY_MAX_SIZE_IN_HEAP=64
)

if(${BUILD_TYPE} STREQUAL "debug")
	add_definitions(
		# enable of this option would make compilation error
		# -DVERIFY_HEAP=1
		-DOBJECT_PRINT=1
		-DENABLE_DISASSEMBLER=1
		-DV8_ENABLE_CHECKS=1
		-DTRACE_MAPS=1
		# enable of this option would make jssdk::createRuntime suspend
		# -DENABLE_SLOW_DCHECKS=1
	)
endif()
