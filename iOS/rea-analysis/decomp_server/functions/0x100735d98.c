// rea decompile_all
// name: FUN_100735d98
// address: 0x100735d98
// body: available
// range: 0x100735d98-0x10073607f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073607c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100735d98(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *local_5c0;
  code *pcStack_5b8;
  code *local_5b0;
  code *pcStack_5a8;
  code *local_5a0;
  code *pcStack_598;
  code *local_590;
  code *pcStack_588;
  code *local_580;
  code *pcStack_578;
  code *local_570;
  code *pcStack_568;
  code *local_560;
  code *pcStack_558;
  code *local_550;
  code *pcStack_548;
  code *local_540;
  undefined1 *local_538;
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [8];
  undefined1 *local_510;
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  ___strlcpy_chk(&DAT_100b2c880,param_2,0x1ea,500);
  sVar2 = _strlen(&DAT_100b2c880);
  *(undefined4 *)((long)&DAT_100b2c878 + sVar2 + 3) = 0x646c6f2e;
  *(undefined1 *)((long)&DAT_100b2c878 + sVar2 + 7) = 0;
  uVar3 = param_2;
  _rename(param_2,&DAT_100b2c880);
  if ((int)uVar3 < 0) {
    piVar4 = ___error();
    _strerror(*piVar4);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                  ,0x5c7,"Could not rename %s to %s: %s");
  }
  puVar5 = auStack_530;
  FUN_10074adfc(puVar5,param_2,auStack_438,0x400);
  if ((int)puVar5 != 0) {
    FUN_100782ec8();
    local_5c0 = FUN_1007377bc;
    pcStack_5b8 = FUN_1007377c4;
    local_5b0 = FUN_1007377cc;
    pcStack_5a8 = FUN_1007377d4;
    local_5a0 = FUN_1007377dc;
    pcStack_598 = FUN_1007377e8;
    local_590 = FUN_100737944;
    pcStack_588 = FUN_100737a48;
    local_580 = FUN_100737a50;
    pcStack_578 = FUN_100737a58;
    local_570 = FUN_100737a60;
    pcStack_568 = FUN_100737a68;
    local_560 = FUN_100737a70;
    pcStack_558 = FUN_100737540;
    local_550 = FUN_100737b44;
    pcStack_548 = FUN_100737b4c;
    local_538 = auStack_518;
    local_540 = FUN_100737b54;
    local_510 = auStack_530;
    FUN_1007a5460(auStack_518,1,FUN_100736080,auStack_530);
    FUN_1007a5314(auStack_518,"report");
    FUN_1007a5c8c(auStack_518,"recrash_report",&DAT_100b2c880,1);
    FUN_10074aec8(auStack_530);
    iVar1 = _remove(&DAT_100b2c880);
    if (iVar1 < 0) {
      piVar4 = ___error();
      _strerror(*piVar4);
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,0x5dd,"Could not remove %s: %s");
    }
    FUN_1007360b0(&local_5c0,"minimal",*param_1,param_1[0x2f]);
    FUN_10074aec8(auStack_530);
    (*local_550)(&local_5c0,"crash");
    FUN_10073617c(&local_5c0,param_1);
    FUN_10074aec8(auStack_530);
    uVar6 = param_1[2];
    uVar3 = uVar6;
    FUN_10079e6e0(uVar6);
    FUN_10079ebc8(uVar6,uVar3);
    FUN_1007364c8(&local_5c0,"crashed_thread",param_1,param_1[2],uVar6,0);
    FUN_10074aec8(auStack_530);
    (*local_540)(&local_5c0);
    (*local_540)(&local_5c0);
    FUN_1007a5494(local_538);
    FUN_10074ae8c(auStack_530);
    FUN_100782eec();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

