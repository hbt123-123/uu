// rea decompile_all
// name: FUN_1002952d0
// address: 0x1002952d0
// body: available
// range: 0x1002952d0-0x10029563f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002952d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long local_100 [5];
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  local_100[0] = param_1;
  local_100[1] = param_4;
  local_100[2] = param_5;
  local_c8 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar1 + -8);
  lVar8 = (long)local_100 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_d8 = lVar8;
  local_c0 = lVar1;
  __s8Dispatch0A3QoSVMa();
  local_100[3] = *(long *)(lVar2 + -8);
  lVar8 = lVar8 - (*(long *)(local_100[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c50;
  local_100[4] = lVar2;
  FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
  plVar10 = (long *)(lVar8 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  lVar1 = 0;
  FUN_1002c76a8();
  lVar1 = (long)plVar10 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar6 = *(long **)(param_6 + _TtC9Alamofire7Request::mutableState);
  uVar9 = *(undefined8 *)(plVar6[2] + 0x10);
  _os_unfair_lock_lock(uVar9);
  lVar2 = *(long *)(*plVar6 + 0x60);
  _swift_beginAccess((long)plVar6 + lVar2,auStack_80,0,0);
  FUN_100082394((long)plVar6 + lVar2,lVar1,FUN_1002c76a8);
  FUN_10007f314(lVar1 + 0xf0,&local_b0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar1,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar9);
  if (local_98 == (undefined *)0x0) {
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
    lVar1 = local_100[0];
  }
  else {
    FUN_10003f030(&local_b0,local_98);
    lVar1 = local_100[0];
    *plVar10 = local_100[0];
    plVar10[1] = param_2;
    _swift_storeEnumTagMultiPayload(plVar10,puVar3,0);
    pcVar7 = *(code **)((long)local_90 + 0x128);
    _swift_bridgeObjectRetain(param_2);
    (*pcVar7)(param_6,plVar10,PTR___sSSN_1009957f8,local_98,local_90);
    FUN_100040bb4(plVar10,&DAT_100a82c50,&DAT_100817210);
    FUN_10003f094(&local_b0);
  }
  puVar3 = &DAT_1009abc58;
  _swift_allocObject(&DAT_1009abc58,0x38,7);
  lVar2 = local_100[2];
  *(long *)(puVar3 + 0x10) = local_100[1];
  *(long *)(puVar3 + 0x18) = local_100[2];
  *(long *)(puVar3 + 0x20) = lVar1;
  *(long *)(puVar3 + 0x28) = param_2;
  *(long *)(puVar3 + 0x30) = param_6;
  local_90 = FUN_1002a6314;
  local_b0 = PTR___NSConcreteStackBlock_100995490;
  local_a8 = 0x42000000;
  local_a0 = FUN_1000acdb4;
  local_98 = &DAT_1009abc70;
  local_88 = puVar3;
  aBlock = __Block_copy(&local_b0);
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(lVar2);
  _swift_retain(param_6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
  local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar5 = puVar3;
  FUN_10028abfc();
  lVar2 = local_c0;
  lVar1 = local_d8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_d8,&local_b8,puVar3,puVar5,local_c0,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,lVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d0 + 8))(lVar1,lVar2);
  (**(code **)(local_100[3] + 8))(lVar8,local_100[4]);
  _swift_release(local_88);
  return;
}

