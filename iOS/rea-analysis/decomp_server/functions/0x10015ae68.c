// rea decompile_all
// name: FUN_10015ae68
// address: 0x10015ae68
// body: available
// range: 0x10015ae68-0x10015b16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015ae68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158 [24];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_160 = *(long *)(lVar1 + -8);
  local_180 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_160 + 0x40));
  lVar6 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  local_170 = *(long *)(lVar1 + -8);
  local_168 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_170 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar3 = &DAT_10099ff20;
  local_178 = uVar2;
  _swift_allocObject(&DAT_10099ff20,0x128,7);
  uVar2 = *param_5;
  uVar9 = param_5[3];
  uVar8 = param_5[2];
  *(undefined8 *)(puVar3 + 0x38) = param_5[1];
  *(undefined8 *)(puVar3 + 0x30) = uVar2;
  *(undefined8 *)(puVar3 + 0x48) = uVar9;
  *(undefined8 *)(puVar3 + 0x40) = uVar8;
  uVar2 = param_5[4];
  *(undefined8 *)(puVar3 + 0x58) = param_5[5];
  *(undefined8 *)(puVar3 + 0x50) = uVar2;
  uVar9 = param_6[5];
  uVar8 = param_6[4];
  uVar2 = param_6[6];
  *(undefined8 *)(puVar3 + 0xa0) = param_6[7];
  *(undefined8 *)(puVar3 + 0x98) = uVar2;
  *(undefined8 *)(puVar3 + 0x90) = uVar9;
  *(undefined8 *)(puVar3 + 0x88) = uVar8;
  uVar9 = param_6[1];
  uVar8 = *param_6;
  uVar2 = param_6[2];
  *(undefined8 *)(puVar3 + 0x80) = param_6[3];
  *(undefined8 *)(puVar3 + 0x78) = uVar2;
  *(undefined8 *)(puVar3 + 0x70) = uVar9;
  *(undefined8 *)(puVar3 + 0x68) = uVar8;
  uVar9 = param_6[0xd];
  uVar8 = param_6[0xc];
  uVar2 = param_6[0xe];
  *(undefined8 *)(puVar3 + 0xe0) = param_6[0xf];
  *(undefined8 *)(puVar3 + 0xd8) = uVar2;
  *(undefined8 *)(puVar3 + 0xd0) = uVar9;
  *(undefined8 *)(puVar3 + 200) = uVar8;
  uVar9 = param_6[9];
  uVar8 = param_6[8];
  uVar2 = param_6[10];
  *(undefined8 *)(puVar3 + 0xc0) = param_6[0xb];
  *(undefined8 *)(puVar3 + 0xb8) = uVar2;
  *(undefined8 *)(puVar3 + 0xb0) = uVar9;
  *(undefined8 *)(puVar3 + 0xa8) = uVar8;
  uVar9 = param_6[0x14];
  uVar8 = param_6[0x17];
  uVar2 = param_6[0x16];
  *(undefined8 *)(puVar3 + 0x110) = param_6[0x15];
  *(undefined8 *)(puVar3 + 0x108) = uVar9;
  *(undefined8 *)(puVar3 + 0x120) = uVar8;
  *(undefined8 *)(puVar3 + 0x118) = uVar2;
  uVar9 = param_6[0x11];
  uVar8 = param_6[0x10];
  uVar2 = param_6[0x12];
  *(undefined8 *)(puVar3 + 0x100) = param_6[0x13];
  *(undefined8 *)(puVar3 + 0xf8) = uVar2;
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x60) = param_5[6];
  *(undefined8 *)(puVar3 + 0xf0) = uVar9;
  *(undefined8 *)(puVar3 + 0xe8) = uVar8;
  local_78 = FUN_10016c38c;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_10099ff38;
  local_70 = puVar3;
  aBlock = __Block_copy(&local_98);
  puVar3 = local_70;
  FUN_10010bd10(param_1,param_2);
  _swift_retain(param_3);
  FUN_10016c274(param_5,local_158);
  FUN_1000408d0(param_6,local_158);
  _swift_release(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
  local_158[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar5 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar1 = local_180;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar6,local_158,puVar3,puVar5,local_180,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar7,lVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_160 + 8))(lVar6,lVar1);
  (**(code **)(local_170 + 8))(lVar7,local_168);
  return;
}

