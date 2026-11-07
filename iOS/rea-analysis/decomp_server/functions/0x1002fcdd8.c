// rea decompile_all
// name: FUN_1002fcdd8
// address: 0x1002fcdd8
// body: available
// range: 0x1002fcdd8-0x1002fd16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fcdd8(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  local_e0 = param_2;
  __s8Dispatch0A4TimeVMa();
  local_d0 = *(long *)(lVar2 + -8);
  uVar9 = *(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = (long)&local_e0 - uVar9;
  lVar10 = local_d8 - uVar9;
  lVar3 = 0;
  local_c8 = lVar10;
  local_c0 = lVar2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = lVar10 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1002c76a8();
  pcVar14 = (char *)(lVar15 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  plVar13 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar12 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar12);
  lVar2 = *(long *)(*plVar13 + 0x60);
  _swift_beginAccess((long)plVar13 + lVar2,auStack_78,0,0);
  FUN_100082394((long)plVar13 + lVar2,pcVar14,FUN_1002c76a8);
  cVar1 = *pcVar14;
  FUN_1000d27dc(pcVar14,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
  if (cVar1 == '\x01') {
    puVar4 = &DAT_1009aff88;
    _swift_allocObject(&DAT_1009aff88,0x18,7);
    _swift_weakInit(puVar4 + 0x10,param_3);
    puVar5 = &DAT_1009affb0;
    _swift_allocObject(&DAT_1009affb0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    local_88 = FUN_10030e9d0;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009affc8;
    local_80 = puVar5;
    pvVar6 = __Block_copy(&local_a8);
    _swift_retain(puVar4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = puVar5;
    FUN_10028abfc();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&local_b0,puVar5,puVar8,lVar3,puVar7);
    __s8Dispatch0A8WorkItemCMa();
    _swift_allocObject();
    __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar15,lVar10,pvVar6);
    puVar5 = local_80;
    _swift_release(puVar4);
    _swift_release(puVar5);
    lVar2 = local_e0;
    uVar12 = *(undefined8 *)(local_e0 + 0x10);
    _swift_retain(lVar15);
    _swift_release(uVar12);
    lVar3 = local_d8;
    *(long *)(lVar2 + 0x10) = lVar15;
    __s8Dispatch0A4TimeV3nowACyFZ(local_d8);
    lVar2 = local_c8;
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_c8,param_1,lVar3);
    lVar10 = local_c0;
    pcVar11 = *(code **)(local_d0 + 8);
    (*pcVar11)(lVar3,local_c0);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
              (lVar2,lVar15);
    _swift_release(lVar15);
    (*pcVar11)(lVar2,lVar10);
  }
  else {
    lVar3 = *(long *)(param_3 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
    uVar12 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar12);
    _swift_beginAccess(lVar3 + 0x18,&local_a8,0x21,0);
    lVar2 = *(long *)(lVar3 + 0x28);
    if (lVar2 != 0) {
      __s8Dispatch0A8WorkItemC6cancelyyFTj();
    }
    *(undefined8 *)(lVar3 + 0x28) = 0;
    _swift_endAccess(&local_a8);
    _swift_release(lVar2);
    _os_unfair_lock_unlock(uVar12);
  }
  return;
}

