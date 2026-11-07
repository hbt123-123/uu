// rea decompile_all
// name: FUN_10074a3cc
// address: 0x10074a3cc
// body: available
// range: 0x10074a3cc-0x10074a46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10074a3cc(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  while( true ) {
    if (param_3 < 1) {
      return 1;
    }
    uVar2 = param_1;
    _write(param_1,param_2,param_3);
    iVar1 = (int)uVar2;
    if (iVar1 == -1) break;
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
  }
  piVar3 = ___error();
  _strerror(*piVar3);
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                ,0xcd,"Could not write to fd %d: %s");
  return 0;
}

