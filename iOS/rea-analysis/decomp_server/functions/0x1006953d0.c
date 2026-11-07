// rea decompile_all
// name: FUN_1006953d0
// address: 0x1006953d0
// body: available
// range: 0x1006953d0-0x10069554b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100695548 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006953d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,va_list param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10b0;
  char *pcStack_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  timeval tStack_1088;
  undefined8 uStack_1078;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  char acStack_1058 [4096];
  long local_58;
  undefined4 extraout_var;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  _bzero(acStack_1058,0x1000);
  local_1060 = 0;
  uStack_1078 = 0;
  tStack_1088.tv_usec = 0;
  tStack_1088._12_4_ = 0;
  local_1068 = 0;
  local_1070 = 0;
  uStack_1098 = 0;
  local_10a0 = 0;
  tStack_1088.tv_sec = 0;
  local_1090 = 0;
  pcStack_10a8 = (char *)0x0;
  local_10b0 = 0;
  uVar1 = _snprintf(acStack_1058,0x1000,"[ASSERT(%s)]");
  if ((int)uVar1 < 0) {
    _strncpy(acStack_1058,"[ASSERT] FAILED!!!",0x1000);
  }
  else if (uVar1 < 0x1000) {
    iVar2 = _vsnprintf(acStack_1058 + uVar1,0x1000 - (ulong)uVar1,param_5,param_6);
    if (iVar2 < 0) {
      _strncat(acStack_1058 + uVar1,"[ASSERT2] FAILED!!!",0x1000 - (ulong)uVar1);
    }
  }
  local_10b0 = CONCAT44(local_10b0._4_4_,5);
  pcStack_10a8 = "mars::comm";
  local_1090 = CONCAT44(local_1090._4_4_,param_2);
  local_10a0 = param_1;
  uStack_1098 = param_3;
  iVar2 = _gettimeofday(&tStack_1088,(void *)0x0);
  uVar3 = CONCAT44(extraout_var,iVar2);
  FUN_100697e58();
  uStack_1078 = uVar3;
  FUN_100697ecc();
  local_1070 = uVar3;
  FUN_100697ef8();
  local_1068 = uVar3;
  ___xlogger_Write_impl(&local_10b0,acStack_1058);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

