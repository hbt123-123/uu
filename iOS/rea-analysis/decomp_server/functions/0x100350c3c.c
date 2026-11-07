// rea decompile_all
// name: FUN_100350c3c
// address: 0x100350c3c
// body: available
// range: 0x100350c3c-0x10035134f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010035133c) */

undefined1  [16] FUN_100350c3c(long param_1,undefined8 param_2,undefined8 param_3,code *****param_4)

{
  code ****ppppcVar1;
  code *****pppppcVar2;
  long lVar3;
  code ******ppppppcVar4;
  code ******ppppppcVar5;
  undefined *puVar6;
  code ******ppppppcVar7;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  code *****pppppcVar10;
  code *****pppppcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  code ******ppppppcVar19;
  long unaff_x20;
  long lVar20;
  code *pcVar21;
  char *pcVar22;
  long lVar23;
  undefined1 auVar24 [16];
  code ****appppcStack_140 [5];
  long local_118;
  uint local_10c;
  code *****local_108;
  code *****local_100;
  long local_f8;
  code *****local_f0;
  code *****local_e8;
  code *****local_e0;
  long local_d8;
  code *****local_d0;
  code *****local_c0;
  code *****pppppcStack_b8;
  undefined *local_b0;
  code ****ppppcStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code ****local_90;
  undefined8 local_88;
  code *****local_80;
  code *****local_78;
  
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  puVar12 = PTR___sSSN_1009957f8;
  lVar23 = *(long *)(lVar3 + -8);
  uVar18 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = (code *****)((long)appppcStack_140 + (0x20 - uVar18));
  ppppppcVar19 = (code ******)((long)local_e8 - uVar18);
  lVar20 = *(long *)(param_1 + 0x10);
  pppppcVar11 = (code *****)PTR___swiftEmptyArrayStorage_100995ea0;
  local_f0 = (code *****)ppppppcVar19;
  if (lVar20 != 0) {
    local_f8 = _TtC9Alamofire24URLEncodedFormSerializer::allowedCharacters;
    pcVar22 = (char *)(param_1 + 0x40);
    local_118 = lVar23;
    local_d8 = lVar3;
    do {
      ppppppcVar7 = *(code *******)(pcVar22 + -0x20);
      puVar13 = *(undefined **)(pcVar22 + -0x18);
      ppppppcVar9 = *(code *******)(pcVar22 + -0x10);
      ppppppcVar5 = *(code *******)(pcVar22 + -8);
      if (*pcVar22 == '\0') {
        pcVar21 = *(code **)(unaff_x20 + 0x28);
        puVar6 = puVar13;
        local_e0 = (code *****)ppppppcVar5;
        local_d0 = (code *****)ppppppcVar9;
        if ((long)pcVar21 < 3) {
          if (pcVar21 != (code *)0x0) {
            if (pcVar21 == (code *)0x1) {
              _swift_bridgeObjectRetain(puVar13);
              FUN_100357d58(local_d0,ppppppcVar5,0);
              uVar14 = 0x5f;
            }
            else {
              if (pcVar21 != (code *)0x2) {
LAB_100350efc:
                _swift_bridgeObjectRetain(puVar13);
                FUN_100357d58(local_d0,ppppppcVar5,0);
                (*pcVar21)();
                goto LAB_100350f58;
              }
              _swift_bridgeObjectRetain(puVar13);
              FUN_100357d58(local_d0,ppppppcVar5,0);
              uVar14 = 0x2d;
            }
            FUN_100358240(ppppppcVar7,puVar13,uVar14,0xe100000000000000);
            goto LAB_100350f58;
          }
          _swift_bridgeObjectRetain(puVar13);
LAB_100350f84:
          FUN_100357d58(local_d0,ppppppcVar5,0);
        }
        else {
          if (pcVar21 != (code *)0x3) {
            if (pcVar21 == (code *)0x4) {
              __sSS10uppercasedSSyF();
            }
            else {
              if (pcVar21 != (code *)0x5) goto LAB_100350efc;
              __sSS10lowercasedSSyF();
            }
            goto LAB_100350f84;
          }
          _swift_bridgeObjectRetain_n(puVar13,2);
          FUN_100357d58(local_d0,ppppppcVar5,0);
          ppppppcVar5 = (code ******)0x1;
          ppppppcVar9 = ppppppcVar7;
          FUN_100075d40(1,ppppppcVar7,puVar13);
          local_100 = (code *****)ppppppcVar5;
          _swift_bridgeObjectRelease(puVar13);
          pppppcVar8 = param_4;
          __sSs10uppercasedSSyF(local_100,ppppppcVar9,puVar6);
          local_108 = (code *****)ppppppcVar9;
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRetain(puVar13);
          pppppcVar10 = (code *****)0x1;
          puVar17 = puVar13;
          FUN_1001dff9c();
          puVar6 = puVar13;
          _swift_bridgeObjectRelease(puVar13);
          local_80 = local_100;
          local_78 = local_108;
          local_c0 = pppppcVar10;
          pppppcStack_b8 = (code *****)ppppppcVar7;
          local_b0 = puVar17;
          ppppcStack_a8 = (code ****)pppppcVar8;
          FUN_1003586d4();
          __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_c0,PTR___sSsN_100995a28,puVar6);
          _swift_bridgeObjectRelease(pppppcVar8);
          local_c0 = local_80;
          pppppcStack_b8 = local_78;
          ppppppcVar7 = &local_c0;
          puVar6 = puVar12;
          __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                    (ppppppcVar7,puVar12,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
                     PTR___sSSSTsWP_100995820);
LAB_100350f58:
          _swift_bridgeObjectRelease(puVar13);
          puVar13 = puVar6;
        }
        ppppppcVar9 = (code ******)local_f0;
        local_100 = *(code ******)(lVar23 + 0x10);
        (*(code *)local_100)(local_f0,unaff_x20 + local_f8,local_d8);
        pppppcVar8 = (code *****)0x20;
        __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x20,0xe100000000000000);
        local_c0 = (code *****)ppppppcVar7;
        pppppcStack_b8 = (code *****)puVar13;
        FUN_1002c6438();
        puVar6 = puVar12;
        __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                  (ppppppcVar9,puVar12,pppppcVar8);
        if (puVar6 == (undefined *)0x0) {
          _swift_bridgeObjectRetain(puVar13);
          ppppppcVar9 = ppppppcVar7;
          puVar6 = puVar13;
        }
        local_10c = (uint)*(byte *)(unaff_x20 + 0x48);
        if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
          local_90 = (code ****)0x303225;
          local_88 = 0xe300000000000000;
        }
        else {
          local_88 = 0xe100000000000000;
          local_90 = (code ****)0x2b;
        }
        local_78 = (code *****)0xe100000000000000;
        local_80 = (code *****)0x20;
        local_c0 = (code *****)ppppppcVar9;
        pppppcStack_b8 = (code *****)puVar6;
        ppppppcVar19[-2] = pppppcVar8;
        ppppppcVar19[-1] = pppppcVar8;
        ppppppcVar7 = &local_80;
        ppppppcVar9 = (code ******)&local_90;
        ppppppcVar19[-4] = (code *****)puVar12;
        ppppppcVar19[-3] = pppppcVar8;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (ppppppcVar7,ppppppcVar9,0,0,0,1,puVar12,puVar12);
        lVar3 = local_d8;
        local_108 = *(code ******)(lVar23 + 8);
        (*(code *)local_108)(local_f0,local_d8);
        _swift_bridgeObjectRelease(puVar13);
        _swift_bridgeObjectRelease(puVar6);
        local_c0 = (code *****)ppppppcVar7;
        pppppcStack_b8 = (code *****)ppppppcVar9;
        __sSS6appendyySSF(0x3d,0xe100000000000000);
        ppppppcVar7 = (code ******)local_e8;
        (*(code *)local_100)(local_e8,unaff_x20 + local_f8,lVar3);
        __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x20,0xe100000000000000);
        pppppcVar2 = local_d0;
        pppppcVar10 = local_e0;
        local_80 = local_d0;
        local_78 = local_e0;
        ppppppcVar9 = (code ******)puVar12;
        __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                  (ppppppcVar7,puVar12,pppppcVar8);
        if (ppppppcVar9 == (code ******)0x0) {
          _swift_bridgeObjectRetain(pppppcVar10);
          ppppppcVar7 = (code ******)pppppcVar2;
          ppppppcVar9 = (code ******)pppppcVar10;
        }
        lVar23 = local_118;
        if ((local_10c & 1) == 0) {
          local_a0 = 0x303225;
          local_98 = 0xe300000000000000;
        }
        else {
          local_98 = 0xe100000000000000;
          local_a0 = 0x2b;
        }
        local_88 = 0xe100000000000000;
        local_90 = (code ****)0x20;
        local_80 = (code *****)ppppppcVar7;
        local_78 = (code *****)ppppppcVar9;
        ppppppcVar19[-2] = pppppcVar8;
        ppppppcVar19[-1] = pppppcVar8;
        pppppcVar10 = &local_90;
        puVar15 = &local_a0;
        ppppppcVar19[-4] = (code *****)puVar12;
        ppppppcVar19[-3] = pppppcVar8;
        param_4 = (code *****)0x0;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (pppppcVar10,puVar15,0,0,0,1,puVar12,puVar12);
        (*(code *)local_108)(local_e8,local_d8);
        _swift_bridgeObjectRelease(ppppppcVar9);
        __sSS6appendyySSF(pppppcVar10,puVar15);
        _swift_bridgeObjectRelease(puVar15);
        FUN_100350bc0(local_d0,local_e0,0);
        ppppppcVar4 = (code ******)local_c0;
        ppppppcVar7 = (code ******)pppppcStack_b8;
      }
      else {
        ppppppcVar4 = ppppppcVar9;
        if (*pcVar22 == '\x01') {
          _swift_bridgeObjectRetain(puVar13);
          FUN_100357d58(ppppppcVar9,ppppppcVar5,1);
          FUN_100356704(ppppppcVar9,ppppppcVar7,puVar13);
          _swift_bridgeObjectRelease(puVar13);
          FUN_100350bc0(ppppppcVar9,ppppppcVar5,1);
        }
        else {
          _swift_bridgeObjectRetain(puVar13);
          FUN_100357d58(ppppppcVar9,ppppppcVar5,2);
          FUN_100356eac(ppppppcVar9,ppppppcVar7,puVar13);
          _swift_bridgeObjectRelease(puVar13);
          FUN_100350bc0(ppppppcVar9,ppppppcVar5,2);
        }
      }
      pppppcVar8 = pppppcVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppcVar10 = pppppcVar11;
      if (((ulong)pppppcVar8 & 1) == 0) {
        pppppcVar10 = (code *****)0x0;
        FUN_1002968f4(0,(long)pppppcVar11[2] + 1,1);
        param_4 = pppppcVar11;
      }
      ppppcVar1 = pppppcVar10[2];
      pppppcVar11 = pppppcVar10;
      if ((code ****)((ulong)pppppcVar10[3] >> 1) <= ppppcVar1) {
        pppppcVar11 = (code *****)(ulong)((code ****)0x1 < pppppcVar10[3]);
        FUN_1002968f4(pppppcVar11,(code ****)((long)ppppcVar1 + 1U),1);
        param_4 = pppppcVar10;
      }
      pcVar22 = pcVar22 + 0x28;
      pppppcVar11[2] = (code ****)((long)ppppcVar1 + 1U);
      pppppcVar11[(long)ppppcVar1 * 2 + 4] = (code ****)ppppppcVar4;
      pppppcVar11[(long)ppppcVar1 * 2 + 5] = (code ****)ppppppcVar7;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    local_c0 = pppppcVar11;
    _swift_bridgeObjectRetain(pppppcVar11);
    FUN_1002c3b6c(&local_c0);
    _swift_bridgeObjectRelease(pppppcVar11);
    pppppcVar11 = local_c0;
  }
  puVar12 = &DAT_100a82770;
  local_c0 = pppppcVar11;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar13 = puVar12;
  FUN_100280754();
  uVar14 = 0x26;
  uVar16 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,puVar12,puVar13);
  _swift_bridgeObjectRelease(pppppcVar11);
  auVar24._8_8_ = uVar16;
  auVar24._0_8_ = uVar14;
  return auVar24;
}

