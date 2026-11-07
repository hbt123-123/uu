// rea decompile_all
// name: FUN_10022166c
// address: 0x10022166c
// body: available
// range: 0x10022166c-0x100221753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100221750 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10022166c(void)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  size_t local_68 [2];
  undefined4 local_58;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_58 = 0;
  local_68[0] = 0x10;
  local_68[1] = 0;
  puVar2 = &DAT_100a7e480;
  FUN_100004bb4(&DAT_100a7e480,&DAT_1008134d0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  piVar3 = (int *)(puVar2 + 0x20);
  piVar3[0] = 1;
  piVar3[1] = 0x15;
  iVar1 = _sysctl(piVar3,2,local_68 + 1,local_68,(void *)0x0,0);
  _swift_bridgeObjectRelease(puVar2);
  if (iVar1 != -1) {
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

