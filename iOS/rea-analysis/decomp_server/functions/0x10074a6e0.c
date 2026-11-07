// rea decompile_all
// name: FUN_10074a6e0
// address: 0x10074a6e0
// body: available
// range: 0x10074a6e0-0x10074a78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10074a6e0(undefined8 param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  
  if (*param_2 == '\0') {
LAB_10074a778:
    uVar3 = 0;
  }
  else {
    uVar2 = _strlen(param_2);
    uVar5 = (uint)uVar2;
    while (0 < (int)uVar5) {
      uVar3 = param_1;
      _write(param_1,param_2,uVar2 & 0xffffffff);
      iVar1 = (int)uVar3;
      if (iVar1 == -1) {
        piVar4 = ___error();
        _strerror(*piVar4);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                      ,0x12d,"Could not write to fd %d: %s");
        goto LAB_10074a778;
      }
      uVar5 = (int)uVar2 - iVar1;
      uVar2 = (ulong)uVar5;
      param_2 = param_2 + iVar1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

