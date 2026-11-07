// rea decompile_all
// name: FUN_100788a64
// address: 0x100788a64
// body: available
// range: 0x100788a64-0x100788cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100788ca8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100788a64(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  char *pcVar5;
  double dVar6;
  int local_13c;
  timeval local_138;
  undefined1 auStack_128 [224];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  _open(param_1,0x602);
  local_13c = (int)param_1;
  if (local_13c < 0) {
    piVar3 = ___error();
    _strerror(*piVar3);
    pcVar5 = "Could not open file %s for writing: %s";
    uVar4 = 0x112;
  }
  else {
    FUN_1007a5460(auStack_128,1,FUN_100789250,&local_13c);
    puVar2 = auStack_128;
    FUN_1007a5314(puVar2,0);
    if ((int)puVar2 == 0) {
      puVar2 = auStack_128;
      FUN_1007a4d6c(puVar2,"version",1);
      if ((int)puVar2 != 0) goto LAB_100788c20;
      puVar2 = auStack_128;
      FUN_1007a4bf4(puVar2,"crashedLastLaunch",DAT_100b2e0d8);
      dVar6 = DAT_100b2e090;
      if ((int)puVar2 != 0) goto LAB_100788c20;
      if (DAT_100b2e0d8 == '\0') {
        dVar6 = 0.0;
      }
      else {
        _gettimeofday(&local_138,(void *)0x0);
        dVar6 = ((double)local_138.tv_usec / 1000000.0 + (double)local_138.tv_sec) - dVar6;
      }
      puVar2 = auStack_128;
      FUN_1007a4c4c(dVar6,puVar2,"durationFromCrashStateInitToLastCrash");
      if ((int)puVar2 != 0) goto LAB_100788c20;
      puVar2 = auStack_128;
      FUN_1007a4c4c(DAT_100b2e0a0,puVar2,"activeDurationSinceLastCrash");
      if ((int)puVar2 != 0) goto LAB_100788c20;
      puVar2 = auStack_128;
      FUN_1007a4c4c(DAT_100b2e0a8,puVar2,"backgroundDurationSinceLastCrash");
      if ((int)puVar2 != 0) goto LAB_100788c20;
      puVar2 = auStack_128;
      FUN_1007a4d6c(puVar2,"launchesSinceLastCrash",(long)(int)DAT_100b2e0b0);
      if ((int)puVar2 != 0) goto LAB_100788c20;
      puVar2 = auStack_128;
      FUN_1007a4d6c(puVar2,"sessionsSinceLastCrash",(long)DAT_100b2e0b0._4_4_);
      if ((int)puVar2 != 0) goto LAB_100788c20;
      iVar1 = (int)auStack_128;
      FUN_1007a5494();
      _close(local_13c);
      if (iVar1 == 0) {
        uVar4 = 1;
        goto LAB_100788c58;
      }
    }
    else {
LAB_100788c20:
      _close(local_13c);
    }
    FUN_1007a4a1c();
    pcVar5 = "%s: %s";
    uVar4 = 0x151;
  }
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_AppState.c"
                ,uVar4,pcVar5);
  uVar4 = 0;
LAB_100788c58:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}

