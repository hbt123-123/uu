// rea decompile_all
// name: FUN_1000f46c0
// address: 0x1000f46c0
// body: available
// range: 0x1000f46c0-0x1000f4a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f46c0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  class_t *pcVar10;
  ID IVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *local_98 [3];
  objc_super local_80;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  pcVar10 = (class_t *)(&stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = (long)pcVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar16 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar17 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  *(undefined **)(unaff_x20 + _TtC14UURemoteServer10InputQueue::events) =
       PTR___swiftEmptyArrayStorage_100995ea0;
  lVar5 = _TtC14UURemoteServer10InputQueue::timerQueue;
  uVar6 = 0;
  FUN_100004b70();
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
  local_98[0] = puVar7;
  FUN_1000aad00();
  puVar7 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar8 = puVar7;
  FUN_100004bf8();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar16,local_98,puVar7,puVar8,lVar4,uVar6)
  ;
  uVar1 = *(undefined4 *)
           PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0;
  pcVar14 = *(code **)(lVar13 + 0x68);
  (*pcVar14)(lVar15,uVar1,lVar3);
  uVar9 = 0xd000000000000017;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000017,0x8000000100889490,lVar17,lVar16,lVar15,0);
  *(undefined8 *)(unaff_x20 + lVar5) = uVar9;
  lVar5 = _TtC14UURemoteServer10InputQueue::execQueue;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
  local_98[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar16,local_98,puVar7,puVar8,lVar4,uVar6)
  ;
  (*pcVar14)(lVar15,uVar1,lVar3);
  uVar6 = 0xd000000000000016;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000016,0x80000001008894b0,lVar17,lVar16,lVar15,0);
  *(undefined8 *)(unaff_x20 + lVar5) = uVar6;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer10InputQueue::displayLink) = 0;
  lVar5 = _TtC14UURemoteServer10InputQueue::lastTime;
  __s10Foundation4DateVACycfC(pcVar10);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar12 + 8))(pcVar10,lVar2);
  *(undefined8 *)(unaff_x20 + lVar5) = param_1;
  FUN_1000f4bd4();
  local_80.super_class = pcVar10;
  IVar11 = _objc_msgSendSuper2(&local_80,"init");
  lVar5 = _TtC14UURemoteServer10InputQueue::displayLink;
  _swift_beginAccess(IVar11 + _TtC14UURemoteServer10InputQueue::displayLink,local_98,0x21,0);
  _CVDisplayLinkCreateWithActiveCGDisplays(IVar11 + lVar5);
  _swift_endAccess(local_98);
  if (*(long *)(IVar11 + lVar5) == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1000f4a2c);
    (*pcVar14)();
  }
  _CVDisplayLinkSetOutputCallback(*(long *)(IVar11 + lVar5),FUN_1000f4a30,0);
  if (*(long *)(IVar11 + lVar5) != 0) {
    _CVDisplayLinkStart();
    return IVar11;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1000f4a30);
  (*pcVar14)();
}

