// rea decompile_all
// name: FUN_10004e8b8
// address: 0x10004e8b8
// body: available
// range: 0x10004e8b8-0x10004ec03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004ea8c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004e8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar2 + -8);
  local_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar10 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar2 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_1009985a8;
  _swift_allocObject(&DAT_1009985a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  puVar4 = &DAT_100a759a0;
  FUN_100004bb4(&DAT_100a759a0,&DAT_100809a60);
  _swift_allocObject();
  puVar4[0x10] = 0;
  *(code **)(puVar4 + 0x18) = FUN_10004ec28;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  puVar3 = &DAT_1009985d0;
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar5 = &DAT_1009985f8;
  _swift_allocObject(&DAT_1009985f8,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  _swift_retain(param_5);
  _swift_retain(puVar4);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(puVar3);
  IVar6 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar6 != 0) {
    FUN_10004ec78(puVar3,puVar4,param_1,param_2,param_3);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_release(puVar5);
    return;
  }
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  local_70 = FUN_10004eea0;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_100998610;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  puVar8 = local_68;
  _swift_retain(puVar5);
  _swift_release(puVar8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar8 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar9 = puVar8;
  FUN_10004eec4();
  lVar1 = local_98;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_90,puVar8,puVar9,local_98,puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar10,aBlock);
  __Block_release(aBlock);
  _swift_release(puVar4);
  _swift_release(puVar5);
  (**(code **)(local_a0 + 8))(lVar10,lVar1);
  (**(code **)(local_b0 + 8))(lVar2,lStack_a8);
  _swift_release(puVar3);
  return;
}

