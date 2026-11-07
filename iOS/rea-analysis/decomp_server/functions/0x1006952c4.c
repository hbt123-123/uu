// rea decompile_all
// name: FUN_1006952c4
// address: 0x1006952c4
// body: available
// range: 0x1006952c4-0x1006953cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006953cc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006952c4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 local_10a0;
  char *pcStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  timeval tStack_1078;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 local_1050;
  char acStack_1048 [4096];
  long local_48;
  undefined8 uVar2;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_1050 = 0;
  uStack_1068 = 0;
  tStack_1078.tv_usec = 0;
  tStack_1078._12_4_ = 0;
  local_1058 = 0;
  local_1060 = 0;
  uStack_1088 = 0;
  local_1090 = 0;
  tStack_1078.tv_sec = 0;
  local_1080 = 0;
  pcStack_1098 = (char *)0x0;
  local_10a0 = 0;
  _bzero(acStack_1048,0x1000);
  _snprintf(acStack_1048,0x1000,"[ASSERT(%s)]");
  local_10a0 = CONCAT44(local_10a0._4_4_,5);
  pcStack_1098 = "mars::comm";
  local_1080 = CONCAT44(local_1080._4_4_,param_2);
  local_1090 = param_1;
  uStack_1088 = param_3;
  iVar1 = _gettimeofday(&tStack_1078,(void *)0x0);
  uVar2 = CONCAT44(extraout_var,iVar1);
  FUN_100697e58();
  uStack_1068 = uVar2;
  FUN_100697ecc();
  local_1060 = uVar2;
  FUN_100697ef8();
  local_1058 = uVar2;
  ___xlogger_Write_impl(&local_10a0,acStack_1048);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

