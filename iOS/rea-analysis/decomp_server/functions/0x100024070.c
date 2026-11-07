// rea decompile_all
// name: FUN_100024070
// address: 0x100024070
// body: available
// range: 0x100024070-0x10002435f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100024358 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100024070(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [16];
  ulong local_90;
  
  uVar9 = *(ulong *)(unaff_x20 + 0x140);
  if (uVar9 == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100024360,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000021,
                  0x800000010087a950,0x40f,0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + 0x138);
    _swift_bridgeObjectRetain(uVar9);
    uVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar3 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
    if (uVar2 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar2 & 0xffffffffffffff8;
      if ((long)uVar2 < 0) {
        uVar10 = uVar2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar10 == 0) {
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar2);
      return;
    }
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100024360);
      (*pcVar1)();
    }
    uVar11 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar11 * 8 + 0x20);
      }
      else {
        uVar4 = uVar11;
        FUN_100169c00(uVar11,uVar2);
      }
      uVar5 = uVar4;
      FUN_1003d541c();
      FUN_10004ffa0();
      if ((uVar5 & 1) == 0) {
        FUN_1003d541c();
        FUN_100401b14(0);
        FUN_1003fb48c(FUN_100024444,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000021,
                      0x800000010087a950,0x418,0);
        uVar4 = uVar8;
        uVar6 = uVar9;
        uVar7 = uVar5;
        FUN_10003f24c(uVar8,uVar9);
        if ((uVar7 & 1) == 0) {
          FUN_100024470(uVar5,uVar4,uVar4 >> 0x20,uVar6,uVar6 >> 0x20);
        }
      }
      else {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_90 = uVar4;
        FUN_1003fb48c(FUN_10003fed4,auStack_a0,0xd0000000000000a9,0x8000000100877660,
                      0xd000000000000021,0x800000010087a950,0x414,0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}

