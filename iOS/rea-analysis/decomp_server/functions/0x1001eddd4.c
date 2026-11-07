// rea decompile_all
// name: FUN_1001eddd4
// address: 0x1001eddd4
// body: available
// range: 0x1001eddd4-0x1001ee6e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ee6e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001eddd4(pid_t param_1)

{
  undefined8 uVar1;
  pid_t pVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined4 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_110 [16];
  long lStack_100;
  pid_t apStack_f8 [2];
  long lStack_f0;
  uint auStack_e8 [2];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_bc;
  long local_b8;
  long local_b0;
  long lStack_a8;
  uint local_9c;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar3 + -8);
  local_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar14 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_9c = 0;
  pVar2 = _waitpid(param_1,(int *)&local_9c,0);
  if (pVar2 != param_1) {
    uVar4 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
    *(long *)(lVar15 + -0x10) = unaff_x20;
    *(pid_t *)(lVar15 + -8) = param_1;
    *(pid_t *)(lVar15 + -4) = pVar2;
    FUN_1003fb4ec(FUN_1001f8d20,lVar15 + -0x20,0xd000000000000095,0x80000001008a00c0,
                  0xd000000000000015,0x80000001008a06e0,0x271,0);
    goto LAB_1001ee4d8;
  }
  *(undefined4 *)(unaff_x20 + 0x1c) = 0;
  uVar12 = local_9c & 0x7f;
  if (uVar12 == 0x7f) {
    uVar9 = 0;
    uVar12 = 0xffffffff;
  }
  else if (uVar12 == 0) {
    uVar12 = local_9c >> 8 & 0xff;
    uVar9 = 0;
  }
  else {
    uVar12 = uVar12 | 0x80;
    uVar9 = 1;
  }
  if (*(char *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxCreationPending) == '\x01') {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar15 + -0x10) = unaff_x20;
    *(uint *)(lVar15 + -8) = uVar12;
    FUN_1003fb4ec(FUN_1001f8da8,lVar15 + -0x20,0xd000000000000095,0x80000001008a00c0,
                  0xd000000000000015,0x80000001008a06e0,0x289,0);
    *(undefined1 *)(unaff_x20 + 0x14) = 2;
    lVar3 = _TtC14UURemoteServer15TerminalSession::readSource;
    lVar13 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource);
    if (lVar13 == 0) {
      uVar4 = 0;
    }
    else {
      lVar14 = lVar13;
      _swift_getObjectType(lVar13);
      _swift_unknownObjectRetain(lVar13);
      __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar14);
      _swift_unknownObjectRelease(lVar13);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    }
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    _swift_unknownObjectRelease(uVar4);
    if (-1 < *(int *)(unaff_x20 + 0x18)) {
      _close();
      *(undefined4 *)(unaff_x20 + 0x18) = 0xffffffff;
    }
    lVar3 = _TtC14UURemoteServer15TerminalSession::processSource;
    lVar13 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource);
    if (lVar13 == 0) {
      uVar4 = 0;
    }
    else {
      lVar14 = lVar13;
      _swift_getObjectType(lVar13);
      _swift_unknownObjectRetain(lVar13);
      __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar14);
      _swift_unknownObjectRelease(lVar13);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    }
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    _swift_unknownObjectRelease(uVar4);
    goto LAB_1001ee4d8;
  }
  lVar10 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController);
  local_c8 = lVar16;
  local_bc = uVar9;
  if (lVar10 != 0) {
    lVar16 = ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1]
    ;
    if ((lVar16 != 0) &&
       ((*(byte *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::isClosingByUs) & 1) == 0)) {
      local_d0 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName)
      ;
      _swift_retain(lVar10);
      _swift_bridgeObjectRetain(lVar16);
      lVar8 = lVar16;
      FUN_1000a300c();
      local_d8 = local_d0;
      local_d0 = lVar8;
      _swift_bridgeObjectRelease(lVar16);
      _swift_release(lVar10);
      lVar16 = local_d0;
      if (local_d0 == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)(lVar15 + -0x10) = unaff_x20;
        *(pid_t *)(lVar15 + -8) = param_1;
        FUN_1003fb48c(FUN_1001f8d9c,lVar15 + -0x20,0xd000000000000095,0x80000001008a00c0,
                      0xd000000000000015,0x80000001008a06e0,0x29c,0);
      }
      else {
        if (local_d0 == 1) {
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_1001f8d74);
          goto LAB_1001ee14c;
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar4 = local_d8;
        *(long *)(lVar15 + -0x20) = unaff_x20;
        *(undefined8 *)(lVar15 + -0x18) = uVar4;
        *(long *)(lVar15 + -0x10) = lVar16;
        FUN_1003fb4bc(FUN_1001f8d7c,lVar15 + -0x30,0xd000000000000095,0x80000001008a00c0,
                      0xd000000000000015,0x80000001008a06e0,0x2ad,0);
        FUN_1001f8d88(uVar4,lVar16);
      }
      *(undefined1 *)(unaff_x20 + 0x14) = 1;
      puVar6 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput);
      uVar4 = *puVar6;
      uVar1 = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      FUN_10007ed2c(uVar4,uVar1);
      lVar3 = _TtC14UURemoteServer15TerminalSession::readSource;
      lVar13 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource);
      if (lVar13 == 0) {
        uVar4 = 0;
      }
      else {
        lVar14 = lVar13;
        _swift_getObjectType(lVar13);
        _swift_unknownObjectRetain(lVar13);
        __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar14);
        _swift_unknownObjectRelease(lVar13);
        uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
      }
      *(undefined8 *)(unaff_x20 + lVar3) = 0;
      _swift_unknownObjectRelease(uVar4);
      lVar3 = _TtC14UURemoteServer15TerminalSession::processSource;
      lVar13 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource);
      if (lVar13 == 0) {
        uVar4 = 0;
      }
      else {
        lVar14 = lVar13;
        _swift_getObjectType(lVar13);
        _swift_unknownObjectRetain(lVar13);
        __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar14);
        _swift_unknownObjectRelease(lVar13);
        uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
      }
      *(undefined8 *)(unaff_x20 + lVar3) = 0;
      _swift_unknownObjectRelease(uVar4);
      if (-1 < *(int *)(unaff_x20 + 0x18)) {
        _close();
        *(undefined4 *)(unaff_x20 + 0x18) = 0xffffffff;
      }
      goto LAB_1001ee4d8;
    }
  }
LAB_1001ee14c:
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)(lVar15 + -0x20) = unaff_x20;
  *(pid_t *)(lVar15 + -0x18) = param_1;
  *(uint *)(lVar15 + -0x14) = uVar12;
  *(char *)(lVar15 + -0x10) = (char)local_bc;
  FUN_1003fb48c(FUN_1001f8d2c,lVar15 + -0x30,0xd000000000000095,0x80000001008a00c0,
                0xd000000000000015,0x80000001008a06e0,0x2be,0);
  *(undefined1 *)(unaff_x20 + 0x14) = 2;
  __s10Foundation4DateVACycfC(lVar15);
  lVar16 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_98,
                     0x21,0);
  (**(code **)(lVar13 + 0x28))(unaff_x20 + lVar16,lVar15,lVar3);
  _swift_endAccess(&local_98);
  lVar3 = _TtC14UURemoteServer15TerminalSession::readSource;
  lVar13 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource);
  if (lVar13 == 0) {
    uVar4 = 0;
  }
  else {
    lVar15 = lVar13;
    _swift_getObjectType(lVar13);
    _swift_unknownObjectRetain(lVar13);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar15);
    _swift_unknownObjectRelease(lVar13);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  _swift_unknownObjectRelease(uVar4);
  if (-1 < *(int *)(unaff_x20 + 0x18)) {
    _close();
    *(undefined4 *)(unaff_x20 + 0x18) = 0xffffffff;
  }
  lVar3 = _TtC14UURemoteServer15TerminalSession::processSource;
  lVar13 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource);
  if (lVar13 == 0) {
    uVar4 = 0;
  }
  else {
    lVar15 = lVar13;
    _swift_getObjectType(lVar13);
    _swift_unknownObjectRetain(lVar13);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar15);
    _swift_unknownObjectRelease(lVar13);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  _swift_unknownObjectRelease(uVar4);
  lVar3 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onExit);
  lVar13 = ((long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onExit))[1];
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  lVar15 = lVar3;
  FUN_10004090c(lVar3,lVar13);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar5 = &DAT_1009a4790;
  local_d0 = lVar15;
  _swift_allocObject(&DAT_1009a4790,0x25,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  *(long *)(puVar5 + 0x18) = lVar13;
  *(uint *)(puVar5 + 0x20) = uVar12;
  puVar5[0x24] = (char)local_bc;
  local_78 = FUN_1001f8d44;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009a47a8;
  local_70 = puVar5;
  aBlock = __Block_copy(&local_98);
  puVar5 = local_70;
  FUN_10004090c(lVar3,lVar13);
  _swift_release(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar15 = local_b8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar11,&local_98,puVar5,puVar7,local_b8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar14,puVar11,aBlock);
  __Block_release(aBlock);
  FUN_10007ed2c(lVar3,lVar13);
  (**(code **)(local_c8 + 8))(puVar11,lVar15);
  (**(code **)(local_b0 + 8))(lVar14,lStack_a8);
LAB_1001ee4d8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

