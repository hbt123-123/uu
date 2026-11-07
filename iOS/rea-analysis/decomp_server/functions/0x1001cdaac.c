// rea decompile_all
// name: FUN_1001cdaac
// address: 0x1001cdaac
// body: available
// range: 0x1001cdaac-0x1001ce0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001cdaac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long lVar14;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long lVar16;
  long extraout_x12;
  long unaff_x20;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_440 [16];
  undefined8 auStack_430 [2];
  int aiStack_420 [2];
  long lStack_418;
  undefined8 local_410;
  undefined8 local_408;
  code *local_400;
  undefined1 auStack_390 [72];
  long local_348;
  undefined1 *puStack_340;
  undefined8 local_338;
  undefined *local_330;
  undefined8 uStack_328;
  code *local_320;
  undefined *puStack_318;
  code *local_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined *local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
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
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined1 auStack_198 [24];
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = (undefined *)*param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&local_410 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  local_400 = *(code **)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_400 + 0x40));
  lVar18 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar18 - extraout_x12;
  puVar10 = auStack_198;
  uVar11 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,puVar10,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    iVar17 = -1;
  }
  else {
    lVar5 = lVar4;
    local_408 = param_7;
    FUN_10047466c();
    puStack_308 = (undefined *)uStack_88;
    local_310 = (code *)local_90;
    uStack_2f8 = uStack_78;
    uStack_300 = uStack_80;
    local_2f0 = local_70;
    uStack_328 = uStack_a8;
    local_330 = local_b0;
    puStack_318 = (undefined *)uStack_98;
    local_320 = (code *)uStack_a0;
    local_348 = lVar5;
    puStack_340 = puVar10;
    local_338 = uVar11;
    FUN_1001d3690(&local_330);
    uStack_1b8 = uStack_288;
    local_1c0 = local_290;
    uStack_1a8 = uStack_278;
    uStack_1b0 = uStack_280;
    local_1a0 = local_270;
    uStack_1f8 = uStack_2c8;
    local_200 = local_2d0;
    uStack_1e8 = uStack_2b8;
    uStack_1f0 = uStack_2c0;
    uStack_1d8 = uStack_2a8;
    local_1e0 = local_2b0;
    uStack_1c8 = uStack_298;
    uStack_1d0 = uStack_2a0;
    uStack_238 = puStack_308;
    local_240 = local_310;
    uStack_228 = uStack_2f8;
    uStack_230 = uStack_300;
    uStack_218 = uStack_2e8;
    local_220 = local_2f0;
    uStack_208 = uStack_2d8;
    uStack_210 = uStack_2e0;
    uStack_258 = uStack_328;
    local_260 = local_330;
    uStack_248 = puStack_318;
    uStack_250 = local_320;
    FUN_100008290(&local_260);
    uStack_d8 = uStack_1b8;
    local_e0 = local_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    local_c0 = local_1a0;
    uStack_118 = uStack_1f8;
    local_120 = local_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_f8 = uStack_1d8;
    local_100 = local_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_158 = uStack_238;
    local_160 = local_240;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    uStack_138 = uStack_218;
    local_140 = local_220;
    uStack_128 = uStack_208;
    uStack_130 = uStack_210;
    uStack_178 = uStack_258;
    local_180 = local_260;
    uStack_168 = uStack_248;
    uStack_170 = uStack_250;
    FUN_1001d2ad0(param_1,auStack_390);
    FUN_100467dcc(&local_180);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar11 = local_338;
    puVar10 = puStack_340;
    lVar5 = local_348;
    iVar17 = *(int *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle);
    FUN_1001ad794(iVar17,local_348,puStack_340,local_338,2);
    if (iVar17 != 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)(lVar16 + -0x10) = iVar17;
      *(undefined8 **)(lVar16 + -8) = param_1;
      FUN_1003fb4bc(FUN_1001d369c,lVar16 + -0x20,0xd0000000000000a1,0x800000010089dec0,
                    0x61726628646e6573,0xec000000293a656d,0x10a,0);
      lVar5 = local_348;
      uVar11 = local_338;
      puVar10 = puStack_340;
    }
    FUN_100006cdc(lVar5,puVar10);
    _swift_release(uVar11);
    param_7 = local_408;
    if (iVar17 == 0) {
      if (param_6 == (code *)0x0) {
        return;
      }
      (*param_6)();
      return;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_410 = param_4;
  *(undefined8 *)(lVar16 + -0x20) = param_2;
  *(undefined8 *)(lVar16 + -0x18) = param_3;
  *(int *)(lVar16 + -0x10) = iVar17;
  *(undefined8 **)(lVar16 + -8) = param_1;
  FUN_1003fb4bc(FUN_1001d3678,lVar16 + -0x30,0xd0000000000000a1,0x800000010089dec0,
                0xd000000000000032,0x800000010089e180,0x140,0);
  local_408 = *(undefined8 *)(unaff_x20 + 0x18);
  __s8Dispatch0A4TimeV3nowACyFZ(lVar18);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar16,0x3fb999999999999a,lVar18);
  local_400 = *(code **)((long)local_400 + 8);
  (*local_400)(lVar18,lVar3);
  puVar6 = &DAT_1009a33f8;
  _swift_allocObject(&DAT_1009a33f8,0x18,7);
  _swift_weakInit(puVar6 + 0x10,unaff_x20);
  puVar7 = &DAT_1009a36f0;
  _swift_allocObject(&DAT_1009a36f0,0x90,7);
  uVar20 = param_1[1];
  uVar19 = *param_1;
  uVar11 = param_1[2];
  *(undefined8 *)(puVar7 + 0x40) = param_1[3];
  *(undefined8 *)(puVar7 + 0x38) = uVar11;
  uVar11 = param_1[4];
  uVar22 = param_1[7];
  uVar21 = param_1[6];
  *(undefined8 *)(puVar7 + 0x50) = param_1[5];
  *(undefined8 *)(puVar7 + 0x48) = uVar11;
  *(undefined8 *)(puVar7 + 0x60) = uVar22;
  *(undefined8 *)(puVar7 + 0x58) = uVar21;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = local_410;
  *(undefined8 *)(puVar7 + 0x20) = param_5;
  uVar11 = param_1[8];
  *(undefined8 *)(puVar7 + 0x30) = uVar20;
  *(undefined8 *)(puVar7 + 0x28) = uVar19;
  *(undefined8 *)(puVar7 + 0x68) = uVar11;
  *(undefined8 *)(puVar7 + 0x70) = param_2;
  *(undefined8 *)(puVar7 + 0x78) = param_3;
  *(code **)(puVar7 + 0x80) = param_6;
  *(undefined8 *)(puVar7 + 0x88) = param_7;
  local_310 = thunk_FUN_1001d370c;
  local_330 = PTR___NSConcreteStackBlock_100995490;
  uStack_328 = 0x42000000;
  local_320 = FUN_1000acdb4;
  puStack_318 = &DAT_1009a3708;
  puStack_308 = puVar7;
  aBlock = __Block_copy(&local_330);
  FUN_1001d2ad0(param_1,&local_260);
  _swift_retain(puVar6);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(param_3);
  FUN_10004090c(param_6,param_7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
  local_260 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar8 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar7 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar9 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar13,&local_260,puVar7,puVar9,lVar1,puVar8);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (lVar16,lVar15,lVar13,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar12 + 8))(lVar13,lVar1);
  (**(code **)(lVar14 + 8))(lVar15,lVar2);
  (*local_400)(lVar16,lVar3);
  puVar7 = puStack_308;
  _swift_release(puVar6);
  _swift_release(puVar7);
  return;
}

