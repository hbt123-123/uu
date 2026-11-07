// rea decompile_all
// name: FUN_1001e6884
// address: 0x1001e6884
// body: available
// range: 0x1001e6884-0x1001e6b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e6884(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 auStack_130 [16];
  int local_120;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  uVar4 = param_1;
  FUN_1001e4b60();
  FUN_1001e66c4(param_1,param_2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  lVar7 = _TtC14UURemoteServer15TerminalManager::sessions;
  iVar10 = (int)param_1;
  if ((param_1 >> 0x20 & 1) == 0) {
    puVar6 = &local_b0;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::sessions,puVar6,0x20,0);
    lVar7 = *(long *)(param_3 + lVar7);
    if ((*(long *)(lVar7 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar6 & 1) == 0)) {
      _swift_endAccess(&local_b0);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + param_1 * 8);
      _swift_endAccess(&local_b0);
      lVar7 = *(long *)(param_3 + _TtC14UURemoteServer15TerminalManager::tmuxController);
      if (lVar7 != 0) {
        lVar8 = ((undefined8 *)(lVar9 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
        if (lVar8 != 0) {
          local_f8 = *(undefined8 *)(lVar9 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName)
          ;
          local_e8 = *(undefined8 *)(lVar7 + 0x30);
          uVar1 = *(undefined8 *)(lVar7 + 0x38);
          local_d8 = *(undefined8 *)(lVar7 + 0x60);
          uVar2 = *(undefined8 *)(lVar7 + 0x68);
          local_c8 = *(undefined8 *)(lVar7 + 0x40);
          uVar3 = *(undefined8 *)(lVar7 + 0x48);
          uVar5 = 0;
          lStack_f0 = lVar8;
          uStack_e0 = uVar1;
          uStack_d0 = uVar2;
          uStack_c0 = uVar3;
          FUN_100401b14();
          local_108 = uVar5;
          local_100 = auStack_110;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_120 = iVar10;
          _swift_retain(lVar9);
          _swift_bridgeObjectRetain(lVar8);
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar3);
          FUN_1003fb48c(FUN_1001e6b80,auStack_130,0xd000000000000099,0x800000010089fc50,
                        0xd00000000000001b,0x800000010089fee0,0x99,0);
          lStack_a8 = lStack_f0;
          local_b0 = local_f8;
          uStack_98 = uStack_e0;
          local_a0 = local_e8;
          uStack_88 = uStack_d0;
          local_90 = local_d8;
          uStack_78 = uStack_c0;
          uStack_80 = local_c8;
          local_b8 = 0;
          local_70 = 0;
          FUN_1000fdfbc(&local_b0,param_4,param_5);
          FUN_1001e6690(&local_f8);
          _swift_release(lVar9);
          return;
        }
      }
    }
    local_90 = 0x94e7af8fe58d;
  }
  else {
    if (iVar10 != 0) {
      lStack_a8 = 0xd000000000000017;
      local_a0 = 0x800000010088a4b0;
      uStack_98 = 0x1000000000000024;
      local_90 = 0x800000010089ff00;
      goto LAB_1001e6b50;
    }
    local_90 = 0x9ce598ade58d;
  }
  uStack_98 = 0xb8e49dafe89abce4;
  local_a0 = 0x800000010088a4f0;
  lStack_a8 = 0xd000000000000011;
  local_90 = local_90 | 0xafa8000000000000;
LAB_1001e6b50:
  local_70 = 1;
  local_b0 = 1;
  local_f8 = CONCAT71(local_f8._1_7_,1);
  FUN_1000fdfbc(&local_b0,param_4,param_5);
  return;
}

