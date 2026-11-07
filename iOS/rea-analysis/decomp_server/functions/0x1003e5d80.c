// rea decompile_all
// name: FUN_1003e5d80
// address: 0x1003e5d80
// body: available
// range: 0x1003e5d80-0x1003e5f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e5d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  local_a8 = *unaff_x20;
  lVar1 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  __s8Dispatch0A3QoSVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar5);
  puVar3 = &DAT_1009bac90;
  _swift_allocObject(&DAT_1009bac90,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  _swift_allocObject(param_1,0x20,7);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(local_a8 + 0x50);
  *(undefined **)(param_1 + 0x18) = puVar3;
  local_70 = local_a0;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  uStack_78 = local_98;
  local_68 = param_1;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,puVar4,lVar5,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  lVar1 = local_68;
  _swift_release(puVar3);
  _swift_release(lVar1);
  return;
}

