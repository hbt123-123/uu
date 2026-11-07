// rea decompile_all
// name: FUN_1001639b0
// address: 0x1001639b0
// body: available
// range: 0x1001639b0-0x100163d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001639b0(long param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar4 == 0) {
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_98 = lVar11;
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_10099f2e0;
    local_a0 = uVar6;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &DAT_10099f688;
    _swift_allocObject(&DAT_10099f688,0x30,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(code **)(puVar8 + 0x18) = param_2;
    *(undefined8 *)(puVar8 + 0x20) = param_3;
    *(long *)(puVar8 + 0x28) = param_1;
    local_70 = FUN_10016b8e8;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_10099f6a0;
    local_68 = puVar8;
    aBlock = __Block_copy(&local_90);
    puVar7 = local_68;
    FUN_10004090c(param_2,param_3);
    _swift_retain(param_1);
    _swift_release(puVar7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar10 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar12,&local_90,puVar7,puVar10,lVar2,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar12,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_98 + 8))(lVar12,lVar2);
    (**(code **)(lVar14 + 8))(lVar13,lVar3);
  }
  else {
    lVar2 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
    _swift_beginAccess(lVar2,&local_90,0,0);
    lVar3 = *(long *)(param_1 + 0x10);
    uVar5 = (ulong)*(uint *)(lVar3 + 0x14);
    FUN_100152fd0(uVar5,*(undefined8 *)(lVar2 + 8));
    if ((uVar5 & 1) == 0) {
      cVar1 = *(char *)(lVar3 + 0x18);
      if (cVar1 == '\x03') {
        FUN_100164260(param_1,param_2,param_3);
      }
      else if (cVar1 == '\0') {
        FUN_100163ed0(param_1);
      }
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_10016b8f4,param_1,0xd0000000000000a4,0x800000010088d870,
                    &DAT_d000000000000030,0x8000000100893660,0x32e,0);
      if (param_2 != (code *)0x0) {
        (*param_2)(0);
      }
    }
  }
  return;
}

