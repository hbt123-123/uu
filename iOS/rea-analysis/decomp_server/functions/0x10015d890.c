// rea decompile_all
// name: FUN_10015d890
// address: 0x10015d890
// body: available
// range: 0x10015d890-0x10015e11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015d890(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_1d0 [16];
  int aiStack_1c0 [2];
  ulong auStack_1b8 [3];
  undefined8 uStack_1a0;
  char *local_190;
  char *local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 auStack_150 [160];
  ulong local_b0 [2];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 local_70;
  
  lVar9 = 0;
  local_168 = param_4;
  local_160 = param_3;
  __s10Foundation4DateVMa();
  lVar22 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  lVar23 = (long)&uStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar23 - extraout_x8_00;
  lVar11 = 0;
  FUN_100127240();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  uVar16 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar21 = (undefined1 *)(uVar16 - extraout_x12);
  iVar20 = (int)param_2;
  if (*(char *)(unaff_x20 +
               _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) != '\x01')
  {
    lVar9 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar9 == 0) {
      return;
    }
    local_158 = 1;
    local_b0[0] = param_2 & 0xffffffff;
    local_b0[1] = 2;
    local_a0 = 1;
    uStack_90 = 0xc000000000000000;
    local_98 = 0;
    local_80 = 0x2000000000000000;
    local_70 = 0x1000000000000000;
    FUN_100193df4(auStack_150,local_b0);
    FUN_1001bddd8(param_1,auStack_150);
    FUN_10016b308(auStack_150);
    _swift_unknownObjectRelease(lVar9);
    FUN_100006cdc(0,0xc000000000000000);
    return;
  }
  lVar1 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  local_170 = param_1;
  _swift_beginAccess(lVar1,auStack_150,0,0);
  uVar12 = param_2;
  FUN_100152fd0(param_2,*(undefined8 *)(lVar1 + *(int *)(lVar11 + 0x28)));
  if ((uVar12 & 1) != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(puVar21 + -0x20) = iVar20;
    uVar17 = local_168;
    *(undefined8 *)(puVar21 + -0x18) = local_160;
    *(undefined8 *)(puVar21 + -0x10) = uVar17;
    FUN_1003fb48c(FUN_10016c41c,puVar21 + -0x30,0xd0000000000000a4,0x800000010088d870,
                  0xd000000000000034,0x8000000100895280,0x1fc,0);
    goto LAB_10015e020;
  }
  FUN_10016b6f8(lVar1,puVar21);
  FUN_10007f314(puVar21,lVar18,&DAT_100a79890,&DAT_10080e600);
  lVar13 = 0;
  __s10Foundation4UUIDVMa();
  local_180 = *(long *)(lVar13 + -8);
  lVar14 = lVar18;
  local_178 = lVar13;
  (**(code **)(local_180 + 0x30))(lVar18,1);
  if ((int)lVar14 == 1) {
    FUN_10016b73c(puVar21);
    FUN_100040bb4(lVar18,&DAT_100a79890,&DAT_10080e600);
LAB_10015dbc4:
    uVar12 = uVar16;
    FUN_10016b6f8(lVar1);
    if ((*(long *)(*(long *)(uVar16 + (long)*(int *)(lVar11 + 0x20)) + 0x10) != 0) &&
       (thunk_FUN_1001a2c34(param_2), (uVar12 & 1) != 0)) {
      FUN_10016b73c(uVar16);
      goto LAB_10015dbf4;
    }
    FUN_10016b73c();
    if ((*(byte *)(lVar1 + *(int *)(lVar11 + 0x2c)) & 1) != 0) {
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_10015e3e8,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000034,
                    0x8000000100895280,0x20d,0);
      goto LAB_10015e020;
    }
    FUN_100153164();
    uVar12 = uVar16;
    FUN_100189010();
    _swift_release(uVar16);
    if (uVar12 == 0) goto LAB_10015e020;
    local_188 = (char *)0x0;
  }
  else {
    FUN_100040bb4(lVar18,&DAT_100a79890,&DAT_10080e600);
    bVar5 = puVar21[(long)*(int *)(lVar11 + 0x1c) + 4];
    FUN_10016b73c(puVar21);
    if ((bVar5 & 1) == 0) goto LAB_10015dbc4;
LAB_10015dbf4:
    _swift_beginAccess(lVar1,local_b0,0x21,0);
    __s10Foundation4DateVACycfC(lVar23);
    uVar12 = param_2;
    FUN_100127684(param_2,lVar23);
    (**(code **)(lVar22 + 8))(lVar23,lVar9);
    _swift_endAccess(local_b0);
    if (uVar12 == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)(puVar21 + -0x20) = iVar20;
      uVar17 = local_168;
      *(undefined8 *)(puVar21 + -0x18) = local_160;
      *(undefined8 *)(puVar21 + -0x10) = uVar17;
      FUN_1003fb4ec(FUN_10016c410,puVar21 + -0x30,0xd0000000000000a4,0x800000010088d870,
                    0xd000000000000034,0x8000000100895280,0x205,0);
      goto LAB_10015e020;
    }
    _swift_bridgeObjectRetain(uVar12);
    local_188 = (char *)uVar12;
  }
  uVar17 = local_168;
  FUN_100401b14(0);
  local_190 = puVar21;
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(int *)(puVar21 + -0x20) = iVar20;
  *(undefined8 *)(puVar21 + -0x18) = local_160;
  *(undefined8 *)(puVar21 + -0x10) = uVar17;
  *(ulong *)(puVar21 + -8) = uVar12;
  FUN_1003fb45c(FUN_10016c3e4,puVar21 + -0x30,0xd0000000000000a4,0x800000010088d870,
                0xd000000000000034,0x8000000100895280,0x215,7);
  pcVar8 = local_190;
  pcVar7 = (code *)0x0;
  if (local_188 != (char *)0x0) {
    _swift_bridgeObjectRelease();
    local_188 = pcVar8;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(pcVar8 + -0x20) = iVar20;
    uVar17 = local_168;
    *(undefined8 *)(pcVar8 + -0x18) = local_160;
    *(undefined8 *)(pcVar8 + -0x10) = uVar17;
    *(ulong *)(pcVar8 + -8) = uVar12;
    pcVar7 = FUN_10016c400;
    FUN_1003fb48c(FUN_10016c400,pcVar8 + -0x30,0xd0000000000000a4,0x800000010088d870,
                  0xd000000000000034,0x8000000100895280,0x218,0);
    pcVar8 = local_188;
  }
  local_190 = s___dataAsk____100895270 + 0x10;
  local_188 = s___pathLength__10088d850 + 0x20;
  FUN_100153208();
  uVar16 = param_2;
  uVar15 = uVar12;
  FUN_1001326e4();
  _swift_release(pcVar7);
  _swift_bridgeObjectRelease(uVar12);
  if ((uVar15 & 1) == 0) {
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10015e118);
      (*pcVar7)();
    }
    if (uVar16 >> 0x20 == 0) {
      FUN_10015e1cc(uVar16);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10015e11c);
    (*pcVar7)();
  }
  piVar2 = (int *)(lVar1 + *(int *)(lVar11 + 0x1c));
  if (((*(byte *)(piVar2 + 1) & 1) == 0) && (*piVar2 == iVar20)) {
    _swift_beginAccess(lVar1,local_b0,0x21,0);
    puVar3 = (undefined4 *)(lVar1 + *(int *)(lVar11 + 0x1c));
    FUN_100127da8(param_2);
    FUN_100040bb4(lVar1,&DAT_100a79890,&DAT_10080e600);
    (**(code **)(local_180 + 0x38))(lVar1,1,1,local_178);
    uVar17 = *(undefined8 *)(lVar1 + *(int *)(lVar11 + 0x14));
    *(undefined **)(lVar1 + *(int *)(lVar11 + 0x14)) = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = (undefined8 *)(lVar1 + *(int *)(lVar11 + 0x18));
    uVar19 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0xe000000000000000;
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 1;
    iVar6 = *(int *)(lVar11 + 0x24);
    FUN_100040bb4(lVar1 + iVar6,&DAT_100a76718,&DAT_10080ccc0);
    (**(code **)(lVar22 + 0x38))(lVar1 + iVar6,1,1,lVar9);
    *(undefined1 *)(lVar1 + *(int *)(lVar11 + 0x2c)) = 1;
    _swift_endAccess(local_b0);
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar17);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(pcVar8 + -0x20) = iVar20;
    *(undefined8 *)(pcVar8 + -0x18) = local_160;
    *(undefined8 *)(pcVar8 + -0x10) = local_168;
    FUN_1003fb4ec(FUN_10016c3f4,(long)pcVar8 + -0x30,0xd0000000000000a4,
                  (ulong)local_188 | 0x8000000000000000,0xd000000000000034,
                  (ulong)local_190 | 0x8000000000000000,0x21e,0);
  }
LAB_10015e020:
  FUN_10015e11c();
  return;
}

