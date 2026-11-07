// rea decompile_all
// name: FUN_1001ebe04
// address: 0x1001ebe04
// body: available
// range: 0x1001ebe04-0x1001ec31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ec318 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ebe04(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  pid_t pVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  code *pcVar15;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  pid_t apStack_b8 [2];
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80 [6];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar7 = 0;
  local_90 = param_2;
  local_88 = param_3;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar13 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = _TtC14UURemoteServer15TerminalSession::readSource;
  puVar14 = puVar13 + -extraout_x12;
  pVar3 = *(pid_t *)(unaff_x20 + 0x1c);
  lVar12 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource);
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = lVar12;
    _swift_getObjectType(lVar12);
    _swift_unknownObjectRetain(lVar12);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar8);
    _swift_unknownObjectRelease(lVar12);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  _swift_unknownObjectRelease(uVar9);
  lVar4 = _TtC14UURemoteServer15TerminalSession::processSource;
  lVar12 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource);
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = lVar12;
    _swift_getObjectType(lVar12);
    _swift_unknownObjectRetain(lVar12);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar8);
    _swift_unknownObjectRelease(lVar12);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  _swift_unknownObjectRelease(uVar9);
  puVar5 = puVar14;
  if (0 < pVar3) {
    iVar6 = _kill(pVar3,0xf);
    if ((iVar6 != 0) && (__s6Darwin5errnos5Int32Vvg(), iVar6 != 3)) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(puVar14 + -0x20) = unaff_x20;
      *(pid_t *)(puVar14 + -0x18) = pVar3;
      *(undefined8 *)(puVar14 + -0x10) = local_90;
      *(undefined8 *)(puVar14 + -8) = local_88;
      FUN_1003fb4bc(FUN_1001ed0d0,puVar14 + -0x30,0xd000000000000095,0x80000001008a00c0,
                    0xd000000000000034,0x80000001008a0350,0x135,0);
    }
    local_80[0] = 0;
    __s10Foundation4DateVACycfC(puVar13);
    __s10Foundation4DateV18addingTimeIntervalyACSdF(puVar14,0x3fc999999999999a);
    pcVar15 = *(code **)(lVar11 + 8);
    (*pcVar15)(puVar13,lVar7);
    while( true ) {
      iVar6 = _waitpid(pVar3,local_80,1);
      if (iVar6 != 0) break;
      __s10Foundation4DateVACycfC(puVar13);
      puVar10 = puVar13;
      __s10Foundation4DateV1loiySbAC_ACtFZ(puVar13,puVar14);
      (*pcVar15)(puVar13,lVar7);
      if (((ulong)puVar10 & 1) == 0) {
        iVar6 = _kill(pVar3,9);
        if ((iVar6 != 0) && (__s6Darwin5errnos5Int32Vvg(), iVar6 != 3)) {
          FUN_100401b14(0);
          local_98 = puVar14;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)(puVar14 + -0x20) = unaff_x20;
          *(pid_t *)(puVar14 + -0x18) = pVar3;
          *(undefined8 *)(puVar14 + -0x10) = local_90;
          *(undefined8 *)(puVar14 + -8) = local_88;
          FUN_1003fb4ec(FUN_1001ed0f0,puVar14 + -0x30,0xd000000000000095,0x80000001008a00c0,
                        0xd000000000000034,0x80000001008a0350,0x142,0);
          puVar5 = local_98;
        }
        iVar6 = _waitpid(pVar3,local_80,0);
        break;
      }
      _usleep(10000);
    }
    if ((iVar6 < 0) && (__s6Darwin5errnos5Int32Vvg(), iVar6 != 10)) {
      FUN_100401b14(0);
      local_98 = puVar5;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(puVar5 + -0x20) = unaff_x20;
      *(pid_t *)(puVar5 + -0x18) = pVar3;
      *(undefined8 *)(puVar5 + -0x10) = local_90;
      *(undefined8 *)(puVar5 + -8) = local_88;
      FUN_1003fb4bc(FUN_1001ed0e0,puVar5 + -0x30,0xd000000000000095,0x80000001008a00c0,
                    0xd000000000000034,0x80000001008a0350,0x147,0);
      puVar5 = local_98;
    }
    (*pcVar15)(puVar14,lVar7);
  }
  if (-1 < *(int *)(unaff_x20 + 0x18)) {
    _close();
    *(undefined4 *)(unaff_x20 + 0x18) = 0xffffffff;
  }
  *(undefined4 *)(unaff_x20 + 0x1c) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10007ed2c(uVar9,uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onExit);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10007ed2c(uVar9,uVar2);
  __s10Foundation4DateVACycfC(puVar13);
  lVar4 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,local_80,0x21
                     ,0);
  (**(code **)(lVar11 + 0x28))(unaff_x20 + lVar4,puVar13,lVar7);
  _swift_endAccess(local_80);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)(puVar5 + -0x20) = unaff_x20;
  puVar5[-0x18] = param_1;
  *(undefined8 *)(puVar5 + -0x10) = local_90;
  *(undefined8 *)(puVar5 + -8) = local_88;
  FUN_1003fb48c(FUN_1001ed0c0,puVar5 + -0x30,0xd000000000000095,0x80000001008a00c0,
                0xd000000000000034,0x80000001008a0350,0x154,0);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

