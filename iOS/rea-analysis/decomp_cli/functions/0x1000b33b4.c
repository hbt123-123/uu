// rea decompile_all
// name: FUN_1000b33b4
// address: 0x1000b33b4
// body: available
// range: 0x1000b33b4-0x1000b3453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b3450 to 0x1000c27bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b33b4(undefined8 param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1000f0280;
  local_30 = 0;
  __s6Darwin10TIOCGWINSZSuvg();
  bVar1 = true;
  iVar3 = 1;
  __s6Darwin5ioctlys5Int32VAD_SuSvtF(1,param_1,&local_30);
  if (iVar3 == 0) {
    bVar1 = local_30._2_2_ == 0;
    sVar2 = local_30._2_2_;
  }
  else {
    sVar2 = 0;
  }
  local_30 = CONCAT71(local_30._1_7_,bVar1);
  if (*(long *)PTR____stack_chk_guard_1000f0280 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(sVar2);
}

