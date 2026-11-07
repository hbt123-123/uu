// rea decompile_all
// name: FUN_1000ed958
// address: 0x1000ed958
// body: available
// range: 0x1000ed958-0x1000eddf3 inclusive
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

void FUN_1000ed958(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ID IVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  long unaff_x20;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  
  puVar5 = &DAT_100a766c8;
  local_80 = param_2;
  local_70 = param_1;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_88 = auStack_c0 + -extraout_x8;
  __s10Foundation3URLVMa();
  local_98 = *(long *)(lVar6 + -8);
  lStack_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_98 + 0x40));
  lVar14 = (long)(auStack_c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar14 - extraout_x12;
  local_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar14 - extraout_x12_00;
  lVar6 = 0;
  local_78 = lVar14;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_a8 = *(long *)(lVar6 + -8);
  lStack_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar5 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar18 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = _TtC14UURemoteServer23FileTransferResumeStore::encoder;
  lVar17 = lVar18 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar8 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar8;
  lVar6 = _TtC14UURemoteServer23FileTransferResumeStore::decoder;
  uVar8 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar8;
  lVar6 = _TtC14UURemoteServer23FileTransferResumeStore::queue;
  FUN_100004b70(0);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar9 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar5,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar5 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar10 = puVar5;
  FUN_100004bf8();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar18,&local_68,puVar5,puVar10,lVar7,puVar9);
  (**(code **)(local_a8 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_a0);
  uVar3 = local_80;
  puVar2 = local_88;
  lVar1 = lStack_90;
  lVar7 = local_98;
  uVar8 = 0xd00000000000002e;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000002e,0x8000000100888bc0,lVar17,lVar18,lVar14,0);
  uVar4 = local_70;
  *(undefined8 *)(unaff_x20 + lVar6) = uVar8;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::fileManager) = uVar3;
  FUN_1000e3888(local_70,puVar2);
  pcVar16 = *(code **)(lVar7 + 0x30);
  puVar11 = puVar2;
  (*pcVar16)(puVar2,1,lVar1);
  if ((int)puVar11 == 1) {
    IVar12 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    pcVar13 = "bundleIdentifier";
    IVar12 = NSBundle::bundleIdentifier(IVar12,"bundleIdentifier");
    if (IVar12 == 0) {
      pcVar13 = (char *)0x80000001008868a0;
      IVar12 = 0xd00000000000001b;
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar12);
    }
    lVar6 = local_b8;
    FUN_1000d6944(local_b8,uVar3);
    lVar14 = local_b0;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(local_b0,IVar12,pcVar13,1);
    _swift_bridgeObjectRelease(pcVar13);
    pcVar15 = *(code **)(lVar7 + 8);
    (*pcVar15)(lVar6,lVar1);
    lVar6 = local_78;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
              (local_78,0xd000000000000012,0x8000000100888bf0,1);
    FUN_1000ef618(local_70);
    (*pcVar15)(lVar14,lVar1);
    puVar11 = puVar2;
    (*pcVar16)(puVar2,1,lVar1);
    if ((int)puVar11 != 1) {
      FUN_1000ef618(puVar2);
    }
  }
  else {
    FUN_1000ef618(uVar4);
    lVar6 = local_78;
    (**(code **)(lVar7 + 0x20))(local_78,puVar2,lVar1);
  }
  (**(code **)(lVar7 + 0x20))
            (unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::rootURL,lVar6,lVar1);
  return;
}

