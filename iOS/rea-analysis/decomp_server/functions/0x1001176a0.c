// rea decompile_all
// name: FUN_1001176a0
// address: 0x1001176a0
// body: available
// range: 0x1001176a0-0x10011773f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011773c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

uint FUN_1001176a0(void)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  uint uVar4;
  long unaff_x20;
  byte local_29;
  long local_28;
  
  lVar1 = _TtC14UURemoteServer15InputController::___lazy_storage___isCapital;
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar4 = (uint)*(byte *)(unaff_x20 +
                         _TtC14UURemoteServer15InputController::___lazy_storage___isCapital);
  if (*(byte *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___isCapital) == 2
     ) {
    local_29 = 0;
    uVar2 = 0;
    FUN_10011bbac(0x10000,&local_29);
    if ((uVar2 & 1) == 0) {
      IVar3 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent,"modifierFlags");
      uVar4 = (uint)(IVar3 >> 0x10) & 1;
    }
    else {
      uVar4 = (uint)local_29;
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

