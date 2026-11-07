// rea decompile_all
// name: FUN_1000d2d8c
// address: 0x1000d2d8c
// body: available
// range: 0x1000d2d8c-0x1000d33d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d2d8c(long *param_1,undefined8 param_2,long *param_3,long param_4,undefined8 *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  long unaff_x21;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_58;
  
  lVar22 = param_3[1];
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar22 < 1) {
    _swift_retain_n(param_5,3);
  }
  else {
    lVar16 = *param_3;
    puVar5 = param_5;
    _swift_retain_n(param_5,3);
    puVar9 = PTR___sSSN_1009957f8;
    lVar13 = 0;
    do {
      lVar19 = lVar13 + 1;
      if (lVar19 < lVar22) {
        puVar10 = (undefined8 *)(lVar16 + lVar19 * 0x48);
        cVar3 = *(char *)(puVar10 + 6);
        puVar11 = (undefined8 *)(lVar16 + lVar13 * 0x48);
        puVar17 = puVar5;
        if (cVar3 == *(char *)(puVar11 + 6)) {
          local_c0 = *puVar11;
          uStack_b8 = puVar11[1];
          local_b0 = *puVar10;
          uStack_a8 = puVar10[1];
          FUN_10009ff0c();
          puVar17 = &local_c0;
          __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                    (puVar17,puVar9,puVar9,puVar5,puVar5);
          cVar3 = puVar17 == (undefined8 *)0xffffffffffffffff;
        }
        lVar12 = lVar13 * 0x48;
        pcVar14 = (char *)(lVar16 + lVar12 + 0xc0);
        lVar15 = lVar13 + 2;
        lVar21 = lVar19;
        lVar16 = lVar12;
        do {
          lVar20 = lVar21;
          lVar19 = lVar15;
          lVar16 = lVar16 + 0x48;
          puVar5 = puVar17;
          if (lVar22 <= lVar19) break;
          cVar4 = *pcVar14;
          if (cVar4 == pcVar14[-0x48]) {
            local_c0 = *(undefined8 *)(pcVar14 + -0x78);
            uStack_b8 = *(undefined8 *)(pcVar14 + -0x70);
            local_b0 = *(undefined8 *)(pcVar14 + -0x30);
            uStack_a8 = *(undefined8 *)(pcVar14 + -0x28);
            FUN_10009ff0c();
            puVar5 = &local_c0;
            __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                      (puVar5,puVar9,puVar9,puVar17,puVar17);
            cVar4 = puVar5 == (undefined8 *)0xffffffffffffffff;
          }
          pcVar14 = pcVar14 + 0x48;
          puVar17 = puVar5;
          lVar15 = lVar19 + 1;
          lVar21 = lVar20 + 1;
        } while (cVar3 == cVar4);
        if (cVar3 != '\0') {
          if (lVar19 < lVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3370);
            (*pcVar1)();
          }
          if (lVar13 < lVar19) {
            lVar15 = *param_3;
            puVar10 = (undefined8 *)(lVar15 + lVar16);
            puVar17 = (undefined8 *)(lVar15 + lVar12);
            lVar22 = lVar13;
            do {
              if (lVar22 != lVar20) {
                if (lVar15 == 0) {
                  _swift_release_n(param_5,3);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d33a8);
                  (*pcVar1)();
                }
                uStack_98 = puVar17[3];
                local_a0 = puVar17[2];
                uStack_88 = puVar17[5];
                local_90 = puVar17[4];
                uStack_78 = puVar17[7];
                local_80 = puVar17[6];
                local_70 = puVar17[8];
                uStack_a8 = puVar17[1];
                local_b0 = *puVar17;
                puVar5 = _memmove(puVar17,puVar10,0x48);
                puVar10[3] = uStack_98;
                puVar10[2] = local_a0;
                puVar10[5] = uStack_88;
                puVar10[4] = local_90;
                puVar10[7] = uStack_78;
                puVar10[6] = local_80;
                puVar10[8] = local_70;
                puVar10[1] = uStack_a8;
                *puVar10 = local_b0;
              }
              lVar22 = lVar22 + 1;
              puVar10 = puVar10 + -9;
              puVar17 = puVar17 + 9;
              bVar2 = lVar22 < lVar20;
              lVar20 = lVar20 + -1;
            } while (bVar2);
          }
        }
      }
      lVar22 = param_3[1];
      lVar15 = lVar19;
      if (lVar19 < lVar22) {
        if (SBORROW8(lVar19,lVar13)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d336c);
          (*pcVar1)();
        }
        if (lVar19 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3374);
            (*pcVar1)();
          }
          lVar16 = lVar13 + param_4;
          if (lVar22 <= lVar13 + param_4) {
            lVar16 = lVar22;
          }
          if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3378);
            (*pcVar1)();
          }
          if (lVar19 != lVar16) {
            lVar12 = *param_3;
            puVar17 = (undefined8 *)(lVar12 + lVar19 * 0x48 + -0x48);
            lVar22 = lVar13 - lVar19;
            lVar21 = lVar22;
            puVar10 = puVar17;
LAB_1000d3050:
            do {
              if (*(char *)(puVar17 + 0xf) == *(char *)(puVar17 + 6)) {
                local_c0 = *puVar17;
                uStack_b8 = puVar17[1];
                local_b0 = puVar17[9];
                uStack_a8 = puVar17[10];
                FUN_10009ff0c();
                puVar11 = &local_c0;
                __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                          (puVar11,puVar9,puVar9,puVar5,puVar5);
                if (puVar11 == (undefined8 *)0xffffffffffffffff) goto LAB_1000d30a0;
              }
              else {
                puVar11 = puVar5;
                if (*(char *)(puVar17 + 0xf) != '\0') {
LAB_1000d30a0:
                  if (lVar12 == 0) {
                    _swift_release_n(param_5,3);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3388);
                    (*pcVar1)();
                  }
                  uStack_98 = puVar17[0xc];
                  local_a0 = puVar17[0xb];
                  uStack_88 = puVar17[0xe];
                  local_90 = puVar17[0xd];
                  uStack_78 = puVar17[0x10];
                  local_80 = puVar17[0xf];
                  local_70 = puVar17[0x11];
                  uStack_a8 = puVar17[10];
                  local_b0 = puVar17[9];
                  puVar17[0xc] = puVar17[3];
                  puVar17[0xb] = puVar17[2];
                  puVar17[0xe] = puVar17[5];
                  puVar17[0xd] = puVar17[4];
                  puVar17[0x10] = puVar17[7];
                  puVar17[0xf] = puVar17[6];
                  puVar17[0x11] = puVar17[8];
                  puVar17[10] = puVar17[1];
                  puVar17[9] = *puVar17;
                  puVar17[1] = uStack_a8;
                  *puVar17 = local_b0;
                  puVar17[8] = local_70;
                  puVar17[5] = uStack_88;
                  puVar17[4] = local_90;
                  puVar17[7] = uStack_78;
                  puVar17[6] = local_80;
                  puVar17[3] = uStack_98;
                  puVar17[2] = local_a0;
                  puVar17 = puVar17 + -9;
                  bVar2 = lVar22 != -1;
                  lVar22 = lVar22 + 1;
                  puVar5 = puVar11;
                  if (bVar2) goto LAB_1000d3050;
                }
              }
              lVar19 = lVar19 + 1;
              puVar17 = puVar10 + 9;
              lVar22 = lVar21 + -1;
              puVar5 = puVar11;
              lVar15 = lVar16;
              lVar21 = lVar22;
              puVar10 = puVar17;
            } while (lVar19 != lVar16);
          }
        }
      }
      puVar8 = local_58;
      if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3360);
        (*pcVar1)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar18 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar18) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033870(puVar8,uVar18 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar18 + 1;
      *(long *)(puVar8 + uVar18 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar8 + uVar18 * 0x10 + 0x28) = lVar15;
      lVar22 = *param_1;
      local_58 = puVar8;
      if (lVar22 == 0) {
        _swift_release_n(param_5,3);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d33b8);
        (*pcVar1)();
      }
      _swift_retain(param_5);
      FUN_1000d2ad0(&local_58,lVar22,param_3,param_5);
      if (unaff_x21 != 0) {
        _swift_release();
        puVar9 = local_58;
        goto LAB_1000d3324;
      }
      puVar5 = param_5;
      _swift_release();
      lVar16 = *param_3;
      lVar22 = param_3[1];
      lVar13 = lVar15;
    } while (lVar15 < lVar22);
  }
  puVar9 = local_58;
  lVar22 = *param_1;
  if (lVar22 == 0) {
    _swift_release_n(param_5,3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d33d8);
    (*pcVar1)();
  }
  puVar8 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10006f924();
  }
  uVar18 = *(ulong *)(puVar9 + 0x10);
  while( true ) {
    local_58 = puVar9;
    if (uVar18 < 2) {
      _swift_release_n(param_5,3);
      _swift_bridgeObjectRelease(puVar9);
      return;
    }
    lVar16 = *param_3;
    if (lVar16 == 0) {
      _swift_release_n(param_5,3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d33c8);
      (*pcVar1)();
    }
    lVar21 = uVar18 - 1;
    lVar15 = *(long *)(puVar9 + uVar18 * 0x10);
    lVar13 = *(long *)(puVar9 + lVar21 * 0x10 + 0x20);
    lVar19 = *(long *)(puVar9 + lVar21 * 0x10 + 0x28);
    _swift_retain(param_5);
    FUN_1000d22e0(lVar16 + lVar15 * 0x48,lVar16 + lVar13 * 0x48,lVar16 + lVar19 * 0x48,lVar22,
                  param_5);
    if (unaff_x21 != 0) break;
    if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3364);
      (*pcVar1)();
    }
    puVar8 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar8 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3368);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar18 * 0x10) = lVar15;
    *(long *)((long)(puVar9 + uVar18 * 0x10) + 8) = lVar19;
    local_58 = puVar9;
    FUN_10005fd60(lVar21);
    uVar18 = *(ulong *)(local_58 + 0x10);
    puVar9 = local_58;
  }
LAB_1000d3324:
  _swift_release_n(param_5,3);
  _swift_bridgeObjectRelease(puVar9);
  return;
}

