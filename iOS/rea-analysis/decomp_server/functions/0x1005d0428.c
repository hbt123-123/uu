// rea decompile_all
// name: FUN_1005d0428
// address: 0x1005d0428
// body: available
// range: 0x1005d0428-0x1005d05b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d05b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1005d0428(void)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ID *pIVar4;
  undefined8 uVar5;
  ID unaff_x20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ID local_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  
  puVar3 = &local_a0;
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar5 = 0x6b6f547469647561;
  uVar2 = uVar5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b6f547469647561,0xea00000000006e65);
  _NSSelectorFromString();
  IVar1 = _objc_msgSend(unaff_x20,"respondsToSelector:",uVar2);
  if ((int)IVar1 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b6f547469647561,0xea00000000006e65);
    IVar1 = _objc_msgSend(unaff_x20,"valueForKey:",uVar5);
    if (IVar1 != 0) {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_58,IVar1);
      _swift_unknownObjectRelease(IVar1);
      FUN_10003e8bc(auStack_58,auStack_78);
      uVar2 = 0;
      FUN_1005d05b8(0);
      pIVar4 = &local_80;
      _swift_dynamicCast(pIVar4,auStack_78,PTR___sypN_100995e88 + 8,uVar2,6);
      if (((ulong)pIVar4 & 1) != 0) {
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        _objc_msgSend(local_80,"getValue:",&local_a0);
        pIVar4 = &local_80;
        FUN_1001f8534(&local_a0,pIVar4);
        FUN_10003f094(auStack_58);
        goto LAB_1005d0588;
      }
      FUN_10003f094(auStack_58);
    }
  }
  puVar3 = (undefined8 *)0x0;
  pIVar4 = (ID *)0xf000000000000000;
LAB_1005d0588:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(puVar3,pIVar4);
}

