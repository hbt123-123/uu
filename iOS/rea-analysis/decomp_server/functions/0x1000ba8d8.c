// rea decompile_all
// name: FUN_1000ba8d8
// address: 0x1000ba8d8
// body: available
// range: 0x1000ba8d8-0x1000baa4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000ba8d8(long param_1)

{
  ulong uVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_60,0,0);
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (uVar5 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar5 & 0xffffffffffffff8;
      if ((long)uVar5 < 0) {
        uVar1 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar1 != 0) {
      IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
      uVar3 = 0;
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
      IVar4 = IVar2;
      FUN_1000b8d04();
      _swift_bridgeObjectRelease();
      if ((IVar4 & 1) != 0) {
        FUN_1000c0ec8();
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        *(ID *)(param_1 + 0x58) = IVar2;
        *(undefined8 *)(param_1 + 0x60) = uVar3;
        _swift_bridgeObjectRelease(uVar6);
        FUN_100401b14(0);
        FUN_1003fb48c(FUN_1000baa50,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000025,
                      0x8000000100882ff0,0xf4,0);
      }
    }
    _swift_release(param_1);
  }
  return;
}

