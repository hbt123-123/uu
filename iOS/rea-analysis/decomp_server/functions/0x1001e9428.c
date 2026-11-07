// rea decompile_all
// name: FUN_1001e9428
// address: 0x1001e9428
// body: available
// range: 0x1001e9428-0x1001e9c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e9b8c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001e9c24 to 0x1007de1a0 __exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 *
FUN_1001e9428(undefined8 param_1,ID param_2,undefined8 param_3,long param_4,long param_5,
             long param_6)

{
  ID *pIVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  ID IVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar18;
  ulong uVar19;
  undefined8 *unaff_x20;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined1 auStack_160 [16];
  int aiStack_150 [2];
  ID aIStack_148 [3];
  undefined8 auStack_130 [2];
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  ID local_108;
  undefined1 *local_100;
  long local_f8;
  long lStack_f0;
  ID local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_d0 = *unaff_x20;
  lVar8 = 0;
  __s10Foundation4DateVMa();
  local_f8 = *(long *)(lVar8 + -8);
  lStack_f0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  lVar8 = 0;
  local_100 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_a8 = *(long *)(lVar8 + -8);
  local_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar17 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_b0 = lVar17;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  local_b8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_c0 = lVar17;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)((long)unaff_x20 + 0x14) = 0;
  unaff_x20[3] = 0xffffffff;
  __s10Foundation4DateVACycfC
            ((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::lastActiveTime);
  __s10Foundation4DateVACycfC((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::createdAt);
  puVar10 = (undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::name);
  *puVar10 = 0;
  puVar10[1] = 0xe000000000000000;
  puVar10 = (undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::onExit);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource) = 0;
  *(undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource) = 0;
  *(undefined1 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::isClosed) = 0;
  *(undefined1 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::isClosingByUs) = 0;
  puVar10 = (undefined8 *)
            ((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::scrollbackBuffer);
  puVar10[1] = 0xc000000000000000;
  *puVar10 = 0;
  puVar10 = (undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName)
  ;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined1 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxCreationPending) = 0;
  uVar21 = (undefined4)param_1;
  *(undefined4 *)(unaff_x20 + 2) = uVar21;
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(long *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::cols) = param_4;
  if (param_5 < 2) {
    param_5 = 1;
  }
  *(long *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::rows) = param_5;
  *(long *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController) = param_6;
  local_c8 = param_6;
  _swift_retain(param_6);
  local_e8 = param_2;
  local_e0 = param_3;
  FUN_1001f8598();
  local_108 = param_2;
  local_d8 = param_3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  pcVar16 = "lastPathComponent";
  IVar9 = _objc_msgSend(param_2,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  pIVar1 = (ID *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::shell);
  *pIVar1 = IVar9;
  pIVar1[1] = (ID)pcVar16;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  local_88 = (undefined *)0x0;
  local_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x28);
  _swift_bridgeObjectRelease(local_80);
  local_88 = (undefined *)0xd000000000000026;
  local_80 = 0x80000001008a0560;
  puVar11 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_94 = uVar21;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  uVar14 = local_80;
  puVar13 = local_88;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
  local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar11 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar12 = &DAT_100a750e0;
  FUN_10003f840(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0,PTR___sSayxGSTsMc_100995898);
  lVar4 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_88,puVar11,puVar12,local_b8,puVar10);
  lVar3 = local_b0;
  (**(code **)(local_a8 + 0x68))
            (local_b0,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_a0);
  lVar8 = local_c8;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar13,uVar14,lVar17,lVar4,lVar3,0);
  *(undefined **)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::ioQueue) = puVar13;
  if (lVar8 != 0) {
    local_88 = (undefined *)0x65746f6d65727575;
    local_80 = 0xe90000000000002d;
    puVar11 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    local_94 = uVar21;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar11);
    puVar10 = (undefined8 *)
              ((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
    uVar14 = puVar10[1];
    *puVar10 = local_88;
    puVar10[1] = local_80;
    _swift_bridgeObjectRelease(uVar14);
    *(undefined1 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxCreationPending) =
         1;
  }
  lVar4 = _TtC14UURemoteServer15TerminalSession::tmuxController;
  local_8c = 0xffffffff;
  uVar18 = *(ulong *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::rows);
  if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001e9b80);
    (*pcVar6)();
  }
  if (uVar18 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001e9b84);
    (*pcVar6)();
  }
  uVar19 = *(ulong *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::cols);
  if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001e9b88);
    (*pcVar6)();
  }
  if (uVar19 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001e9b8c);
    (*pcVar6)();
  }
  uVar20 = 0xeb000000006c6c65;
  local_94 = CONCAT22((short)uVar19,(short)uVar18);
  local_90 = 0;
  uVar14 = uVar20;
  uVar2 = 0x68536d6574737973;
  if (*(long *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController) != 0) {
    uVar14 = 0xe400000000000000;
    uVar2 = 0x78756d74;
  }
  FUN_1001e9c28(param_1,uVar2,uVar14);
  _swift_bridgeObjectRelease(uVar14);
  puVar15 = &local_8c;
  _forkpty(puVar15,0,0,&local_94);
  iVar7 = (int)puVar15;
  if (iVar7 < 0) {
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar17 + -0x10) = uVar21;
    FUN_1003fb4ec(FUN_1001f8ccc,lVar17 + -0x20,0xd000000000000095,0x80000001008a00c0,
                  0xd00000000000002f,0x80000001008a0590,0x9d,0);
    _swift_release();
    _swift_release(lVar8);
    unaff_x20 = (undefined8 *)0x0;
LAB_1001e9b40:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return unaff_x20;
  }
  if (iVar7 != 0) {
    _swift_bridgeObjectRelease(local_d8);
    puVar5 = local_100;
    *(undefined4 *)(unaff_x20 + 3) = local_8c;
    *(int *)((long)unaff_x20 + 0x1c) = iVar7;
    *(undefined1 *)((long)unaff_x20 + 0x14) = 0;
    __s10Foundation4DateVACycfC(local_100);
    lVar3 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
    _swift_beginAccess((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,
                       &local_88,0x21,0);
    (**(code **)(local_f8 + 0x28))((long)unaff_x20 + lVar3,puVar5,lStack_f0);
    _swift_endAccess(&local_88);
    uVar14 = 0x68536d6574737973;
    if (*(long *)((long)unaff_x20 + lVar4) != 0) {
      uVar20 = 0xe400000000000000;
      uVar14 = 0x78756d74;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar17 + -0x40) = uVar21;
    *(int *)(lVar17 + -0x3c) = iVar7;
    *(undefined4 **)(lVar17 + -0x38) = &local_8c;
    uVar2 = local_e0;
    *(ID *)(lVar17 + -0x30) = local_e8;
    *(undefined8 *)(lVar17 + -0x28) = uVar2;
    *(undefined8 **)(lVar17 + -0x20) = unaff_x20;
    *(undefined8 *)(lVar17 + -0x18) = uVar14;
    *(undefined8 *)(lVar17 + -0x10) = uVar20;
    FUN_1003fb48c(FUN_1001f872c,lVar17 + -0x50,0xd000000000000095,0x80000001008a00c0,
                  0xd00000000000002f,0x80000001008a0590,0xbe,0);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar2);
    FUN_1001ea258();
    FUN_1001ea518();
    _swift_release(lVar8);
    goto LAB_1001e9b40;
  }
  if (lVar8 != 0) {
    lVar17 = ((undefined8 *)
             ((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
    if (lVar17 != 0) {
      uVar14 = *(undefined8 *)
                ((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
      _swift_bridgeObjectRetain(lVar17);
      FUN_1001f87cc(lVar8,uVar14,lVar17,local_108,local_d8,param_1);
      _swift_release(lVar8);
      goto LAB_1001e9c1c;
    }
    _swift_release(lVar8);
  }
  uVar14 = *(undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::shell);
  lVar17 = ((undefined8 *)((long)unaff_x20 + _TtC14UURemoteServer15TerminalSession::shell))[1];
  _swift_bridgeObjectRetain(lVar17);
  FUN_1001f8aa8(local_108,local_d8,uVar14,lVar17,param_1);
LAB_1001e9c1c:
  _swift_bridgeObjectRelease(lVar17);
                    /* WARNING: Subroutine does not return */
  __exit(0x7f);
}

