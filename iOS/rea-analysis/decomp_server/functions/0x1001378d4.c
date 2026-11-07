// rea decompile_all
// name: FUN_1001378d4
// address: 0x1001378d4
// body: available
// range: 0x1001378d4-0x100137b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001378d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined *local_c8 [7];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_d0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  puVar8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_e0 = *(long *)(lVar3 + -8);
  lStack_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100135edc();
  puVar4 = &DAT_10099e808;
  local_e8 = lVar3;
  _swift_allocObject(&DAT_10099e808,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar5 = &DAT_10099e830;
  _swift_allocObject(&DAT_10099e830,0x58,7);
  uVar10 = *param_3;
  uVar12 = param_3[3];
  uVar11 = param_3[2];
  *(undefined8 *)(puVar5 + 0x20) = param_3[1];
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  uVar10 = param_3[4];
  *(undefined8 *)(puVar5 + 0x40) = param_3[5];
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(undefined8 *)(puVar5 + 0x48) = param_3[6];
  *(undefined8 *)(puVar5 + 0x50) = param_1;
  local_70 = FUN_100139ba8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_10099e848;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar4);
  FUN_100139bd0(param_3,local_c8);
  _swift_retain(param_1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_c8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar8,local_c8,puVar5,puVar7,lVar2,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,puVar8,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d0 + 8))(puVar8,lVar2);
  (**(code **)(local_e0 + 8))(lVar9,lStack_d8);
  puVar5 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}

