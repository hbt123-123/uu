// rea decompile_all
// name: FUN_1007b23fc
// address: 0x1007b23fc
// body: available
// range: 0x1007b23fc-0x1007b256f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b256c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b23fc(int param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_524;
  undefined8 local_520;
  undefined1 auStack_518 [1232];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100b30f51 != '\0') {
    local_520 = 0;
    local_524 = 0;
    FUN_10079e954(&local_520,&local_524);
    FUN_1007656c0(0);
    FUN_10079e8d8(param_3,auStack_518);
    FUN_100769e5c(&DAT_100b30f98,100,auStack_518);
    uRam0000000100b31400 = 0;
    _DAT_100b313f8 = 0;
    uRam0000000100b313f0 = 0;
    _DAT_100b313e8 = 0;
    uRam0000000100b313e0 = 0;
    _DAT_100b313d8 = 0;
    uRam0000000100b313d0 = 0;
    _DAT_100b313c8 = 0;
    uRam0000000100b313c0 = 0;
    _DAT_100b313b8 = 0;
    uRam0000000100b313b0 = 0;
    _DAT_100b313a8 = 0;
    uRam0000000100b313a0 = 0;
    _DAT_100b31398 = 0;
    uRam0000000100b31390 = 0;
    _DAT_100b31388 = 0;
    uRam0000000100b31380 = 0;
    _DAT_100b31368 = 0;
    uRam0000000100b31360 = 0;
    _DAT_100b31358 = 0;
    uRam0000000100b31350 = 0;
    _DAT_100b31348 = 0;
    uRam0000000100b31340 = 0;
    uRam0000000100b31330 = 0;
    _DAT_100b31328 = 0;
    uRam0000000100b314b0 = 0;
    _DAT_100b314a8 = 0;
    uRam0000000100b314c0 = 0;
    _DAT_100b314b8 = 0;
    uRam0000000100b31490 = 0;
    _DAT_100b31488 = 0;
    uRam0000000100b314a0 = 0;
    _DAT_100b31498 = 0;
    uRam0000000100b31470 = 0;
    _DAT_100b31468 = 0;
    uRam0000000100b31480 = 0;
    _DAT_100b31478 = 0;
    uRam0000000100b31450 = 0;
    _DAT_100b31448 = 0;
    uRam0000000100b31460 = 0;
    _DAT_100b31458 = 0;
    uRam0000000100b31430 = 0;
    _DAT_100b31428 = 0;
    uRam0000000100b31440 = 0;
    _DAT_100b31438 = 0;
    uRam0000000100b31410 = 0;
    _DAT_100b31408 = 0;
    uRam0000000100b31420 = 0;
    _DAT_100b31418 = 0;
    _DAT_100b31320 = 2;
    DAT_100b31300 = &DAT_100b30f52;
    _DAT_100b31308 = 0x1000000;
    DAT_100b31318 = *(undefined8 *)(param_2 + 6);
    _DAT_100b31378 = CONCAT44(param_2[2],*param_2);
    DAT_100b31338 = &DAT_100b30f98;
    DAT_100b31310 = auStack_518;
    DAT_100b31370 = param_3;
    FUN_100765730();
    FUN_10079ea7c(local_520,local_524);
  }
  _raise(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

