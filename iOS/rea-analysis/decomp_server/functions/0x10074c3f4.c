// rea decompile_all
// name: FUN_10074c3f4
// address: 0x10074c3f4
// body: available
// range: 0x10074c3f4-0x10074c583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074c580 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10074c3f4(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  char acStack_23c [500];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abaf90);
  iVar1 = DAT_100b2ced0;
  LOAcquire();
  DAT_100b2ced0 = DAT_100b2ced0 + 1;
  LORelease();
  _snprintf(acStack_23c,500,"%s/%s-report-%016llx.json");
  pcVar2 = acStack_23c;
  _open(pcVar2,0x201);
  if ((int)pcVar2 < 0) {
    piVar4 = ___error();
    _strerror(*piVar4);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                  ,0x104,"Could not open file %s: %s");
    goto LAB_10074c540;
  }
  pcVar3 = pcVar2;
  _write();
  if ((int)pcVar3 < 0) {
    piVar4 = ___error();
    _strerror(*piVar4);
    pcVar3 = "Could not write to file %s: %s";
    uVar5 = 0x10b;
LAB_10074c534:
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                  ,uVar5,pcVar3);
  }
  else if ((int)pcVar3 < param_2) {
    pcVar3 = "Expected to write %d bytes to file %s, but only wrote %d";
    uVar5 = 0x10f;
    goto LAB_10074c534;
  }
  _close(pcVar2);
LAB_10074c540:
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abaf90);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

