// rea decompile_all
// name: FUN_1002db224
// address: 0x1002db224
// body: available
// range: 0x1002db224-0x1002dba87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002db224(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ID IVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long unaff_x20;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 auStack_130 [4];
  undefined1 auStack_110 [8];
  undefined *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 *local_88;
  undefined8 local_80;
  
  puVar16 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  puVar14 = auStack_110 + -(*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation12DateIntervalVMa();
  local_d0 = *(long *)(lVar3 + -8);
  lVar22 = (long)puVar14 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = &DAT_100a82c30;
  local_c8 = (undefined1 *)lVar3;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar15 = lVar22 - (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar4 + -8);
  lVar19 = lVar15 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  lVar3 = lVar15;
  (**(code **)(lVar13 + 0x30))(lVar15,1,lVar4);
  if ((int)lVar3 == 1) {
    FUN_100040bb4(lVar15,&DAT_100a82c30,&DAT_1008171f0);
    local_88 = (undefined1 *)0x0;
    local_80 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1c);
    __sSS6appendyySSF(0xd00000000000001a,0x80000001008a9fa0);
    iVar1 = *(int *)(param_2 + 0x40);
    uVar5 = 0;
    __ss6ResultOMa(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                   *(undefined8 *)(param_2 + 0x20));
    __ss26DefaultStringInterpolationV06appendC0yyxlF(unaff_x20 + iVar1,uVar5);
    puVar14 = local_88;
    uVar5 = local_80;
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar19,lVar15,lVar4);
    lVar3 = lVar19;
    FUN_1002dc8e4();
    local_d8 = *(undefined1 **)(unaff_x20 + *(int *)(param_2 + 0x2c));
    local_100 = lVar3;
    lStack_f8 = lVar15;
    local_f0 = lVar19;
    lStack_e8 = lVar13;
    local_e0 = lVar4;
    if (local_d8 == (undefined1 *)0x0) {
      uVar5 = 0x80000001008a9fc0;
      puVar21 = &DAT_d000000000000010;
    }
    else {
      local_88 = (undefined1 *)0x0;
      local_80 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x28);
      _swift_bridgeObjectRelease(local_80);
      local_88 = (undefined1 *)0xd00000000000001f;
      local_80 = 0x80000001008aa040;
      local_a0 = (undefined *)_objc_msgSend((ID)local_d8,"statusCode");
      puVar16 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar16);
      __sSS6appendyySSF(0x202020200a,0xe500000000000000);
      IVar6 = _objc_msgSend((ID)local_d8,"allHeaderFields");
      puVar10 = PTR___ss11AnyHashableVN_100995ad0;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar6,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                 PTR___ss11AnyHashableVSHsWP_100995ad8);
      IVar9 = IVar6;
      FUN_1002bf120();
      _swift_bridgeObjectRelease(IVar6);
      puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (IVar9 != 0) {
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        _swift_bridgeObjectRetain(IVar9);
        FUN_1002bb634();
        puVar10 = (undefined *)0x2;
        _swift_bridgeObjectRelease_n(IVar9);
        puVar16 = local_a0;
      }
      puVar2 = PTR___sSSN_1009957f8;
      if (*(long *)(puVar16 + 0x10) == 0) {
        _swift_bridgeObjectRelease();
        puVar10 = (undefined *)0xef656e6f4e203a5d;
        puVar16 = (undefined *)0x737265646165485b;
      }
      else {
        local_108 = puVar16;
        local_a0 = puVar16;
        _swift_bridgeObjectRetain();
        FUN_1002bbe8c(&local_a0);
        puVar16 = local_a0;
        puVar7 = local_a0;
        FUN_1002bcd08();
        _swift_bridgeObjectRelease(puVar16);
        uVar11 = 0xe100000000000000;
        __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
        local_b0 = 10;
        uStack_a8 = 0xe100000000000000;
        local_c0 = 10;
        uStack_b8 = 0xe100000000000000;
        local_a0 = puVar7;
        local_98 = puVar10;
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease();
        uVar5 = uStack_b8;
        FUN_1002c6438();
        *(undefined8 *)(lVar19 + -0x10) = uVar11;
        *(undefined8 *)(lVar19 + -8) = uVar11;
        puVar8 = &local_b0;
        puVar12 = &local_c0;
        *(undefined **)(lVar19 + -0x20) = puVar2;
        *(undefined8 *)(lVar19 + -0x18) = uVar11;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (puVar8,puVar12,0,0,0,1,puVar2,puVar2);
        _swift_bridgeObjectRelease(puVar10);
        _swift_bridgeObjectRelease(uVar5);
        local_a0 = (undefined *)0x0;
        local_98 = (undefined *)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x11);
        _swift_bridgeObjectRelease(local_98);
        local_a0 = (undefined *)0x737265646165485b;
        local_98 = (undefined *)0xef202020200a3a5d;
        __sSS6appendyySSF(puVar8,puVar12);
        _swift_bridgeObjectRelease(local_108);
        _swift_bridgeObjectRelease(puVar12);
        puVar16 = local_a0;
        puVar10 = local_98;
      }
      uVar11 = 0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,4);
      local_b0 = 10;
      uStack_a8 = 0xe100000000000000;
      local_c0 = 10;
      uStack_b8 = 0xe100000000000000;
      local_a0 = puVar16;
      local_98 = puVar10;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease();
      uVar5 = uStack_b8;
      FUN_1002c6438();
      *(undefined8 *)(lVar19 + -0x10) = uVar11;
      *(undefined8 *)(lVar19 + -8) = uVar11;
      puVar8 = &local_b0;
      puVar12 = &local_c0;
      *(undefined **)(lVar19 + -0x20) = puVar2;
      *(undefined8 *)(lVar19 + -0x18) = uVar11;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar8,puVar12,0,0,0,1,puVar2,puVar2);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(puVar8,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      puVar21 = local_88;
      uVar5 = local_80;
    }
    local_d8 = (undefined1 *)0x656e6f4e;
    IVar9 = *(ID *)(unaff_x20 + *(int *)(param_2 + 0x38));
    if (IVar9 == 0) {
      uVar11 = 0xe400000000000000;
      local_c8 = (undefined1 *)0x656e6f4e;
    }
    else {
      local_88 = (undefined1 *)0x0;
      local_80 = 0xe000000000000000;
      IVar9 = _objc_msgSend(IVar9,"taskInterval");
      __s10Foundation12DateIntervalV36_unconditionallyBridgeFromObjectiveCyACSo06NSDateC0CSgFZ
                (lVar22,IVar9);
      __s10Foundation12DateIntervalV8durationSdvg(0);
      (**(code **)(local_d0 + 8))(lVar22,local_c8);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                (param_1,&local_88,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(0x73,0xe100000000000000);
      local_c8 = local_88;
      uVar11 = local_80;
    }
    puVar8 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x34));
    uVar17 = puVar8[1];
    if (uVar17 >> 0x3c < 0xf) {
      uVar20 = *puVar8;
      FUN_100008184(uVar20,uVar17);
      uVar18 = uVar20;
      uVar23 = uVar17;
      __s10Foundation4DataV11descriptionSSvg(uVar20,uVar17);
      FUN_100006cc8(uVar20,uVar17);
    }
    else {
      uVar23 = 0xe400000000000000;
      uVar18 = 0x656e6f4e;
    }
    local_88 = (undefined1 *)0x0;
    local_80 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x68);
    lVar3 = lStack_f8;
    __sSS6appendyySSF(local_100,lStack_f8);
    _swift_bridgeObjectRelease(lVar3);
    __sSS6appendyySSF(10,0xe100000000000000);
    __sSS6appendyySSF(puVar21,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0x5520656c69465b0a,0xed0000203a5d4c52);
    FUN_10007f314(unaff_x20 + *(int *)(param_2 + 0x30),puVar14,&DAT_100a83428,&DAT_100817bb0);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar4 = *(long *)(lVar3 + -8);
    uVar5 = 1;
    puVar21 = puVar14;
    (**(code **)(lVar4 + 0x30))(puVar14,1,lVar3);
    if ((int)puVar21 == 1) {
      FUN_100040bb4(puVar14,&DAT_100a83428,&DAT_100817bb0);
      uVar5 = 0xe400000000000000;
    }
    else {
      __s10Foundation3URLV4pathSSvg();
      local_d8 = puVar21;
      (**(code **)(lVar4 + 8))(puVar14,lVar3);
    }
    __sSS6appendyySSF(local_d8,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008aa020);
    __sSS6appendyySSF(uVar18,uVar23);
    _swift_bridgeObjectRelease(uVar23);
    __sSS6appendyySSF(0xd000000000000015,0x80000001008a9fe0);
    __sSS6appendyySSF(local_c8,uVar11);
    _swift_bridgeObjectRelease(uVar11);
    __sSS6appendyySSF(0xd00000000000001b,0x80000001008aa000);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x3c)),&local_88,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    __sSS6appendyySSF(0x6c757365525b0a73,0xec000000203a5d74);
    iVar1 = *(int *)(param_2 + 0x40);
    uVar5 = 0;
    __ss6ResultOMa(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                   *(undefined8 *)(param_2 + 0x20));
    __ss26DefaultStringInterpolationV06appendC0yyxlF(unaff_x20 + iVar1,uVar5);
    uVar5 = local_80;
    puVar14 = local_88;
    (**(code **)(lStack_e8 + 8))(local_f0,local_e0);
  }
  auVar24._8_8_ = uVar5;
  auVar24._0_8_ = puVar14;
  return auVar24;
}

