// rea decompile_all
// name: FUN_100075588
// address: 0x100075588
// body: available
// range: 0x100075588-0x1000756ab inclusive
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

bool FUN_100075588(double param_1)

{
  code *pcVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  ID self;
  
  IVar2 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  self = IVar2;
  thunk_FUN_1003d7218();
  if (self == 0) {
    uVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,IVar2);
    if (uVar3 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        uVar4 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar4 == 0) {
      _swift_bridgeObjectRelease(uVar3);
      return false;
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000756ac);
        (*pcVar1)();
      }
      self = *(ID *)(uVar3 + 0x20);
    }
    else {
      self = 0;
      FUN_100169c00(0,uVar3);
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  _objc_msgSend(self,"backingScaleFactor");
  return 1.0 < param_1;
}

