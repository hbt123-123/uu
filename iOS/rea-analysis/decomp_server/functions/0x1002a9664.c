// rea decompile_all
// name: FUN_1002a9664
// address: 0x1002a9664
// body: available
// range: 0x1002a9664-0x1002a9c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a9664(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auStack_150 [8];
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  undefined1 *local_e8;
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
  
  lVar3 = 0;
  local_118 = param_2;
  local_110 = param_1;
  local_108 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e0 = *(long *)(lVar3 + -8);
  lVar8 = *(long *)(local_e0 + 0x40);
  lVar4 = 0;
  local_e8 = auStack_150 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar3;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar4 + -8);
  lVar8 = (long)(auStack_150 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_100 = lVar8;
  lStack_f0 = lVar4;
  FUN_1002c76a8();
  lVar8 = lVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a82460;
  local_148 = lVar3;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar16 = lVar8 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1002a7694();
  lVar4 = lVar16 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar11 = lVar4 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a838f8;
  FUN_100004bb4(&DAT_100a838f8,&DAT_100817e28);
  local_130 = *(long *)(puVar5 + -8);
  local_128 = *(long *)(local_130 + 0x40);
  uVar9 = local_128 + 0xfU & 0xfffffffffffffff0;
  local_138 = lVar11 - uVar9;
  lVar10 = local_138 - uVar9;
  local_120 = lVar10 - uVar9;
  plVar12 = *(long **)(param_4 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar17 = *(undefined8 *)(plVar12[2] + 0x10);
  local_140 = puVar5;
  _os_unfair_lock_lock(uVar17);
  lVar14 = *(long *)(*plVar12 + 0x60);
  _swift_beginAccess((long)plVar12 + lVar14,auStack_80,0,0);
  FUN_100082394((long)plVar12 + lVar14,lVar4,FUN_1002a7694);
  FUN_10007f314(lVar4 + *(int *)(lVar3 + 0x14),lVar11,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar4,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar17);
  plVar12 = *(long **)(param_4 + _TtC9Alamofire7Request::mutableState);
  uVar17 = *(undefined8 *)(plVar12[2] + 0x10);
  _os_unfair_lock_lock(uVar17);
  lVar3 = *(long *)(*plVar12 + 0x60);
  _swift_beginAccess((long)plVar12 + lVar3,auStack_98,0,0);
  FUN_100082394((long)plVar12 + lVar3,lVar8,FUN_1002c76a8);
  FUN_10007f314(lVar8 + *(int *)(local_148 + 0x5c),lVar16,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar8,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar17);
  lVar4 = 0;
  FUN_100277ad0();
  lVar3 = lVar16;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar16,1,lVar4);
  bVar2 = (int)lVar3 != 1;
  if (bVar2) {
    FUN_100040bb4(lVar11,&DAT_100a83428,&DAT_100817bb0);
    FUN_10026531c(lVar16,lVar10);
  }
  else {
    FUN_100040bb4(lVar16,&DAT_100a82460,&DAT_1008175c0);
    FUN_1000a00a8(lVar11,lVar10,&DAT_100a83428,&DAT_100817bb0);
  }
  _swift_storeEnumTagMultiPayload(lVar10,local_140,bVar2);
  lVar4 = local_120;
  FUN_1000a00a8(lVar10,local_120,&DAT_100a838f8,&DAT_100817e28);
  lVar3 = local_138;
  local_140 = *(undefined **)(param_4 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(lVar4,local_138,&DAT_100a838f8,&DAT_100817e28);
  uVar9 = (ulong)*(byte *)(local_130 + 0x50);
  uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar15 = local_128 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_1009acc40;
  _swift_allocObject(&DAT_1009acc40,uVar15 + 0x20,uVar9 | 7);
  FUN_1000a00a8(lVar3,puVar5 + uVar13,&DAT_100a838f8,&DAT_100817e28);
  uVar17 = local_108;
  *(undefined8 *)(puVar5 + uVar15) = local_110;
  *(undefined8 *)(puVar5 + uVar15 + 8) = local_118;
  *(undefined8 *)((long)(puVar5 + uVar15 + 8) + 8) = local_108;
  *(long *)(puVar5 + uVar15 + 0x18) = param_4;
  local_a8 = FUN_1002babe4;
  local_c8 = PTR___NSConcreteStackBlock_100995490;
  local_c0 = 0x42000000;
  local_b8 = FUN_1000acdb4;
  puStack_b0 = &DAT_1009acc58;
  local_a0 = puVar5;
  aBlock = __Block_copy(&local_c8);
  _swift_retain(uVar17);
  _swift_retain(param_4);
  lVar3 = local_100;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
  local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar5;
  FUN_10028abfc();
  lVar8 = local_d8;
  puVar1 = local_e8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_e8,&local_d0,puVar5,puVar7,local_d8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,puVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e0 + 8))(puVar1,lVar8);
  (**(code **)(local_f8 + 8))(lVar3,lStack_f0);
  FUN_100040bb4(lVar4,&DAT_100a838f8,&DAT_100817e28);
  _swift_release(local_a0);
  return;
}

