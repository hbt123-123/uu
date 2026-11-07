// rea decompile_all
// name: FUN_10069a8dc
// address: 0x10069a8dc
// body: available
// range: 0x10069a8dc-0x10069a9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069a9a0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069a8dc(long *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  statfs local_8b0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar1 = param_2;
  }
  iVar2 = _statfs(pcVar1,&local_8b0);
  uVar3 = (ulong)(iVar2 != 0);
  FUN_100699888(uVar3,param_2,param_3,"mars_boost::filesystem::space");
  if ((uVar3 & 1) == 0) {
    uVar3 = (ulong)local_8b0.f_bsize;
    lVar4 = local_8b0.f_blocks * uVar3;
    lVar5 = local_8b0.f_bfree * uVar3;
    lVar6 = local_8b0.f_bavail * uVar3;
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  *param_1 = lVar4;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

