// rea decompile_all
// name: FUN_1002944bc
// address: 0x1002944bc
// body: available
// range: 0x1002944bc-0x100294937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100294924) */

void FUN_1002944bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  local_128 = param_1;
  local_118 = param_3;
  local_100 = param_4;
  local_d0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(local_d8 + 0x40);
  lVar3 = 0;
  local_e0 = auStack_130 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_f0 = *(long *)(lVar3 + -8);
  lVar10 = (long)(auStack_130 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_110 = param_6;
  uStack_108 = param_7;
  local_f8 = lVar10;
  lStack_e8 = lVar3;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,0x1008f871c,&TargetProtocolRequirement_1008f8724);
  uVar5 = 0xff;
  FUN_100277ad0(0xff);
  puVar6 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar7 = 0;
  __ss6ResultOMa(0,uVar4,uVar5,puVar6);
  lVar14 = *(long *)(uVar7 - 8);
  local_120 = *(long *)(lVar14 + 0x40);
  lVar10 = lVar10 - (local_120 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1002c76a8();
  lVar2 = lVar10 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar15 = *(long **)(param_5 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  lVar3 = *(long *)(*plVar15 + 0x60);
  _swift_beginAccess((long)plVar15 + lVar3,auStack_80,0,0);
  FUN_100082394((long)plVar15 + lVar3,lVar2,FUN_1002c76a8);
  FUN_10007f314(lVar2 + 0xf0,&local_b0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar5);
  if (local_98 == (undefined *)0x0) {
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
    uVar5 = local_128;
  }
  else {
    FUN_10003f030(&local_b0,local_98);
    uVar5 = local_128;
    (**(code **)((long)local_90 + 0x128))(param_5,local_128,uVar4,local_98,local_90);
    FUN_10003f094(&local_b0);
  }
  uVar11 = uVar7;
  FUN_10031185c();
  if (((uVar11 & 1) != 0) &&
     (*(char *)(param_5 + _TtC9Alamofire17DataStreamRequest::automaticallyCancelOnStreamError) ==
      '\x01')) {
    uVar4 = *(undefined8 *)(plVar15[2] + 0x10);
    _os_unfair_lock_lock(uVar4);
    _swift_beginAccess((long)plVar15 + lVar3,&local_b0,0x21,0);
    FUN_1002d0d94((long)plVar15 + lVar3,param_5);
    _swift_endAccess(&local_b0);
    _os_unfair_lock_unlock(uVar4);
  }
  (**(code **)(lVar14 + 0x10))(lVar10,uVar5,uVar7);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = local_120 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_1009abe38;
  _swift_allocObject(&DAT_1009abe38,uVar13 + 8,uVar11 | 7);
  uVar4 = local_100;
  *(undefined8 *)(puVar8 + 0x10) = local_110;
  *(undefined8 *)(puVar8 + 0x18) = uStack_108;
  *(undefined8 *)(puVar8 + 0x20) = local_118;
  *(undefined8 *)(puVar8 + 0x28) = local_100;
  (**(code **)(lVar14 + 0x20))(puVar8 + uVar12,lVar10,uVar7);
  *(long *)(puVar8 + uVar13) = param_5;
  local_90 = FUN_1002a6d00;
  local_b0 = PTR___NSConcreteStackBlock_100995490;
  local_a8 = 0x42000000;
  local_a0 = FUN_1000acdb4;
  local_98 = &DAT_1009abe50;
  local_88 = puVar8;
  aBlock = __Block_copy(&local_b0);
  _swift_retain(uVar4);
  _swift_retain(param_5);
  lVar2 = local_f8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_f8);
  local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar8 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar9 = puVar8;
  FUN_10028abfc();
  lVar3 = local_c8;
  puVar1 = local_e0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_e0,&local_b8,puVar8,puVar9,local_c8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,puVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d8 + 8))(puVar1,lVar3);
  (**(code **)(local_f0 + 8))(lVar2,lStack_e8);
  _swift_release(local_88);
  return;
}

