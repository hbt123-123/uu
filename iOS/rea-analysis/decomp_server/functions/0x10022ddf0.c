// rea decompile_all
// name: FUN_10022ddf0
// address: 0x10022ddf0
// body: available
// range: 0x10022ddf0-0x10022e02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022ddf0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a7dde0 != -1) {
    _swift_once(&DAT_100a7dde0,FUN_100223714);
  }
  local_a0 = DAT_100b362e0;
  puVar3 = &DAT_1009a65b0;
  _swift_allocObject(&DAT_1009a65b0,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_1009a65d8;
  _swift_allocObject(&DAT_1009a65d8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  local_70 = FUN_10022eda8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a65f0;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar3);
  _swift_bridgeObjectRetain(param_1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a7e2d0;
  FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a7e2d8;
  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
  puVar6 = puVar4;
  FUN_10021e91c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_98,puVar4,puVar6,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,lVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar10 + 8))(lVar7,lVar1);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  puVar4 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

