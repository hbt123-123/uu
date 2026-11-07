// rea decompile_all
// name: FUN_100409994
// address: 0x100409994
// body: available
// range: 0x100409994-0x10040a11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010040a108) */

void FUN_100409994(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  long *plVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *****pppppuVar18;
  long extraout_x8_02;
  code *pcVar19;
  undefined8 *unaff_x20;
  undefined8 ****ppppuVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  undefined8 *****pppppuVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 ***local_130;
  long local_128;
  undefined8 ****local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  long *local_f8;
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 ****local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****local_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar6 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar23 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppuVar7 = (undefined8 ***)0x0;
  __s10Foundation3URLVMa();
  local_c8 = (undefined8 ****)pppuVar7[-1];
  (*(code *)PTR____chkstk_darwin_100995498)(local_c8[8]);
  pppppuVar24 = (undefined8 *****)(lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pppppuVar18 = (undefined8 *****)((long)pppppuVar24 - extraout_x8_01);
  lVar9 = 0;
  local_d0 = pppppuVar18;
  __s10Foundation10URLRequestVMa();
  lVar21 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar26 = (long)pppppuVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar26;
  (**(code **)(lVar21 + 0x10))(lVar26,param_2,lVar9);
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
  if (lVar6 == 0) {
    pcVar19 = *(code **)(lVar21 + 0x20);
  }
  else {
    local_108 = *unaff_x20;
    uVar13 = unaff_x20[1];
    uStack_78 = unaff_x20[3];
    local_80 = unaff_x20[2];
    local_f8 = (long *)unaff_x20[4];
    uVar25 = unaff_x20[5];
    local_120 = pppppuVar24;
    local_118 = lVar23;
    local_f0 = lVar21;
    lStack_e8 = lVar9;
    local_e0 = param_1;
    _swift_bridgeObjectRetain(uVar13);
    FUN_100102fb4(&local_80,&local_b0);
    _swift_bridgeObjectRetain(uVar25);
    lVar9 = lVar6;
    FUN_10040bd68();
    local_110 = uVar13;
    _swift_bridgeObjectRelease(uVar13);
    FUN_1000a9ec8(&local_80);
    _swift_bridgeObjectRelease(lVar6);
    local_100 = uVar25;
    _swift_bridgeObjectRelease(uVar25);
    pppppuVar18 = *(undefined8 ******)(lVar9 + 0x10);
    local_d8 = lVar26;
    if (pppppuVar18 == (undefined8 *****)0x0) {
      _swift_retain(lVar9);
      pppppuVar24 = (undefined8 *****)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      pppppuVar24 = pppppuVar18;
      local_130 = pppuVar7;
      local_128 = param_3;
      FUN_10006d56c(pppppuVar18,0);
      pppppuVar10 = &local_b0;
      FUN_100235e80(pppppuVar10,pppppuVar24 + 4,pppppuVar18,lVar9);
      ppppuVar20 = ppppuStack_a8;
      _swift_retain_n(lVar9,2);
      FUN_10003f638(local_b0,ppppuVar20,local_a0,uStack_98,local_90);
      param_3 = local_128;
      lVar26 = local_d8;
      pppuVar7 = local_130;
      if (pppppuVar10 != pppppuVar18) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10040a108);
        (*pcVar19)();
      }
    }
    local_b0 = pppppuVar24;
    FUN_10040992c(&local_b0);
    pppppuVar10 = (undefined8 *****)local_d0;
    _swift_release(lVar9);
    ppppuVar3 = local_b0;
    pppppuVar18 = *(undefined8 ******)(param_3 + 0x18);
    pppppuVar24 = *(undefined8 ******)(param_3 + 0x20);
    FUN_10003f030(param_3,pppppuVar18);
    (*(code *)pppppuVar24[2])();
    __s10Foundation10URLRequestV3urlAA3URLVSgvg(pppppuVar10);
    ppppuVar22 = local_c8;
    pppppuVar15 = pppppuVar10;
    (*(code *)local_c8[6])(pppppuVar10,1,pppuVar7);
    ppppuVar20 = local_120;
    if ((int)pppppuVar15 == 0) {
      pppppuVar15 = pppppuVar10;
      (*(code *)ppppuVar22[2])(local_120,pppppuVar10,pppuVar7);
      FUN_1000ef618();
      __s10Foundation3URLV5querySSSgvg();
      (*(code *)ppppuVar22[1])(ppppuVar20,pppuVar7);
      if (pppppuVar15 != (undefined8 *****)0x0) {
        pppppuVar11 = pppppuVar10;
        __sSS5countSivg(pppppuVar10,pppppuVar15);
        if ((long)pppppuVar11 < 1) {
          _swift_bridgeObjectRelease(pppppuVar15);
        }
        else {
          local_b0 = pppppuVar18;
          ppppuStack_a8 = pppppuVar24;
          __sSS6appendyySSF(0x3f,0xe100000000000000);
          __sSS6appendyySSF(pppppuVar10,pppppuVar15);
          _swift_bridgeObjectRelease(pppppuVar15);
          pppppuVar18 = (undefined8 *****)local_b0;
          pppppuVar24 = (undefined8 *****)ppppuStack_a8;
        }
      }
    }
    else {
      FUN_1000ef618(pppppuVar10);
    }
    pppppuVar10 = *(undefined8 ******)(param_3 + 0x18);
    pppppuVar15 = *(undefined8 ******)(param_3 + 0x20);
    FUN_10003f030(param_3,pppppuVar10);
    (*(code *)pppppuVar15[3])();
    local_b0 = pppppuVar10;
    ppppuStack_a8 = pppppuVar15;
    _swift_bridgeObjectRetain(pppppuVar15);
    __sSS6appendyySSF(pppppuVar18,pppppuVar24);
    _swift_bridgeObjectRelease(pppppuVar15);
    _swift_bridgeObjectRelease(pppppuVar24);
    pppppuVar24 = (undefined8 *****)ppppuStack_a8;
    pppppuVar18 = (undefined8 *****)local_b0;
    ppppuVar20 = (undefined8 ****)ppppuVar3[2];
    if (ppppuVar20 == (undefined8 ****)0x0) {
      _swift_release(ppppuVar3);
      _swift_release(lVar9);
      pppppuVar10 = (undefined8 *****)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_120 = local_b0;
      local_d0 = ppppuStack_a8;
      local_c0 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fae0(0,ppppuVar20,0);
      ppppuVar22 = (undefined8 ****)0x0;
      pppppuVar18 = (undefined8 *****)(ppppuVar3 + 5);
      local_c8 = ppppuVar3;
      do {
        ppppuVar3 = local_c0;
        if (local_c8[2] <= ppppuVar22) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10040a104);
          (*pcVar19)();
        }
        pppppuVar24 = (undefined8 *****)pppppuVar18[-1];
        pppppuVar10 = (undefined8 *****)*pppppuVar18;
        pppppuVar15 = pppppuVar24;
        pppppuVar11 = pppppuVar10;
        __sSS10lowercasedSSyF();
        local_b0 = pppppuVar15;
        ppppuStack_a8 = pppppuVar11;
        _swift_bridgeObjectRetain(pppppuVar10);
        __sSS6appendyySSF(0x3d,0xe100000000000000);
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar13 = 0;
          uVar25 = 0xe000000000000000;
        }
        else {
          _swift_bridgeObjectRetain(lVar9);
          pppppuVar15 = pppppuVar10;
          FUN_1001a2c70();
          if (((ulong)pppppuVar15 & 1) == 0) {
            uVar13 = 0;
            uVar25 = 0xe000000000000000;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)pppppuVar24 * 0x10);
            uVar13 = *puVar1;
            uVar25 = puVar1[1];
            _swift_bridgeObjectRetain(uVar25);
          }
          _swift_release(lVar9);
        }
        __sSS6appendyySSF(uVar13,uVar25);
        _swift_bridgeObjectRelease(pppppuVar10);
        _swift_bridgeObjectRelease(uVar25);
        ppppuVar5 = ppppuStack_a8;
        ppppuVar4 = local_b0;
        ppppuVar2 = (undefined8 ****)ppppuVar3[2];
        local_c0 = ppppuVar3;
        if ((undefined8 ****)((ulong)ppppuVar3[3] >> 1) <= ppppuVar2) {
          FUN_10006fae0((undefined8 ****)0x1 < ppppuVar3[3],(undefined8 ****)((long)ppppuVar2 + 1U),
                        1);
        }
        pppppuVar10 = (undefined8 *****)local_c0;
        ppppuVar22 = (undefined8 ****)((long)ppppuVar22 + 1);
        local_c0[2] = (undefined8 ****)((long)ppppuVar2 + 1U);
        local_c0[(long)ppppuVar2 * 2 + 4] = ppppuVar4;
        local_c0[(long)ppppuVar2 * 2 + 5] = ppppuVar5;
        pppppuVar18 = pppppuVar18 + 2;
      } while (ppppuVar20 != ppppuVar22);
      _swift_release(local_c8);
      _swift_release(lVar9);
      pppppuVar24 = (undefined8 *****)local_d0;
      pppppuVar18 = (undefined8 *****)local_120;
      lVar26 = local_d8;
    }
    puVar8 = &DAT_100a756e8;
    local_b0 = pppppuVar10;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar12 = puVar8;
    FUN_10013048c();
    uVar13 = 0x26;
    pppppuVar15 = (undefined8 *****)0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x26,0xe100000000000000,puVar8,puVar12);
    _swift_bridgeObjectRelease(pppppuVar10);
    local_b0 = pppppuVar18;
    ppppuStack_a8 = pppppuVar24;
    _swift_bridgeObjectRetain(pppppuVar24);
    pppppuVar10 = pppppuVar15;
    __sSS6appendyySSF(uVar13);
    _swift_bridgeObjectRelease(pppppuVar24);
    _swift_bridgeObjectRelease();
    pppppuVar24 = (undefined8 *****)ppppuStack_a8;
    pppppuVar18 = (undefined8 *****)local_b0;
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
    lVar6 = local_118;
    if ((ulong)pppppuVar10 >> 0x3c < 0xf) {
      __sSS10FoundationE8EncodingV4utf8ACvgZ(local_118);
      pppppuVar11 = pppppuVar15;
      pppppuVar16 = pppppuVar10;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
                (pppppuVar15,pppppuVar10,lVar6);
      puVar12 = PTR___sSSSTsWP_100995820;
      puVar8 = PTR___sSSN_1009957f8;
      if (pppppuVar16 == (undefined8 *****)0x0) {
        FUN_100006cc8(pppppuVar15,pppppuVar10);
      }
      else {
        local_c0 = pppppuVar18;
        ppppuStack_b8 = pppppuVar24;
        pppppuVar24 = &local_c0;
        pppppuVar18 = (undefined8 *****)PTR___sSSN_1009957f8;
        local_b0 = pppppuVar11;
        ppppuStack_a8 = pppppuVar16;
        __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                  (pppppuVar24,PTR___sSSN_1009957f8,
                   PTR___sSSs25LosslessStringConvertiblesWP_100995838,PTR___sSSSTsWP_100995820);
        local_c0 = pppppuVar24;
        ppppuStack_b8 = pppppuVar18;
        __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_b0,puVar8,puVar12);
        FUN_100006cc8(pppppuVar15,pppppuVar10);
        _swift_bridgeObjectRelease(pppppuVar16);
        pppppuVar24 = (undefined8 *****)ppppuStack_b8;
        pppppuVar18 = (undefined8 *****)local_c0;
      }
    }
    uVar13 = 3;
    plVar14 = local_f8;
    FUN_100407cf0(3,local_f8,local_100,pppppuVar18,pppppuVar24);
    plVar17 = plVar14;
    _swift_bridgeObjectRelease(pppppuVar24);
    pppppuVar18 = &local_b0;
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvM();
    lVar6 = *plVar17;
    if (lVar6 != 0) {
      _swift_isUniquelyReferenced_nonNull_native();
      local_c0 = (undefined8 ****)*plVar17;
      *plVar17 = -0x8000000000000000;
      FUN_10040a4b8(uVar13,plVar14,local_108,local_110,lVar6);
      _swift_bridgeObjectRelease(plVar14);
      plVar14 = (long *)*plVar17;
      *plVar17 = (long)local_c0;
    }
    _swift_bridgeObjectRelease(plVar14);
    (*(code *)pppppuVar18)(&local_b0,0);
    pcVar19 = *(code **)(local_f0 + 0x20);
    param_1 = local_e0;
    lVar9 = lStack_e8;
  }
  (*pcVar19)(param_1,lVar26,lVar9);
  return;
}

