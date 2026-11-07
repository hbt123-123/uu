// rea decompile_all
// name: FUN_10079f298
// address: 0x10079f298
// body: available
// range: 0x10079f298-0x10079f4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079f4a0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10079f298(char *param_1)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 local_28b4;
  undefined1 *local_28b0;
  undefined1 auStack_28a8 [10008];
  undefined1 *local_190;
  uint local_188;
  code *local_180;
  code *pcStack_178;
  code *local_170;
  code *pcStack_168;
  code *local_160;
  code *pcStack_158;
  code *local_150;
  code *pcStack_148;
  code *local_140;
  code *pcStack_138;
  undefined1 auStack_128 [224];
  long local_48;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 != (char *)0x0) {
    pcStack_168 = FUN_10079f65c;
    local_170 = FUN_10079f4c8;
    pcStack_158 = FUN_10079f680;
    local_160 = FUN_10079f670;
    pcStack_148 = FUN_10079f714;
    local_150 = FUN_10079f6c4;
    pcStack_138 = FUN_10079f798;
    local_140 = FUN_10079f764;
    pcStack_178 = FUN_10079f4b8;
    local_180 = FUN_10079f4a4;
    pvVar1 = _malloc(150000);
    if (pvVar1 == (void *)0x0) {
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportFixer.c"
                    ,0xf9,"Failed to allocate string buffer of size %ul");
    }
    else {
      sVar2 = _strlen(param_1);
      uVar4 = (uint)((double)(int)sVar2 * 1.5);
      puVar3 = _malloc((ulong)uVar4);
      if (puVar3 == (undefined1 *)0x0) {
        _free(pvVar1);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportFixer.c"
                      ,0x102,"Failed to allocate fixed report buffer of size %ld");
        goto LAB_10079f438;
      }
      _bzero(auStack_28a8,0x2728);
      local_28b0 = auStack_128;
      local_190 = puVar3;
      local_188 = uVar4;
      FUN_1007a5460(auStack_128,1,FUN_10079f7a0,&local_28b0);
      local_28b4 = 0;
      sVar2 = _strlen(param_1);
      FUN_1007a54d0(param_1,sVar2,pvVar1,150000,&local_180,&local_28b0,&local_28b4);
      *local_190 = 0;
      _free(pvVar1);
      if ((int)param_1 == 0) goto LAB_10079f438;
      FUN_1007a4a1c();
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportFixer.c"
                    ,0x116,"Could not decode report: %s");
      _free(puVar3);
    }
  }
  puVar3 = (undefined1 *)0x0;
LAB_10079f438:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

