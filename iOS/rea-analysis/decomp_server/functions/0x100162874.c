// rea decompile_all
// name: FUN_100162874
// address: 0x100162874
// body: available
// range: 0x100162874-0x100162b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100162b8c to 0x100162c18 FUN_100162c18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100162874(byte param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_a0;
  long local_98;
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
  lVar10 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar3 == 0) {
    uVar4 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_98 = lVar9;
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar5 = &DAT_10099f2e0;
    local_a0 = uVar4;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar6 = &DAT_10099f5e8;
    _swift_allocObject(&DAT_10099f5e8,0x19,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    puVar6[0x18] = param_1 & 1;
    local_70 = FUN_10016b87c;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_10099f600;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    _swift_release(local_68);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&local_90,puVar5,puVar8,lVar1,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar10,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_98 + 8))(lVar10,lVar1);
    (**(code **)(lVar12 + 8))(lVar11,lVar2);
  }
  else if (*(byte *)(unaff_x20 +
                    _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) !=
           (param_1 & 1)) {
    *(byte *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled)
         = param_1 & 1;
    if ((param_1 & 1) == 0) {
      FUN_100162c18(0x1000000000000018,0x8000000100893520);
      return;
    }
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100162bec,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000026,
                  0x8000000100893540,0x2e0,0);
  }
  return;
}

