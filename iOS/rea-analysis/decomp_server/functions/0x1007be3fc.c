// rea decompile_all
// name: FUN_1007be3fc
// address: 0x1007be3fc
// body: available
// range: 0x1007be3fc-0x1007be7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1007be3fc(ulong param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRetain(param_1);
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar9 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar13;
  if (uVar9 != 0) {
    uVar12 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007be788);
          (*pcVar3)();
        }
        uVar14 = *(ulong *)(param_1 + 0x20 + uVar12 * 8);
      }
      else {
        uVar14 = uVar12;
        FUN_1007d0358(uVar12,param_1);
      }
      bVar4 = SCARRY8(uVar12,1);
      uVar12 = uVar12 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007be778);
        (*pcVar3)();
      }
      uVar5 = uVar14;
      FUN_1007c1dd0();
      _swift_allocObject();
      *(undefined8 *)(uVar5 + 0x18) = 3;
      *(undefined8 *)(uVar5 + 0x10) = 1;
      *(ulong *)(uVar5 + 0x20) = uVar14;
      puVar15 = *(undefined **)(uVar14 + _TtC6Sentry13SentryMXFrame::subFrames);
      puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar15 != (undefined *)0x0) {
        puVar16 = puVar15;
        _swift_bridgeObjectRetain(puVar15);
        FUN_1007be3fc();
        _swift_bridgeObjectRelease(puVar15);
      }
      FUN_1007c18ac(puVar16);
      if (uVar5 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar14 = uVar5 & 0xffffffffffffff8;
        if ((long)uVar5 < 0) {
          uVar14 = uVar5;
        }
        _swift_bridgeObjectRetain(uVar5);
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        _swift_bridgeObjectRelease(uVar5);
      }
      uVar17 = (ulong)puVar13 >> 0x3e;
      if (uVar17 == 0) {
        puVar16 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if (((ulong)puVar13 & 0x8000000000000000) != 0) {
          puVar16 = puVar13;
        }
        _swift_bridgeObjectRetain(puVar13);
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        _swift_bridgeObjectRelease(puVar13);
      }
      if (SCARRY8((long)puVar16,uVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007be77c);
        (*pcVar3)();
      }
      puVar16 = puVar16 + uVar14;
      puVar15 = puVar13;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      uVar1 = (uint)puVar15 & (uint)(uVar17 == 0);
      puVar15 = (undefined *)(ulong)uVar1;
      if ((uVar1 != 1) ||
         (uVar10 = (ulong)puVar13 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar10 + 0x18) >> 1) < (long)puVar16)) {
        if (uVar17 == 0) {
          puVar18 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar18 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if (((ulong)puVar13 & 0x8000000000000000) != 0) {
            puVar18 = puVar13;
          }
          _swift_bridgeObjectRetain(puVar13);
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          _swift_bridgeObjectRelease(puVar13);
        }
        if ((long)puVar18 <= (long)puVar16) {
          puVar18 = puVar16;
        }
        FUN_1007d1c10(puVar15,puVar18,1,puVar13);
        uVar10 = (ulong)puVar15 & 0xffffffffffffff8;
        puVar13 = puVar15;
      }
      if (uVar14 != 0) {
        lVar2 = *(long *)(uVar10 + 0x10);
        if ((long)((*(ulong *)(uVar10 + 0x18) >> 1) - lVar2) < (long)uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007be780);
          (*pcVar3)();
        }
        puVar11 = (undefined8 *)(uVar10 + lVar2 * 8 + 0x20);
        if (uVar5 >> 0x3e == 0) {
          uVar6 = 0;
          switchD_1007bf228::caseD_6d(0);
          _swift_arrayInitWithCopy(puVar11,(uVar5 & 0xffffffffffffff8) + 0x20,uVar14,uVar6);
        }
        else {
          if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007be78c);
            (*pcVar3)();
          }
          if ((uVar5 & 0xc000000000000001) == 0) {
            *puVar11 = *(undefined8 *)(uVar5 + 0x20);
            lVar8 = uVar14 - 1;
            if (lVar8 != 0) {
              puVar11 = (undefined8 *)(uVar5 + 0x28);
              puVar19 = (undefined8 *)(uVar10 + lVar2 * 8 + 0x28);
              do {
                *puVar19 = *puVar11;
                lVar8 = lVar8 + -1;
                puVar11 = puVar11 + 1;
                puVar19 = puVar19 + 1;
              } while (lVar8 != 0);
            }
          }
          else {
            _swift_bridgeObjectRetain(uVar5);
            uVar17 = 0;
            do {
              uVar7 = uVar17;
              FUN_1007d0358(uVar17,uVar5);
              *(ulong *)(uVar10 + lVar2 * 8 + 0x20 + uVar17 * 8) = uVar7;
              uVar17 = uVar17 + 1;
            } while (uVar14 != uVar17);
            _swift_bridgeObjectRelease(uVar5);
          }
        }
        if (0 < (long)uVar14) {
          if (SCARRY8(*(long *)(uVar10 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007be784);
            (*pcVar3)();
          }
          *(ulong *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + uVar14;
        }
      }
      _swift_bridgeObjectRelease(uVar5);
    } while (uVar12 != uVar9);
  }
  _swift_bridgeObjectRelease(param_1);
  return puVar13;
}

