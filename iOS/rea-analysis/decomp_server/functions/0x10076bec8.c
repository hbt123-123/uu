// rea decompile_all
// name: FUN_10076bec8
// address: 0x10076bec8
// body: available
// range: 0x10076bec8-0x10076bf3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10076bec8(thread_act_t param_1,thread_state_t param_2,thread_state_flavor_t param_3,
                  mach_msg_type_number_t param_4)

{
  kern_return_t error_value;
  mach_msg_type_number_t local_24;
  
  local_24 = param_4;
  error_value = _thread_get_state(param_1,param_3,param_2,&local_24);
  if (error_value != 0) {
    _mach_error_string(error_value);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU.c"
                  ,0x3a,"thread_get_state: %s");
  }
  return error_value == 0;
}

