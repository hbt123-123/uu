// rea decompile_all
// name: FUN_100116264
// address: 0x100116264
// body: available
// range: 0x100116264-0x1001164ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100116264(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined *local_68;
  
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_88 = *(long *)(lVar3 + -8);
  local_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  lVar4 = 0;
  local_90 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = _TtC14UURemoteServer22ClipboardMobileManager::pasteboard;
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  IVar5 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard,"generalPasteboard");
  *(ID *)(unaff_x20 + lVar3) = IVar5;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer22ClipboardMobileManager::lastChangeCount) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer22ClipboardMobileManager::refreshTimer) = 0;
  lVar3 = _TtC14UURemoteServer22ClipboardMobileManager::lastContent;
  puVar6 = &DAT_100a78ec8;
  FUN_100004bb4(&DAT_100a78ec8,&DAT_10080dba0);
  _swift_allocObject();
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  local_98 = _TtC14UURemoteServer22ClipboardMobileManager::queue;
  FUN_100004b70(0);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar6 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar8 = &DAT_100a750e0;
  FUN_1000d61d8(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_68,puVar6,puVar8,lVar4,puVar7);
  puVar2 = local_90;
  (**(code **)(local_88 + 0x68))
            (local_90,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_80);
  puVar9 = &DAT_d000000000000018;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (&DAT_d000000000000018,0x800000010088c9e0,lVar11,lVar10,puVar2,0);
  *(undefined1 **)(unaff_x20 + local_98) = puVar9;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer22ClipboardMobileManager::isReading) = 0;
  lVar3 = unaff_x20 + _TtC14UURemoteServer22ClipboardMobileManager::delegate;
  *(undefined8 *)(lVar3 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar3,0);
  FUN_1001165b8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  return;
}

