// rea decompile_all
// name: FUN_100356704
// address: 0x100356704
// body: available
// range: 0x100356704-0x100356eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100356e98) */

undefined1  [16]
FUN_100356704(long param_1,code ******param_2,code ******param_3,undefined8 param_4)

{
  code ******ppppppcVar1;
  code ****ppppcVar2;
  char cVar3;
  code ****ppppcVar4;
  long lVar5;
  undefined8 uVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  code ******ppppppcVar9;
  code *****pppppcVar10;
  code ******ppppppcVar11;
  code ******ppppppcVar12;
  code *****pppppcVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  code ******ppppppcVar17;
  undefined8 *puVar18;
  ulong uVar19;
  code ******ppppppcVar20;
  long unaff_x20;
  char *pcVar21;
  code *pcVar22;
  code ******ppppppcVar23;
  undefined1 auVar24 [16];
  code ****appppcStack_160 [5];
  uint local_134;
  code *local_130;
  code *****local_128;
  long local_120;
  code *****local_118;
  code *****local_110;
  long local_108;
  code *****local_100;
  long local_f8;
  code *****local_f0;
  code *****local_e8;
  code *****local_e0;
  code *****local_c0;
  code *****pppppcStack_b8;
  code *****local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code ****local_90;
  undefined8 local_88;
  code *****local_80;
  code *****local_78;
  code ****local_70;
  
  lVar5 = 0;
  local_e8 = (code *****)param_2;
  local_e0 = (code *****)param_3;
  __s10Foundation12CharacterSetVMa();
  local_108 = *(long *)(lVar5 + -8);
  uVar19 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110 = (code *****)((long)appppcStack_160 + (0x20 - uVar19));
  ppppppcVar20 = (code ******)((long)local_110 - uVar19);
  local_70 = (code ****)PTR___swiftEmptyArrayStorage_100995ea0;
  local_118 = (code *****)ppppppcVar20;
  FUN_1002c0aec(0,0,0);
  local_f0 = *(code ******)(param_1 + 0x10);
  if ((code ******)local_f0 != (code ******)0x0) {
    ppppppcVar23 = (code ******)0x0;
    local_120 = _TtC9Alamofire24URLEncodedFormSerializer::allowedCharacters;
    pcVar21 = (char *)(param_1 + 0x30);
    local_f8 = lVar5;
    do {
      ppppcVar4 = local_70;
      pppppcVar10 = local_e0;
      ppppppcVar1 = *(code *******)(pcVar21 + -0x10);
      ppppppcVar12 = *(code *******)(pcVar21 + -8);
      cVar3 = *pcVar21;
      pcVar22 = *(code **)(unaff_x20 + 0x18);
      if (pcVar22 == (code *)0x0) {
        local_c0 = local_e8;
        pppppcStack_b8 = local_e0;
        FUN_100357d58(ppppppcVar1,ppppppcVar12,cVar3);
        _swift_bridgeObjectRetain(pppppcVar10);
        uVar6 = 0x5d5b;
        uVar16 = 0xe200000000000000;
LAB_1003568a8:
        __sSS6appendyySSF(uVar6,uVar16);
        ppppppcVar11 = (code ******)pppppcStack_b8;
        ppppppcVar7 = (code ******)local_c0;
        if (cVar3 == '\0') goto LAB_100356948;
LAB_1003568b4:
        ppppppcVar9 = ppppppcVar1;
        if (cVar3 == '\x01') {
          FUN_100356704();
          _swift_bridgeObjectRelease(ppppppcVar11);
          uVar6 = 1;
        }
        else {
          FUN_100356eac(ppppppcVar1,ppppppcVar7,ppppppcVar11);
          _swift_bridgeObjectRelease(ppppppcVar11);
          uVar6 = 2;
        }
        FUN_100350bc0(ppppppcVar1,ppppppcVar12,uVar6);
      }
      else {
        if (pcVar22 == (code *)0x1) {
          FUN_100357d58(ppppppcVar1,ppppppcVar12,cVar3);
          ppppppcVar11 = (code ******)local_e0;
          _swift_bridgeObjectRetain(local_e0);
          ppppppcVar7 = (code ******)local_e8;
        }
        else {
          if (pcVar22 == (code *)0x2) {
            local_c0 = local_e8;
            pppppcStack_b8 = local_e0;
            FUN_100357d58(ppppppcVar1,ppppppcVar12,cVar3);
            _swift_bridgeObjectRetain(pppppcVar10);
            __sSS6appendyySSF(0x5b,0xe100000000000000);
            puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
            local_80 = (code *****)ppppppcVar23;
            __ss23CustomStringConvertibleP11descriptionSSvgTj
                      (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
            __sSS6appendyySSF();
            _swift_bridgeObjectRelease(puVar14);
            uVar6 = 0x5d;
            uVar16 = 0xe100000000000000;
            goto LAB_1003568a8;
          }
          FUN_100357d58(ppppppcVar1,ppppppcVar12,cVar3);
          ppppppcVar7 = (code ******)local_e8;
          ppppppcVar11 = (code ******)local_e0;
          (*pcVar22)(local_e8,local_e0,ppppppcVar23);
        }
        if (cVar3 != '\0') goto LAB_1003568b4;
LAB_100356948:
        pcVar22 = *(code **)(unaff_x20 + 0x28);
        ppppppcVar9 = ppppppcVar11;
        if ((long)pcVar22 < 3) {
          if (pcVar22 != (code *)0x0) {
            if (pcVar22 == (code *)0x1) {
              uVar6 = 0x5f;
            }
            else {
              if (pcVar22 != (code *)0x2) {
LAB_100356a90:
                (*pcVar22)();
                goto LAB_100356ac8;
              }
              uVar6 = 0x2d;
            }
            FUN_100358240(ppppppcVar7,ppppppcVar11,uVar6,0xe100000000000000);
            goto LAB_100356ac8;
          }
        }
        else {
          if (pcVar22 == (code *)0x3) {
            _swift_bridgeObjectRetain(ppppppcVar11);
            ppppppcVar8 = (code ******)0x1;
            ppppppcVar9 = ppppppcVar7;
            ppppppcVar17 = ppppppcVar11;
            FUN_100075d40(1,ppppppcVar7,ppppppcVar11);
            local_100 = (code *****)ppppppcVar8;
            _swift_bridgeObjectRelease(ppppppcVar11);
            uVar6 = param_4;
            __sSs10uppercasedSSyF(local_100,ppppppcVar9,ppppppcVar17);
            local_128 = (code *****)ppppppcVar9;
            _swift_bridgeObjectRelease(param_4);
            _swift_bridgeObjectRetain(ppppppcVar11);
            pppppcVar10 = (code *****)0x1;
            ppppppcVar17 = ppppppcVar11;
            FUN_1001dff9c();
            ppppppcVar9 = ppppppcVar11;
            _swift_bridgeObjectRelease(ppppppcVar11);
            local_80 = local_100;
            local_78 = local_128;
            local_c0 = pppppcVar10;
            pppppcStack_b8 = (code *****)ppppppcVar7;
            local_b0 = (code *****)ppppppcVar17;
            uStack_a8 = uVar6;
            FUN_1003586d4();
            __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF
                      (&local_c0,PTR___sSsN_100995a28,ppppppcVar9);
            _swift_bridgeObjectRelease(uVar6);
            local_c0 = local_80;
            pppppcStack_b8 = local_78;
            ppppppcVar7 = &local_c0;
            ppppppcVar9 = (code ******)PTR___sSSN_1009957f8;
            __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                      (ppppppcVar7,PTR___sSSN_1009957f8,
                       PTR___sSSs25LosslessStringConvertiblesWP_100995838,PTR___sSSSTsWP_100995820);
          }
          else if (pcVar22 == (code *)0x4) {
            __sSS10uppercasedSSyF();
          }
          else {
            if (pcVar22 != (code *)0x5) goto LAB_100356a90;
            __sSS10lowercasedSSyF();
          }
LAB_100356ac8:
          _swift_bridgeObjectRelease(ppppppcVar11);
        }
        ppppppcVar11 = (code ******)local_118;
        local_128 = *(code ******)(local_108 + 0x10);
        (*(code *)local_128)(local_118,unaff_x20 + local_120,local_f8);
        pppppcVar10 = (code *****)0x20;
        __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x20,0xe100000000000000);
        local_c0 = (code *****)ppppppcVar7;
        pppppcStack_b8 = (code *****)ppppppcVar9;
        FUN_1002c6438();
        ppppppcVar17 = (code ******)PTR___sSSN_1009957f8;
        __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                  (ppppppcVar11,PTR___sSSN_1009957f8,pppppcVar10);
        if (ppppppcVar17 == (code ******)0x0) {
          _swift_bridgeObjectRetain(ppppppcVar9);
          ppppppcVar17 = ppppppcVar9;
          ppppppcVar11 = ppppppcVar7;
        }
        puVar14 = PTR___sSSN_1009957f8;
        local_134 = (uint)*(byte *)(unaff_x20 + 0x48);
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
        local_100 = (code *****)ppppppcVar12;
        local_c0 = (code *****)ppppppcVar11;
        pppppcStack_b8 = (code *****)ppppppcVar17;
        ppppppcVar20[-2] = pppppcVar10;
        ppppppcVar20[-1] = pppppcVar10;
        ppppppcVar12 = &local_80;
        ppppppcVar7 = (code ******)&local_90;
        ppppppcVar20[-3] = pppppcVar10;
        ppppppcVar20[-4] = (code *****)PTR___sSSN_1009957f8;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (ppppppcVar12,ppppppcVar7,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        lVar5 = local_f8;
        local_130 = *(code **)(local_108 + 8);
        (*local_130)(local_118,local_f8);
        _swift_bridgeObjectRelease(ppppppcVar9);
        _swift_bridgeObjectRelease(ppppppcVar17);
        local_c0 = (code *****)ppppppcVar12;
        pppppcStack_b8 = (code *****)ppppppcVar7;
        __sSS6appendyySSF(0x3d,0xe100000000000000);
        ppppppcVar12 = (code ******)local_110;
        (*(code *)local_128)(local_110,unaff_x20 + local_120,lVar5);
        __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x20,0xe100000000000000);
        pppppcVar13 = local_100;
        local_78 = local_100;
        ppppppcVar7 = (code ******)puVar14;
        local_80 = (code *****)ppppppcVar1;
        __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                  (ppppppcVar12,puVar14,pppppcVar10);
        if (ppppppcVar7 == (code ******)0x0) {
          _swift_bridgeObjectRetain(pppppcVar13);
          ppppppcVar12 = ppppppcVar1;
          ppppppcVar7 = (code ******)pppppcVar13;
        }
        if ((local_134 & 1) == 0) {
          local_a0 = 0x303225;
          local_98 = 0xe300000000000000;
        }
        else {
          local_98 = 0xe100000000000000;
          local_a0 = 0x2b;
        }
        local_88 = 0xe100000000000000;
        local_90 = (code ****)0x20;
        local_80 = (code *****)ppppppcVar12;
        local_78 = (code *****)ppppppcVar7;
        ppppppcVar20[-2] = pppppcVar10;
        ppppppcVar20[-1] = pppppcVar10;
        pppppcVar13 = &local_90;
        puVar18 = &local_a0;
        ppppppcVar20[-4] = (code *****)puVar14;
        ppppppcVar20[-3] = pppppcVar10;
        param_4 = 0;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (pppppcVar13,puVar18,0,0,0,1,puVar14,puVar14);
        (*local_130)(local_110,local_f8);
        _swift_bridgeObjectRelease(ppppppcVar7);
        __sSS6appendyySSF(pppppcVar13,puVar18);
        _swift_bridgeObjectRelease(puVar18);
        FUN_100350bc0(ppppppcVar1,local_100,0);
        ppppppcVar9 = (code ******)local_c0;
        ppppppcVar7 = (code ******)pppppcStack_b8;
      }
      ppppcVar2 = (code ****)ppppcVar4[2];
      local_70 = ppppcVar4;
      if ((code ****)((ulong)ppppcVar4[3] >> 1) <= ppppcVar2) {
        FUN_1002c0aec((code ****)0x1 < ppppcVar4[3],(code ****)((long)ppppcVar2 + 1U),1);
      }
      ppppppcVar23 = (code ******)((long)ppppppcVar23 + 1);
      pcVar21 = pcVar21 + 0x18;
      local_70[2] = (code ***)((long)ppppcVar2 + 1U);
      local_70[(long)ppppcVar2 * 2 + 4] = (code ***)ppppppcVar9;
      local_70[(long)ppppcVar2 * 2 + 5] = (code ***)ppppppcVar7;
    } while ((code ******)local_f0 != ppppppcVar23);
  }
  ppppcVar4 = local_70;
  pppppcVar10 = (code *****)local_70;
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    local_c0 = (code *****)local_70;
    _swift_bridgeObjectRetain(local_70);
    FUN_1002c3b6c(&local_c0);
    _swift_release(ppppcVar4);
    pppppcVar10 = local_c0;
  }
  puVar14 = &DAT_100a82770;
  local_c0 = pppppcVar10;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar15 = puVar14;
  FUN_100280754();
  uVar6 = 0x26;
  uVar16 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,puVar14,puVar15);
  _swift_bridgeObjectRelease(pppppcVar10);
  auVar24._8_8_ = uVar16;
  auVar24._0_8_ = uVar6;
  return auVar24;
}

