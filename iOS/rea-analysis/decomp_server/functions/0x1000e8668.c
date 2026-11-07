// rea decompile_all
// name: FUN_1000e8668
// address: 0x1000e8668
// body: available
// range: 0x1000e8668-0x1000e8d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e8668(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long alStack_100 [2];
  long *local_f0;
  long local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_58;
  
  lVar3 = 0;
  local_f0 = param_1;
  FUN_1000e984c();
  local_e8 = *(long *)(lVar3 + -8);
  local_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar3 = (long)alStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = lVar3 - extraout_x12;
  local_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar19 = (undefined8 *)(lVar3 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar13 = (undefined8 *)((long)puVar19 - extraout_x12_01);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar3 = param_3[1];
  local_d8 = param_3;
  if (0 < lVar3) {
    lVar10 = 0;
    local_e0 = unaff_x21;
    alStack_100[1] = param_4;
    do {
      lVar9 = lVar10 + 1;
      local_d0 = lVar10;
      if (lVar9 < lVar3) {
        lVar14 = *param_3;
        lVar17 = *(long *)(local_e8 + 0x48);
        lVar11 = lVar14 + lVar17 * lVar9;
        local_98 = lVar3;
        FUN_100082394(lVar11,puVar13,FUN_1000e984c);
        lVar4 = lVar14 + lVar17 * lVar10;
        FUN_100082394(lVar4,puVar19,FUN_1000e984c);
        local_70 = *puVar13;
        uStack_68 = puVar13[1];
        local_80 = *puVar19;
        uStack_78 = puVar19[1];
        FUN_10009ff0c();
        puVar18 = &local_80;
        __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                  (puVar18,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,lVar4,lVar4);
        local_a8 = puVar18;
        FUN_1000d27dc(puVar19,FUN_1000e984c);
        FUN_1000d27dc(puVar13,FUN_1000e984c);
        lVar14 = lVar14 + lVar17 * (lVar10 + 2);
        lVar3 = lVar10 + 2;
        local_a0 = lVar17;
        do {
          lVar9 = local_98;
          if (local_98 == lVar3) break;
          bVar2 = local_a8 == (undefined8 *)0xffffffffffffffff;
          FUN_100082394(lVar14,puVar13,FUN_1000e984c);
          FUN_100082394(lVar11,puVar19,FUN_1000e984c);
          local_70 = *puVar13;
          uStack_68 = puVar13[1];
          local_80 = *puVar19;
          uStack_78 = puVar19[1];
          puVar18 = &local_80;
          __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                    (puVar18,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,lVar4,lVar4);
          FUN_1000d27dc(puVar19,FUN_1000e984c);
          FUN_1000d27dc(puVar13,FUN_1000e984c);
          lVar14 = lVar14 + local_a0;
          lVar11 = lVar11 + local_a0;
          lVar9 = lVar3;
          lVar3 = lVar3 + 1;
        } while (bVar2 != (puVar18 != (undefined8 *)0xffffffffffffffff));
        param_3 = local_d8;
        if (local_a8 == (undefined8 *)0xffffffffffffffff) {
          if (lVar9 < local_d0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d14);
            (*pcVar1)();
          }
          if (local_d0 < lVar9) {
            lVar14 = 0;
            puVar18 = (undefined8 *)*local_d8;
            lVar11 = local_a0 * (lVar9 + -1);
            lVar4 = lVar9 * local_a0;
            lVar10 = local_d0 * local_a0;
            lVar3 = local_d0;
            local_a8 = puVar18;
            local_98 = lVar9;
            do {
              if (lVar3 != lVar9 + lVar14 + -1) {
                if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d2c);
                  (*pcVar1)();
                }
                uVar12 = (long)puVar18 + lVar10;
                FUN_1000823d8(uVar12,local_c8,FUN_1000e984c);
                puVar18 = local_a8;
                if ((lVar10 < lVar11) || ((ulong)((long)local_a8 + lVar4) <= uVar12)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar12,(long)local_a8 + lVar11,1,local_88);
                }
                else if (lVar10 != lVar11) {
                  _swift_arrayInitWithTakeBackToFront(uVar12,(long)local_a8 + lVar11,1,local_88);
                }
                FUN_1000823d8(local_c8,(long)puVar18 + lVar11,FUN_1000e984c);
                lVar9 = local_98;
              }
              lVar3 = lVar3 + 1;
              lVar14 = lVar14 + -1;
              lVar11 = lVar11 - local_a0;
              lVar4 = lVar4 - local_a0;
              lVar10 = lVar10 + local_a0;
              param_3 = local_d8;
            } while (lVar3 < lVar9 + lVar14);
          }
        }
      }
      lVar3 = param_3[1];
      lVar10 = lVar9;
      lVar14 = local_e0;
      if (lVar9 < lVar3) {
        if (SBORROW8(lVar9,local_d0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d08);
          (*pcVar1)();
        }
        if (lVar9 - local_d0 < alStack_100[1]) {
          if (SCARRY8(local_d0,alStack_100[1])) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d0c);
            (*pcVar1)();
          }
          lVar11 = local_d0 + alStack_100[1];
          if (lVar3 <= local_d0 + alStack_100[1]) {
            lVar11 = lVar3;
          }
          if (lVar11 < local_d0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d10);
            (*pcVar1)();
          }
          if (lVar9 != lVar11) {
            lVar15 = *param_3;
            local_c0 = *(long *)(local_e8 + 0x48);
            lVar3 = lVar15 + local_c0 * (lVar9 + -1);
            lVar16 = -local_c0;
            puVar18 = (undefined8 *)(local_d0 - lVar9);
            lVar4 = lVar15 + lVar9 * local_c0;
            lStack_b8 = lVar11;
            lVar11 = lVar4;
            puVar5 = puVar18;
            lVar17 = lVar3;
LAB_1000e8964:
            do {
              local_98 = lVar9;
              local_a0 = lVar17;
              local_a8 = puVar5;
              local_b0 = lVar11;
              FUN_100082394(lVar4,puVar13,FUN_1000e984c);
              lVar10 = lVar3;
              FUN_100082394(lVar3,puVar19,FUN_1000e984c);
              local_70 = *puVar13;
              uStack_68 = puVar13[1];
              local_80 = *puVar19;
              uStack_78 = puVar19[1];
              FUN_10009ff0c();
              puVar5 = &local_80;
              __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                        (puVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,lVar10,lVar10);
              FUN_1000d27dc(puVar19,FUN_1000e984c);
              FUN_1000d27dc(puVar13,FUN_1000e984c);
              lVar10 = local_90;
              if (puVar5 == (undefined8 *)0xffffffffffffffff) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d18);
                  (*pcVar1)();
                }
                FUN_1000823d8(lVar4,local_90,FUN_1000e984c);
                _swift_arrayInitWithTakeFrontToBack(lVar4,lVar3,1,local_88);
                FUN_1000823d8(lVar10,lVar3,FUN_1000e984c);
                lVar3 = lVar3 + lVar16;
                lVar4 = lVar4 + lVar16;
                bVar2 = puVar18 != (undefined8 *)0xffffffffffffffff;
                puVar18 = (undefined8 *)((long)puVar18 + 1);
                lVar11 = local_b0;
                puVar5 = local_a8;
                lVar17 = local_a0;
                lVar9 = local_98;
                if (bVar2) goto LAB_1000e8964;
              }
              lVar3 = local_a0 + local_c0;
              puVar18 = (undefined8 *)((long)local_a8 + -1);
              lVar4 = local_b0 + local_c0;
              lVar10 = lStack_b8;
              param_3 = local_d8;
              lVar14 = local_e0;
              lVar11 = lVar4;
              puVar5 = puVar18;
              lVar17 = lVar3;
              lVar9 = local_98 + 1;
            } while (local_98 + 1 != lStack_b8);
          }
        }
      }
      puVar8 = local_58;
      if (lVar10 < local_d0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8cfc);
        (*pcVar1)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar12 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033870(puVar8,uVar12 + 1,1,puVar7);
        puVar7 = puVar8;
      }
      *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
      *(long *)(puVar7 + uVar12 * 0x10 + 0x20) = local_d0;
      *(long *)(puVar7 + uVar12 * 0x10 + 0x28) = lVar10;
      local_58 = puVar7;
      if (*local_f0 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d30);
        (*pcVar1)();
      }
      FUN_1000e8f38(&local_58,*local_f0,param_3);
      puVar8 = local_58;
      if (lVar14 != 0) goto LAB_1000e8ccc;
      lVar3 = param_3[1];
      local_e0 = lVar14;
    } while (lVar10 < lVar3);
    unaff_x21 = 0;
  }
  puVar8 = local_58;
  lVar3 = *local_f0;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d38);
    (*pcVar1)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10006f924();
  }
  uVar12 = *(ulong *)(puVar8 + 0x10);
  while (local_58 = puVar8, 1 < uVar12) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d34);
      (*pcVar1)();
    }
    lVar11 = uVar12 - 1;
    lVar4 = *(long *)(puVar8 + uVar12 * 0x10);
    lVar9 = *(long *)(puVar8 + lVar11 * 0x10 + 0x28);
    lVar14 = *(long *)(local_e8 + 0x48);
    FUN_1000e91bc(lVar10 + lVar14 * lVar4,lVar10 + lVar14 * *(long *)(puVar8 + lVar11 * 0x10 + 0x20)
                  ,lVar10 + lVar14 * lVar9,lVar3);
    if (unaff_x21 != 0) break;
    if (lVar9 < lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d00);
      (*pcVar1)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar12 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e8d04);
      (*pcVar1)();
    }
    *(long *)(puVar8 + uVar12 * 0x10) = lVar4;
    *(long *)((long)(puVar8 + uVar12 * 0x10) + 8) = lVar9;
    local_58 = puVar8;
    FUN_10005fd60(lVar11);
    puVar8 = local_58;
    param_3 = local_d8;
    uVar12 = *(ulong *)(local_58 + 0x10);
  }
LAB_1000e8ccc:
  _swift_bridgeObjectRelease(puVar8);
  return;
}

