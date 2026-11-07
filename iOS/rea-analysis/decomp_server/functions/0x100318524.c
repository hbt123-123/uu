// rea decompile_all
// name: FUN_100318524
// address: 0x100318524
// body: available
// range: 0x100318524-0x100318977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100318964) */

void FUN_100318524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_120 [8];
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
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
  local_100 = param_3;
  uStack_f8 = param_4;
  local_d0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(local_d8 + 0x40);
  lVar3 = 0;
  local_e0 = auStack_120 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_f0 = *(long *)(lVar3 + -8);
  lVar7 = (long)(auStack_120 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c50;
  local_108 = lVar7;
  lStack_e8 = lVar3;
  FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
  local_118 = *(long *)(puVar4 + -8);
  local_110 = *(long *)(local_118 + 0x40);
  uVar8 = local_110 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  lVar3 = lVar7 - uVar8;
  lVar2 = 0;
  FUN_1002c76a8();
  lVar13 = lVar3 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar11 = *(long **)(param_5 + _TtC9Alamofire7Request::mutableState);
  uVar9 = *(undefined8 *)(plVar11[2] + 0x10);
  _os_unfair_lock_lock(uVar9);
  lVar2 = *(long *)(*plVar11 + 0x60);
  _swift_beginAccess((long)plVar11 + lVar2,auStack_80,0,0);
  FUN_100082394((long)plVar11 + lVar2,lVar13,FUN_1002c76a8);
  FUN_10007f314(lVar13 + 0xf0,&local_b0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar13,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar9);
  if (local_98 == (undefined *)0x0) {
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(&local_b0,local_98);
    (**(code **)((long)local_90 + 0x128))(param_5,param_1,PTR___sSSN_1009957f8,local_98,local_90);
    FUN_10003f094(&local_b0);
  }
  FUN_10007f314(param_1,lVar3,&DAT_100a82c50,&DAT_100817210);
  lVar13 = lVar3;
  _swift_getEnumCaseMultiPayload(lVar3,puVar4);
  FUN_100040bb4(lVar3,&DAT_100a82c50,&DAT_100817210);
  if (((int)lVar13 == 1) &&
     (*(char *)(param_5 + _TtC9Alamofire17DataStreamRequest::automaticallyCancelOnStreamError) ==
      '\x01')) {
    uVar9 = *(undefined8 *)(plVar11[2] + 0x10);
    _os_unfair_lock_lock(uVar9);
    _swift_beginAccess((long)plVar11 + lVar2,&local_b0,0x21,0);
    FUN_1002d0d94((long)plVar11 + lVar2,param_5);
    _swift_endAccess(&local_b0);
    _os_unfair_lock_unlock(uVar9);
  }
  FUN_10007f314(param_1,lVar7,&DAT_100a82c50,&DAT_100817210);
  uVar8 = (ulong)*(byte *)(local_118 + 0x50);
  uVar10 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  uVar12 = local_110 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009b0f80;
  _swift_allocObject(&DAT_1009b0f80,uVar12 + 8,uVar8 | 7);
  uVar9 = uStack_f8;
  *(undefined8 *)(puVar4 + 0x10) = local_100;
  *(undefined8 *)(puVar4 + 0x18) = uStack_f8;
  FUN_1000a00a8(lVar7,puVar4 + uVar10,&DAT_100a82c50,&DAT_100817210);
  *(long *)(puVar4 + uVar12) = param_5;
  local_90 = FUN_10031cb0c;
  local_b0 = PTR___NSConcreteStackBlock_100995490;
  local_a8 = 0x42000000;
  local_a0 = FUN_1000acdb4;
  local_98 = &DAT_1009b0f98;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  _swift_retain(uVar9);
  _swift_retain(param_5);
  lVar2 = local_108;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
  local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = puVar4;
  FUN_10028abfc();
  lVar3 = local_c8;
  puVar1 = local_e0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_e0,&local_b8,puVar4,puVar6,local_c8,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,puVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d8 + 8))(puVar1,lVar3);
  (**(code **)(local_f0 + 8))(lVar2,lStack_e8);
  _swift_release(local_88);
  return;
}

