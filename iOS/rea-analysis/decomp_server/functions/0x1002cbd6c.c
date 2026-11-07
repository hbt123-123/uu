// rea decompile_all
// name: FUN_1002cbd6c
// address: 0x1002cbd6c
// body: available
// range: 0x1002cbd6c-0x1002cc093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cbd6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID self;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 auStack_e0 [8];
  long local_d8 [2];
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(long *)(lVar3 + -8);
  lVar8 = *(long *)(local_c0 + 0x40);
  lVar4 = 0;
  local_c8 = auStack_e0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar3;
  __s8Dispatch0A3QoSVMa();
  local_d8[0] = *(long *)(lVar4 + -8);
  lVar8 = (long)(auStack_e0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(local_d8[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_d8[1] = lVar4;
  FUN_1002c76a8();
  lVar4 = lVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC9Alamofire7Request::uploadProgress);
  _objc_msgSend(self,"setTotalUnitCount:",param_2);
  _objc_msgSend(self,"setCompletedUnitCount:",param_1);
  plVar9 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar12 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar12);
  lVar3 = *(long *)(*plVar9 + 0x60);
  _swift_beginAccess((long)plVar9 + lVar3,auStack_78,0,0);
  FUN_100082394((long)plVar9 + lVar3,lVar4,FUN_1002c76a8);
  lVar3 = *(long *)(lVar4 + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar13 = *(undefined8 *)(lVar4 + 0x18);
  if (lVar3 == 0) {
    pcVar10 = (code *)0x0;
    puVar14 = (undefined *)0x0;
    uVar11 = 0;
  }
  else {
    puVar14 = &DAT_1009ae148;
    _swift_allocObject(&DAT_1009ae148,0x20,7);
    *(long *)(puVar14 + 0x10) = lVar3;
    *(undefined8 *)(puVar14 + 0x18) = uVar1;
    pcVar10 = thunk_FUN_1002cd444;
    uVar11 = uVar13;
  }
  FUN_10028ab50(lVar3,uVar1,uVar13);
  FUN_1000d27dc(lVar4,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
  if (lVar3 != 0) {
    puVar5 = &DAT_1009ae0f8;
    _swift_allocObject(&DAT_1009ae0f8,0x20,7);
    *(code **)(puVar5 + 0x10) = pcVar10;
    *(undefined **)(puVar5 + 0x18) = puVar14;
    FUN_10028abac(thunk_FUN_1002cd414,puVar5,uVar11);
    local_88 = FUN_1002d89b8;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009ae110;
    aBlock = __Block_copy(&local_a8);
    _swift_retain();
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar14 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar7 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    lVar3 = local_b8;
    puVar2 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_b0,puVar14,puVar7,local_b8,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar8,puVar2,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_c0 + 8))(puVar2,lVar3);
    (**(code **)(local_d8[0] + 8))(lVar8,local_d8[1]);
    _swift_release(unaff_x20);
  }
  return;
}

