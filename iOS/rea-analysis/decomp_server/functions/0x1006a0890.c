// rea decompile_all
// name: FUN_1006a0890
// address: 0x1006a0890
// body: available
// range: 0x1006a0890-0x1006a0993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a0990 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0890(long param_1,char *param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1068 [40];
  char acStack_1038 [4096];
  long local_38;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_2 != (char *)0x0) {
    _bzero(acStack_1038,0x1000);
    _vsnprintf(acStack_1038,0x1000,param_2,&stack0x00000000);
    FUN_1006919e4(auStack_1068,0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    sVar1 = _strnlen(acStack_1038,0x1000);
    FUN_1006a8a14(uVar4,acStack_1038,sVar1,auStack_1068);
    puVar2 = auStack_1068;
    FUN_100691fa4(puVar2,0);
    puVar3 = auStack_1068;
    FUN_100691e98(puVar3);
    FUN_1006a0f38(param_1,puVar2,puVar3,0);
    FUN_1006919f4(auStack_1068);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

