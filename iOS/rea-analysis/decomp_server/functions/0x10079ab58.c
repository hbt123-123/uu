// rea decompile_all
// name: FUN_10079ab58
// address: 0x10079ab58
// body: available
// range: 0x10079ab58-0x10079abdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


mach_port_name_t * FUN_10079ab58(mach_port_name_t *param_1)

{
  kern_return_t kVar1;
  
  if ((char)param_1[1] != '\0') {
    kVar1 = _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__1009954c8,*param_1);
    if (kVar1 != 0) {
      FUN_1007a671c();
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0x21,"%s failed with kern return code: %d, description: %s");
    }
  }
  return param_1;
}

