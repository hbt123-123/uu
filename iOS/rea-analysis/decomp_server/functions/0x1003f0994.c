// rea decompile_all
// name: FUN_1003f0994
// address: 0x1003f0994
// body: available
// range: 0x1003f0994-0x1003f0e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f0994(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_150 [8];
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  code *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar4 = 0;
  local_120 = param_5;
  local_110 = param_6;
  local_fc = param_8;
  local_f8 = param_7;
  local_a8 = (code *)param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar4 + -8);
  local_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar4 = 0;
  local_c0 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar4 + -8);
  lStack_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  lVar9 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d8 = lVar9;
  __s8Dispatch0A4TimeVMa();
  local_118 = *(long *)(lVar4 + -8);
  local_e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_118 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = 0;
  local_e8 = lVar9 - extraout_x12;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  local_130 = *(long *)(lVar4 + -8);
  local_128 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_130 + 0x40));
  lVar13 = (lVar9 - extraout_x12) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1003b0764();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = lVar11 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_108 = param_1;
  local_f0 = param_2;
  (*param_1)(lVar10,param_3);
  puVar6 = &DAT_100a8baa8;
  FUN_100004bb4(&DAT_100a8baa8,&DAT_1008209a0);
  lVar4 = lVar10;
  (**(code **)(*(long *)(puVar6 + -8) + 0x30))(lVar10,1,puVar6);
  pcVar3 = local_a8;
  if ((int)lVar4 == 1) {
    FUN_100616260(param_3);
  }
  else {
    local_140 = lVar12;
    (**(code **)(lVar12 + 0x20))(lVar11,lVar10,lVar5);
    lVar4 = local_120;
    local_138 = lVar5;
    if (local_120 == 0) {
      FUN_100004b70(0);
      lVar10 = local_128;
      lVar5 = local_130;
      (**(code **)(local_130 + 0x68))
                (lVar13,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,
                 local_128);
      lVar12 = lVar13;
      __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
      local_148 = lVar12;
      (**(code **)(lVar5 + 8))(lVar13,lVar10);
    }
    else {
      local_148 = local_120;
    }
    __s8Dispatch0A4TimeV3nowACyFZ(lVar9,lVar4);
    lVar5 = local_e8;
    __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(local_e8,lVar9,lVar11);
    lVar10 = local_e0;
    local_a8 = *(code **)(local_118 + 8);
    (*local_a8)(lVar9,local_e0);
    puVar6 = &DAT_1009bb848;
    _swift_allocObject(&DAT_1009bb848,0x48,7);
    uVar7 = local_f0;
    uVar1 = local_f8;
    *(undefined8 *)(puVar6 + 0x10) = local_110;
    *(undefined8 *)(puVar6 + 0x18) = local_f8;
    *(code **)(puVar6 + 0x20) = pcVar3;
    puVar6[0x28] = (byte)local_fc & 1;
    *(long *)(puVar6 + 0x30) = lVar4;
    *(code **)(puVar6 + 0x38) = local_108;
    *(undefined8 *)(puVar6 + 0x40) = local_f0;
    local_78 = FUN_1003f2344;
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0x42000000;
    local_88 = FUN_1000acdb4;
    puStack_80 = &DAT_1009bb860;
    local_70 = puVar6;
    aBlock = __Block_copy(&local_98);
    _swift_retain(uVar1);
    _swift_retain(pcVar3);
    _swift_retain(uVar7);
    lVar4 = local_d8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar9 = local_b0;
    puVar2 = local_c0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c0,&local_a0,puVar6,puVar8,local_b0,uVar7);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar5,lVar4,puVar2,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b8 + 8))(puVar2,lVar9);
    (**(code **)(local_d0 + 8))(lVar4,lStack_c8);
    (*local_a8)(lVar5,lVar10);
    (**(code **)(local_140 + 8))(lVar11,local_138);
    _swift_release(local_70);
  }
  return;
}

