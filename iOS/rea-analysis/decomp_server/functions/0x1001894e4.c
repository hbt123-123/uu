// rea decompile_all
// name: FUN_1001894e4
// address: 0x1001894e4
// body: available
// range: 0x1001894e4-0x100189823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100189648 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001894e4(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100189824,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000020,
                  0x80000001008985c0,0x44,0);
    if (param_2 != (code *)0x0) {
      (*param_2)(0);
    }
  }
  else {
    puVar3 = &DAT_1009a10b0;
    local_a0 = lVar2;
    local_98 = lVar12;
    _swift_allocObject(&DAT_1009a10b0,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    puVar4 = &DAT_1009a11a0;
    _swift_allocObject(&DAT_1009a11a0,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = param_1;
    *(code **)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = param_3;
    FUN_10004090c(param_2,param_3);
    _swift_bridgeObjectRetain(param_1);
    _swift_retain(puVar3);
    IVar5 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
    if ((int)IVar5 != 0) {
      FUN_100189850(puVar3,param_1,param_2,param_3);
      _swift_release(puVar3);
      _swift_release(puVar4);
      return;
    }
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    local_70 = FUN_10018b77c;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a11b8;
    local_68 = puVar4;
    aBlock = __Block_copy(&local_90);
    puVar7 = local_68;
    _swift_retain(puVar4);
    _swift_release(puVar7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = puVar7;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar9,&local_90,puVar7,puVar8,lVar1,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar9,aBlock);
    __Block_release(aBlock);
    _swift_release(puVar4);
    (**(code **)(local_98 + 8))(lVar9,lVar1);
    (**(code **)(lVar10 + 8))(lVar11,local_a0);
    _swift_release(puVar3);
  }
  return;
}

