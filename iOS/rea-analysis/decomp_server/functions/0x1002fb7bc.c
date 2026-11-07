// rea decompile_all
// name: FUN_1002fb7bc
// address: 0x1002fb7bc
// body: available
// range: 0x1002fb7bc-0x1002fb9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fb7bc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar1 + -8);
  puVar7 = auStack_c0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lVar10 = (long)puVar7 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a833a0;
  lStack_a8 = lVar2;
  FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
  local_b8 = *(undefined8 *)(param_2 + *(int *)(puVar3 + 0x30));
  lVar8 = *(long *)(puVar3 + -8);
  lVar11 = *(long *)(lVar8 + 0x40);
  lVar2 = lVar10 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_2,lVar2,&DAT_100a833a0,&DAT_100817880);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1009afba0;
  _swift_allocObject(&DAT_1009afba0,uVar12 + 8,uVar6 | 7);
  FUN_1000a00a8(lVar2,puVar3 + uVar9,&DAT_100a833a0,&DAT_100817880);
  *(undefined8 *)(puVar3 + uVar12) = param_1;
  local_70 = FUN_10030d9c4;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009afbb8;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_errorRetain(param_1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar5 = puVar3;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&local_98,puVar3,puVar5,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar10,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,lVar1);
  (**(code **)(local_b0 + 8))(lVar10,lStack_a8);
  _swift_release(local_68);
  return;
}

