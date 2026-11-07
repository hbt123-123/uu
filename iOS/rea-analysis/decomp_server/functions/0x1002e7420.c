// rea decompile_all
// name: FUN_1002e7420
// address: 0x1002e7420
// body: available
// range: 0x1002e7420-0x1002e7827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002e7514) */

undefined8 FUN_1002e7420(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lVar7 = (long)&local_d0 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c0 = lVar7;
  local_a8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar3 + -8);
  lVar7 = lVar7 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_d0 = lVar7;
  local_b0 = lVar3;
  FUN_1002f9800();
  lVar11 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  uVar8 = lVar10 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  lVar12 = lVar7 - uVar8;
  lVar2 = param_1 + _TtC9Alamofire13UploadRequest::upload;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  FUN_10003f030(lVar2,uVar1);
  (**(code **)(lVar3 + 8))(lVar12,uVar1,lVar3);
  FUN_100082394(lVar12,lVar7,FUN_1002f9800);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009af1d0;
  _swift_allocObject(&DAT_1009af1d0,uVar9 + lVar10,uVar8 | 7);
  *(long *)(puVar4 + 0x10) = param_1;
  FUN_1000823d8(lVar7,puVar4 + uVar9,FUN_1002f9800);
  local_78 = FUN_1002f1ef0;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009af1e8;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  _swift_retain(param_1);
  lVar2 = local_d0;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  lVar7 = local_a8;
  lVar3 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_a0,puVar4,puVar6,local_a8,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_b8 + 8))(lVar3,lVar7);
  (**(code **)(local_c8 + 8))(lVar2,local_b0);
  FUN_1000d27dc(lVar12,FUN_1002f9800);
  _swift_release(local_70);
  return 1;
}

