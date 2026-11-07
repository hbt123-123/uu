// rea decompile_all
// name: FUN_1000a7418
// address: 0x1000a7418
// body: available
// range: 0x1000a7418-0x1000a7c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a7418(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long unaff_x21;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  long lVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  uint local_8c;
  ulong local_70;
  long local_68;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar14 = param_3[1];
  if (0 < lVar14) {
    lVar13 = 0;
    do {
      lVar25 = lVar13 + 1;
      if (lVar25 < lVar14) {
        lVar28 = *param_3;
        plVar12 = (long *)(lVar28 + lVar25 * 0x18);
        lVar25 = *plVar12;
        lVar15 = plVar12[1];
        uVar3 = (undefined1)plVar12[2];
        plVar12 = (long *)(lVar28 + lVar13 * 0x18);
        lVar16 = *plVar12;
        lVar24 = plVar12[1];
        uVar1 = (undefined1)plVar12[2];
        FUN_100065610(lVar25,lVar15,uVar3);
        FUN_100065610(lVar16,lVar24,uVar1);
        lVar18 = lVar16;
        lVar10 = lVar24;
        FUN_1000979e4(lVar16,lVar24,uVar1);
        lVar23 = lVar25;
        lVar11 = lVar15;
        FUN_1000979e4(lVar25,lVar15,uVar3);
        if (lVar18 == lVar23 && lVar10 == lVar11) {
          local_8c = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar18,lVar10,lVar23,lVar11,1);
          local_8c = (uint)lVar18;
        }
        _swift_bridgeObjectRelease(lVar10);
        _swift_bridgeObjectRelease(lVar11);
        FUN_100065628(lVar16,lVar24,uVar1);
        FUN_100065628(lVar25,lVar15,uVar3);
        lVar18 = lVar13 * 0x18;
        pbVar29 = (byte *)(lVar28 + lVar18 + 0x40);
        lVar15 = lVar13 + 2;
        lVar24 = 0;
        lVar16 = lVar18;
        do {
          lVar23 = lVar24;
          lVar25 = lVar15;
          lVar16 = lVar16 + 0x18;
          if (lVar14 <= lVar25) break;
          uVar19 = *(undefined8 *)(pbVar29 + -0x10);
          uVar21 = *(undefined8 *)(pbVar29 + -8);
          bVar2 = *pbVar29;
          uVar31 = *(undefined8 *)(pbVar29 + -0x28);
          uVar22 = *(undefined8 *)(pbVar29 + -0x20);
          bVar4 = pbVar29[-0x18];
          if (bVar4 >> 6 == 0) {
            local_70 = 0x2d2d;
            local_68 = -0x1e00000000000000;
LAB_1000a7690:
            FUN_100065610(uVar19,uVar21,bVar2);
            FUN_100065610(uVar31,uVar22,bVar4);
            __sSS6appendyySSF(uVar31,uVar22);
          }
          else {
            if (bVar4 >> 6 != 1) {
              local_70 = 0x2d;
              local_68 = -0x1f00000000000000;
              goto LAB_1000a7690;
            }
            local_70 = 0;
            local_68 = -0x2000000000000000;
            FUN_100065610(uVar19,uVar21,bVar2);
            FUN_100065610(uVar31,uVar22,bVar4);
            __sSS6appendyySSF(0x2d,0xe100000000000000);
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                      (&local_70,uVar31,uVar22,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                       PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
          }
          lVar15 = local_68;
          uVar20 = local_70;
          if (bVar2 >> 6 == 0) {
            local_70 = 0x2d2d;
            local_68 = -0x1e00000000000000;
LAB_1000a7720:
            __sSS6appendyySSF(uVar19,uVar21);
          }
          else {
            if (bVar2 >> 6 != 1) {
              local_70 = 0x2d;
              local_68 = -0x1f00000000000000;
              goto LAB_1000a7720;
            }
            local_70 = 0;
            local_68 = -0x2000000000000000;
            __sSS6appendyySSF(0x2d,0xe100000000000000);
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                      (&local_70,uVar19,uVar21,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                       PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
          }
          lVar24 = local_68;
          if ((uVar20 == local_70) && (lVar15 == local_68)) {
            uVar26 = 0;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar20,lVar15,local_70,local_68,1);
            uVar26 = (uint)uVar20;
          }
          _swift_bridgeObjectRelease(lVar15);
          _swift_bridgeObjectRelease(lVar24);
          FUN_100065628(uVar31,uVar22,bVar4);
          FUN_100065628(uVar19,uVar21,bVar2);
          pbVar29 = pbVar29 + 0x18;
          lVar15 = lVar25 + 1;
          lVar24 = lVar23 + 1;
        } while (((local_8c ^ uVar26) & 1) == 0);
        if ((local_8c & 1) != 0) {
          if (lVar25 < lVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c60);
            (*pcVar5)();
          }
          if (lVar13 < lVar25) {
            lVar14 = 0;
            lVar15 = *param_3;
            puVar17 = (undefined8 *)(lVar15 + lVar16);
            puVar27 = (undefined8 *)(lVar15 + lVar18);
            do {
              if (lVar13 + lVar14 != lVar13 + lVar23 + 1) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c80);
                  (*pcVar5)();
                }
                uVar3 = *(undefined1 *)(puVar27 + 2);
                uVar21 = puVar27[1];
                uVar31 = *puVar27;
                uVar19 = puVar17[2];
                uVar22 = *puVar17;
                puVar27[1] = puVar17[1];
                *puVar27 = uVar22;
                puVar27[2] = uVar19;
                puVar17[1] = uVar21;
                *puVar17 = uVar31;
                *(undefined1 *)(puVar17 + 2) = uVar3;
              }
              lVar23 = lVar23 + -1;
              lVar14 = lVar14 + 1;
              puVar17 = puVar17 + -3;
              puVar27 = puVar27 + 3;
            } while (lVar14 + lVar13 < lVar13 + lVar23 + 2);
          }
        }
      }
      lVar14 = param_3[1];
      lVar16 = lVar25;
      if (lVar25 < lVar14) {
        if (SBORROW8(lVar25,lVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c5c);
          (*pcVar5)();
        }
        if (lVar25 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c64);
            (*pcVar5)();
          }
          lVar15 = lVar13 + param_4;
          if (lVar14 <= lVar13 + param_4) {
            lVar15 = lVar14;
          }
          if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c68);
            (*pcVar5)();
          }
          if (lVar25 != lVar15) {
            lVar18 = *param_3;
            puVar27 = (undefined8 *)(lVar18 + lVar25 * 0x18);
            lVar14 = lVar13 - lVar25;
            puVar17 = puVar27;
            lVar24 = lVar14;
LAB_1000a78c4:
            do {
              uVar19 = *puVar27;
              uVar31 = puVar27[1];
              bVar2 = *(byte *)(puVar27 + 2);
              puVar30 = puVar27 + -3;
              uVar22 = *puVar30;
              uVar21 = puVar27[-2];
              bVar4 = *(byte *)(puVar27 + -1);
              if (bVar4 >> 6 == 0) {
                local_70 = 0x2d2d;
                local_68 = -0x1e00000000000000;
LAB_1000a7960:
                FUN_100065610(uVar19,uVar31,bVar2);
                FUN_100065610(uVar22,uVar21,bVar4);
                __sSS6appendyySSF(uVar22,uVar21);
              }
              else {
                if (bVar4 >> 6 != 1) {
                  local_70 = 0x2d;
                  local_68 = -0x1f00000000000000;
                  goto LAB_1000a7960;
                }
                local_70 = 0;
                local_68 = -0x2000000000000000;
                FUN_100065610(uVar19,uVar31,bVar2);
                FUN_100065610(uVar22,uVar21,bVar4);
                __sSS6appendyySSF(0x2d,0xe100000000000000);
                __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                          (&local_70,uVar22,uVar21,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                           PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
              }
              lVar16 = local_68;
              uVar20 = local_70;
              if (bVar2 >> 6 == 0) {
                local_70 = 0x2d2d;
                local_68 = -0x1e00000000000000;
LAB_1000a79f4:
                __sSS6appendyySSF(uVar19,uVar31);
              }
              else {
                if (bVar2 >> 6 != 1) {
                  local_70 = 0x2d;
                  local_68 = -0x1f00000000000000;
                  goto LAB_1000a79f4;
                }
                local_70 = 0;
                local_68 = -0x2000000000000000;
                __sSS6appendyySSF(0x2d,0xe100000000000000);
                __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                          (&local_70,uVar19,uVar31,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                           PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
              }
              lVar23 = local_68;
              if ((uVar20 == local_70) && (lVar16 == local_68)) {
                _swift_bridgeObjectRelease(lVar16);
                _swift_bridgeObjectRelease(lVar23);
                FUN_100065628(uVar22,uVar21,bVar4);
                FUN_100065628(uVar19,uVar31,bVar2);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar20,lVar16,local_70,local_68,1);
                _swift_bridgeObjectRelease(lVar16);
                _swift_bridgeObjectRelease(lVar23);
                FUN_100065628(uVar22,uVar21,bVar4);
                FUN_100065628(uVar19,uVar31,bVar2);
                if ((uVar20 & 1) != 0) {
                  if (lVar18 == 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c6c);
                    (*pcVar5)();
                  }
                  uVar3 = *(undefined1 *)(puVar27 + 2);
                  uVar31 = puVar27[1];
                  uVar19 = *puVar27;
                  puVar27[1] = puVar27[-2];
                  *puVar27 = *puVar30;
                  puVar27[2] = puVar27[-1];
                  puVar27[-2] = uVar31;
                  puVar27[-3] = uVar19;
                  *(undefined1 *)(puVar27 + -1) = uVar3;
                  bVar6 = lVar14 != -1;
                  lVar14 = lVar14 + 1;
                  puVar27 = puVar30;
                  if (bVar6) goto LAB_1000a78c4;
                }
              }
              lVar25 = lVar25 + 1;
              puVar27 = puVar17 + 3;
              lVar14 = lVar24 + -1;
              lVar16 = lVar15;
              puVar17 = puVar27;
              lVar24 = lVar14;
            } while (lVar25 != lVar15);
          }
        }
      }
      puVar9 = local_58;
      if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c50);
        (*pcVar5)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100058444(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar20 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar20) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100058444(puVar9,uVar20 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar20 + 1;
      *(long *)(puVar9 + uVar20 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar9 + uVar20 * 0x10 + 0x28) = lVar16;
      local_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c84);
        (*pcVar5)();
      }
      FUN_1000a7f48(&local_58,*param_1,param_3);
      puVar9 = local_58;
      if (unaff_x21 != 0) goto LAB_1000a7c20;
      lVar14 = param_3[1];
      lVar13 = lVar16;
    } while (lVar16 < lVar14);
  }
  puVar9 = local_58;
  lVar14 = *param_1;
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c8c);
    (*pcVar5)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100058430();
  }
  uVar20 = *(ulong *)(puVar9 + 0x10);
  while (local_58 = puVar9, 1 < uVar20) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c88);
      (*pcVar5)();
    }
    lVar16 = uVar20 - 1;
    lVar15 = *(long *)(puVar9 + uVar20 * 0x10);
    lVar25 = *(long *)(puVar9 + lVar16 * 0x10 + 0x28);
    FUN_1000a81bc(lVar13 + lVar15 * 0x18,lVar13 + *(long *)(puVar9 + lVar16 * 0x10 + 0x20) * 0x18,
                  lVar13 + lVar25 * 0x18,lVar14);
    if (unaff_x21 != 0) break;
    if (lVar25 < lVar15) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c54);
      (*pcVar5)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_100058430();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar20 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a7c58);
      (*pcVar5)();
    }
    *(long *)(puVar9 + uVar20 * 0x10) = lVar15;
    *(long *)((long)(puVar9 + uVar20 * 0x10) + 8) = lVar25;
    local_58 = puVar9;
    FUN_1000583a8(lVar16);
    puVar9 = local_58;
    uVar20 = *(ulong *)(local_58 + 0x10);
  }
LAB_1000a7c20:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

