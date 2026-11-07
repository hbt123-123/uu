// rea decompile_all
// name: FUN_1000d6228
// address: 0x1000d6228
// body: available
// range: 0x1000d6228-0x1000d6363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d6360 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1000d6228(undefined *param_1,undefined8 param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte local_49;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_49 = 0;
  puVar1 = param_1;
  uVar4 = param_2;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar4);
  IVar2 = _objc_msgSend(param_3,"fileExistsAtPath:isDirectory:",puVar1,&local_49);
  if (((int)IVar2 == 0) || ((local_49 & 1) == 0)) {
    puVar1 = &DAT_100a75a28;
    FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar3 + -8);
    uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar1,uVar7 + *(long *)(lVar6 + 0x48),uVar5 | 7);
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    (**(code **)(lVar6 + 0x10))(puVar1 + uVar7,param_1,lVar3);
  }
  else {
    FUN_1000d6364(param_1,(uint)param_2 & 1,param_3);
    puVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

