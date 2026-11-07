// rea decompile_all
// name: FUN_1003e4540
// address: 0x1003e4540
// body: available
// range: 0x1003e4540-0x1003e471f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e4540(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar4 = *unaff_x20;
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  local_a0 = *(long *)(lVar1 + -8);
  lStack_98 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar6 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar4 + 0x50);
  lVar4 = *(long *)(lVar7 + -8);
  lVar8 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar6 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar1 + -8);
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar1 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar1);
  (**(code **)(lVar4 + 0x10))(lVar9,param_1,lVar7);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009babc8;
  _swift_allocObject(&DAT_1009babc8,uVar5 + lVar8,uVar3 | 7);
  *(long *)(puVar2 + 0x10) = lVar7;
  *(long **)(puVar2 + 0x18) = unaff_x20;
  (**(code **)(lVar4 + 0x20))(puVar2 + uVar5,lVar9,lVar7);
  local_70 = FUN_1003e628c;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009babe0;
  local_68 = puVar2;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar6,lVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar6,lStack_98);
  (**(code **)(local_b0 + 8))(lVar1,lStack_a8);
  _swift_release(local_68);
  return;
}

