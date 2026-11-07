// rea decompile_all
// name: FUN_1000ad52c
// address: 0x1000ad52c
// body: available
// range: 0x1000ad52c-0x1000ad8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000ad52c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  double dVar9;
  undefined1 auStack_f0 [16];
  double adStack_e0 [2];
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  local_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar3,"systemUptime");
  dVar9 = param_1;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001adec0(*(undefined8 *)(DAT_100b360a8 + 0x28));
  IVar3 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar3,"systemUptime");
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(double *)(lVar2 + -0x10) = (dVar9 - param_1) * 1000.0;
  FUN_1003fb48c(FUN_1000adcdc,lVar2 + -0x20,0xd000000000000088,0x80000001008813c0,0xd00000000000001e
                ,0x8000000100881450,0x39,0);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar4 = &DAT_10099a548;
  _swift_allocObject(&DAT_10099a548,0x18,7);
  _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong(param_2);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar5 = &DAT_10099a650;
  _swift_allocObject(&DAT_10099a650,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  local_98 = FUN_1000add10;
  local_b8 = PTR___NSConcreteStackBlock_100995490;
  local_b0 = 0x42000000;
  local_a8 = FUN_1000acdb4;
  puStack_a0 = &DAT_10099a668;
  local_90 = puVar5;
  aBlock = __Block_copy(&local_b8);
  puVar5 = local_90;
  _swift_release(local_90);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = puVar4;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&local_b8,puVar4,puVar6,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_c0 + 8))(puVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar2,local_c8);
  return;
}

