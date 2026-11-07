// rea decompile_all
// name: FUN_10074adfc
// address: 0x10074adfc
// body: available
// range: 0x10074adfc-0x10074ae8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10074adfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  _open(param_2,0xa02);
  uVar1 = (uint)param_2;
  *(uint *)(param_1 + 2) = uVar1;
  if ((int)uVar1 < 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x19e,"Could not open crash report file %s: %s");
  }
  return ~uVar1 >> 0x1f;
}

