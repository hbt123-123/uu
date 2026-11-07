// rea decompile_all
// name: FUN_100737540
// address: 0x100737540
// body: available
// range: 0x100737540-0x100737633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100737630 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737540(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_ac [100];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  sVar1 = _strlen(param_3);
  FUN_1007a61c8(uVar2,param_2,param_3,sVar1,param_4);
  if ((int)uVar2 != 0) {
    FUN_1007a4a1c();
    _snprintf(acStack_ac,100,"Invalid JSON data: %s");
    FUN_1007a5314(*(undefined8 *)(param_1 + 0x88),param_2);
    FUN_1007a4e8c(*(undefined8 *)(param_1 + 0x88),"error",acStack_ac,0xffffffff);
    FUN_1007a4e8c(*(undefined8 *)(param_1 + 0x88),"json_data",param_3,0xffffffff);
    FUN_1007a5380(*(undefined8 *)(param_1 + 0x88));
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

