// rea decompile_all
// name: FUN_10018e4a0
// address: 0x10018e4a0
// body: available
// range: 0x10018e4a0-0x10018e797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018e4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_e0;
  long local_d8;
  undefined4 local_cc;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar2 = 0;
  local_e0 = param_1;
  local_cc = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar2 + -8);
  local_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar8 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_c0 = lVar8;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_d8 = lVar8;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  lVar2 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_10018c264();
  puVar4 = &DAT_1009a11f0;
  local_c8 = lVar2;
  _swift_allocObject(&DAT_1009a11f0,0x18,7);
  _swift_weakInit(puVar4 + 0x10,param_2);
  (**(code **)(lVar11 + 0x10))(lVar8,param_5,lVar3);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar10 + 3 & 0xfffffffffffffffc;
  puVar5 = &DAT_1009a1380;
  _swift_allocObject(&DAT_1009a1380,uVar13 + 4,uVar9 | 7);
  uVar1 = local_e0;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = local_e0;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar10,lVar8,lVar3);
  *(undefined4 *)(puVar5 + uVar13) = local_cc;
  local_70 = FUN_10019231c;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a1398;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar4);
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(uVar1);
  lVar2 = local_d8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  lVar8 = local_b8;
  lVar3 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_58,puVar5,puVar7,local_b8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar3,lVar8);
  (**(code **)(local_b0 + 8))(lVar2,lStack_a8);
  puVar5 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}

