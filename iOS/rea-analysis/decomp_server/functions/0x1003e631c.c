// rea decompile_all
// name: FUN_1003e631c
// address: 0x1003e631c
// body: available
// range: 0x1003e631c-0x1003e654b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e631c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long local_c0;
  undefined8 local_b8;
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
  
  lVar5 = *unaff_x20;
  lVar1 = 0;
  local_b8 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_a0 = *(long *)(lVar1 + -8);
  lStack_98 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar7 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(lVar5 + 0x50);
  lVar1 = 0;
  __sSqMa(0,uVar11);
  lVar8 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar7 - extraout_x8_00;
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar5 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0 = unaff_x20[3];
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar5);
  puVar2 = &DAT_1009bac90;
  _swift_allocObject(&DAT_1009bac90,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar8 + 0x10))(lVar6,param_1,lVar1);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar10 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009baf28;
  _swift_allocObject(&DAT_1009baf28,uVar10 + lVar9,uVar4 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar11;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = local_b8;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar10,lVar6,lVar1);
  local_70 = FUN_1003e6814;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009baf40;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar7,lVar5,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,lStack_98);
  (**(code **)(local_b0 + 8))(lVar5,lStack_a8);
  puVar3 = local_68;
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}

