// rea decompile_all
// name: FUN_1001a8588
// address: 0x1001a8588
// body: available
// range: 0x1001a8588-0x1001a8fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a8588(long *param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  code *pcVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x21;
  code *pcVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 auStack_160 [4];
  undefined1 auStack_140 [8];
  ulong local_138;
  long *local_130;
  long local_128;
  long local_120;
  ulong *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  long local_e8;
  ulong local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined8 *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *pcStack_70;
  undefined *local_58;
  
  lVar2 = 0;
  local_130 = param_1;
  __s10Foundation3URLVMa();
  local_e8 = *(long *)(lVar2 + -8);
  local_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d8 = auStack_140 + lVar2;
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar14 = (undefined8 *)param_3[1];
  local_118 = param_3;
  if (0 < (long)puVar14) {
    puVar18 = (undefined1 *)0x0;
    local_120 = param_4;
    do {
      puVar4 = puVar18 + 1;
      local_110 = puVar18;
      if ((long)puVar4 < (long)puVar14) {
        local_a0 = *param_3;
        puVar15 = (undefined8 *)(local_a0 + (long)puVar4 * 0x10);
        uVar3 = *puVar15;
        puVar19 = (undefined8 *)puVar15[1];
        puVar15 = (undefined8 *)(local_a0 + (long)puVar18 * 0x10);
        local_a8 = *puVar15;
        uVar20 = puVar15[1];
        local_128 = unaff_x21;
        local_f8 = puVar14;
        _swift_bridgeObjectRetain(puVar19);
        _swift_bridgeObjectRetain(uVar20);
        puVar18 = local_d8;
        local_b0 = puVar19;
        __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_d8);
        __s10Foundation3URLV17lastPathComponentSSvg();
        lVar11 = local_d0;
        pcVar22 = *(code **)(local_e8 + 8);
        puVar4 = puVar18;
        (*pcVar22)(puVar18,local_d0);
        local_88 = 0x7070612e;
        local_80 = 0xe400000000000000;
        local_98 = 0;
        uStack_90 = 0xe000000000000000;
        local_78 = uVar3;
        pcStack_70 = (code *)puVar19;
        FUN_10009ff0c();
        puVar9 = PTR___sSSN_1009957f8;
        *(undefined1 **)((long)auStack_160 + lVar2 + 0x10) = puVar4;
        *(undefined1 **)((long)auStack_160 + lVar2 + 0x18) = puVar4;
        pcVar17 = (code *)&local_88;
        puVar14 = &local_98;
        *(undefined1 **)((long)auStack_160 + lVar2 + 8) = puVar4;
        *(undefined **)((long)auStack_160 + lVar2) = PTR___sSSN_1009957f8;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (pcVar17,puVar14,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        local_b8 = pcVar17;
        _swift_bridgeObjectRelease(puVar19);
        uVar3 = local_a8;
        local_a8 = uVar20;
        __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar18);
        __s10Foundation3URLV17lastPathComponentSSvg();
        local_100 = pcVar22;
        (*pcVar22)(puVar18,lVar11);
        local_88 = 0x7070612e;
        local_80 = 0xe400000000000000;
        local_98 = 0;
        uStack_90 = 0xe000000000000000;
        local_78 = uVar3;
        pcStack_70 = (code *)uVar20;
        *(undefined1 **)((long)auStack_160 + lVar2 + 0x10) = puVar4;
        *(undefined1 **)((long)auStack_160 + lVar2 + 0x18) = puVar4;
        pcVar17 = (code *)&local_88;
        puVar15 = &local_98;
        local_108 = puVar4;
        *(undefined **)((long)auStack_160 + lVar2) = puVar9;
        *(undefined1 **)((long)auStack_160 + lVar2 + 8) = puVar4;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (pcVar17,puVar15,0,0,0,1,puVar9,puVar9);
        _swift_bridgeObjectRelease(uVar20);
        if ((local_b8 == pcVar17) && (puVar14 == puVar15)) {
          local_e0 = local_e0 & 0xffffffff00000000;
        }
        else {
          pcVar22 = local_b8;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (local_b8,puVar14,pcVar17,puVar15,1);
          local_e0 = CONCAT44(local_e0._4_4_,(int)pcVar22);
        }
        _swift_bridgeObjectRelease(puVar14);
        _swift_bridgeObjectRelease(puVar15);
        _swift_bridgeObjectRelease(local_b0);
        _swift_bridgeObjectRelease(local_a8);
        puVar15 = (undefined8 *)0x0;
        puVar18 = local_110 + 2;
        local_138 = (long)local_110 * 0x10;
        puVar14 = (undefined8 *)(local_a0 + local_138 + 0x28);
        uVar16 = local_138;
        do {
          uVar13 = uVar16 + 0x10;
          puVar4 = puVar18;
          puVar19 = puVar15;
          if ((long)local_f8 <= (long)puVar18) break;
          uVar3 = puVar14[-1];
          pcVar17 = (code *)*puVar14;
          local_a8 = puVar14[-3];
          uVar20 = puVar14[-2];
          local_f0 = puVar18;
          local_b0 = puVar15;
          local_a0 = uVar16 + 0x10;
          _swift_bridgeObjectRetain(pcVar17);
          _swift_bridgeObjectRetain(uVar20);
          puVar4 = local_d8;
          local_b8 = pcVar17;
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_d8);
          __s10Foundation3URLV17lastPathComponentSSvg();
          lVar11 = local_d0;
          pcVar22 = local_100;
          (*local_100)(puVar4,local_d0);
          puVar18 = local_108;
          puVar9 = PTR___sSSN_1009957f8;
          local_88 = 0x7070612e;
          local_80 = 0xe400000000000000;
          local_98 = 0;
          uStack_90 = 0xe000000000000000;
          local_78 = uVar3;
          pcStack_70 = pcVar17;
          *(undefined1 **)((long)auStack_160 + lVar2 + 0x10) = local_108;
          *(undefined1 **)((long)auStack_160 + lVar2 + 0x18) = puVar18;
          pcVar5 = (code *)&local_88;
          puVar15 = &local_98;
          *(undefined1 **)((long)auStack_160 + lVar2 + 8) = puVar18;
          *(undefined **)((long)auStack_160 + lVar2) = PTR___sSSN_1009957f8;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (pcVar5,puVar15,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          local_c8 = puVar15;
          local_c0 = pcVar5;
          _swift_bridgeObjectRelease(pcVar17);
          uVar3 = local_a8;
          local_a8 = uVar20;
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar4);
          __s10Foundation3URLV17lastPathComponentSSvg();
          (*pcVar22)(puVar4,lVar11);
          local_88 = 0x7070612e;
          local_80 = 0xe400000000000000;
          local_98 = 0;
          uStack_90 = 0xe000000000000000;
          local_78 = uVar3;
          pcStack_70 = (code *)uVar20;
          *(undefined1 **)((long)auStack_160 + lVar2 + 0x10) = puVar18;
          *(undefined1 **)((long)auStack_160 + lVar2 + 0x18) = puVar18;
          pcVar17 = (code *)&local_88;
          puVar19 = &local_98;
          *(undefined1 **)((long)auStack_160 + lVar2 + 8) = puVar18;
          puVar15 = local_c8;
          *(undefined **)((long)auStack_160 + lVar2) = puVar9;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (pcVar17,puVar19,0,0,0,1,puVar9,puVar9);
          _swift_bridgeObjectRelease(uVar20);
          if ((local_c0 == pcVar17) && (puVar15 == puVar19)) {
            uVar23 = 0;
          }
          else {
            pcVar22 = local_c0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (local_c0,puVar15,pcVar17,puVar19,1);
            uVar23 = (uint)pcVar22;
          }
          _swift_bridgeObjectRelease(puVar15);
          _swift_bridgeObjectRelease(puVar19);
          _swift_bridgeObjectRelease(local_b8);
          _swift_bridgeObjectRelease(local_a8);
          puVar18 = local_f0 + 1;
          puVar14 = puVar14 + 2;
          puVar15 = (undefined8 *)((long)local_b0 + 1);
          uVar13 = local_a0;
          puVar4 = local_f0;
          puVar19 = local_b0;
          uVar16 = local_a0;
        } while ((((uint)local_e0 ^ uVar23) & 1) == 0);
        param_3 = local_118;
        unaff_x21 = local_128;
        if ((local_e0 & 1) != 0) {
          if ((long)puVar4 < (long)local_110) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fb4);
            (*pcVar17)();
          }
          if ((long)local_110 < (long)puVar4) {
            lVar11 = 0;
            uVar16 = *local_118;
            puVar15 = (undefined8 *)(uVar16 + uVar13);
            puVar14 = (undefined8 *)(uVar16 + local_138);
            do {
              if (local_110 + lVar11 != (undefined1 *)((long)puVar19 + (long)(local_110 + 1))) {
                if (uVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fd4);
                  (*pcVar17)();
                }
                uVar3 = *puVar14;
                uVar20 = puVar14[1];
                uVar25 = *puVar15;
                puVar14[1] = puVar15[1];
                *puVar14 = uVar25;
                *puVar15 = uVar3;
                puVar15[1] = uVar20;
              }
              puVar19 = (undefined8 *)((long)puVar19 + -1);
              lVar11 = lVar11 + 1;
              puVar15 = puVar15 + -2;
              puVar14 = puVar14 + 2;
            } while ((long)(local_110 + lVar11) < (long)((long)puVar19 + (long)(local_110 + 2)));
          }
        }
      }
      puVar12 = (undefined1 *)param_3[1];
      puVar18 = puVar4;
      if ((long)puVar4 < (long)puVar12) {
        if (SBORROW8((long)puVar4,(long)local_110)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fb0);
          (*pcVar17)();
        }
        if ((long)puVar4 - (long)local_110 < local_120) {
          if (SCARRY8((long)local_110,local_120)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fb8);
            (*pcVar17)();
          }
          puVar1 = local_110 + local_120;
          if ((long)puVar12 <= (long)(local_110 + local_120)) {
            puVar1 = puVar12;
          }
          if ((long)puVar1 < (long)local_110) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fbc);
            (*pcVar17)();
          }
          if (puVar4 != puVar1) {
            local_e0 = *param_3;
            puVar14 = (undefined8 *)(local_e0 + (long)puVar4 * 0x10);
            pcVar17 = (code *)(local_110 + -(long)puVar4);
            local_128 = unaff_x21;
            local_108 = puVar1;
            do {
              puVar15 = (undefined8 *)(local_e0 + (long)puVar4 * 0x10);
              uVar3 = *puVar15;
              uVar16 = puVar15[1];
              local_100 = pcVar17;
              local_f8 = puVar14;
              local_f0 = puVar4;
              do {
                local_c8 = puVar14 + -2;
                local_a8 = *local_c8;
                uVar20 = puVar14[-1];
                local_c0 = pcVar17;
                _swift_bridgeObjectRetain(uVar16);
                _swift_bridgeObjectRetain(uVar20);
                puVar18 = local_d8;
                local_a0 = uVar16;
                __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_d8);
                __s10Foundation3URLV17lastPathComponentSSvg();
                lVar11 = local_d0;
                local_b8 = *(code **)(local_e8 + 8);
                puVar4 = puVar18;
                (*local_b8)(puVar18,local_d0);
                local_88 = 0x7070612e;
                local_80 = 0xe400000000000000;
                local_98 = 0;
                uStack_90 = 0xe000000000000000;
                local_78 = uVar3;
                pcStack_70 = (code *)uVar16;
                FUN_10009ff0c();
                puVar9 = PTR___sSSN_1009957f8;
                *(undefined1 **)((long)auStack_160 + lVar2 + 0x10) = puVar4;
                *(undefined1 **)((long)auStack_160 + lVar2 + 0x18) = puVar4;
                puVar15 = &local_88;
                puVar19 = &local_98;
                *(undefined1 **)((long)auStack_160 + lVar2 + 8) = puVar4;
                *(undefined **)((long)auStack_160 + lVar2) = PTR___sSSN_1009957f8;
                __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                          (puVar15,puVar19,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
                local_b0 = puVar15;
                _swift_bridgeObjectRelease(uVar16);
                uVar3 = local_a8;
                local_a8 = uVar20;
                __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar18);
                __s10Foundation3URLV17lastPathComponentSSvg();
                (*local_b8)(puVar18,lVar11);
                local_88 = 0x7070612e;
                local_80 = 0xe400000000000000;
                local_98 = 0;
                uStack_90 = 0xe000000000000000;
                local_78 = uVar3;
                pcStack_70 = (code *)uVar20;
                *(undefined1 **)((long)auStack_160 + lVar2 + 0x10) = puVar4;
                *(undefined1 **)((long)auStack_160 + lVar2 + 0x18) = puVar4;
                puVar15 = &local_88;
                puVar10 = &local_98;
                *(undefined **)((long)auStack_160 + lVar2) = puVar9;
                *(undefined1 **)((long)auStack_160 + lVar2 + 8) = puVar4;
                __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                          (puVar15,puVar10,0,0,0,1,puVar9,puVar9);
                _swift_bridgeObjectRelease(uVar20);
                if ((local_b0 == puVar15) && (puVar19 == puVar10)) {
                  _swift_bridgeObjectRelease(local_a0);
                  _swift_bridgeObjectRelease(local_a8);
                  _swift_bridgeObjectRelease(puVar19);
                  _swift_bridgeObjectRelease(puVar10);
                  break;
                }
                puVar6 = local_b0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (local_b0,puVar19,puVar15,puVar10,1);
                _swift_bridgeObjectRelease(local_a0);
                _swift_bridgeObjectRelease(local_a8);
                _swift_bridgeObjectRelease(puVar19);
                _swift_bridgeObjectRelease(puVar10);
                if (((ulong)puVar6 & 1) == 0) break;
                if (local_e0 == 0) {
                    /* WARNING: Does not return */
                  pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fc0);
                  (*pcVar17)();
                }
                uVar3 = *puVar14;
                uVar16 = puVar14[1];
                uVar20 = *local_c8;
                puVar14[1] = local_c8[1];
                *puVar14 = uVar20;
                puVar14[-1] = uVar16;
                puVar14 = puVar14 + -2;
                *puVar14 = uVar3;
                pcVar17 = local_c0 + 1;
              } while (local_c0 != (code *)0xffffffffffffffff);
              puVar4 = local_f0 + 1;
              puVar14 = local_f8 + 2;
              pcVar17 = local_100 + -1;
              puVar18 = local_108;
              unaff_x21 = local_128;
            } while (puVar4 != local_108);
          }
        }
      }
      puVar9 = local_58;
      if ((long)puVar18 < (long)local_110) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fa4);
        (*pcVar17)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar16 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100033870(puVar9,uVar16 + 1,1,puVar8);
        puVar8 = puVar9;
      }
      param_3 = local_118;
      *(ulong *)(puVar8 + 0x10) = uVar16 + 1;
      *(undefined1 **)(puVar8 + uVar16 * 0x10 + 0x20) = local_110;
      *(undefined1 **)(puVar8 + uVar16 * 0x10 + 0x28) = puVar18;
      local_58 = puVar8;
      if (*local_130 == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fd8);
        (*pcVar17)();
      }
      FUN_1001a8fe0(&local_58,*local_130,local_118);
      puVar9 = local_58;
      if (unaff_x21 != 0) goto LAB_1001a8f74;
      puVar14 = (undefined8 *)param_3[1];
    } while ((long)puVar18 < (long)puVar14);
    unaff_x21 = 0;
  }
  puVar9 = local_58;
  lVar2 = *local_130;
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fe0);
    (*pcVar17)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10006f924();
  }
  uVar16 = *(ulong *)(puVar9 + 0x10);
  while (local_58 = puVar9, 1 < uVar16) {
    uVar13 = *local_118;
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fdc);
      (*pcVar17)();
    }
    lVar21 = uVar16 - 1;
    lVar24 = *(long *)(puVar9 + uVar16 * 0x10);
    lVar11 = *(long *)(puVar9 + lVar21 * 0x10 + 0x28);
    FUN_1001a924c(uVar13 + lVar24 * 0x10,uVar13 + *(long *)(puVar9 + lVar21 * 0x10 + 0x20) * 0x10,
                  uVar13 + lVar11 * 0x10,lVar2);
    if (unaff_x21 != 0) break;
    if (lVar11 < lVar24) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fa8);
      (*pcVar17)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar16 - 2) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1001a8fac);
      (*pcVar17)();
    }
    *(long *)(puVar9 + uVar16 * 0x10) = lVar24;
    *(long *)((long)(puVar9 + uVar16 * 0x10) + 8) = lVar11;
    local_58 = puVar9;
    FUN_10005fd60(lVar21);
    puVar9 = local_58;
    uVar16 = *(ulong *)(local_58 + 0x10);
  }
LAB_1001a8f74:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

