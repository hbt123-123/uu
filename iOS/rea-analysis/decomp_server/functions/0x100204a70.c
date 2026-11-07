// rea decompile_all
// name: FUN_100204a70
// address: 0x100204a70
// body: available
// range: 0x100204a70-0x100205ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100204a70(undefined4 param_1,long param_2,undefined ***param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined ***pppuVar12;
  long lVar13;
  void *aBlock;
  undefined *puVar14;
  uint uVar15;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined ***extraout_x8;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 extraout_w12;
  ulong extraout_x12;
  undefined ***extraout_x15;
  long unaff_x20;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined8 **ppuVar27;
  undefined1 auStack_380 [16];
  undefined1 local_370 [16];
  uint local_360;
  undefined1 local_35c;
  undefined ***local_358;
  undefined ***local_350;
  undefined ***local_348;
  undefined ***local_340;
  undefined ***local_338;
  undefined1 local_330;
  undefined1 uStack_32f;
  undefined **local_328;
  int local_314;
  char *local_310;
  undefined ***local_2b0;
  undefined ***local_2a0;
  undefined1 auStack_290 [16];
  uint local_280;
  undefined ***local_278;
  undefined ***pppuStack_270;
  undefined1 local_268;
  undefined ***local_258;
  undefined **local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined **local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined **local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 **local_158;
  undefined ***local_150;
  undefined ***local_148;
  undefined *local_140;
  code *local_138;
  undefined *local_130;
  undefined ***local_128;
  undefined ***pppuStack_120;
  undefined ***local_118;
  undefined ***local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 **local_e0;
  undefined **local_d8;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *puVar16;
  
  uVar23 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  pppuVar12 = (undefined ***)0x0;
  if (uVar23 < 0xf) {
    pppuVar12 = *(undefined ****)(param_2 + 0xa8);
  }
  uVar22 = 0;
  if (uVar23 < 0xf) {
    uVar22 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar23 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80(*(undefined ****)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar22,uVar1);
  uVar23 = (ulong)param_3[0xf] >> 0x3c;
  uVar6 = 0;
  if (uVar23 < 0xf) {
    uVar6 = (uint)param_3[0xd];
  }
  ppuVar25 = (undefined **)0x0;
  if (uVar23 < 0xf) {
    ppuVar25 = param_3[0xe];
  }
  ppuVar20 = (undefined **)0xc000000000000000;
  if (uVar23 < 0xf) {
    ppuVar20 = param_3[0xf];
  }
  FUN_100040b80();
  FUN_100006cdc(ppuVar25,ppuVar20);
  FUN_100401b14();
  puVar16 = auStack_290;
  local_310 = s_FileTransferHandler___deinit_1008a2fa0 + 0x10;
  local_280 = uVar6;
  local_278 = pppuVar12;
  pppuStack_270 = param_3;
  local_268 = param_4;
  FUN_1003fb48c(FUN_10020ce08,puVar16,0xd0000000000000a6,0x80000001008a2d40,0xd000000000000035,
                0x80000001008a2fb0,0xde,0);
  uVar15 = (uint)puVar16;
  pppuVar8 = param_3;
  FUN_10020bbfc();
  pppuVar18 = (undefined ***)*param_3;
  pppuVar17 = (undefined ***)param_3[1];
  _swift_bridgeObjectRetain_n(pppuVar17,2);
  local_2b0 = pppuVar18;
  local_2a0 = pppuVar17;
  FUN_10020c058();
  if (((ulong)local_2b0 & 1) == 0) {
    _swift_bridgeObjectRetain(pppuVar17);
    local_314 = 0;
    local_2b0 = pppuVar18;
    local_2a0 = pppuVar17;
  }
  else {
    FUN_10020b8f4();
    if (local_2a0 == (undefined ***)0x0) {
      FUN_1003fb4ec(FUN_100209928);
      uVar7 = 4;
      local_2b0 = (undefined ***)0x4;
    }
    else {
      pppuVar9 = local_2b0;
      FUN_10020c1a8();
      uVar7 = (uint)pppuVar9;
      if ((uVar7 >> 8 & 1) == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_35c = 0;
        local_360 = uVar6;
        local_358 = pppuVar12;
        local_350 = pppuVar18;
        local_348 = pppuVar17;
        local_340 = local_2b0;
        local_338 = local_2a0;
        local_330 = param_4;
        _swift_bridgeObjectRetain(local_2a0);
        FUN_1003fb48c(thunk_FUN_10020d330,local_370,0xd0000000000000a6,0x80000001008a2d40,
                      0xd000000000000040,0x80000001008a32c0,0x135,0);
        _swift_bridgeObjectRelease(local_2a0);
        local_314 = 0;
        goto LAB_100204d8c;
      }
      _swift_bridgeObjectRelease(local_2a0);
      local_2b0 = (undefined ***)((ulong)pppuVar9 & 0xff);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_350._0_5_ = (uint5)uVar6;
    local_330 = (undefined1)uVar7;
    local_348 = pppuVar12;
    local_340 = pppuVar18;
    local_338 = pppuVar17;
    uStack_32f = param_4;
    FUN_1003fb4ec(thunk_FUN_10020d300,&local_360,0xd0000000000000a6,
                  extraout_x12 | 0x8000000000000000,0xd000000000000040,0x80000001008a32c0,0x138,0);
    local_314 = 1;
    local_2a0 = (undefined ***)0x0;
  }
LAB_100204d8c:
  _swift_bridgeObjectRelease(pppuVar17);
  if ((uVar15 & 1) == 0) {
    ppuVar20 = pppuVar8[2];
    ppuVar25 = ppuVar20;
    if ((undefined **)0x4 < ppuVar20) {
      ppuVar25 = (undefined **)0x5;
    }
    ppuVar27 = (undefined8 **)PTR___swiftEmptyArrayStorage_100995ea0;
    if (ppuVar20 != (undefined **)0x0) {
      local_158 = (undefined8 **)PTR___swiftEmptyArrayStorage_100995ea0;
      _swift_bridgeObjectRetain(pppuVar8);
      FUN_10006fae0(0,ppuVar25,0);
      puVar10 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
      pppuVar9 = pppuVar8 + 6;
      do {
        ppuVar27 = local_158;
        if (ppuVar25 == (undefined **)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100205aa8);
          (*pcVar4)();
        }
        local_e0 = (undefined8 **)pppuVar9[-2];
        ppuVar20 = pppuVar9[-1];
        ppuVar26 = *pppuVar9;
        local_d8 = ppuVar20;
        _swift_bridgeObjectRetain_n(ppuVar20,2);
        __sSS6appendyySSF(0x28,0xe100000000000000);
        puVar11 = puVar10;
        local_210 = ppuVar26;
        __ss23CustomStringConvertibleP11descriptionSSvgTj(PTR___ss6UInt64VN_100995e10,puVar10);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar11);
        __sSS6appendyySSF(0x29,0xe100000000000000);
        _swift_bridgeObjectRelease(ppuVar20);
        ppuVar20 = local_d8;
        ppuVar3 = local_e0;
        puVar2 = ppuVar27[2];
        local_158 = ppuVar27;
        if ((undefined8 *)((ulong)ppuVar27[3] >> 1) <= puVar2) {
          FUN_10006fae0((undefined8 *)0x1 < ppuVar27[3],(undefined8 *)((long)puVar2 + 1),1);
        }
        ppuVar27 = local_158;
        local_158[2] = (undefined8 *)((long)puVar2 + 1);
        local_158[(long)puVar2 * 2 + 4] = ppuVar3;
        local_158[(long)puVar2 * 2 + 5] = ppuVar20;
        pppuVar9 = pppuVar9 + 4;
        ppuVar25 = (undefined **)((long)ppuVar25 - 1);
      } while (ppuVar25 != (undefined **)0x0);
      FUN_10020d2f4(pppuVar8,0);
    }
    puVar10 = &DAT_100a756e8;
    local_e0 = ppuVar27;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar11 = puVar10;
    FUN_10013048c();
    uVar5 = 0x202c;
    uVar22 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar10,puVar11);
    _swift_bridgeObjectRelease(ppuVar27);
    (*(code *)PTR____chkstk_darwin_100995498)();
                    /* WARNING: Ignoring partial resolution of indirect */
    local_350._0_4_ = uVar6;
    uStack_32f = (undefined1)((ushort)uVar5 >> 8);
    local_330 = (undefined1)uVar5;
    local_348 = pppuVar12;
    local_340 = pppuVar8;
    local_338 = param_3;
    local_328 = (undefined **)uVar22;
    FUN_1003fb48c(FUN_10020ce18,&local_360,0xd0000000000000a6,0x80000001008a2d40,0xd000000000000035,
                  (ulong)local_310 | 0x8000000000000000,0xed,0);
    _swift_bridgeObjectRelease(uVar22);
    if (local_314 == 0) {
      _swift_bridgeObjectRelease(pppuVar17);
      pppuVar9 = (undefined ***)param_3[6];
      (*(code *)PTR____chkstk_darwin_100995498)();
      uStack_32f = (undefined1)((ulong)local_2a0 >> 8);
      local_330 = SUB81(local_2a0,0);
      local_328 = (undefined **)CONCAT71(local_328._1_7_,extraout_w12);
      local_360 = uVar6;
      local_358 = extraout_x15;
      local_350 = pppuVar9;
      local_348 = pppuVar8;
      local_340 = extraout_x8;
      local_338 = local_2b0;
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100a7da30;
      FUN_100004bb4(&DAT_100a7da30,&DAT_100812d30);
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (&local_e0,FUN_10020ce2c,auStack_380,puVar10);
      ppuVar27 = local_e0;
      if (((ulong)local_d8 & 1) == 0) {
        uVar7 = 1;
        FUN_1001815e8(&local_198,param_3,local_e0,1);
        FUN_10020d2f4(ppuVar27,0);
      }
      else {
        FUN_1001815e8(&local_198,param_3,PTR___swiftEmptyArrayStorage_100995ea0,local_e0);
        uVar7 = (uint)ppuVar27;
      }
      FUN_10020ce68(local_2b0,local_2a0,0);
    }
    else {
      FUN_1001815e8(&local_198,param_3,PTR___swiftEmptyArrayStorage_100995ea0,local_2b0);
      uVar7 = (uint)local_2b0;
      local_2a0 = pppuVar17;
      local_2b0 = pppuVar18;
    }
  }
  else {
    FUN_10020ce68(local_2b0,local_2a0,local_314);
    (*(code *)PTR____chkstk_darwin_100995498)();
                    /* WARNING: Ignoring partial resolution of indirect */
    local_340._0_4_ = uVar6;
    uVar7 = (uint)pppuVar8;
    local_330 = SUB81(pppuVar8,0);
    local_338 = pppuVar12;
    FUN_1003fb4ec(FUN_10020cfcc,&local_350,0xd0000000000000a6,0x80000001008a2d40,0xd000000000000035,
                  (ulong)local_310 | 0x8000000000000000,0xe7,0);
    FUN_1001815e8(&local_198,param_3,PTR___swiftEmptyArrayStorage_100995ea0,pppuVar8);
    local_2a0 = pppuVar17;
    local_2b0 = pppuVar18;
  }
  _swift_bridgeObjectRetain();
  local_250 = local_198;
  uStack_248 = uStack_190;
  local_240 = local_188;
  local_238 = local_180;
  uStack_230 = uStack_178;
  local_228 = local_170;
  uStack_220 = uStack_168;
  local_218 = local_160;
  uStack_208 = 0;
  local_210 = (undefined **)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  local_1b0 = 0xff;
  _swift_bridgeObjectRetain(local_198);
  FUN_10020ce78(&local_250,&local_e0);
  puVar10 = &DAT_100812f40;
  FUN_100040bb4(&local_210,&DAT_100a7da38,&DAT_100812f40);
  local_e0 = (undefined8 **)local_198;
  local_d8 = (undefined **)uStack_190;
  uStack_c8 = local_180;
  local_c0 = uStack_178;
  uStack_b8 = local_170;
  local_b0 = uStack_168;
  uStack_a8 = local_160;
  local_80 = 0;
  uStack_70 = 0xc000000000000000;
  local_78 = 0;
  local_158 = (undefined8 **)0x0;
  local_150 = (undefined ***)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xd2);
  __sSS6appendyySSF(0x100000000000004b,0x80000001008a2ff0);
  puVar11 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_258._0_4_ = param_1;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  local_258 = (undefined ***)CONCAT44(local_258._4_4_,uVar6);
  puVar11 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar11 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_258 = pppuVar12;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x6e696769726f202c,0xef3d687461506c61);
  __sSS6appendyySSF(pppuVar18,pppuVar17);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008a3040);
  __sSS6appendyySSF(local_2b0,local_2a0);
  _swift_bridgeObjectRelease(local_2a0);
  __sSS6appendyySSF(0x6e556b736174202c,0xef3d444965757169);
  __sSS6appendyySSF(param_3[9],param_3[10]);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  uVar23 = (ulong)uVar7;
  FUN_10017cb14();
  puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar11 = PTR___sSiN_100995968;
  puVar24 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_258 = (undefined ***)uVar23;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar24);
  __sSS6appendyySSF(0xd000000000000012,0x80000001008a3060);
  puVar24 = local_198[2];
  _swift_bridgeObjectRelease(local_198);
  local_258 = (undefined ***)puVar24;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar11);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0xd000000000000014,0x80000001008a3080);
  uVar23 = (ulong)(uVar15 & 1);
  FUN_10020c594(pppuVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar23);
  pppuVar18 = local_150;
  ppuVar27 = local_158;
  pppuVar17 = (undefined ***)&local_e0;
  FUN_10017cd00(pppuVar12);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,pppuVar12,pppuVar17,puVar10,1);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  local_340 = (undefined ***)ppuVar27;
  local_338 = pppuVar18;
  uStack_32f = 1;
  uVar22 = 0xd0000000000000ac;
  uVar19 = 0x80000001008a30a0;
  local_330 = param_4;
  FUN_1003fb48c(thunk_FUN_10020d3f4);
  FUN_100006cdc(pppuVar12);
  _swift_bridgeObjectRelease(pppuVar18);
  _swift_release(puVar10);
  pppuVar12 = (undefined ***)&local_e0;
  FUN_10020ceb8();
  FUN_10020d654();
  if ((uVar7 & 0xff) == 1) {
    lVar21 = *(long *)(unaff_x20 + 0x30);
    pppuVar18 = pppuVar8;
    FUN_10020c6b0(param_3,pppuVar8,uVar15 & 1);
    if ((uVar15 & 1) == 0) {
      ppuVar25 = pppuVar8[2];
      FUN_10020d2f4(pppuVar8,0);
    }
    else {
      FUN_1003fb4bc(FUN_10020a66c,0,0xd0000000000000a6,0x80000001008a2d40,0xd000000000000014,
                    0x80000001008a3210,0x234,0);
      ppuVar25 = (undefined **)0x0;
    }
    lVar13 = 0;
    FUN_100185ea0();
    _swift_allocObject();
    puVar10 = PTR___swiftEmptySetSingleton_100995eb0;
    *(undefined **)(lVar13 + 0x60) = PTR___swiftEmptySetSingleton_100995eb0;
    *(undefined **)(lVar13 + 0x68) = puVar10;
    *(undefined1 *)(lVar13 + 0x10) = 0;
    *(uint *)(lVar13 + 0x14) = uVar6;
    *(undefined ****)(lVar13 + 0x18) = pppuVar12;
    *(undefined ****)(lVar13 + 0x20) = pppuVar17;
    *(undefined8 *)(lVar13 + 0x28) = uVar22;
    *(undefined8 *)(lVar13 + 0x30) = uVar19;
    *(undefined ****)(lVar13 + 0x38) = param_3;
    *(undefined ****)(lVar13 + 0x40) = pppuVar18;
    *(undefined ****)(lVar13 + 0x48) = local_2b0;
    *(undefined ****)(lVar13 + 0x50) = local_2a0;
    *(undefined ***)(lVar13 + 0x58) = ppuVar25;
    uVar22 = *(undefined8 *)(lVar21 + 0x10);
    puVar10 = &DAT_1009a50f0;
    _swift_allocObject(&DAT_1009a50f0,0x28,7);
    *(long *)(puVar10 + 0x10) = lVar21;
    *(uint *)(puVar10 + 0x18) = uVar6;
    *(long *)(puVar10 + 0x20) = lVar13;
    puVar11 = &DAT_1009a5118;
    _swift_allocObject(&DAT_1009a5118,0x20,7);
    *(code **)(puVar11 + 0x10) = FUN_10020cf5c;
    *(undefined **)(puVar11 + 0x18) = puVar10;
    local_138 = FUN_1000f4ed4;
    local_158 = (undefined8 **)PTR___NSConcreteStackBlock_100995490;
    local_150 = (undefined ***)0x42000000;
    local_148 = (undefined ***)FUN_1000fcdcc;
    local_140 = &DAT_1009a5130;
    local_130 = puVar11;
    aBlock = __Block_copy(&local_158);
    puVar14 = local_130;
    _swift_bridgeObjectRetain(pppuVar17);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(pppuVar18);
    _swift_bridgeObjectRetain(local_2a0);
    _swift_retain(lVar21);
    _swift_retain(lVar13);
    _swift_retain(puVar11);
    _swift_release(puVar14);
    _dispatch_sync(uVar22,aBlock);
    __Block_release(aBlock);
    puVar14 = puVar11;
    _swift_isEscapingClosureAtFileLocation(puVar11,"",0xb6,0xa8,0x14,1);
    _swift_release(puVar11);
    if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100205ac4);
      (*pcVar4)();
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_35c = 0;
    local_338 = local_2b0;
    uStack_32f = (undefined1)((ulong)local_2a0 >> 8);
    local_330 = SUB81(local_2a0,0);
    local_360 = uVar6;
    local_358 = pppuVar12;
    local_350 = pppuVar17;
    local_348 = param_3;
    local_340 = pppuVar18;
    local_328 = ppuVar25;
    FUN_1003fb48c(FUN_10020cf94,local_370,0xd0000000000000b6,0x8000000100897ca0,0xd000000000000064,
                  0x80000001008a3230,0xab,0);
    _swift_bridgeObjectRelease(pppuVar17);
    _swift_bridgeObjectRelease(local_2a0);
    _swift_bridgeObjectRelease(pppuVar18);
    _swift_release(puVar10);
    _swift_release(lVar13);
    _swift_bridgeObjectRelease(uVar19);
    FUN_10020ceec(&local_250);
  }
  else {
    pppuVar18 = pppuVar8;
    FUN_10020c6b0(param_3,pppuVar8,uVar15 & 1);
    FUN_10020d2f4(pppuVar8,uVar15 & 1);
    if ((uVar7 & 0xfe) == 8) {
      _swift_bridgeObjectRelease(pppuVar18);
      _swift_bridgeObjectRelease(local_2a0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      uStack_32f = (undefined1)(uVar6 >> 8);
      local_330 = (undefined1)uVar6;
      FUN_1003fb48c(FUN_10020cf20,&local_340,0xd0000000000000b6,0x8000000100897ca0,
                    0xd000000000000061,0x80000001008a31a0,0x6b,0);
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(pppuVar17);
      FUN_10020ceec(&local_250);
    }
    else {
      local_158 = (undefined8 **)CONCAT62(local_158._2_6_,0x200);
      local_130 = (undefined *)CONCAT44(local_130._4_4_,uVar6);
      local_118 = local_2b0;
      uStack_100 = 1;
      local_108 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_150 = pppuVar12;
      local_148 = pppuVar17;
      local_140 = (undefined *)uVar22;
      local_138 = (code *)uVar19;
      local_128 = param_3;
      pppuStack_120 = pppuVar18;
      local_110 = local_2a0;
      _swift_bridgeObjectRetain(pppuVar17);
      _swift_bridgeObjectRetain(uVar19);
      FUN_10018555c(&local_158);
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(pppuVar17);
      FUN_10020ceec(&local_250);
      FUN_10016c430(&local_158);
    }
  }
  return;
}

