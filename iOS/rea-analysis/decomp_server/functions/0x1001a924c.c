// rea decompile_all
// name: FUN_1001a924c
// address: 0x1001a924c
// body: available
// range: 0x1001a924c-0x1001a9873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1001a924c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  code *pcVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 auStack_120 [4];
  undefined1 auStack_100 [8];
  undefined8 *local_f8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_58;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_100 + lVar2;
  lVar16 = (long)param_2 - (long)param_1;
  lVar20 = lVar16 + 0xf;
  if (-1 < lVar16) {
    lVar20 = lVar16;
  }
  lVar20 = lVar20 >> 4;
  lVar18 = (long)param_3 - (long)param_2;
  lVar22 = lVar18 + 0xf;
  if (-1 < lVar18) {
    lVar22 = lVar18;
  }
  lVar22 = lVar22 >> 4;
  if (lVar20 < lVar22) {
    if ((param_4 != param_1) || (param_1 + lVar20 * 2 <= param_4)) {
      _memmove(param_4,param_1,lVar20 << 4);
    }
    local_58 = param_4 + lVar20 * 2;
    puVar24 = param_1;
    if (0xf < lVar16) {
      do {
        if (param_3 <= param_2) break;
        uVar25 = *param_2;
        uVar9 = param_2[1];
        uVar5 = *param_4;
        uVar19 = param_4[1];
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar19);
        uVar17 = uVar9;
        __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar13);
        __s10Foundation3URLV17lastPathComponentSSvg();
        pcVar23 = *(code **)(lVar12 + 8);
        puVar7 = puVar13;
        (*pcVar23)(puVar13,lVar4);
        local_80 = 0x7070612e;
        local_78 = 0xe400000000000000;
        local_90 = 0;
        uStack_88 = 0xe000000000000000;
        local_70 = uVar25;
        uStack_68 = uVar17;
        FUN_10009ff0c();
        puVar3 = PTR___sSSN_1009957f8;
        *(undefined1 **)((long)auStack_120 + lVar2 + 0x10) = puVar7;
        *(undefined1 **)((long)auStack_120 + lVar2 + 0x18) = puVar7;
        puVar8 = &local_80;
        puVar21 = &local_90;
        *(undefined1 **)((long)auStack_120 + lVar2 + 8) = puVar7;
        *(undefined **)((long)auStack_120 + lVar2) = PTR___sSSN_1009957f8;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (puVar8,puVar21,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        _swift_bridgeObjectRelease(uVar17);
        uVar25 = uVar19;
        __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar13);
        __s10Foundation3URLV17lastPathComponentSSvg();
        (*pcVar23)(puVar13,lVar4);
        local_80 = 0x7070612e;
        local_78 = 0xe400000000000000;
        local_90 = 0;
        uStack_88 = 0xe000000000000000;
        local_70 = uVar5;
        uStack_68 = uVar25;
        *(undefined1 **)((long)auStack_120 + lVar2 + 0x10) = puVar7;
        *(undefined1 **)((long)auStack_120 + lVar2 + 0x18) = puVar7;
        puVar6 = &local_80;
        puVar10 = &local_90;
        *(undefined **)((long)auStack_120 + lVar2) = puVar3;
        *(undefined1 **)((long)auStack_120 + lVar2 + 8) = puVar7;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (puVar6,puVar10,0,0,0,1,puVar3,puVar3);
        _swift_bridgeObjectRelease(uVar25);
        if ((puVar8 == puVar6) && (puVar21 == puVar10)) {
          _swift_bridgeObjectRelease(uVar9);
          _swift_bridgeObjectRelease(uVar19);
          _swift_bridgeObjectRelease(puVar21);
          _swift_bridgeObjectRelease(puVar10);
LAB_1001a9524:
          puVar8 = param_4;
          param_4 = param_4 + 2;
          puVar6 = param_2;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (puVar8,puVar21,puVar6,puVar10,1);
          _swift_bridgeObjectRelease(uVar9);
          _swift_bridgeObjectRelease(uVar19);
          _swift_bridgeObjectRelease(puVar21);
          _swift_bridgeObjectRelease(puVar10);
          if (((ulong)puVar8 & 1) == 0) goto LAB_1001a9524;
          puVar6 = param_2 + 2;
          puVar8 = param_2;
        }
        if (puVar24 != puVar8) {
          uVar25 = *puVar8;
          puVar24[1] = puVar8[1];
          *puVar24 = uVar25;
        }
        puVar24 = puVar24 + 2;
        param_2 = puVar6;
      } while (param_4 < local_58);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar22 * 2 <= param_4)) {
      _memmove(param_4,param_2,lVar22 << 4);
    }
    local_58 = param_4 + lVar22 * 2;
    puVar24 = param_2;
    if (0xf < lVar18) {
      while (puVar24 = param_2, param_1 < param_2) {
        local_f8 = param_2 + -2;
        puVar6 = param_3;
        while( true ) {
          param_3 = puVar6 + -2;
          puVar14 = local_58 + -2;
          uVar19 = *puVar14;
          uVar17 = local_58[-1];
          uVar25 = param_2[-2];
          uVar5 = param_2[-1];
          _swift_bridgeObjectRetain(uVar17);
          _swift_bridgeObjectRetain(uVar5);
          uVar9 = uVar17;
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar13);
          __s10Foundation3URLV17lastPathComponentSSvg();
          pcVar23 = *(code **)(lVar12 + 8);
          puVar7 = puVar13;
          (*pcVar23)(puVar13,lVar4);
          local_80 = 0x7070612e;
          local_78 = 0xe400000000000000;
          local_90 = 0;
          uStack_88 = 0xe000000000000000;
          local_70 = uVar19;
          uStack_68 = uVar9;
          FUN_10009ff0c();
          puVar3 = PTR___sSSN_1009957f8;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x10) = puVar7;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x18) = puVar7;
          puVar21 = &local_80;
          puVar10 = &local_90;
          *(undefined1 **)((long)auStack_120 + lVar2 + 8) = puVar7;
          *(undefined **)((long)auStack_120 + lVar2) = PTR___sSSN_1009957f8;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (puVar21,puVar10,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          _swift_bridgeObjectRelease(uVar9);
          uVar9 = uVar5;
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar13);
          __s10Foundation3URLV17lastPathComponentSSvg();
          (*pcVar23)(puVar13,lVar4);
          local_80 = 0x7070612e;
          local_78 = 0xe400000000000000;
          local_90 = 0;
          uStack_88 = 0xe000000000000000;
          local_70 = uVar25;
          uStack_68 = uVar9;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x10) = puVar7;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x18) = puVar7;
          puVar8 = &local_80;
          puVar11 = &local_90;
          *(undefined **)((long)auStack_120 + lVar2) = puVar3;
          *(undefined1 **)((long)auStack_120 + lVar2 + 8) = puVar7;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (puVar8,puVar11,0,0,0,1,puVar3,puVar3);
          _swift_bridgeObjectRelease(uVar9);
          if ((puVar21 == puVar8) && (puVar10 == puVar11)) {
            puVar21 = (undefined8 *)0x0;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (puVar21,puVar10,puVar8,puVar11,1);
          }
          _swift_bridgeObjectRelease(puVar10);
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(uVar17);
          _swift_bridgeObjectRelease(uVar5);
          if (((ulong)puVar21 & 1) != 0) break;
          if (puVar6 != local_58) {
            uVar25 = *puVar14;
            puVar6[-1] = local_58[-1];
            *param_3 = uVar25;
          }
          puVar6 = param_3;
          local_58 = puVar14;
          if (puVar14 <= param_4) goto LAB_1001a980c;
        }
        if (puVar6 != param_2) {
          uVar25 = *local_f8;
          puVar6[-1] = local_f8[1];
          *param_3 = uVar25;
        }
        puVar24 = local_f8;
        param_2 = local_f8;
        if (local_58 <= param_4) break;
      }
    }
  }
LAB_1001a980c:
  uVar15 = (long)local_58 - (long)param_4;
  uVar1 = uVar15 + 0xf;
  if (-1 < (long)uVar15) {
    uVar1 = uVar15;
  }
  if ((puVar24 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar24)) {
    _memmove(puVar24,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}

