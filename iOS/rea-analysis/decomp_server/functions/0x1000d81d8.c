// rea decompile_all
// name: FUN_1000d81d8
// address: 0x1000d81d8
// body: available
// range: 0x1000d81d8-0x1000d872f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1000d81d8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ID IVar8;
  char *pcVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar13;
  long unaff_x20;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_68;
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  local_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  local_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_00;
  local_b8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_01;
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar15 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_b0 = _TtC14UURemoteServer28FileTransferReceiveOperation::queue;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar1 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar6 = puVar1;
  FUN_100004bf8();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar15,&local_68,puVar1,puVar6,lVar3,puVar5);
  (**(code **)(lVar17 + 0x68))
            (lVar16,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar2);
  lVar3 = local_a8;
  puVar7 = &DAT_d000000000000033;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (&DAT_d000000000000033,0x8000000100887d70,lVar4,lVar15,lVar16,0);
  *(undefined1 **)(unaff_x20 + local_b0) = puVar7;
  lVar2 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cbe74();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar2 = _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID;
  FUN_1000cbe90();
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_1000e3888(param_2,lVar10);
  pcVar14 = *(code **)(lVar11 + 0x30);
  lVar2 = lVar10;
  (*pcVar14)(lVar10,1,lVar3);
  if ((int)lVar2 == 1) {
    IVar8 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    pcVar9 = "bundleIdentifier";
    IVar8 = NSBundle::bundleIdentifier(IVar8,"bundleIdentifier");
    if (IVar8 == 0) {
      pcVar9 = (char *)0x80000001008868a0;
      IVar8 = 0xd00000000000001b;
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
    }
    lVar2 = local_c0;
    FUN_1000d6944(local_c0,param_1);
    lVar4 = local_b8;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(local_b8,IVar8,pcVar9,1);
    _swift_bridgeObjectRelease(pcVar9);
    pcVar13 = *(code **)(lVar11 + 8);
    (*pcVar13)(lVar2,lVar3);
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
              (lVar12,0xd000000000000016,0x8000000100887db0,1);
    (*pcVar13)(lVar4,lVar3);
    lVar2 = lVar10;
    (*pcVar14)(lVar10,1,lVar3);
    if ((int)lVar2 != 1) {
      FUN_100040bb4(lVar10,&DAT_100a766c8,&DAT_10080b1d0);
    }
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar12,lVar10,lVar3);
  }
  (**(code **)(lVar11 + 0x20))
            (unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::temporaryRootURL,lVar12
             ,lVar3);
  puVar7 = local_c8;
  if (param_3 == (undefined1 *)0x0) {
    (**(code **)(lVar11 + 0x38))(local_c8,1,1,lVar3);
    IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    FUN_1000edf1c();
    _swift_allocObject();
    FUN_1000ed958(puVar7,IVar8);
    param_3 = puVar7;
  }
  FUN_100040bb4(param_2,&DAT_100a766c8,&DAT_10080b1d0);
  *(undefined1 **)(unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::resumeStore) =
       param_3;
  return unaff_x20;
}

