var child_process = require("child_process");
var path = require("path");

var opts = [
    "v8_enable_i18n_support=false",
    "v8_use_external_startup_data=false",
    "v8_use_libm_trig_functions=false",
    "v8_enable_pointer_compression=false",
    "v8_enable_short_builtin_calls=false",
    "v8_enable_lazy_source_positions=false",
    "v8_enable_allocation_folding=false",
    "v8_allocation_site_tracking=false",
    "v8_imminent_deprecation_warnings=false",
    "v8_enable_system_instrumentation=false",
    "v8_deprecation_warnings=false",
    "v8_enable_sandbox=false",
    "v8_control_flow_integrity=false",
    "v8_enable_gdbjit=false",
    "v8_use_zlib=false"
]

function mk_arch(arch) {
    child_process.run("python3",
        [path.join(__dirname, "v8/tools/dev/v8gen.py"), `${arch}.release`, "--"].concat(opts), { cwd: "v8" });

    child_process.run("bash", [
        path.join(__dirname, "depot_tools/ninja"),
        "-C",
        `out.gn/${arch}.release`,
        "torque_generated_definitions",
        "protocol_generated_sources"
    ], { cwd: "v8" });
}

child_process.run("bash", [path.join(__dirname, "depot_tools/gclient"), "sync", "-D"]);

mk_arch("x64");
mk_arch("ia32");
