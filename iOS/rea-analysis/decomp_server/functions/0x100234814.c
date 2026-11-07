// rea decompile_all
// name: FUN_100234814
// address: 0x100234814
// body: available
// range: 0x100234814-0x100234a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023490c to 0x10023606c FUN_10023606c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100234814(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  IVar3 = NSThread::isMainThread(IVar3,"isMainThread");
  if ((int)IVar3 != 0) {
    FUN_10023606c(param_1);
    return;
  }
  FUN_10021e878(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar4 = &DAT_1009a6bb8;
  _swift_allocObject(&DAT_1009a6bb8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  local_70 = FUN_100235338;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a6bd0;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  puVar5 = local_68;
  _swift_release(local_68);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
  local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10021e8d8();
  puVar4 = &DAT_100a7e2d8;
  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
  puVar6 = puVar4;
  FUN_10021e91c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_90,puVar4,puVar6,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,lVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar9 + 8))(lVar7,lVar1);
  (**(code **)(lVar10 + 8))(lVar8,lVar2);
  return;
}

