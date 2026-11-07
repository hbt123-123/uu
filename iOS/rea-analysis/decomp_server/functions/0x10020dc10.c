// rea decompile_all
// name: FUN_10020dc10
// address: 0x10020dc10
// body: available
// range: 0x10020dc10-0x10020f1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020dc10(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  void *pvVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  byte *pbVar21;
  undefined8 uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  ulong uVar24;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined *puVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 extraout_x12_04;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 extraout_x13_01;
  long unaff_x20;
  ulong uVar30;
  undefined *puVar31;
  long lVar32;
  undefined4 uVar33;
  long lVar34;
  undefined *puVar35;
  byte abStack_480 [16];
  byte abStack_470 [4];
  byte abStack_46c [4];
  byte abStack_468 [8];
  byte abStack_460 [8];
  byte abStack_458 [8];
  byte abStack_450 [8];
  byte abStack_448 [8];
  byte abStack_440 [16];
  byte abStack_430 [8];
  undefined8 local_428;
  long local_420;
  long local_418;
  long local_410;
  long local_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  long local_3e8;
  long lStack_3e0;
  byte *local_3d8;
  long local_3d0;
  long local_3c8;
  undefined *local_3c0;
  long local_3b8;
  char *local_3b0;
  char *local_3a8;
  undefined8 local_3a0;
  ulong local_398;
  ulong local_390;
  long local_388;
  undefined *local_380;
  byte *local_378;
  ulong local_370;
  undefined *local_368;
  long local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  byte *local_348;
  long local_340;
  ulong local_320;
  undefined8 local_318;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e0 [16];
  undefined4 local_2d0;
  undefined *local_2c8;
  undefined8 *puStack_2c0;
  byte local_2b8;
  undefined *local_2a8;
  undefined *local_2a0;
  byte local_298;
  undefined7 uStack_297;
  undefined8 local_268;
  undefined8 uStack_260;
  ulong local_258;
  undefined8 uStack_250;
  ulong local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined *local_1d0;
  byte local_1c8;
  long local_1c0;
  long local_1a8;
  ulong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined8 local_180;
  ulong local_178;
  undefined *local_170;
  code *local_168;
  code *local_160;
  undefined *local_158;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined *local_f8;
  ulong uStack_f0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar7 = 0;
  local_350 = param_1;
  local_34c = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_3d0 = *(long *)(lVar7 + -8);
  local_3c8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_3d0 + 0x40));
  lVar7 = 0;
  local_3d8 = abStack_430 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_3e8 = *(long *)(lVar7 + -8);
  lStack_3e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_3e8 + 0x40));
  lVar23 = (long)(abStack_430 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_3f0 = lVar23;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  local_410 = *(long *)(lVar7 + -8);
  local_408 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_410 + 0x40));
  lVar23 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_418 = lVar23;
  FUN_1000e49dc();
  local_340 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar23 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_3f8 = lVar23;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar23 - extraout_x12;
  local_400 = extraout_x13_00;
  local_3b8 = lVar23;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar24 = lVar23 - extraout_x12_00;
  puVar25 = &DAT_100a77e70;
  local_390 = uVar24;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  local_3c0 = puVar25;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar25 + -8) + 0x40));
  lVar23 = uVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_388 = lVar23;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar23 - extraout_x12_01;
  local_360 = lVar23;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar23 - extraout_x12_02;
  puVar25 = &DAT_100a77e80;
  FUN_100004bb4(&DAT_100a77e80,&DAT_10080ccb0);
  local_380 = puVar25;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar25 + -8) + 0x40));
  pbVar29 = (byte *)(lVar23 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_378 = pbVar29;
  (*(code *)PTR____chkstk_darwin_100995498)();
  pbVar29 = pbVar29 + -extraout_x12_03;
  uVar24 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  puVar25 = (undefined *)0x0;
  if (uVar24 < 0xf) {
    puVar25 = *(undefined **)(param_2 + 0xa8);
  }
  uVar8 = 0;
  if (uVar24 < 0xf) {
    uVar8 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar30 = 0xc000000000000000;
  if (uVar24 < 0xf) {
    uVar30 = *(ulong *)(param_2 + 0xb8);
  }
  local_348 = pbVar29;
  FUN_100040b80();
  FUN_100006cdc(uVar8,uVar30);
  local_370 = param_3[6];
  local_318 = param_3[7];
  local_320 = param_3[8];
  local_398 = local_320 >> 0x3c;
  uVar33 = 0;
  if (local_398 < 0xf) {
    uVar33 = (undefined4)local_370;
  }
  uVar8 = 0;
  if (local_398 < 0xf) {
    uVar8 = local_318;
  }
  uVar24 = 0xc000000000000000;
  if (local_398 < 0xf) {
    uVar24 = local_320;
  }
  FUN_100040b80(local_370,local_318,local_320);
  FUN_100040b80(local_370,local_318,local_320);
  uVar6 = local_34c;
  FUN_100040b80(local_370,local_318,local_320);
  FUN_100006cdc(uVar8,uVar24);
  uVar8 = 0;
  FUN_100401b14();
  bVar26 = (byte)uVar6;
  local_3b0 = s___________type__1008a43a0 + 0x30;
  local_3a0 = 0xd000000000000032;
  local_2d0 = uVar33;
  local_2c8 = puVar25;
  puStack_2c0 = param_3;
  local_2b8 = bVar26;
  FUN_1003fb48c(FUN_100217820,auStack_2e0,0xd0000000000000b2,0x8000000100885c70,0xd000000000000032,
                0x80000001008a43d0,0x7b,0);
  lVar9 = param_3[2];
  uVar24 = param_3[3];
  FUN_100216d4c(lVar9,uVar24,uVar33,puVar25);
  pbVar21 = local_348;
  local_3a8 = "handleSessionDisconnected()";
  local_368 = puVar25;
  local_358 = uVar8;
  if ((uVar24 & 1) == 0) {
    FUN_100216f7c(param_3,lVar9,puVar25,uVar6);
    local_420 = lVar9;
    if (lVar9 == 0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      lVar32 = *(long *)(lVar9 + 0x10);
      puVar35 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (lVar32 != 0) {
        local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
        uVar8 = 0;
        local_428 = *(undefined8 *)(unaff_x20 + 0x18);
        FUN_10006ff80(0,lVar32,0);
        puVar35 = local_1d0;
        FUN_10009ff0c();
        puVar16 = (undefined8 *)(lVar9 + 0x38);
        do {
          local_f8 = (undefined *)puVar16[-3];
          uStack_f0 = puVar16[-2];
          uVar20 = puVar16[-1];
          uVar22 = *puVar16;
          local_170 = (undefined *)0x2b5c5c;
          local_168 = (code *)0xe300000000000000;
          local_240 = 0x2f;
          uStack_238 = 0xe100000000000000;
          *(undefined8 *)(pbVar29 + -0x10) = uVar8;
          *(undefined8 *)(pbVar29 + -8) = uVar8;
          ppuVar10 = &local_170;
          puVar17 = &local_240;
          *(undefined8 *)(pbVar29 + -0x18) = uVar8;
          *(undefined **)(pbVar29 + -0x20) = PTR___sSSN_1009957f8;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (ppuVar10,puVar17,0x400,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          uVar24 = *(ulong *)(puVar35 + 0x10);
          local_1d0 = puVar35;
          if (*(ulong *)(puVar35 + 0x18) >> 1 <= uVar24) {
            FUN_10006ff80(1 < *(ulong *)(puVar35 + 0x18),uVar24 + 1,1);
          }
          puVar16 = puVar16 + 6;
          *(ulong *)(local_1d0 + 0x10) = uVar24 + 1;
          *(undefined ***)(local_1d0 + uVar24 * 0x20 + 0x20) = ppuVar10;
          *(undefined8 **)(local_1d0 + uVar24 * 0x20 + 0x28) = puVar17;
          *(undefined8 *)(local_1d0 + uVar24 * 0x20 + 0x30) = uVar20;
          *(undefined8 *)(local_1d0 + uVar24 * 0x20 + 0x38) = uVar22;
          lVar32 = lVar32 + -1;
          pbVar21 = local_348;
          puVar35 = local_1d0;
          puVar25 = local_368;
        } while (lVar32 != 0);
      }
    }
    uVar24 = local_370;
    (*(code *)PTR____chkstk_darwin_100995498)(*param_3);
    *(undefined8 *)(pbVar29 + -0x30) = extraout_x8_04;
    *(undefined8 *)(pbVar29 + -0x28) = extraout_x12_04;
    *(undefined4 *)(pbVar29 + -0x20) = uVar33;
    *(undefined8 *)(pbVar29 + -0x18) = extraout_x13_01;
    *(undefined **)(pbVar29 + -0x10) = puVar25;
    *(undefined **)(pbVar29 + -8) = puVar35;
    puVar25 = local_380;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (pbVar21,FUN_100217a1c,pbVar29 + -0x40,local_380);
    FUN_10020d2f4(local_420,0);
    _swift_bridgeObjectRelease(puVar35);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 **)(pbVar29 + -0x30) = param_3;
    *(undefined **)(pbVar29 + -0x28) = puVar25;
    pbVar29[-0x18] = 0;
    pbVar29[-0x17] = 0;
    pbVar29[-0x16] = 0;
    pbVar29[-0x15] = 0;
    pbVar29[-0x14] = 0;
    pbVar29[-0x13] = 0;
    pbVar29[-0x12] = 0;
    pbVar29[-0x11] = 0;
    pbVar29[-0x20] = 0xff;
    pbVar29[-0x1f] = 0xff;
    pbVar29[-0x1e] = 0xff;
    pbVar29[-0x1d] = 0xff;
    pbVar29[-0x1c] = 0xff;
    pbVar29[-0x1b] = 0xff;
    pbVar29[-0x1a] = 0xff;
    pbVar29[-0x19] = 0xff;
    pbVar29[-0x10] = 0;
    pbVar29[-0xf] = 0;
    pbVar29[-0xe] = 0;
    pbVar29[-0xd] = 0;
    pbVar29[-0xc] = 0;
    pbVar29[-0xb] = 0;
    pbVar29[-10] = 0;
    pbVar29[-9] = 0xe0;
    pbVar29[-8] = bVar26;
    FUN_1003fb48c(thunk_FUN_100217a40,pbVar29 + -0x40,0xd0000000000000b2,0x8000000100885c70,
                  0xd000000000000041,0x80000001008a4410,0x100,0);
    pbVar21 = local_348;
    uVar1 = (int)lVar9 - 4;
    bVar26 = (byte)(0x403020202020100 >> (((ulong)uVar1 & 7) << 3));
    if ((uVar1 & 0xf8) != 0) {
      bVar26 = 2;
    }
    *local_348 = bVar26;
    puVar25 = local_380;
    _swift_storeEnumTagMultiPayload(pbVar21,local_380,1);
    uVar24 = local_370;
  }
  pbVar2 = local_378;
  FUN_10007f314(pbVar21,local_378,&DAT_100a77e80,&DAT_10080ccb0);
  pbVar21 = pbVar2;
  _swift_getEnumCaseMultiPayload(pbVar2,puVar25);
  switchD_10004048c::caseD_6d(uVar24,local_318,local_320);
  uVar30 = local_390;
  if ((int)pbVar21 == 1) {
    if (local_398 < 0xf) {
      uVar30 = uVar24 & 0xffffffff00000000;
      uVar24 = uVar24 & 0xffffffff;
    }
    else {
      uVar24 = 0;
      uVar30 = 0;
      local_320 = 0xc000000000000000;
      local_318 = 0;
    }
    puVar35 = (undefined *)(0x70b0a070504 >> (((ulong)*pbVar2 & 7) << 3));
    FUN_1004a0dc8(&local_1d0);
    uStack_2f8 = uStack_190;
    local_300 = local_198;
    switchD_10004048c::caseD_6d(local_188,local_180,local_178);
    bVar26 = (byte)local_180;
    puVar25 = puVar35;
    FUN_10017cb14();
    (**(code **)(local_340 + 0x38))(lVar23,1,1,lVar7);
    uVar24 = uVar30 | uVar24;
    lVar9 = local_1c0;
    lVar32 = local_1a8;
    uVar30 = uStack_1a0;
    local_1c8 = bVar26;
  }
  else {
    uVar18 = local_390;
    FUN_1000823d8(pbVar2,local_390,FUN_1000e49dc);
    uVar8 = *(undefined8 *)(uVar30 + (long)*(int *)(lVar7 + 0x20));
    FUN_100217224(uVar8);
    if (uVar18 >> 0x3c < 0xf) {
      switchD_10004048c::caseD_6d(uVar24,local_318,local_320);
      FUN_10010bd10(uVar8,uVar18);
      puVar35 = (undefined *)0x1;
      FUN_1001817dc(&local_1d0,param_3,uVar30,uVar8,uVar18,1);
      FUN_100006cc8(uVar8,uVar18);
      FUN_100006cc8(uVar8,uVar18);
      FUN_1000823d8(uVar30,lVar23,FUN_1000e49dc);
      (**(code **)(local_340 + 0x38))(lVar23,0,1,lVar7);
      local_320 = local_178;
      local_318 = local_180;
      uStack_2f8 = uStack_190;
      local_300 = local_198;
      puVar25 = local_1d0;
      uVar24 = local_188;
      lVar9 = local_1c0;
      lVar32 = local_1a8;
      uVar30 = uStack_1a0;
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(pbVar29 + -0x10) = extraout_x8_05;
      *(undefined4 *)(pbVar29 + -8) = uVar33;
      lVar9 = local_360;
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (local_360,FUN_100217a00,pbVar29 + -0x20,local_3c0);
      FUN_100040bb4(lVar9,&DAT_100a77e70,&DAT_10080cca0);
      if (local_398 < 0xf) {
        uVar30 = uVar24 & 0xffffffff00000000;
        uVar24 = uVar24 & 0xffffffff;
      }
      else {
        uVar24 = 0;
        uVar30 = 0;
        local_320 = 0xc000000000000000;
        local_318 = 0;
      }
      FUN_1004a0dc8(&local_1d0);
      uStack_2f8 = uStack_190;
      local_300 = local_198;
      switchD_10004048c::caseD_6d(local_188,local_180,local_178);
      FUN_1000d27dc(local_390,FUN_1000e49dc);
      (**(code **)(local_340 + 0x38))(lVar23,1,1,lVar7);
      puVar35 = (undefined *)0x4;
      puVar25 = (undefined *)0x3;
      uVar24 = uVar30 | uVar24;
      lVar9 = local_1c0;
      lVar32 = local_1a8;
      uVar30 = uStack_1a0;
      local_1c8 = 1;
    }
  }
  local_298 = local_1c8 & 1;
  uStack_260 = uStack_2f8;
  local_268 = local_300;
  uStack_250 = local_318;
  local_248 = local_320;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  local_1e0 = 0xff;
  local_2a0 = puVar25;
  local_258 = uVar24;
  _swift_bridgeObjectRetain(lVar9);
  FUN_100217834(&local_2a0,&local_f8);
  puVar13 = &DAT_100812f40;
  FUN_100040bb4(&local_240,&DAT_100a7da38,&DAT_100812f40);
  uStack_b8 = uStack_2f8;
  local_c0 = local_300;
  uStack_a8 = local_318;
  local_a0 = local_320;
  local_98 = 1;
  uStack_88 = 0xc000000000000000;
  local_90 = 0;
  local_170 = (undefined *)0x0;
  local_168 = (code *)0xe000000000000000;
  local_f8 = puVar25;
  uStack_f0 = CONCAT71(uStack_297,local_1c8) & 0xffffffffffffff01;
  local_b0 = uVar24;
  __ss11_StringGutsV4growyySiF(0x9d);
  __sSS6appendyySSF(0x100000000000004b,0x80000001008a4460);
  local_2a8._0_4_ = local_350;
  puVar25 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar25);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  local_2a8 = (undefined *)CONCAT44(local_2a8._4_4_,uVar33);
  puVar25 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar25);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar11 = local_368;
  local_2a8 = local_368;
  puVar25 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar25);
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  uVar8 = *param_3;
  uVar20 = param_3[1];
  __sSS6appendyySSF(uVar8,uVar20);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  puVar31 = puVar35;
  FUN_10017cb14();
  puVar15 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar25 = PTR___sSiN_100995968;
  puVar19 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_2a8 = puVar31;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar19);
  __sSS6appendyySSF(0x4373656c6966202c,0xed00003d746e756f);
  puVar31 = *(undefined **)(lVar9 + 0x10);
  _swift_bridgeObjectRelease(lVar9);
  local_2a8 = puVar31;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar25,puVar15);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar15);
  __sSS6appendyySSF(0x61447473696c202c,0xef3d657a69536174);
  uVar1 = (uint)(uVar30 >> 0x20);
  uVar27 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar27 == 0) {
      puVar25 = (undefined *)(uVar30 >> 0x30 & 0xff);
    }
    else {
      iVar28 = (int)((ulong)lVar32 >> 0x20);
      if (SBORROW4(iVar28,(int)lVar32)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10020f1fc);
        (*pcVar5)();
      }
      puVar25 = (undefined *)(long)(iVar28 - (int)lVar32);
    }
  }
  else {
    puVar25 = (undefined *)0x0;
    if ((uVar27 == 2) &&
       (puVar25 = (undefined *)(*(long *)(lVar32 + 0x18) - *(long *)(lVar32 + 0x10)),
       SBORROW8(*(long *)(lVar32 + 0x18),*(long *)(lVar32 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10020e87c);
      (*pcVar5)();
    }
  }
  puVar15 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_2a8 = puVar25;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar15);
  pcVar5 = local_168;
  puVar25 = local_170;
  ppuVar10 = &local_f8;
  FUN_10017cd00(puVar11,ppuVar10);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar6 = local_350;
  FUN_1001ad794(local_350,puVar11,ppuVar10,puVar13,1);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  *(undefined **)(pbVar29 + -0x20) = puVar25;
  *(code **)(pbVar29 + -0x18) = pcVar5;
  pbVar29[-0x10] = (byte)local_34c;
  pbVar29[-0xf] = 1;
  *(undefined4 *)(pbVar29 + -0xc) = uVar6;
  FUN_1003fb48c(thunk_FUN_10020d3f4,pbVar29 + -0x30,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(puVar11,ppuVar10);
  _swift_bridgeObjectRelease(pcVar5);
  _swift_release(puVar13);
  FUN_10020ceb8(&local_f8);
  lVar32 = local_388;
  puVar25 = &DAT_10080cca0;
  FUN_10007f314(lVar23,local_388,&DAT_100a77e70);
  lVar4 = local_340;
  lVar12 = lVar32;
  (**(code **)(local_340 + 0x30))(lVar32,1,lVar7);
  lVar9 = local_3b8;
  if ((int)lVar12 == 1) {
    FUN_100040bb4(lVar32,&DAT_100a77e70,&DAT_10080cca0);
  }
  else {
    pcVar5 = FUN_1000e49dc;
    lVar12 = local_3b8;
    FUN_1000823d8();
    if (((uint)puVar35 & 0xff) == 1) {
      FUN_10020d654();
      lVar3 = local_360;
      lVar34 = *(long *)(unaff_x20 + 0x20);
      FUN_100082394(lVar9,local_360,FUN_1000e49dc);
      (**(code **)(lVar4 + 0x38))(lVar3,0,1,lVar7);
      FUN_1002174b0(uVar8,uVar20,lVar3);
      FUN_100040bb4(lVar3,&DAT_100a77e70,&DAT_10080cca0);
      lVar7 = 0;
      FUN_100185ea0();
      _swift_allocObject();
      puVar35 = PTR___swiftEmptySetSingleton_100995eb0;
      *(undefined **)(lVar7 + 0x60) = PTR___swiftEmptySetSingleton_100995eb0;
      *(undefined **)(lVar7 + 0x68) = puVar35;
      *(undefined1 *)(lVar7 + 0x10) = 1;
      *(undefined4 *)(lVar7 + 0x14) = uVar33;
      *(long *)(lVar7 + 0x18) = lVar32;
      *(long *)(lVar7 + 0x20) = lVar12;
      *(code **)(lVar7 + 0x28) = pcVar5;
      *(undefined **)(lVar7 + 0x30) = puVar25;
      *(undefined8 *)(lVar7 + 0x38) = uVar8;
      *(undefined8 *)(lVar7 + 0x40) = uVar20;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x50) = 0xe000000000000000;
      *(undefined8 *)(lVar7 + 0x58) = 1;
      uVar22 = *(undefined8 *)(lVar34 + 0x10);
      puVar35 = &DAT_1009a51f0;
      _swift_allocObject(&DAT_1009a51f0,0x28,7);
      *(long *)(puVar35 + 0x10) = lVar34;
      *(undefined4 *)(puVar35 + 0x18) = uVar33;
      *(long *)(puVar35 + 0x20) = lVar7;
      puVar13 = &DAT_1009a5218;
      _swift_allocObject(&DAT_1009a5218,0x20,7);
      *(code **)(puVar13 + 0x10) = FUN_10020cf5c;
      *(undefined **)(puVar13 + 0x18) = puVar35;
      local_150 = FUN_1000f4ed4;
      local_170 = PTR___NSConcreteStackBlock_100995490;
      local_168 = (code *)0x42000000;
      local_160 = FUN_1000fcdcc;
      local_158 = &DAT_1009a5230;
      local_148 = puVar13;
      pvVar14 = __Block_copy(&local_170);
      puVar15 = local_148;
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(puVar25);
      _swift_bridgeObjectRetain(uVar20);
      _swift_retain(lVar34);
      _swift_retain(lVar7);
      _swift_retain(puVar13);
      _swift_release(puVar15);
      _dispatch_sync(uVar22,pvVar14);
      __Block_release(pvVar14);
      puVar15 = puVar13;
      _swift_isEscapingClosureAtFileLocation(puVar13,"",0xb6,0xa8,0x14,1);
      _swift_release(puVar13);
      if (((ulong)puVar15 & 1) == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(pbVar29 + -0x40) = uVar33;
        pbVar29[-0x3c] = 1;
        *(long *)(pbVar29 + -0x38) = lVar32;
        *(long *)(pbVar29 + -0x30) = lVar12;
        *(undefined8 *)(pbVar29 + -0x28) = uVar8;
        *(undefined8 *)(pbVar29 + -0x20) = uVar20;
        pbVar29[-0x18] = 0;
        pbVar29[-0x17] = 0;
        pbVar29[-0x16] = 0;
        pbVar29[-0x15] = 0;
        pbVar29[-0x14] = 0;
        pbVar29[-0x13] = 0;
        pbVar29[-0x12] = 0;
        pbVar29[-0x11] = 0;
        pbVar29[-0x10] = 0;
        pbVar29[-0xf] = 0;
        pbVar29[-0xe] = 0;
        pbVar29[-0xd] = 0;
        pbVar29[-0xc] = 0;
        pbVar29[-0xb] = 0;
        pbVar29[-10] = 0;
        pbVar29[-9] = 0xe0;
        pbVar29[-8] = 1;
        pbVar29[-7] = 0;
        pbVar29[-6] = 0;
        pbVar29[-5] = 0;
        pbVar29[-4] = 0;
        pbVar29[-3] = 0;
        pbVar29[-2] = 0;
        pbVar29[-1] = 0;
        FUN_1003fb48c(FUN_10020cf94,pbVar29 + -0x50,0xd0000000000000b6,0x8000000100897ca0,
                      0xd000000000000064,0x80000001008a3230,0xab,0);
        _swift_bridgeObjectRelease(puVar25);
        _swift_bridgeObjectRelease(lVar12);
        _swift_bridgeObjectRelease(uVar20);
        _swift_release(puVar35);
        _swift_release(lVar7);
        FUN_100004b70(0);
        lVar32 = local_408;
        lVar9 = local_410;
        lVar7 = local_418;
        (**(code **)(local_410 + 0x68))
                  (local_418,
                   *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_100995f68,
                   local_408);
        __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
        (**(code **)(lVar9 + 8))(lVar7,lVar32);
        puVar25 = &DAT_1009a5268;
        _swift_allocObject(&DAT_1009a5268,0x18,7);
        _swift_weakInit(puVar25 + 0x10,unaff_x20);
        lVar32 = local_3b8;
        lVar7 = local_3f8;
        FUN_100082394(local_3b8,local_3f8,FUN_1000e49dc);
        uVar24 = (ulong)*(byte *)(local_340 + 0x50);
        uVar30 = uVar24 + 0x18 & (uVar24 ^ 0xffffffffffffffff);
        puVar35 = &DAT_1009a5290;
        _swift_allocObject(&DAT_1009a5290,uVar30 + local_400,uVar24 | 7);
        *(undefined **)(puVar35 + 0x10) = puVar25;
        FUN_1000823d8(lVar7,puVar35 + uVar30,FUN_1000e49dc);
        local_150 = FUN_1002179d0;
        local_170 = PTR___NSConcreteStackBlock_100995490;
        local_168 = (code *)0x42000000;
        local_160 = FUN_1000acdb4;
        local_158 = &DAT_1009a52a8;
        local_148 = puVar35;
        pvVar14 = __Block_copy(&local_170);
        puVar13 = puVar25;
        _swift_retain(puVar25);
        lVar7 = local_3f0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_3f0);
        local_2a8 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10003f7fc();
        puVar35 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar16 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        lVar9 = local_3c8;
        pbVar29 = local_3d8;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_3d8,&local_2a8,puVar35,puVar16,local_3c8,puVar13);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar7,pbVar29,pvVar14);
        __Block_release(pvVar14);
        (**(code **)(local_3d0 + 8))(pbVar29,lVar9);
        (**(code **)(local_3e8 + 8))(lVar7,lStack_3e0);
        FUN_1000d27dc(lVar32,FUN_1000e49dc);
        FUN_100040bb4(lVar23,&DAT_100a77e70,&DAT_10080cca0);
        FUN_100040bb4(local_348,&DAT_100a77e80,&DAT_10080ccb0);
        FUN_100217880(&local_2a0);
        puVar35 = local_148;
        _swift_release(puVar25);
        _swift_release(puVar35);
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10020f200);
      (*pcVar5)();
    }
    FUN_1000d27dc(lVar9,FUN_1000e49dc);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  pbVar21 = pbVar29 + -0x30;
  *(undefined4 *)(pbVar29 + -0x20) = uVar33;
  *(undefined8 **)(pbVar29 + -0x18) = param_3;
  pbVar29[-0x10] = (byte)puVar35;
  pcVar5 = FUN_100217870;
  uVar24 = (ulong)local_3a8 | 0x8000000000000000;
  uVar22 = 0xd0000000000000b2;
  FUN_1003fb4ec();
  FUN_10020d654();
  lVar9 = local_360;
  (**(code **)(lVar4 + 0x38))(local_360,1,1,lVar7);
  FUN_1002174b0(uVar8,uVar20,lVar9);
  FUN_100040bb4(lVar9,&DAT_100a77e70,&DAT_10080cca0);
  if (((uint)puVar35 & 0xfe) == 8) {
    _swift_bridgeObjectRelease(uVar20);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(pbVar29 + -0x10) = uVar33;
    pbVar29[-0xc] = 1;
    pbVar29[-0xb] = (byte)puVar35;
    FUN_1003fb48c(FUN_10020cf20,pbVar29 + -0x20,0xd0000000000000b6,0x8000000100897ca0,
                  0xd000000000000061,0x80000001008a31a0,0x6b,0);
    _swift_bridgeObjectRelease(uVar24);
    _swift_bridgeObjectRelease(pbVar21);
  }
  else {
    local_170 = (undefined *)CONCAT62(local_170._2_6_,0x201);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar33);
    local_130 = 0;
    local_128 = 0xe000000000000000;
    uStack_118 = 1;
    local_120 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_168 = pcVar5;
    local_160 = (code *)pbVar21;
    local_158 = (undefined *)uVar22;
    local_150 = (code *)uVar24;
    local_140 = uVar8;
    local_138 = uVar20;
    _swift_bridgeObjectRetain(pbVar21);
    _swift_bridgeObjectRetain(uVar24);
    FUN_10018555c(&local_170);
    FUN_10016c430(&local_170);
    _swift_bridgeObjectRelease(uVar24);
    _swift_bridgeObjectRelease(pbVar21);
  }
  FUN_100040bb4(lVar23,&DAT_100a77e70,&DAT_10080cca0);
  FUN_100040bb4(local_348,&DAT_100a77e80,&DAT_10080ccb0);
  FUN_100217880(&local_2a0);
  return;
}

