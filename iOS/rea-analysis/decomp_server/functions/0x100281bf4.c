// rea decompile_all
// name: FUN_100281bf4
// address: 0x100281bf4
// body: available
// range: 0x100281bf4-0x1002820c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100281bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *local_140;
  long local_138 [4];
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  local_138[3] = param_2;
  local_118 = param_1;
  local_110 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e0 = *(long *)(lVar4 + -8);
  lVar8 = (long)&local_140 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_e8 = lVar8;
  local_d8 = lVar4;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar5 + -8);
  lVar8 = lVar8 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_100 = lVar8;
  lStack_f0 = lVar5;
  FUN_1002c76a8();
  lVar8 = lVar8 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar14 = lVar8 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a82c70;
  FUN_100004bb4(&DAT_100a82c70,&DAT_100817238);
  local_138[0] = *(long *)(puVar6 + -8);
  local_138[1] = *(long *)(local_138[0] + 0x40);
  uVar9 = local_138[1] + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar14 - uVar9;
  puVar13 = (undefined8 *)(lVar16 - uVar9);
  local_138[2] = (long)puVar13 - uVar9;
  lVar5 = *(long *)(param_4 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
  local_140 = puVar6;
  _os_unfair_lock_lock(uVar15);
  _swift_beginAccess(lVar5 + 0x18,auStack_80,0,0);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  FUN_10010bd10(uVar1,uVar2);
  _os_unfair_lock_unlock(uVar15);
  plVar12 = *(long **)(param_4 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar12[2] + 0x10);
  local_108 = param_4;
  _os_unfair_lock_lock(uVar15);
  lVar5 = *(long *)(*plVar12 + 0x60);
  _swift_beginAccess((long)plVar12 + lVar5,auStack_98,0,0);
  FUN_10028ab0c((long)plVar12 + lVar5,lVar8);
  FUN_10007f314(lVar8 + *(int *)(lVar4 + 0x5c),lVar14,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar8,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  lVar5 = 0;
  FUN_100277ad0();
  lVar4 = lVar14;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar14,1,lVar5);
  bVar3 = (int)lVar4 != 1;
  if (bVar3) {
    FUN_100006cc8(uVar1,uVar2);
    FUN_10026531c(lVar14,puVar13);
  }
  else {
    FUN_100040bb4(lVar14,&DAT_100a82460,&DAT_1008175c0);
    *puVar13 = uVar1;
    puVar13[1] = uVar2;
  }
  _swift_storeEnumTagMultiPayload(puVar13,local_140,bVar3);
  lVar4 = local_138[2];
  FUN_1000a00a8(puVar13,local_138[2],&DAT_100a82c70,&DAT_100817238);
  lVar5 = local_108;
  local_140 = *(undefined **)(local_108 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(lVar4,lVar16,&DAT_100a82c70,&DAT_100817238);
  uVar9 = (ulong)*(byte *)(local_138[0] + 0x50);
  uVar10 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar11 = local_138[1] + uVar10 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_1009ab130;
  _swift_allocObject(&DAT_1009ab130,uVar11 + 0x20,uVar9 | 7);
  FUN_1000a00a8(lVar16,puVar6 + uVar10,&DAT_100a82c70,&DAT_100817238);
  uVar1 = local_110;
  *(undefined8 *)(puVar6 + uVar11) = local_118;
  *(long *)(puVar6 + uVar11 + 8) = local_138[3];
  *(undefined8 *)((long)(puVar6 + uVar11 + 8) + 8) = local_110;
  *(long *)(puVar6 + uVar11 + 0x18) = lVar5;
  local_a8 = FUN_10028f2a4;
  local_c8 = PTR___NSConcreteStackBlock_100995490;
  local_c0 = 0x42000000;
  local_b8 = FUN_1000acdb4;
  puStack_b0 = &DAT_1009ab148;
  local_a0 = puVar6;
  aBlock = __Block_copy(&local_c8);
  _swift_retain(uVar1);
  _swift_retain(lVar5);
  lVar5 = local_100;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
  local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar13 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar6 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar6;
  FUN_10028abfc();
  lVar14 = local_d8;
  lVar8 = local_e8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_e8,&local_d0,puVar6,puVar7,local_d8,puVar13);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar5,lVar8,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e0 + 8))(lVar8,lVar14);
  (**(code **)(local_f8 + 8))(lVar5,lStack_f0);
  FUN_100040bb4(lVar4,&DAT_100a82c70,&DAT_100817238);
  _swift_release(local_a0);
  return;
}

