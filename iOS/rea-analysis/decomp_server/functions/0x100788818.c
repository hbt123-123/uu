// rea decompile_all
// name: FUN_100788818
// address: 0x100788818
// body: available
// range: 0x100788818-0x1007889eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007889e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788818(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_484;
  code *local_480;
  code *pcStack_478;
  code *local_470;
  code *pcStack_468;
  code *local_460;
  code *pcStack_458;
  code *local_450;
  code *pcStack_448;
  code *local_440;
  code *pcStack_438;
  undefined4 local_42c;
  void *local_428;
  timeval local_420 [62];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  _gettimeofday(local_420,(void *)0x0);
  DAT_100b2e090 = (double)local_420[0].tv_usec / 1000000.0 + (double)local_420[0].tv_sec;
  pcVar1 = _strdup(param_1);
  DAT_100b2e0a8 = 0;
  DAT_100b2e0a0 = 0;
  DAT_100b2e0b8 = 0;
  DAT_100b2e0b0 = 0;
  _DAT_100b2e0c8 = 0;
  DAT_100b2e0c0 = 0;
  _DAT_100b2e0d8 = 0;
  _DAT_100b2e0d0 = 0;
  _DAT_100b2e0e8 = 0;
  DAT_100b2e0e0 = 0;
  pcVar2 = pcVar1;
  DAT_100b2e098 = pcVar1;
  _open(pcVar1,0);
  if (-1 < (int)pcVar2) {
    _close();
    FUN_10074a50c(pcVar1,&local_428,&local_42c,50000);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar2 = "%s: Could not load file";
      uVar4 = 0xe8;
    }
    else {
      local_450 = FUN_100789088;
      pcStack_448 = FUN_100789080;
      local_440 = FUN_1007890d8;
      pcStack_438 = FUN_1007890e0;
      local_480 = FUN_100789090;
      pcStack_478 = FUN_1007890e8;
      local_470 = FUN_10078916c;
      pcStack_468 = FUN_100789238;
      local_460 = FUN_100789240;
      pcStack_458 = FUN_100789248;
      local_484 = 0;
      pvVar3 = local_428;
      FUN_1007a54d0(local_428,local_42c,local_420,1000,&local_480,&DAT_100b2e0a0,&local_484);
      _free(local_428);
      if ((int)pvVar3 == 0) goto LAB_1007889bc;
      FUN_1007a4a1c();
      pcVar2 = "%s, offset %d: %s";
      uVar4 = 0x100;
    }
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_AppState.c"
                  ,uVar4,pcVar2);
  }
LAB_1007889bc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

