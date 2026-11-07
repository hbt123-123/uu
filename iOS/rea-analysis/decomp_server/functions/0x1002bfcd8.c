// rea decompile_all
// name: FUN_1002bfcd8
// address: 0x1002bfcd8
// body: available
// range: 0x1002bfcd8-0x1002c0333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bfcd8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  long unaff_x21;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong local_70;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar16 = param_3[1];
  if (0 < lVar16) {
    lVar18 = 0;
    do {
      lVar29 = lVar18 + 1;
      if (lVar29 < lVar16) {
        lVar21 = *param_3;
        puVar22 = (ulong *)(lVar21 + lVar29 * 0x20);
        local_70 = *puVar22;
        uVar28 = puVar22[1];
        uVar31 = puVar22[3];
        puVar22 = (ulong *)(lVar21 + lVar18 * 0x20);
        uVar24 = *puVar22;
        uVar30 = puVar22[1];
        uVar8 = uVar28;
        __sSS10lowercasedSSyF();
        uVar12 = uVar30;
        __sSS10lowercasedSSyF();
        if (local_70 == uVar24 && uVar8 == uVar12) {
          local_70 = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (local_70,uVar8,uVar24,uVar12,1);
          local_70 = local_70 & 0xffffffff;
        }
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar30);
        _swift_bridgeObjectRelease(uVar31);
        _swift_bridgeObjectRelease(uVar28);
        _swift_bridgeObjectRelease(uVar30);
        _swift_bridgeObjectRelease(uVar8);
        _swift_bridgeObjectRelease(uVar12);
        lVar20 = lVar18 * 0x20;
        plVar25 = (long *)(lVar21 + lVar20 + 0x40);
        lVar21 = lVar18 + 2;
        lVar17 = 0;
        lVar26 = lVar29;
        do {
          lVar27 = lVar26;
          lVar19 = lVar17;
          lVar29 = lVar21;
          if (lVar16 <= lVar29) break;
          lVar21 = *plVar25;
          lVar26 = plVar25[1];
          lVar32 = plVar25[3];
          lVar17 = plVar25[-4];
          lVar3 = plVar25[-3];
          lVar13 = lVar26;
          __sSS10lowercasedSSyF();
          lVar14 = lVar3;
          __sSS10lowercasedSSyF();
          if (lVar21 == lVar17 && lVar13 == lVar14) {
            uVar7 = 0;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (lVar21,lVar13,lVar17,lVar14,1);
            uVar7 = (uint)lVar21;
          }
          _swift_bridgeObjectRetain(lVar26);
          _swift_bridgeObjectRetain(lVar32);
          _swift_bridgeObjectRetain(lVar3);
          _swift_bridgeObjectRelease(lVar32);
          _swift_bridgeObjectRelease(lVar26);
          _swift_bridgeObjectRelease(lVar3);
          _swift_bridgeObjectRelease(lVar13);
          _swift_bridgeObjectRelease(lVar14);
          plVar25 = plVar25 + 4;
          lVar21 = lVar29 + 1;
          lVar17 = lVar19 + 0x20;
          lVar26 = lVar27 + 1;
        } while ((((uint)local_70 ^ uVar7) & 1) == 0);
        if ((local_70 & 1) != 0) {
          if (lVar29 < lVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0308);
            (*pcVar5)();
          }
          if (lVar18 < lVar29) {
            lVar17 = *param_3;
            lVar19 = lVar17 + lVar19;
            lVar21 = lVar17;
            lVar16 = lVar18;
            do {
              if (lVar16 != lVar27) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0328);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar21 + lVar20);
                lVar26 = lVar19 + lVar20;
                uVar34 = puVar1[1];
                uVar33 = *puVar1;
                uVar2 = puVar1[2];
                uVar4 = puVar1[3];
                uVar37 = *(undefined8 *)(lVar26 + 0x20);
                uVar36 = *(undefined8 *)(lVar26 + 0x38);
                uVar35 = *(undefined8 *)(lVar26 + 0x30);
                puVar1[1] = *(undefined8 *)(lVar26 + 0x28);
                *puVar1 = uVar37;
                puVar1[3] = uVar36;
                puVar1[2] = uVar35;
                *(undefined8 *)(lVar26 + 0x28) = uVar34;
                *(undefined8 *)(lVar26 + 0x20) = uVar33;
                *(undefined8 *)(lVar26 + 0x30) = uVar2;
                *(undefined8 *)(lVar26 + 0x38) = uVar4;
              }
              lVar16 = lVar16 + 1;
              lVar19 = lVar19 + -0x20;
              lVar21 = lVar21 + 0x20;
              bVar6 = lVar16 < lVar27;
              lVar27 = lVar27 + -1;
            } while (bVar6);
          }
        }
      }
      lVar16 = param_3[1];
      lVar21 = lVar29;
      if (lVar29 < lVar16) {
        if (SBORROW8(lVar29,lVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0304);
          (*pcVar5)();
        }
        if (lVar29 - lVar18 < param_4) {
          if (SCARRY8(lVar18,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c030c);
            (*pcVar5)();
          }
          lVar17 = lVar18 + param_4;
          if (lVar16 <= lVar18 + param_4) {
            lVar17 = lVar16;
          }
          if (lVar17 < lVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0310);
            (*pcVar5)();
          }
          if (lVar29 != lVar17) {
            lVar16 = *param_3;
            puVar22 = (ulong *)(lVar16 + lVar29 * 0x20 + -0x20);
            lVar26 = lVar18 - lVar29;
            do {
              puVar23 = (ulong *)(lVar16 + lVar29 * 0x20);
              uVar24 = *puVar23;
              uVar28 = puVar23[1];
              uVar30 = puVar23[3];
              puVar23 = puVar22;
              lVar21 = lVar26;
              do {
                uVar8 = *puVar23;
                uVar12 = puVar23[1];
                uVar31 = uVar28;
                __sSS10lowercasedSSyF();
                uVar15 = uVar12;
                __sSS10lowercasedSSyF();
                if (uVar24 == uVar8 && uVar31 == uVar15) {
                  _swift_bridgeObjectRetain(uVar28);
                  _swift_bridgeObjectRetain(uVar30);
                  _swift_bridgeObjectRetain(uVar12);
                  _swift_bridgeObjectRelease(uVar30);
                  _swift_bridgeObjectRelease(uVar28);
                  _swift_bridgeObjectRelease(uVar12);
                  _swift_bridgeObjectRelease(uVar31);
                  _swift_bridgeObjectRelease(uVar15);
                  break;
                }
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar24,uVar31,uVar8,uVar15,1);
                _swift_bridgeObjectRetain(uVar28);
                _swift_bridgeObjectRetain(uVar30);
                _swift_bridgeObjectRetain(uVar12);
                _swift_bridgeObjectRelease(uVar30);
                _swift_bridgeObjectRelease(uVar28);
                _swift_bridgeObjectRelease(uVar12);
                _swift_bridgeObjectRelease(uVar31);
                _swift_bridgeObjectRelease(uVar15);
                if ((uVar24 & 1) == 0) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0314);
                  (*pcVar5)();
                }
                uVar24 = puVar23[4];
                uVar28 = puVar23[5];
                uVar8 = puVar23[6];
                uVar30 = puVar23[7];
                puVar23[5] = puVar23[1];
                puVar23[4] = *puVar23;
                puVar23[7] = puVar23[3];
                puVar23[6] = puVar23[2];
                *puVar23 = uVar24;
                puVar23[1] = uVar28;
                puVar23[2] = uVar8;
                puVar23[3] = uVar30;
                puVar23 = puVar23 + -4;
                bVar6 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar6);
              lVar29 = lVar29 + 1;
              puVar22 = puVar22 + 4;
              lVar26 = lVar26 + -1;
              lVar21 = lVar17;
            } while (lVar29 != lVar17);
          }
        }
      }
      puVar11 = local_58;
      if (lVar21 < lVar18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c02f8);
        (*pcVar5)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_1002967f4(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar24 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar24) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_1002967f4(puVar11,uVar24 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar24 + 1;
      *(long *)(puVar11 + uVar24 * 0x10 + 0x20) = lVar18;
      *(long *)(puVar11 + uVar24 * 0x10 + 0x28) = lVar21;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c032c);
        (*pcVar5)();
      }
      FUN_1002c04cc(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_1002c02c8;
      lVar16 = param_3[1];
      lVar18 = lVar21;
    } while (lVar21 < lVar16);
  }
  puVar11 = local_58;
  lVar16 = *param_1;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0334);
    (*pcVar5)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100357f4c();
  }
  uVar24 = *(ulong *)(puVar11 + 0x10);
  while( true ) {
    local_58 = puVar11;
    if (uVar24 < 2) {
      _swift_bridgeObjectRelease(puVar11);
      return;
    }
    lVar18 = *param_3;
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0330);
      (*pcVar5)();
    }
    lVar17 = uVar24 - 1;
    lVar21 = *(long *)(puVar11 + uVar24 * 0x10);
    lVar29 = *(long *)(puVar11 + lVar17 * 0x10 + 0x28);
    FUN_1002c0738(lVar18 + lVar21 * 0x20,lVar18 + *(long *)(puVar11 + lVar17 * 0x10 + 0x20) * 0x20,
                  lVar18 + lVar29 * 0x20,lVar16);
    if (unaff_x21 != 0) break;
    if (lVar29 < lVar21) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c02fc);
      (*pcVar5)();
    }
    puVar9 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar9 & 1) == 0) {
      FUN_100357f4c();
    }
    if (*(ulong *)(puVar11 + 0x10) <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002c0300);
      (*pcVar5)();
    }
    *(long *)(puVar11 + uVar24 * 0x10) = lVar21;
    *(long *)((long)(puVar11 + uVar24 * 0x10) + 8) = lVar29;
    local_58 = puVar11;
    FUN_1002bbdd8(lVar17);
    uVar24 = *(ulong *)(local_58 + 0x10);
    puVar11 = local_58;
  }
LAB_1002c02c8:
  _swift_bridgeObjectRelease(puVar11);
  return;
}

