// rea decompile_all
// name: FUN_1003e56a0
// address: 0x1003e56a0
// body: available
// range: 0x1003e56a0-0x1003e5853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e56a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar7 = *unaff_x20;
  lVar1 = 0;
  local_98 = param_1;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar6);
  puVar3 = &DAT_1009bac90;
  _swift_allocObject(&DAT_1009bac90,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_1009bacb8;
  _swift_allocObject(&DAT_1009bacb8,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar7 + 0x50);
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(undefined8 *)(puVar4 + 0x20) = local_98;
  local_70 = FUN_1003e6658;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009bacd0;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,puVar5,lVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar8 + 8))(puVar5,lVar1);
  (**(code **)(lVar9 + 8))(lVar6,lVar2);
  puVar4 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

