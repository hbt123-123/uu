// rea decompile_all
// name: FUN_1003e3e24
// address: 0x1003e3e24
// body: available
// range: 0x1003e3e24-0x1003e40db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e3e24(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
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
  lVar3 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  __s8Dispatch0A3QoSVMa();
  local_a0 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar14 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(undefined8 *)(lVar6 + 0x58);
  lVar3 = 0;
  local_e0 = lVar6;
  local_a8 = lVar14;
  __sSqMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  local_e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(lVar7 + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_00;
  lVar15 = *(long *)(lVar6 + 0x50);
  lVar11 = *(long *)(lVar15 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  local_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = lVar14 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar10 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0 = unaff_x20[3];
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar10);
  puVar4 = &DAT_1009ba8d8;
  _swift_allocObject(&DAT_1009ba8d8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  (**(code **)(lVar11 + 0x10))(lVar6,local_d8,lVar15);
  lVar3 = local_e8;
  (**(code **)(lVar9 + 0x10))(lVar14,local_d0,local_e8);
  bVar1 = *(byte *)(lVar11 + 0x50);
  uVar8 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar9 + 0x50);
  uVar13 = lVar12 + (ulong)bVar2 + uVar8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009bab70;
  _swift_allocObject(&DAT_1009bab70,uVar13 + lVar7,bVar1 | bVar2 | 7);
  *(long *)(puVar5 + 0x10) = lVar15;
  *(undefined8 *)(puVar5 + 0x18) = local_c8;
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(local_e0 + 0x60);
  *(undefined **)(puVar5 + 0x28) = puVar4;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar8,lVar6,lVar15);
  (**(code **)(lVar9 + 0x20))(puVar5 + uVar13,local_f0,lVar3);
  local_70 = FUN_1003e4298;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009bab88;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar4);
  lVar3 = local_a8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,lVar10,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar3,lStack_98);
  (**(code **)(local_b8 + 8))(lVar10,lStack_b0);
  puVar5 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}

