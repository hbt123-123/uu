// rea decompile_all
// name: FUN_100356eac
// address: 0x100356eac
// body: available
// range: 0x100356eac-0x1003575df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003575cc) */

undefined1  [16]
FUN_100356eac(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  byte bVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *****pppppuVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 *****pppppuVar23;
  code *pcVar24;
  undefined8 ****ppppuVar25;
  long unaff_x20;
  long lVar26;
  char *pcVar27;
  undefined1 auVar28 [16];
  undefined8 ***apppuStack_180 [5];
  code *local_158;
  long local_150;
  undefined8 ****local_148;
  code *local_140;
  undefined8 ****local_138;
  undefined8 ***local_130;
  undefined8 ****local_128;
  long local_120;
  undefined8 ****local_118;
  undefined8 ****local_110;
  long local_108;
  undefined8 ****local_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 ****local_88;
  undefined8 ****local_80;
  undefined8 ***local_70;
  
  lVar7 = 0;
  __s10Foundation12CharacterSetVMa();
  local_108 = *(long *)(lVar7 + -8);
  uVar22 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110 = (undefined8 ****)((long)apppuStack_180 + (0x20 - uVar22));
  pppppuVar23 = (undefined8 *****)((long)local_110 - uVar22);
  lVar26 = *(long *)(param_1 + 0x10);
  ppppuVar25 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  local_118 = pppppuVar23;
  if (lVar26 != 0) {
    local_70 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1002c0aec(0,lVar26,0);
    pcVar1 = *(code **)(unaff_x20 + 0x38);
    local_120 = _TtC9Alamofire24URLEncodedFormSerializer::allowedCharacters;
    pcVar27 = (char *)(param_1 + 0x40);
    do {
      ppppuVar25 = (undefined8 ****)local_70;
      uVar17 = *(undefined8 *)(pcVar27 + -0x20);
      uVar21 = *(undefined8 *)(pcVar27 + -0x18);
      pppppuVar13 = *(undefined8 ******)(pcVar27 + -0x10);
      pppppuVar3 = *(undefined8 ******)(pcVar27 + -8);
      cVar4 = *pcVar27;
      _swift_bridgeObjectRetain(uVar21);
      FUN_100357d58(pppppuVar13,pppppuVar3,cVar4);
      uVar18 = uVar21;
      (*pcVar1)(uVar17,uVar21);
      local_c8 = param_2;
      ppppuStack_c0 = param_3;
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(uVar17,uVar18);
      _swift_bridgeObjectRelease(uVar18);
      pppppuVar9 = (undefined8 *****)ppppuStack_c0;
      pppppuVar10 = (undefined8 *****)local_c8;
      if (cVar4 == '\0') {
        pcVar24 = *(code **)(unaff_x20 + 0x28);
        local_138 = ppppuStack_c0;
        local_150 = lVar26;
        if ((long)pcVar24 < 3) {
          if (pcVar24 == (code *)0x0) {
            _swift_bridgeObjectRetain(ppppuStack_c0);
          }
          else {
            if (pcVar24 == (code *)0x1) {
              uVar17 = 0x5f;
            }
            else {
              if (pcVar24 != (code *)0x2) {
LAB_1003571b0:
                (*pcVar24)();
                goto LAB_1003571f0;
              }
              uVar17 = 0x2d;
            }
            FUN_100358240(local_c8,ppppuStack_c0,uVar17,0xe100000000000000);
          }
        }
        else if (pcVar24 == (code *)0x3) {
          _swift_bridgeObjectRetain(ppppuStack_c0);
          pppppuVar8 = (undefined8 *****)0x1;
          pppppuVar19 = pppppuVar10;
          pppppuVar12 = pppppuVar9;
          FUN_100075d40(1,pppppuVar10,pppppuVar9);
          _swift_bridgeObjectRelease(pppppuVar9);
          uVar17 = param_4;
          __sSs10uppercasedSSyF(pppppuVar8,pppppuVar19,pppppuVar12);
          local_128 = pppppuVar19;
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRetain(pppppuVar9);
          ppppuVar11 = (undefined8 ****)0x1;
          pppppuVar19 = pppppuVar9;
          FUN_1001dff9c();
          _swift_bridgeObjectRelease(pppppuVar9);
          local_80 = local_128;
          local_c8 = ppppuVar11;
          ppppuStack_c0 = pppppuVar10;
          local_b8 = pppppuVar19;
          uStack_b0 = uVar17;
          local_88 = pppppuVar8;
          FUN_1003586d4();
          __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_c8,PTR___sSsN_100995a28,pppppuVar9)
          ;
          _swift_bridgeObjectRelease(uVar17);
          local_c8 = local_88;
          ppppuStack_c0 = local_80;
          pppppuVar10 = &local_c8;
          pppppuVar9 = (undefined8 *****)PTR___sSSN_1009957f8;
          __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                    (pppppuVar10,PTR___sSSN_1009957f8,
                     PTR___sSSs25LosslessStringConvertiblesWP_100995838,PTR___sSSSTsWP_100995820);
        }
        else if (pcVar24 == (code *)0x4) {
          __sSS10uppercasedSSyF();
        }
        else {
          if (pcVar24 != (code *)0x5) goto LAB_1003571b0;
          __sSS10lowercasedSSyF();
        }
LAB_1003571f0:
        pppppuVar12 = (undefined8 *****)local_118;
        local_140 = *(code **)(local_108 + 0x10);
        (*local_140)(local_118,unaff_x20 + local_120,lVar7);
        ppppuVar11 = (undefined8 ****)0x20;
        __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x20,0xe100000000000000);
        local_c8 = pppppuVar10;
        ppppuStack_c0 = pppppuVar9;
        FUN_1002c6438();
        pppppuVar19 = (undefined8 *****)PTR___sSSN_1009957f8;
        pppppuVar8 = (undefined8 *****)PTR___sSSN_1009957f8;
        __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                  (pppppuVar12,PTR___sSSN_1009957f8,ppppuVar11);
        local_148 = pppppuVar9;
        if (pppppuVar8 == (undefined8 *****)0x0) {
          _swift_bridgeObjectRetain(pppppuVar9);
          pppppuVar12 = pppppuVar10;
          pppppuVar8 = pppppuVar9;
        }
        bVar5 = *(byte *)(unaff_x20 + 0x48);
        if ((bVar5 & 1) == 0) {
          local_98 = (undefined8 ****)0x303225;
          local_90 = 0xe300000000000000;
        }
        else {
          local_90 = 0xe100000000000000;
          local_98 = (undefined8 ****)0x2b;
        }
        local_80 = (undefined8 ****)0xe100000000000000;
        local_88 = (undefined8 ****)0x20;
        local_130 = ppppuVar25;
        local_128 = pppppuVar13;
        local_c8 = pppppuVar12;
        ppppuStack_c0 = pppppuVar8;
        pppppuVar23[-2] = ppppuVar11;
        pppppuVar23[-1] = ppppuVar11;
        pppppuVar13 = &local_88;
        pppppuVar10 = (undefined8 *****)&local_98;
        pppppuVar23[-4] = pppppuVar19;
        pppppuVar23[-3] = ppppuVar11;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (pppppuVar13,pppppuVar10,0,0,0,1,pppppuVar19,pppppuVar19);
        local_158 = *(code **)(local_108 + 8);
        (*local_158)(local_118,lVar7);
        _swift_bridgeObjectRelease(local_148);
        _swift_bridgeObjectRelease(pppppuVar8);
        local_c8 = pppppuVar13;
        ppppuStack_c0 = pppppuVar10;
        __sSS6appendyySSF(0x3d,0xe100000000000000);
        pppppuVar13 = (undefined8 *****)local_110;
        (*local_140)(local_110,unaff_x20 + local_120,lVar7);
        __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x20,0xe100000000000000);
        ppppuVar6 = local_128;
        local_88 = local_128;
        local_80 = pppppuVar3;
        __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                  (pppppuVar13,pppppuVar19,ppppuVar11);
        if (pppppuVar19 == (undefined8 *****)0x0) {
          _swift_bridgeObjectRetain(pppppuVar3);
          pppppuVar13 = (undefined8 *****)ppppuVar6;
          pppppuVar19 = pppppuVar3;
        }
        ppppuVar25 = (undefined8 ****)local_130;
        if ((bVar5 & 1) == 0) {
          local_a8 = 0x303225;
          local_a0 = 0xe300000000000000;
        }
        else {
          local_a0 = 0xe100000000000000;
          local_a8 = 0x2b;
        }
        local_90 = 0xe100000000000000;
        local_98 = (undefined8 ****)0x20;
        local_88 = pppppuVar13;
        local_80 = pppppuVar19;
        pppppuVar23[-2] = ppppuVar11;
        pppppuVar23[-1] = ppppuVar11;
        ppppuVar14 = &local_98;
        puVar20 = &local_a8;
        pppppuVar23[-3] = ppppuVar11;
        pppppuVar23[-4] = (undefined8 ****)PTR___sSSN_1009957f8;
        param_4 = 0;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (ppppuVar14,puVar20,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        (*local_158)(local_110,lVar7);
        _swift_bridgeObjectRelease(pppppuVar19);
        __sSS6appendyySSF(ppppuVar14,puVar20);
        _swift_bridgeObjectRelease(uVar21);
        _swift_bridgeObjectRelease(local_138);
        _swift_bridgeObjectRelease(puVar20);
        FUN_100350bc0(ppppuVar6,pppppuVar3,0);
        pppppuVar10 = (undefined8 *****)local_c8;
        pppppuVar19 = (undefined8 *****)ppppuStack_c0;
        lVar26 = local_150;
      }
      else {
        pppppuVar10 = pppppuVar13;
        pppppuVar19 = (undefined8 *****)local_c8;
        if (cVar4 == '\x01') {
          FUN_100356704();
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRelease(pppppuVar9);
          FUN_100350bc0(pppppuVar13,pppppuVar3,1);
        }
        else {
          FUN_100356eac(pppppuVar13,local_c8,ppppuStack_c0);
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRelease(pppppuVar9);
          FUN_100350bc0(pppppuVar13,pppppuVar3,2);
        }
      }
      pppuVar2 = ppppuVar25[2];
      local_70 = ppppuVar25;
      if ((undefined8 ***)((ulong)ppppuVar25[3] >> 1) <= pppuVar2) {
        FUN_1002c0aec((undefined8 ***)0x1 < ppppuVar25[3],(undefined8 ***)((long)pppuVar2 + 1U),1);
      }
      pcVar27 = pcVar27 + 0x28;
      local_70[2] = (undefined8 ***)((long)pppuVar2 + 1U);
      local_70[(long)pppuVar2 * 2 + 4] = pppppuVar10;
      local_70[(long)pppuVar2 * 2 + 5] = pppppuVar19;
      lVar26 = lVar26 + -1;
      ppppuVar25 = (undefined8 ****)local_70;
    } while (lVar26 != 0);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    local_c8 = ppppuVar25;
    _swift_bridgeObjectRetain(ppppuVar25);
    FUN_1002c3b6c(&local_c8);
    _swift_bridgeObjectRelease(ppppuVar25);
    ppppuVar25 = local_c8;
  }
  puVar15 = &DAT_100a82770;
  local_c8 = ppppuVar25;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar16 = puVar15;
  FUN_100280754();
  uVar17 = 0x26;
  uVar21 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,puVar15,puVar16);
  _swift_bridgeObjectRelease(ppppuVar25);
  auVar28._8_8_ = uVar21;
  auVar28._0_8_ = uVar17;
  return auVar28;
}

