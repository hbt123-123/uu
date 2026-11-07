// rea decompile_all
// name: FUN_10079b2e8
// address: 0x10079b2e8
// body: available
// range: 0x10079b2e8-0x10079b3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079b2e8(long *param_1,thread_act_t *param_2)

{
  kern_return_t kVar1;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int local_38;
  byte local_34;
  mach_msg_type_number_t local_24;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    local_24 = 10;
    kVar1 = _thread_info(*param_2,3,&local_50,&local_24);
    if (kVar1 == 0) {
      *param_1 = (long)iStack_4c + (long)local_50 * 1000000;
      param_1[1] = (long)iStack_44 + (long)local_48 * 1000000;
      *(float *)(param_1 + 2) = (float)local_40 / 1000.0;
      if (4 < local_38 - 1U) {
        local_38 = 0;
      }
      *(int *)((long)param_1 + 0x14) = local_38;
      *(byte *)(param_1 + 3) = local_34 >> 1 & 1;
    }
    else if (kVar1 != 0x10000003) {
      FUN_1007a671c();
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0xaa,"%s failed with kern return code: %d, description: %s");
    }
  }
  return;
}

