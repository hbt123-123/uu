// rea decompile_all
// name: FUN_100167028
// address: 0x100167028
// body: available
// range: 0x100167028-0x1001676a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100167028(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_2c0 [2];
  undefined1 auStack_2ac [12];
  long local_2a0 [3];
  undefined8 local_288;
  undefined *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 uStack_238;
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
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined1 auStack_188 [24];
  undefined *local_170;
  undefined8 uStack_168;
  code *local_160;
  undefined *puStack_158;
  code *local_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_2a0[2] = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2a0[2] + 0x40));
  lVar14 = (long)local_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar4 + -8);
  local_2a0[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  local_2a0[0] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2a0[0] + 0x40));
  puVar13 = (undefined8 *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  IVar5 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  uVar12 = (undefined4)param_1;
  uVar2 = (undefined1)param_2;
  if ((int)IVar5 == 0) {
    lVar4 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_10099f2e0;
    local_2a0[0] = lVar4;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &DAT_10099f9f8;
    _swift_allocObject(&DAT_10099f9f8,0x1d,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined4 *)(puVar8 + 0x18) = uVar12;
    puVar8[0x1c] = uVar2;
    local_150 = FUN_10016bd44;
    local_170 = PTR___NSConcreteStackBlock_100995490;
    uStack_168 = 0x42000000;
    local_160 = FUN_1000acdb4;
    puStack_158 = &DAT_10099fa10;
    puStack_148 = puVar8;
    aBlock = __Block_copy(&local_170);
    _swift_release(puStack_148);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
    local_170 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar9 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_170,puVar7,puVar9,lVar3,puVar13);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar16,lVar14,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_2a0[2] + 8))(lVar14,lVar3);
    (**(code **)(lVar15 + 8))(lVar16,local_2a0[1]);
    return;
  }
  if ((param_2 & 0xff) == 0) {
    return;
  }
  puVar9 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks);
  local_2a0[2] = lVar4;
  _swift_beginAccess(puVar9,auStack_188,0,0);
  uVar6 = param_1;
  FUN_100152fd0(param_1,*puVar9);
  if ((uVar6 & 1) == 0) {
    uVar6 = param_1;
    FUN_100152fd0(param_1,puVar9[1]);
    if ((uVar6 & 1) != 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(puVar13 + -2) = uVar12;
      FUN_1003fb48c(FUN_10016bd54,puVar13 + -4,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000002a,0x8000000100894340,0x3c3,0);
      return;
    }
    uVar1 = (uint)param_2 & 0xff;
    if (uVar1 == 3) {
      FUN_100153444();
      lVar3 = uVar6 + 0x18;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 == 0) {
        _swift_release(uVar6);
      }
      else {
        local_280 = (undefined *)(param_1 & 0xffffffff);
        local_288 = CONCAT71(local_288._1_7_,1);
        local_270 = 0xc000000000000000;
        uStack_278 = 0;
        local_240 = 0x1000000000000000;
        uStack_238 = 1;
        FUN_100193a8c(&local_170,&local_280);
        FUN_1001bd040(&local_170,0,0);
        _swift_release();
        _swift_release(uVar6);
        FUN_1000914e4(&local_170);
        _swift_unknownObjectRelease(lVar3);
        FUN_100006cdc(0,0xc000000000000000);
      }
      FUN_10016b144(param_1,3);
      return;
    }
    if (uVar1 == 1) goto LAB_1001674a4;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(puVar13 + -2) = uVar12;
    *(undefined1 *)((long)puVar13 + -0xc) = uVar2;
    FUN_1003fb48c(FUN_10016bd5c,puVar13 + -4,0xd0000000000000a4,0x800000010088d870,
                  0xd00000000000002a,0x8000000100894340,0x3b8,0);
    if (((uint)param_2 & 0xff) == 1) {
LAB_1001674a4:
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar11 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
      local_280 = (undefined *)(param_1 & 0xffffffff);
      uStack_278 = 0;
      local_270 = CONCAT71(local_270._1_7_,2);
      local_288 = uVar11;
      FUN_10016b97c(&local_280);
      uStack_a8 = uStack_1b8;
      local_b0 = local_1c0;
      uStack_98 = uStack_1a8;
      uStack_a0 = uStack_1b0;
      uStack_88 = uStack_198;
      local_90 = local_1a0;
      local_80 = local_190;
      uStack_e8 = uStack_1f8;
      local_f0 = local_200;
      uStack_d8 = uStack_1e8;
      uStack_e0 = uStack_1f0;
      uStack_c8 = uStack_1d8;
      local_d0 = local_1e0;
      uStack_b8 = uStack_1c8;
      uStack_c0 = uStack_1d0;
      local_130 = local_240;
      uStack_118 = uStack_228;
      uStack_120 = uStack_230;
      uStack_108 = uStack_218;
      local_110 = local_220;
      uStack_f8 = uStack_208;
      uStack_100 = uStack_210;
      uStack_168 = uStack_278;
      local_170 = local_280;
      puStack_158 = (undefined *)uStack_268;
      local_160 = (code *)local_270;
      puStack_148 = (undefined *)uStack_258;
      local_150 = (code *)local_260;
      uStack_138 = uStack_248;
      uStack_140 = uStack_250;
      *puVar13 = 1;
      lVar4 = local_2a0[2];
      lVar3 = local_2a0[0];
      (**(code **)(local_2a0[0] + 0x68))
                (puVar13,*(undefined4 *)
                          PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
                 local_2a0[2]);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar11);
      uVar10 = 0;
      FUN_1000fd494(0);
      FUN_1005d68b4(&local_170,puVar13,uVar11,0,0,uVar10,&PTR_PTR_10099cbd8);
      (**(code **)(lVar3 + 8))(puVar13,lVar4);
      return;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(puVar13 + -2) = uVar12;
    *(undefined1 *)((long)puVar13 + -0xc) = uVar2;
    FUN_1003fb48c(FUN_10016bd68,puVar13 + -4,0xd0000000000000a4,0x800000010088d870,
                  0xd00000000000002a,0x8000000100894340,0x3bd,0);
  }
  FUN_10016b144(param_1,param_2);
  return;
}

