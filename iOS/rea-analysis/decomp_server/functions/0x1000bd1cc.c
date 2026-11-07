// rea decompile_all
// name: FUN_1000bd1cc
// address: 0x1000bd1cc
// body: available
// range: 0x1000bd1cc-0x1000bd51b inclusive
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

void FUN_1000bd1cc(double param_1,double param_2,long param_3,byte param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ID *pIVar11;
  long lVar12;
  ID IVar13;
  ulong uVar14;
  ID IVar15;
  ID *pIVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    *(byte *)(param_3 + 0x68) = param_4 & 1;
    if ((param_4 & 1) == 0) {
      uVar5 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
      uVar6 = 0;
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar19 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar19 = uVar5 & 0xffffffffffffff8;
        if ((long)uVar5 < 0) {
          uVar19 = uVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      _swift_beginAccess(param_3 + 0x18,auStack_a0,0,0);
      if (uVar19 != 0) {
        uVar10 = 0;
        do {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1000bd500);
              (*pcVar4)();
            }
            uVar7 = *(ulong *)(uVar5 + 0x20 + uVar10 * 8);
          }
          else {
            uVar7 = uVar10;
            FUN_100169c00(uVar10,uVar5);
          }
          uVar1 = uVar10 + 1;
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000bd4fc);
            (*pcVar4)();
          }
          uVar8 = uVar7;
          FUN_1000c0aa8();
          lVar17 = *(long *)(param_3 + 0x18);
          uVar18 = *(ulong *)(lVar17 + 0x10);
          if (uVar18 != 0) {
            lVar12 = 0;
            uVar14 = 0;
            do {
              lVar2 = lVar17 + lVar12;
              uVar9 = *(ulong *)(lVar2 + 0x28);
              uVar3 = *(ulong *)(lVar2 + 0x30);
              if ((uVar9 == uVar8 && uVar3 == uVar10) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar9,uVar3,uVar8,uVar10,0), (uVar9 & 1) != 0)) {
                _swift_bridgeObjectRelease(uVar10);
                FUN_1000c1180(uVar7);
                if (*(ulong *)(*(long *)(param_3 + 0x18) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000bd504);
                  (*pcVar4)();
                }
                param_1 = ABS(param_1 - param_2);
                uVar6 = 3;
                if (param_1 <= 0.1) {
                  uVar6 = 1;
                }
                _objc_msgSend(*(ID *)(*(long *)(param_3 + 0x18) + lVar12 + 0x20),"setImageScaling:",
                              uVar6);
                goto LAB_1000bd3ac;
              }
              uVar14 = uVar14 + 1;
              lVar12 = lVar12 + 0x20;
            } while (uVar18 != uVar14);
          }
          _swift_bridgeObjectRelease(uVar10);
LAB_1000bd3ac:
          uVar10 = uVar1;
        } while (uVar1 != uVar19);
      }
      _swift_release(param_3);
      _swift_bridgeObjectRelease(uVar5);
    }
    else {
      _swift_beginAccess(param_3 + 0x18,auStack_a0,0,0);
      pIVar11 = *(ID **)(param_3 + 0x18);
      IVar13 = pIVar11[2];
      _swift_bridgeObjectRetain(pIVar11);
      if (IVar13 != 0) {
        IVar15 = 0;
        pIVar16 = pIVar11;
        do {
          pIVar16 = pIVar16 + 4;
          if (pIVar11[2] <= IVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000bd4f8);
            (*pcVar4)();
          }
          IVar15 = IVar15 + 1;
          _objc_msgSend(*pIVar16,"setImageScaling:",3);
        } while (IVar13 != IVar15);
      }
      _swift_bridgeObjectRelease(pIVar11);
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000bd51c,0,0xd00000000000009f,0x8000000100882d60,0xd00000000000001d,
                    0x8000000100883c50,0x299,0);
      _swift_release(param_3);
    }
  }
  return;
}

