// rea decompile_all
// name: FUN_100154aa8
// address: 0x100154aa8
// body: available
// range: 0x100154aa8-0x1001551c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100154aa8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  code *local_118;
  undefined1 auStack_110 [16];
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = 0;
  local_118 = (code *)param_3;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a7a418;
  local_128 = lVar17;
  FUN_100004bb4(&DAT_100a7a418,&DAT_10080edc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_00;
  lVar7 = 0;
  FUN_100127240();
  local_140 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar12 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12;
  puVar8 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar7 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar19 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = uVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = lVar13 - extraout_x12_02;
  uVar9 = 0;
  FUN_100401b14(0);
  local_100 = param_1;
  FUN_1003fb4ec(uVar9,FUN_10016bce4,auStack_110,0xd0000000000000a4,0x800000010088d870,
                0xd00000000000002d,0x8000000100894060,0x65,0);
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  lVar7 = param_2 + 0x10;
  local_120 = param_2;
  _swift_unknownObjectWeakLoadStrong();
  lVar10 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  if (lVar7 == 0) {
    (**(code **)(lVar15 + 0x38))(lVar20,1,1,lVar5);
  }
  else {
    _swift_beginAccess(lVar7 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,auStack_98,0,0
                      );
    FUN_10016b6f8(lVar7 + lVar10,lVar12);
    FUN_10007f314(lVar12,lVar20,&DAT_100a79890,&DAT_10080e600);
    FUN_10016b73c(lVar12);
  }
  (**(code **)(lVar15 + 0x10))(lVar13,local_118,lVar5);
  local_118 = *(code **)(lVar15 + 0x38);
  (*local_118)(lVar13,0,1,lVar5);
  lVar7 = (long)*(int *)(puVar6 + 0x30);
  FUN_10007f314(lVar20,lVar17,&DAT_100a79890,&DAT_10080e600);
  FUN_10007f314(lVar13,lVar17 + lVar7,&DAT_100a79890,&DAT_10080e600);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar10 = lVar17;
  (*pcVar16)(lVar17,1,lVar5);
  if ((int)lVar10 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a79890,&DAT_10080e600);
    FUN_100040bb4(lVar20,&DAT_100a79890,&DAT_10080e600);
    lVar7 = lVar17 + lVar7;
    (*pcVar16)(lVar7,1,lVar5);
    if ((int)lVar7 != 1) {
LAB_100154e98:
      FUN_100040bb4(lVar17,&DAT_100a7a418,&DAT_10080edc0);
      return;
    }
    FUN_100040bb4(lVar17,&DAT_100a79890,&DAT_10080e600);
  }
  else {
    FUN_10007f314(lVar17,uVar19,&DAT_100a79890,&DAT_10080e600);
    lVar10 = lVar17 + lVar7;
    (*pcVar16)(lVar10,1,lVar5);
    lVar12 = local_128;
    if ((int)lVar10 == 1) {
      FUN_100040bb4(lVar13,&DAT_100a79890,&DAT_10080e600);
      FUN_100040bb4(lVar20,&DAT_100a79890,&DAT_10080e600);
      (**(code **)(lVar15 + 8))(uVar19,lVar5);
      goto LAB_100154e98;
    }
    (**(code **)(lVar15 + 0x20))(local_128,lVar17 + lVar7,lVar5);
    puVar6 = &DAT_100a7a420;
    FUN_100005c90(&DAT_100a7a420,PTR___s10Foundation4UUIDVMa_100996230,
                  PTR___s10Foundation4UUIDVSQAAMc_100996250);
    uVar11 = uVar19;
    __sSQ2eeoiySbx_xtFZTj(uVar19,lVar12,lVar5,puVar6);
    pcVar18 = *(code **)(lVar15 + 8);
    (*pcVar18)(lVar12,lVar5);
    FUN_100040bb4(lVar13,&DAT_100a79890,&DAT_10080e600);
    FUN_100040bb4(lVar20,&DAT_100a79890,&DAT_10080e600);
    (*pcVar18)(uVar19,lVar5);
    FUN_100040bb4(lVar17,&DAT_100a79890,&DAT_10080e600);
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  lVar7 = local_120;
  _swift_beginAccess(local_120 + 0x10,auStack_b0,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar10 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  if (lVar7 != 0) {
    _swift_beginAccess(lVar7 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,auStack_c8,0,0
                      );
    lVar17 = local_130;
    FUN_10016b6f8(lVar7 + lVar10,local_130);
    lVar7 = local_138;
    FUN_10007f314(lVar17,local_138,&DAT_100a79890,&DAT_10080e600);
    lVar10 = lVar7;
    (*pcVar16)(lVar7,1,lVar5);
    if ((int)lVar10 == 1) {
      FUN_10016b73c(lVar17);
      FUN_100040bb4(lVar7,&DAT_100a79890,&DAT_10080e600);
    }
    else {
      FUN_100040bb4(lVar7,&DAT_100a79890,&DAT_10080e600);
      bVar3 = *(byte *)(lVar17 + *(int *)(local_140 + 0x1c) + 4);
      FUN_10016b73c(lVar17);
      lVar7 = local_120;
      if ((bVar3 & 1) != 0) {
        _swift_beginAccess(local_120 + 0x10,auStack_e0,0,0);
        lVar7 = lVar7 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar7 != 0) {
          lVar7 = lVar7 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
          _swift_beginAccess(lVar7,auStack_f8,0x21,0);
          puVar1 = (undefined4 *)(lVar7 + *(int *)(local_140 + 0x1c));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            FUN_100127da8(*puVar1);
          }
          FUN_100040bb4(lVar7,&DAT_100a79890,&DAT_10080e600);
          (*local_118)(lVar7,1,1,lVar5);
          lVar10 = local_140;
          uVar9 = *(undefined8 *)(lVar7 + *(int *)(local_140 + 0x14));
          *(undefined **)(lVar7 + *(int *)(local_140 + 0x14)) =
               PTR___swiftEmptyArrayStorage_100995ea0;
          puVar2 = (undefined8 *)(lVar7 + *(int *)(local_140 + 0x18));
          uVar14 = puVar2[1];
          *puVar2 = 0;
          puVar2[1] = 0xe000000000000000;
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 1;
          iVar4 = *(int *)(local_140 + 0x24);
          FUN_100040bb4(lVar7 + iVar4,&DAT_100a76718,&DAT_10080ccc0);
          lVar5 = 0;
          __s10Foundation4DateVMa();
          (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar7 + iVar4,1,1,lVar5);
          *(undefined1 *)(lVar7 + *(int *)(lVar10 + 0x2c)) = 1;
          _swift_endAccess(auStack_f8);
          _swift_bridgeObjectRelease(uVar14);
          _swift_bridgeObjectRelease(uVar9);
        }
      }
    }
  }
  return;
}

