// rea decompile_all
// name: FUN_1003d7218
// address: 0x1003d7218
// body: available
// range: 0x1003d7218-0x1003d739f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003d7218(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong self;
  ulong uVar7;
  ulong uVar8;
  ID IVar6;
  
  uVar4 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar7 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d7344);
          (*pcVar2)();
        }
        self = *(ID *)(uVar4 + uVar8 * 8 + 0x20);
      }
      else {
        self = uVar8;
        FUN_100169c28(uVar8,uVar4,&PTR__OBJC_CLASS___NSScreen_100a65810,&DAT_100a75978);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d7340);
        (*pcVar2)();
      }
      IVar6 = _objc_msgSend(self,"frame");
      iVar3 = (int)IVar6;
      _CGPointEqualToPoint(param_1,param_2,0,0);
      if (iVar3 != 0) {
        _swift_bridgeObjectRelease(uVar4);
        return self;
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  _swift_bridgeObjectRelease(uVar4);
  IVar6 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,"mainScreen");
  return IVar6;
}

