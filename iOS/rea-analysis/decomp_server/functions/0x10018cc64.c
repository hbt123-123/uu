// rea decompile_all
// name: FUN_10018cc64
// address: 0x10018cc64
// body: available
// range: 0x10018cc64-0x10018ced7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018cc64(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  
  lVar1 = 0;
  local_c8 = param_4;
  uStack_c0 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10018c264();
  puVar3 = &DAT_1009a11f0;
  local_b8 = lVar2;
  _swift_allocObject(&DAT_1009a11f0,0x18,7);
  _swift_weakInit(puVar3 + 0x10,param_2);
  puVar4 = &DAT_1009a13d0;
  _swift_allocObject(&DAT_1009a13d0,0x48,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined4 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = local_c8;
  *(undefined8 *)(puVar4 + 0x30) = param_5;
  *(undefined8 *)(puVar4 + 0x38) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x40) = param_7;
  local_70 = FUN_100192460;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a13e8;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar3);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&local_58,puVar4,puVar6,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,lVar1);
  (**(code **)(local_b0 + 8))(lVar8,lStack_a8);
  puVar4 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

