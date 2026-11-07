// rea decompile_all
// name: FUN_10079b3e8
// address: 0x10079b3e8
// body: available
// range: 0x10079b3e8-0x10079b497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10079b3e8(thread_act_t *param_1)

{
  kern_return_t kVar1;
  integer_t aiStack_50 [6];
  int local_38;
  byte local_34;
  mach_msg_type_number_t local_24;
  
  if (*param_1 != 0) {
    local_24 = 10;
    kVar1 = _thread_info(*param_1,3,aiStack_50,&local_24);
    if (kVar1 == 0) {
      return (uint)(local_38 != 1) | (local_34 & 2) >> 1;
    }
    if (kVar1 != 0x10000003) {
      FUN_1007a671c();
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0xc2,"%s failed with kern return code: %d, description: %s");
    }
  }
  return 1;
}

