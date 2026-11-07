// rea decompile_all
// name: FUN_1001cc1bc
// address: 0x1001cc1bc
// body: available
// range: 0x1001cc1bc-0x1001cc3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cc1bc(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *in_x4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  long local_e0;
  undefined *local_d8 [9];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_e0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  puVar8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &DAT_1009a3318;
  _swift_allocObject(&DAT_1009a3318,100,7);
  uVar7 = in_x4[4];
  uVar12 = in_x4[7];
  uVar11 = in_x4[6];
  *(undefined8 *)(puVar4 + 0x38) = in_x4[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  *(undefined8 *)(puVar4 + 0x48) = uVar12;
  *(undefined8 *)(puVar4 + 0x40) = uVar11;
  uVar7 = in_x4[8];
  uVar13 = *in_x4;
  uVar12 = in_x4[3];
  uVar11 = in_x4[2];
  *(undefined8 *)(puVar4 + 0x18) = in_x4[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar13;
  *(undefined8 *)(puVar4 + 0x28) = uVar12;
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  *(undefined8 *)(puVar4 + 0x50) = uVar7;
  *(long *)(puVar4 + 0x58) = unaff_x20;
  *(undefined4 *)(puVar4 + 0x60) = param_1;
  local_70 = FUN_100121984;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a3330;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  FUN_1001d2ad0(in_x4,local_d8);
  _swift_retain();
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_d8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar8,local_d8,puVar4,puVar6,lVar2,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,puVar8,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e0 + 8))(puVar8,lVar2);
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  _swift_release(local_68);
  return;
}

