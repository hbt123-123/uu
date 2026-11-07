// rea decompile_all
// name: FUN_100166ae8
// address: 0x100166ae8
// body: available
// range: 0x100166ae8-0x100166fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100166ae8(uint param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long local_2a0 [4];
  undefined8 local_280;
  uint local_274;
  undefined8 local_270;
  undefined *local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined7 uStack_257;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined *local_170;
  undefined8 uStack_168;
  code *local_160;
  undefined *puStack_158;
  code *local_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
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
  
  lVar1 = 0;
  local_280 = param_2;
  local_274 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_2a0[2] = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2a0[2] + 0x40));
  lVar14 = (long)local_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_2a0[0] = *(long *)(lVar2 + -8);
  local_2a0[1] = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2a0[0] + 0x40));
  lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  local_2a0[3] = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2a0[3] + 0x40));
  puVar12 = (undefined8 *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  uVar5 = local_280;
  if ((int)IVar4 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar13 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar13 + 0x10);
    puVar8 = &DAT_10099fa48;
    _swift_allocObject(&DAT_10099fa48,0x28,7);
    uVar5 = local_280;
    *(undefined **)(puVar8 + 0x10) = puVar13;
    *(uint *)(puVar8 + 0x18) = local_274;
    *(undefined8 *)(puVar8 + 0x20) = local_280;
    local_150 = FUN_10016bd74;
    local_170 = PTR___NSConcreteStackBlock_100995490;
    uStack_168 = 0x42000000;
    local_160 = FUN_1000acdb4;
    puStack_158 = &DAT_10099fa60;
    puStack_148 = puVar8;
    aBlock = __Block_copy(&local_170);
    puVar13 = puStack_148;
    _swift_retain(uVar5);
    _swift_release(puVar13);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
    local_170 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar12 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar13 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar9 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_170,puVar13,puVar9,lVar1,puVar12);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar15,lVar14,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_2a0[2] + 8))(lVar14,lVar1);
    (**(code **)(local_2a0[0] + 8))(lVar15,local_2a0[1]);
  }
  else {
    local_2a0[2] = lVar2;
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,&local_170,
                       0x21,0);
    __s10Foundation4DateVACycfC(lVar10);
    puVar13 = (undefined *)(ulong)local_274;
    FUN_1001297d8(puVar13,lVar10);
    (**(code **)(lVar11 + 8))(lVar10,lVar3);
    _swift_endAccess(&local_170);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    local_270 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
    FUN_1005fac18(0);
    _swift_retain();
    FUN_10016c760();
    local_258 = 4;
    local_268 = puVar13;
    uStack_260 = uVar5;
    FUN_10016b97c(&local_268);
    uStack_a8 = uStack_1a0;
    local_b0 = local_1a8;
    uStack_98 = uStack_190;
    uStack_a0 = uStack_198;
    uStack_88 = uStack_180;
    local_90 = local_188;
    local_80 = local_178;
    uStack_e8 = uStack_1e0;
    local_f0 = local_1e8;
    uStack_d8 = uStack_1d0;
    uStack_e0 = uStack_1d8;
    uStack_c8 = uStack_1c0;
    local_d0 = local_1c8;
    uStack_b8 = uStack_1b0;
    uStack_c0 = uStack_1b8;
    uStack_128 = uStack_220;
    local_130 = local_228;
    uStack_118 = uStack_210;
    uStack_120 = local_218;
    uStack_108 = uStack_200;
    local_110 = local_208;
    uStack_f8 = uStack_1f0;
    uStack_100 = local_1f8;
    local_160 = (code *)CONCAT71(uStack_257,local_258);
    uStack_168 = uStack_260;
    local_170 = local_268;
    puStack_158 = (undefined *)uStack_250;
    puStack_148 = (undefined *)uStack_240;
    local_150 = (code *)local_248;
    uStack_138 = uStack_230;
    uStack_140 = local_238;
    *puVar12 = 1;
    lVar2 = local_2a0[3];
    lVar1 = local_2a0[2];
    (**(code **)(local_2a0[3] + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,local_2a0[2]
              );
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    uVar7 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_170,puVar12,uVar6,0,0,uVar7,&PTR_PTR_10099cbd8);
    _swift_release(uVar5);
    (**(code **)(lVar2 + 8))(puVar12,lVar1);
  }
  return;
}

