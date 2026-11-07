// rea decompile_all
// name: FUN_1002559b0
// address: 0x1002559b0
// body: available
// range: 0x1002559b0-0x100255b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100255b00 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002559b0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"allObjects");
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (uVar2,PTR___syXlN_100995e80 + 8);
  if (uVar2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar2 & 0xffffffffffffff8;
    if ((long)uVar2 < 0) {
      uVar5 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100255acc);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar4);
      }
      else {
        uVar4 = uVar6;
        FUN_100255d28(uVar6,uVar2);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100255ac8);
        (*pcVar1)();
      }
      uVar7 = uVar6 + 1;
      uVar3 = uVar4;
      _swift_unknownObjectRetain();
      _swift_getObjectType();
      _swift_conformsToProtocol();
      if (uVar3 != 0 && uVar4 != 0) {
        _swift_getObjectType(uVar4);
        (**(code **)(uVar3 + 8))();
      }
      _swift_unknownObjectRelease_n(uVar4,2);
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar5);
  }
  _swift_bridgeObjectRelease(uVar2);
  return;
}

