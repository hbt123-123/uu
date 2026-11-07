// rea decompile_all
// name: FUN_10074b22c
// address: 0x10074b22c
// body: available
// range: 0x10074b22c-0x10074b2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10074b22c(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  
  *param_3 = 0;
  param_3[(long)param_4 + -1] = 0;
  *param_1 = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)(param_1 + 1) = (int)((long)param_4 + -1);
  _open(param_2,0);
  uVar1 = (uint)param_2;
  *(uint *)((long)param_1 + 0x14) = uVar1;
  if ((int)uVar1 < 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x238,"Could not open file %s: %s");
  }
  else {
    FUN_10074b05c(param_1);
  }
  return ~uVar1 >> 0x1f;
}

