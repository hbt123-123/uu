// rea decompile_all
// name: FUN_1005d2cf8
// address: 0x1005d2cf8
// body: available
// range: 0x1005d2cf8-0x1005d3503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001005d30a0) */
/* WARNING: Removing unreachable block (ram,0x0001005d3160) */

void FUN_1005d2cf8(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar20;
  long extraout_x12;
  long extraout_x12_00;
  long lVar21;
  undefined1 auStack_200 [8];
  long local_1f8;
  undefined1 *local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long lStack_1d0;
  ulong local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined8 local_180;
  undefined *local_170 [2];
  undefined *local_160;
  undefined8 uStack_158;
  code *local_150;
  undefined *puStack_148;
  code *local_140;
  undefined *puStack_138;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar3 = 0;
  local_180 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar21 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_188 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_188 + 0x40));
  lVar19 = (long)(auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_190 = lVar19;
  __s8Dispatch0A4TimeVMa();
  local_1a8 = *(long *)(lVar5 + -8);
  local_198 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1a8 + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1b0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar19 = lVar19 - extraout_x12;
  lVar5 = 0;
  local_1a0 = lVar19;
  __s8Dispatch0A12TimeIntervalOMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  local_1d8 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
    IVar11 = 0;
    FUN_1005d14b8(0,0);
    if (IVar11 != 0) {
      uStack_98 = param_1[0x19];
      local_a0 = param_1[0x18];
      uStack_88 = param_1[0x1b];
      uStack_90 = param_1[0x1a];
      uStack_78 = param_1[0x1d];
      local_80 = param_1[0x1c];
      local_70 = *(undefined1 *)(param_1 + 0x1e);
      uStack_d8 = param_1[0x11];
      local_e0 = param_1[0x10];
      uStack_c8 = param_1[0x13];
      uStack_d0 = param_1[0x12];
      uStack_b8 = param_1[0x15];
      local_c0 = param_1[0x14];
      uStack_a8 = param_1[0x17];
      uStack_b0 = param_1[0x16];
      uStack_118 = param_1[9];
      local_120 = param_1[8];
      uStack_108 = param_1[0xb];
      uStack_110 = param_1[10];
      uStack_f8 = param_1[0xd];
      local_100 = param_1[0xc];
      uStack_e8 = param_1[0xf];
      uStack_f0 = param_1[0xe];
      uStack_158 = param_1[1];
      local_160 = (undefined *)*param_1;
      puStack_148 = (undefined *)param_1[3];
      local_150 = (code *)param_1[2];
      puStack_138 = (undefined *)param_1[5];
      local_140 = (code *)param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      uVar12 = 0;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONEncoderCACycfc();
      uVar13 = uVar12;
      FUN_1005d1150();
      puVar6 = &DAT_1009da430;
      ppuVar14 = &local_160;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar14,&DAT_1009da430,uVar13);
      _swift_release(uVar12);
      ppuVar18 = ppuVar14;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar14,puVar6);
      FUN_100006cdc(ppuVar14,puVar6);
      local_140 = FUN_100008290;
      puStack_138 = (undefined *)0x0;
      local_160 = PTR___NSConcreteStackBlock_100995490;
      uStack_158 = 0x42000000;
      local_150 = FUN_1005d0aa8;
      puStack_148 = &DAT_1009d8db8;
      pvVar15 = __Block_copy(&local_160);
      _objc_msgSend(IVar11,"receiveAsync:reply:",ppuVar18,pvVar15);
      _swift_unknownObjectRelease(IVar11);
      __Block_release(pvVar15);
    }
  }
  else {
    puVar6 = &DAT_1009d8df0;
    local_1f8 = lVar4;
    local_1f0 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_1e8 = lVar21;
    local_1e0 = lVar3;
    lStack_1d0 = extraout_x12_00;
    _swift_allocObject(&DAT_1009d8df0,0x18,7);
    puVar7 = &DAT_1009d8e18;
    local_1c8 = param_2;
    _swift_allocObject(&DAT_1009d8e18,0x20,7);
    *(long *)(puVar7 + 0x10) = param_4;
    *(undefined8 *)(puVar7 + 0x18) = param_5;
    puVar8 = &DAT_100aadc78;
    FUN_100004bb4(&DAT_100aadc78,&DAT_10083f238);
    _swift_allocObject();
    puVar9 = &DAT_100aadc80;
    FUN_100004bb4(&DAT_100aadc80,&DAT_10083f240);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x10) = 0;
    *(undefined8 *)(puVar9 + 0x18) = 0;
    puVar10 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    local_1c0 = param_4;
    FUN_10004090c(param_4,param_5);
    local_1b8 = param_5;
    _swift_retain(param_5);
    IVar11 = _objc_msgSend((ID)puVar10,"init");
    *(undefined8 *)(puVar9 + 0x18) = 0;
    *(ID *)(puVar9 + 0x20) = IVar11;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    FUN_10007ed2c(0,0);
    *(undefined **)(puVar8 + 0x10) = puVar9;
    puVar10 = &DAT_1009d8e40;
    _swift_allocObject(&DAT_1009d8e40,0x20,7);
    *(code **)(puVar10 + 0x10) = FUN_1005d43f0;
    *(undefined **)(puVar10 + 0x18) = puVar7;
    _swift_retain_n(puVar7,2);
    _swift_retain(puVar9);
    uVar2 = local_1c8;
    _objc_msgSend(IVar11,"lock");
    uVar13 = *(undefined8 *)(puVar9 + 0x10);
    uVar12 = *(undefined8 *)(puVar9 + 0x18);
    *(code **)(puVar9 + 0x10) = FUN_1005d441c;
    *(undefined **)(puVar9 + 0x18) = puVar10;
    FUN_10007ed2c(uVar13,uVar12);
    _objc_msgSend(*(ID *)(puVar9 + 0x20),"unlock");
    _swift_release(puVar9);
    _swift_release_n(puVar7,2);
    *(undefined **)(puVar6 + 0x10) = puVar8;
    puVar7 = &DAT_1009d8e68;
    _swift_allocObject(&DAT_1009d8e68,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = local_180;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    _swift_retain(puVar6);
    pcVar20 = FUN_1005d445c;
    FUN_1005d14b8(FUN_1005d445c,puVar7);
    _swift_release(puVar7);
    puVar7 = PTR___NSConcreteStackBlock_100995490;
    if (pcVar20 != (code *)0x0) {
      uStack_98 = param_1[0x19];
      local_a0 = param_1[0x18];
      uStack_88 = param_1[0x1b];
      uStack_90 = param_1[0x1a];
      uStack_78 = param_1[0x1d];
      local_80 = param_1[0x1c];
      local_70 = *(undefined1 *)(param_1 + 0x1e);
      uStack_d8 = param_1[0x11];
      local_e0 = param_1[0x10];
      uStack_c8 = param_1[0x13];
      uStack_d0 = param_1[0x12];
      uStack_b8 = param_1[0x15];
      local_c0 = param_1[0x14];
      uStack_a8 = param_1[0x17];
      uStack_b0 = param_1[0x16];
      uStack_118 = param_1[9];
      local_120 = param_1[8];
      uStack_108 = param_1[0xb];
      uStack_110 = param_1[10];
      uStack_f8 = param_1[0xd];
      local_100 = param_1[0xc];
      uStack_e8 = param_1[0xf];
      uStack_f0 = param_1[0xe];
      uStack_158 = param_1[1];
      local_160 = (undefined *)*param_1;
      puStack_148 = (undefined *)param_1[3];
      local_150 = (code *)param_1[2];
      puStack_138 = (undefined *)param_1[5];
      local_140 = (code *)param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      uVar12 = 0;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONEncoderCACycfc();
      uVar13 = uVar12;
      FUN_1005d1150();
      puVar8 = &DAT_1009da430;
      ppuVar14 = &local_160;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar14,&DAT_1009da430,uVar13);
      _swift_release(uVar12);
      ppuVar18 = ppuVar14;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar14,puVar8);
      FUN_100006cdc(ppuVar14,puVar8);
      puVar8 = &DAT_1009d8eb8;
      _swift_allocObject(&DAT_1009d8eb8,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = local_180;
      *(undefined **)(puVar8 + 0x18) = puVar6;
      local_140 = FUN_1005d44bc;
      local_160 = puVar7;
      uStack_158 = 0x42000000;
      local_150 = FUN_1005d0aa8;
      puStack_148 = &DAT_1009d8ed0;
      puStack_138 = puVar8;
      pvVar15 = __Block_copy(&local_160);
      puVar8 = puStack_138;
      _swift_retain(puVar6);
      _swift_release(puVar8);
      _objc_msgSend((ID)pcVar20,"receiveAsync:reply:",ppuVar18,pvVar15);
      _swift_unknownObjectRelease(pcVar20);
      __Block_release(pvVar15);
    }
    lVar3 = local_1d8;
    (**(code **)(lStack_1d0 + 0x68))
              (local_1d8,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO5neveryA2CmFWC_100995f18,
               lVar5);
    puVar8 = &DAT_100aadc88;
    FUN_100005c90(&DAT_100aadc88,PTR___s8Dispatch0A12TimeIntervalOMa_100995f28,
                  PTR___s8Dispatch0A12TimeIntervalOSQAAMc_100995f38);
    uVar16 = uVar2;
    __sSQ2eeoiySbx_xtFZTj(uVar2,lVar3,lVar5,puVar8);
    (**(code **)(lStack_1d0 + 8))(lVar3,lVar5);
    lVar3 = local_1b0;
    if ((uVar16 & 1) == 0) {
      __s8Dispatch0A4TimeV3nowACyFZ(local_1b0);
      lVar4 = local_1a0;
      __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(local_1a0,lVar3,uVar2);
      lVar5 = local_198;
      pcVar20 = *(code **)(local_1a8 + 8);
      (*pcVar20)(lVar3,local_198);
      local_140 = FUN_1005d4464;
      local_160 = puVar7;
      uStack_158 = 0x42000000;
      local_150 = thunk_FUN_1000acdb4;
      puStack_148 = &DAT_1009d8e80;
      puStack_138 = puVar6;
      pvVar15 = __Block_copy(&local_160);
      _swift_retain(puVar6);
      lVar19 = local_190;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_190);
      local_170[0] = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar17 = &DAT_100aadc90;
      FUN_100005c90(&DAT_100aadc90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100aadc98;
      FUN_100004bb4(&DAT_100aadc98,&DAT_10083f248);
      puVar8 = puVar7;
      FUN_1005d446c();
      lVar3 = local_1e0;
      puVar1 = local_1f0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_1f0,local_170,puVar7,puVar8,local_1e0,puVar17);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (lVar4,lVar19,puVar1,pvVar15);
      __Block_release(pvVar15);
      FUN_10007ed2c(local_1c0,local_1b8);
      (**(code **)(local_1e8 + 8))(puVar1,lVar3);
      (**(code **)(local_188 + 8))(lVar19,local_1f8);
      (*pcVar20)(lVar4,lVar5);
      puVar7 = puStack_138;
      _swift_release(puVar6);
      _swift_release(puVar7);
    }
    else {
      FUN_10007ed2c(local_1c0,local_1b8);
      _swift_release(puVar6);
    }
  }
  return;
}

