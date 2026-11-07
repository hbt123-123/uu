// rea decompile_all
// name: FUN_1002dc268
// address: 0x1002dc268
// body: available
// range: 0x1002dc268-0x1002dc8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_1002dc268(undefined8 *******param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 ******ppppppuVar17;
  byte *pbVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined8 *******pppppppuVar23;
  long lVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined8 *****apppppuStack_150 [5];
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined8 *******local_108;
  ulong local_100;
  undefined8 ******local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined8 *******local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *******local_b8;
  ulong uStack_b0;
  undefined8 *******local_a8;
  undefined *local_a0;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 ******local_78;
  undefined8 uStack_70;
  
  puVar26 = (undefined *)0xec000000656e6f4e;
  pppppppuVar23 = (undefined8 *******)0x203a5d79646f425b;
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar24 = *(long *)(lVar6 + -8);
  lVar3 = -(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f8 = (undefined8 ******)((long)apppppuStack_150 + lVar3 + 0x20);
  if (0xe < param_2 >> 0x3c) goto LAB_1002dc8a0;
  local_f0 = param_2 >> 0x3e;
  uVar4 = (uint)(param_2 >> 0x20);
  uVar19 = uVar4 >> 0x1e;
  iVar15 = (int)param_1;
  if (uVar4 >> 0x1e < 2) {
    if (uVar19 != 0) {
      if ((long)iVar15 == (long)param_1 >> 0x20) goto LAB_1002dc8a0;
      goto LAB_1002dc34c;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_1002dc32c;
    uVar20 = param_2 >> 0x30 & 0xff;
  }
  else {
    if (uVar19 != 2) {
LAB_1002dc32c:
      FUN_100006cc8(param_1,param_2);
      goto LAB_1002dc8a0;
    }
    if (param_1[2] == param_1[3]) goto LAB_1002dc8a0;
LAB_1002dc34c:
    if (local_f0 == 2) {
      uVar20 = (long)param_1[3] - (long)param_1[2];
      if (SBORROW8((long)param_1[3],(long)param_1[2])) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8d4);
        (*pcVar5)();
      }
    }
    else {
      iVar14 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar14,iVar15)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8d8);
        (*pcVar5)();
      }
      uVar20 = (ulong)(iVar14 - iVar15);
    }
    FUN_10010bd10(param_1,param_2);
  }
  if (param_5 < (long)uVar20) {
LAB_1002dc68c:
    local_a8 = (undefined8 *******)0x0;
    local_a0 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x10);
    _swift_bridgeObjectRelease(local_a0);
    local_a8 = (undefined8 *******)0x203a5d79646f425b;
    local_a0 = (undefined *)0xe800000000000000;
    iVar15 = (int)local_f0;
    if (iVar15 < 2) {
      if (iVar15 == 0) {
        ppppppuVar17 = (undefined8 ******)(param_2 >> 0x30 & 0xff);
      }
      else {
        iVar15 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar15,(int)param_1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8e4);
          (*pcVar5)();
        }
        ppppppuVar17 = (undefined8 ******)(long)(iVar15 - (int)param_1);
      }
    }
    else {
      ppppppuVar17 = (undefined8 ******)0x0;
      if ((iVar15 == 2) &&
         (ppppppuVar17 = (undefined8 ******)((long)param_1[3] - (long)param_1[2]),
         SBORROW8((long)param_1[3],(long)param_1[2]))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc6e4);
        (*pcVar5)();
      }
    }
    puVar26 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_e0 = (undefined8 *******)ppppppuVar17;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar26);
    __sSS6appendyySSF(0x736574796220,0xe600000000000000);
    FUN_100006cc8(param_1,param_2);
    pppppppuVar23 = local_a8;
    puVar26 = local_a0;
    goto LAB_1002dc8a0;
  }
  uVar20 = *(ulong *)(param_4 + 0x10);
  local_110 = lVar6;
  local_108 = param_1;
  local_100 = param_2;
  local_e8 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar20 != 0) {
    uVar21 = 0;
    local_120 = param_3 + 0x20;
    local_128 = param_4 + 0x28;
    local_118 = lVar24;
    do {
      puVar22 = (ulong *)(local_128 + uVar21 * 0x10);
      uVar25 = uVar21;
      while( true ) {
        if (uVar20 <= uVar25) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8cc);
          (*pcVar5)();
        }
        uVar21 = uVar25 + 1;
        if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8d0);
          (*pcVar5)();
        }
        pppppppuVar23 = (undefined8 *******)puVar22[-1];
        uVar1 = *puVar22;
        _swift_bridgeObjectRetain(uVar1);
        uVar7 = 0x2d746e65746e6f43;
        uVar11 = 0;
        FUN_1002bbc2c(0x2d746e65746e6f43,0xec00000065707954,param_3);
        lVar24 = local_118;
        if ((uVar11 & 1) == 0) break;
        _swift_bridgeObjectRelease(uVar1);
        uVar25 = uVar25 + 1;
        puVar22 = puVar22 + 2;
        lVar24 = local_118;
        if (uVar21 == uVar20) goto LAB_1002dc548;
      }
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8dc);
        (*pcVar5)();
      }
      if (*(ulong *)(param_3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc8e0);
        (*pcVar5)();
      }
      lVar6 = local_120 + uVar7 * 0x20;
      local_a8 = *(undefined8 ********)(lVar6 + 0x10);
      local_a0 = *(undefined **)(lVar6 + 0x18);
      local_e0 = pppppppuVar23;
      uStack_d8 = uVar1;
      FUN_1002c6438();
      pppppppuVar23 = &local_e0;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (pppppppuVar23,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar7,uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar26 = local_e8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar26 & 1) == 0) {
        puVar26 = (undefined *)0x0;
        FUN_100296f34(0,*(long *)(local_e8 + 0x10) + 1,1);
        local_e8 = puVar26;
      }
      uVar25 = *(ulong *)(local_e8 + 0x10);
      if (*(ulong *)(local_e8 + 0x18) >> 1 <= uVar25) {
        puVar26 = (undefined *)(ulong)(1 < *(ulong *)(local_e8 + 0x18));
        FUN_100296f34(puVar26,uVar25 + 1,1,local_e8);
        local_e8 = puVar26;
      }
      *(ulong *)(local_e8 + 0x10) = uVar25 + 1;
      local_e8[uVar25 + 0x20] = (byte)pppppppuVar23 & 1;
    } while (uVar21 != uVar20);
  }
LAB_1002dc548:
  param_2 = local_100;
  param_1 = local_108;
  lVar6 = local_110;
  puVar26 = PTR___sSSN_1009957f8;
  lVar16 = *(long *)(local_e8 + 0x10);
  pbVar18 = local_e8 + 0x20;
  do {
    if (lVar16 == 0) {
      _swift_bridgeObjectRelease(local_e8);
      goto LAB_1002dc68c;
    }
    bVar2 = *pbVar18;
    lVar16 = lVar16 + -1;
    pbVar18 = pbVar18 + 1;
  } while ((bVar2 & 1) == 0);
  _swift_bridgeObjectRelease(local_e8);
  local_78 = (undefined8 ******)0xa3a5d79646f425b;
  uStack_70 = 0xec00000020202020;
  FUN_100008184(param_1,param_2);
  pppppppuVar23 = param_1;
  uVar20 = param_2;
  FUN_1002d3c9c();
  if (uVar20 == 0) {
    local_b8 = param_1;
    uStack_b0 = param_2;
    FUN_10010bd10(param_1,param_2);
    puVar8 = &DAT_100a82788;
    FUN_100004bb4(&DAT_100a82788,&DAT_100816f50);
    pppppppuVar23 = &local_e0;
    _swift_dynamicCast(pppppppuVar23,&local_b8,PTR___s10Foundation4DataVN_1009961e8,puVar8,6);
    if (((ulong)pppppppuVar23 & 1) == 0) {
      local_c0 = 0;
      uStack_d8 = 0;
      local_e0 = (undefined8 *******)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      FUN_100040bb4(&local_e0,&DAT_100a82790,&DAT_1008178d0);
LAB_1002dc77c:
      pppppppuVar23 = param_1;
      uVar20 = param_2;
      FUN_1002d3858();
      goto LAB_1002dc788;
    }
    thunk_FUN_1000a0074(&local_e0,&local_a8);
    uVar12 = uStack_88;
    uVar20 = local_90;
    FUN_10003f030(&local_a8,local_90);
    __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(uVar20,uVar12);
    if ((uVar20 & 1) == 0) {
      FUN_10003f094(&local_a8);
      goto LAB_1002dc77c;
    }
    FUN_100006cc8(param_1,param_2);
    FUN_10003f030(&local_a8,local_90);
    __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
              (&local_e0,FUN_1002d38c0,0,PTR___sSSN_1009957f8,local_90,uStack_88);
    uVar20 = uStack_d8;
    pppppppuVar23 = local_e0;
    pppppppuVar9 = &local_a8;
    FUN_10003f094();
  }
  else {
LAB_1002dc788:
    pppppppuVar9 = param_1;
    FUN_100006cc8(param_1,param_2);
  }
  ppppppuVar17 = local_f8;
  local_a8 = pppppppuVar23;
  local_a0 = (undefined *)uVar20;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_f8);
  FUN_1002c6438();
  ppppppuVar10 = ppppppuVar17;
  puVar8 = puVar26;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(ppppppuVar17,puVar26,pppppppuVar9)
  ;
  (**(code **)(lVar24 + 8))(ppppppuVar17,lVar6);
  _swift_bridgeObjectRelease(uVar20);
  uVar12 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
  local_e0 = (undefined8 *******)0xa;
  uStack_d8 = 0xe100000000000000;
  local_b8 = (undefined8 *******)0xa;
  uStack_b0 = 0xe100000000000000;
  local_a8 = (undefined8 *******)ppppppuVar10;
  local_a0 = puVar8;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar12);
  uVar20 = uStack_b0;
  *(undefined8 ********)((long)apppppuStack_150 + lVar3 + 0x10) = pppppppuVar9;
  *(undefined8 ********)((long)apppppuStack_150 + lVar3 + 0x18) = pppppppuVar9;
  pppppppuVar23 = &local_e0;
  pppppppuVar13 = &local_b8;
  *(undefined **)((long)apppppuStack_150 + lVar3) = puVar26;
  *(undefined8 ********)((long)apppppuStack_150 + lVar3 + 8) = pppppppuVar9;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (pppppppuVar23,pppppppuVar13,0,0,0,1,puVar26,puVar26);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(uVar20);
  __sSS6appendyySSF(pppppppuVar23,pppppppuVar13);
  _swift_bridgeObjectRelease(pppppppuVar13);
  FUN_100006cc8(param_1,param_2);
  pppppppuVar23 = (undefined8 *******)local_78;
  puVar26 = (undefined *)uStack_70;
LAB_1002dc8a0:
  auVar27._8_8_ = puVar26;
  auVar27._0_8_ = pppppppuVar23;
  return auVar27;
}

