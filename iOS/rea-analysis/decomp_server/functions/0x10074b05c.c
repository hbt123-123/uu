// rea decompile_all
// name: FUN_10074b05c
// address: 0x10074b05c
// body: available
// range: 0x10074b05c-0x10074b12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10074b05c(long *param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    _memmove((void *)*param_1,(void *)(*param_1 + (ulong)uVar1),(ulong)uVar1);
    lVar3 = (long)(int)param_1[2] - (long)*(int *)((long)param_1 + 0xc);
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 2) = (int)lVar3;
    *(undefined1 *)(*param_1 + lVar3) = 0;
  }
  if ((int)param_1[1] - (int)param_1[2] < 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    _read(uVar1,*param_1 + (long)(int)param_1[2]);
    if ((int)uVar1 < 0) {
      piVar2 = ___error();
      _strerror(*piVar2);
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,0x1de,"Could not read: %s");
    }
    else {
      lVar3 = (long)(int)param_1[2] + (long)(int)uVar1;
      *(int *)(param_1 + 2) = (int)lVar3;
      *(undefined1 *)(*param_1 + lVar3) = 0;
    }
    uVar1 = ~uVar1 >> 0x1f;
  }
  return uVar1;
}

