// rea decompile_all
// name: FUN_1000b8988
// address: 0x1000b8988
// body: available
// range: 0x1000b8988-0x1000b8cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b8b38 to 0x1000b9868 FUN_1000b9868 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000b8988(ulong param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_1000c0ec8();
  lVar7 = *(long *)(unaff_x20 + 0x60);
  if ((lVar7 == 0) ||
     ((param_1 != *(ulong *)(unaff_x20 + 0x58) || lVar7 != param_2 &&
      (uVar8 = param_1,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,*(ulong *)(unaff_x20 + 0x58),lVar7,0), (uVar8 & 1) == 0)))) {
    IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar4 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar3,uVar4);
    IVar5 = IVar3;
    FUN_1000b8d04();
    _swift_bridgeObjectRelease(IVar3);
    if ((IVar5 & 1) != 0) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000b983c,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000027,
                    0x8000000100882f70,0xde,0);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
      *(ulong *)(unaff_x20 + 0x58) = param_1;
      *(long *)(unaff_x20 + 0x60) = param_2;
      _swift_bridgeObjectRelease(uVar4);
      FUN_1000b9868();
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000b9b24,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000027,
                  0x8000000100882f70,0xe3,0);
    _swift_beginAccess(unaff_x20 + 0x18,auStack_78,1,0);
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRelease(uVar4);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,1,0);
    uVar8 = *(ulong *)(unaff_x20 + 0x10);
    if (uVar8 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar8 & 0xffffffffffffff8;
      if ((long)uVar8 < 0) {
        uVar10 = uVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(uVar8);
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b8cc0);
            (*pcVar2)();
          }
          IVar5 = *(ID *)(uVar8 + uVar11 * 8 + 0x20);
        }
        else {
          IVar5 = uVar11;
          FUN_10016a00c(uVar11,uVar8);
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b8c50);
          (*pcVar2)();
        }
        uVar12 = uVar11 + 1;
        _objc_msgSend(IVar5,"close");
        uVar11 = uVar11 + 1;
      } while (uVar12 != uVar10);
    }
    _swift_bridgeObjectRelease(uVar8);
    plVar6 = *(long **)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar1;
    _swift_bridgeObjectRelease();
    FUN_1000b9b50();
    FUN_1003b2720();
    lVar9 = *plVar6;
    lVar7 = lVar9;
    _swift_retain();
    FUN_10039a5f0();
    _swift_release(lVar9);
    if (lVar7 == 2) {
      FUN_1000ba3ac();
    }
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000b8cd8,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000027,
                  0x8000000100882f70,0xd9,0);
  }
  return;
}

