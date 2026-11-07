// rea decompile_all
// name: FUN_10000f7e0
// address: 0x10000f7e0
// body: available
// range: 0x10000f7e0-0x10000fa2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000f7e0(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_3 != 0) {
    local_98 = lVar2;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    lVar2 = param_3;
    local_a0 = lVar6;
    _swift_retain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar3 = &DAT_100997520;
    local_a8 = lVar2;
    _swift_allocObject(&DAT_100997520,0x18,7);
    _swift_weakInit(puVar3 + 0x10,param_3);
    puVar4 = &DAT_100997610;
    _swift_allocObject(&DAT_100997610,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined4 *)(puVar4 + 0x18) = param_1;
    *(undefined4 *)(puVar4 + 0x1c) = param_2;
    *(long *)(puVar4 + 0x20) = param_3;
    local_70 = FUN_10003f7d4;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_100997628;
    local_68 = puVar4;
    aBlock = __Block_copy(&local_90);
    puVar4 = local_68;
    _swift_release(local_68);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar3 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar5 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar7,&local_90,puVar3,puVar5,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,puVar7,aBlock);
    __Block_release(aBlock);
    _swift_release(param_3);
    (**(code **)(local_a0 + 8))(puVar7,lVar1);
    (**(code **)(lVar8 + 8))(lVar9,local_98);
  }
  return;
}

