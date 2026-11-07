// rea decompile_all
// name: FUN_1007377e8
// address: 0x1007377e8
// body: available
// range: 0x1007377e8-0x100737943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100737940 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007377e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_248 [512];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  _open(param_3,0);
  if ((int)param_3 < 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                  ,0x9a,"Could not open file %s: %s");
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    FUN_1007a4f18(uVar1,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      _read(param_3,auStack_248,0x200);
      iVar3 = (int)uVar1;
      while (0 < iVar3) {
        uVar1 = *(undefined8 *)(param_1 + 0x88);
        thunk_FUN_1007a4f5c(uVar1,auStack_248);
        if ((int)uVar1 != 0) {
          pcVar4 = "Could not append string element";
          uVar1 = 0xa9;
          goto LAB_10073785c;
        }
        uVar1 = param_3;
        _read(param_3,auStack_248,0x200);
        iVar3 = (int)uVar1;
      }
    }
    else {
      pcVar4 = "Could not start string element";
      uVar1 = 0x9f;
LAB_10073785c:
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,uVar1,pcVar4);
    }
    FUN_1007a513c(*(undefined8 *)(param_1 + 0x88));
    _close(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

