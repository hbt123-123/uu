// rea decompile_all
// name: FUN_1006a0994
// address: 0x1006a0994
// body: available
// range: 0x1006a0994-0x1006a0ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a0ab0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_4080 [40];
  undefined1 auStack_4058 [32];
  undefined1 auStack_4038 [16384];
  long local_38;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar3 = auStack_4080;
  puVar4 = auStack_4080;
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  _bzero(auStack_4038,0x4000);
  FUN_1006929f8(auStack_4058,auStack_4038,0,0x4000);
  FUN_1006a7874(param_2,param_3,auStack_4058);
  FUN_1006919e4(auStack_4080,0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = auStack_4058;
  FUN_100692ca0(puVar1);
  puVar2 = auStack_4058;
  FUN_100692c98(puVar2);
  FUN_1006a8a14(uVar5,puVar1,puVar2,auStack_4080);
  if ((int)uVar5 != 0) {
    FUN_100691fa4(auStack_4080,0);
    FUN_100691e98(auStack_4080);
    FUN_1006a0f38(param_1,puVar3,puVar4,0);
  }
  FUN_1006919f4(auStack_4080);
  FUN_100692a48(auStack_4058);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

