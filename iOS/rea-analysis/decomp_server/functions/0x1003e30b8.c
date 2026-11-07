// rea decompile_all
// name: FUN_1003e30b8
// address: 0x1003e30b8
// body: available
// range: 0x1003e30b8-0x1003e32df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e30b8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar6 = *unaff_x20;
  lVar1 = 0;
  local_b8 = param_1;
  __s8Dispatch0A3QoSVMa();
  local_a0 = *(long *)(lVar1 + -8);
  lStack_98 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar6 + 0x50);
  lVar8 = *(long *)(lVar9 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar7 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar1 + -8);
  local_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = unaff_x20[3];
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar1);
  puVar2 = &DAT_1009ba8d8;
  _swift_allocObject(&DAT_1009ba8d8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar8 + 0x10))(lVar11,local_b8,lVar9);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar12 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009ba9c8;
  _swift_allocObject(&DAT_1009ba9c8,uVar12 + lVar5,uVar4 | 7);
  *(long *)(puVar3 + 0x10) = lVar9;
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar6 + 0x60);
  *(undefined **)(puVar3 + 0x28) = puVar2;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar12,lVar11,lVar9);
  local_70 = FUN_1003e3de4;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009ba9e0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,puVar7,lVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,lStack_98);
  (**(code **)(lVar10 + 8))(lVar1,local_a8);
  puVar3 = local_68;
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}

