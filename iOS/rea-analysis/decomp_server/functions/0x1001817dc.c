// rea decompile_all
// name: FUN_1001817dc
// address: 0x1001817dc
// body: available
// range: 0x1001817dc-0x100181bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001817dc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long alStack_1a0 [7];
  ulong local_168;
  ulong local_160;
  ulong local_158;
  undefined8 local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_118;
  ulong local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined3 uStack_ec;
  byte local_e8;
  undefined1 auStack_e0 [9];
  undefined4 local_d7;
  undefined3 uStack_d3;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  lVar6 = 0;
  alStack_1a0[5] = param_4;
  alStack_1a0[6] = param_5;
  local_138 = param_1;
  FUN_1000e984c();
  alStack_1a0[3] = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(alStack_1a0[3] + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)alStack_1a0 + lVar6);
  FUN_1004a0dc8(auStack_e0);
  local_f0 = local_d7;
  uStack_ec = uStack_d3;
  uStack_f8 = uStack_a0;
  local_100 = local_a8;
  local_150 = *(undefined8 *)(param_2 + 0x38);
  local_158 = *(ulong *)(param_2 + 0x40);
  local_140 = uStack_b0;
  local_148 = local_b8;
  if (local_158 >> 0x3c < 0xf) {
    local_160 = *(ulong *)(param_2 + 0x30) & 0xffffffff00000000;
    local_168 = *(ulong *)(param_2 + 0x30) & 0xffffffff;
  }
  else {
    local_168 = 0;
    local_160 = 0;
    local_150 = 0;
    local_158 = 0xc000000000000000;
  }
  local_70[0] = local_d0;
  thunk_FUN_100040b80();
  switchD_10004048c::caseD_6d(local_98,uStack_90,local_88);
  bVar8 = (byte)uStack_90;
  FUN_10017cb14();
  local_e8 = bVar8 & 1;
  lVar7 = 0;
  FUN_1000e49dc();
  lVar9 = *(long *)(param_3 + *(int *)(lVar7 + 0x20));
  uVar10 = *(ulong *)(lVar9 + 0x10);
  alStack_1a0[4] = param_3;
  if (uVar10 == 0) {
    FUN_100040bb4(local_70,&DAT_100a7b958,&DAT_10080fd88);
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
    alStack_1a0[1] = lVar7;
    alStack_1a0[2] = param_6;
    FUN_10006ff64(0,uVar10,0);
    uVar13 = 0;
    local_118 = lVar9 + ((ulong)*(byte *)(alStack_1a0[3] + 0x50) + 0x20 &
                        ((ulong)*(byte *)(alStack_1a0[3] + 0x50) ^ 0xffffffffffffffff));
    uStack_128 = 0xc000000000000000;
    local_130 = 0;
    lVar7 = alStack_1a0[3];
    local_110 = uVar10;
    lStack_108 = lVar9;
    do {
      puVar11 = local_80;
      if (*(ulong *)(lStack_108 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100181bc4);
        (*pcVar5)();
      }
      FUN_100181bc4(local_118 + *(long *)(lVar7 + 0x48) * uVar13,puVar12);
      uVar1 = *puVar12;
      uVar3 = *(undefined8 *)((long)alStack_1a0 + lVar6 + 8);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uVar2 = *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x10);
      uVar4 = *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x18);
      FUN_100181c08(puVar12);
      uVar10 = *(ulong *)(puVar11 + 0x10);
      local_80 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar10) {
        FUN_10006ff64(1 < *(ulong *)(puVar11 + 0x18),uVar10 + 1,1);
        lVar7 = alStack_1a0[3];
      }
      puVar11 = local_80;
      uVar13 = uVar13 + 1;
      *(ulong *)(local_80 + 0x10) = uVar10 + 1;
      *(undefined8 *)(local_80 + uVar10 * 0x30 + 0x20) = uVar1;
      *(undefined8 *)(local_80 + uVar10 * 0x30 + 0x28) = uVar3;
      *(undefined8 *)(local_80 + uVar10 * 0x30 + 0x30) = uVar2;
      *(undefined8 *)(local_80 + uVar10 * 0x30 + 0x38) = uVar4;
      *(undefined8 *)(local_80 + uVar10 * 0x30 + 0x48) = uStack_128;
      *(undefined8 *)(local_80 + uVar10 * 0x30 + 0x40) = local_130;
    } while (local_110 != uVar13);
    FUN_100040bb4(local_70,&DAT_100a7b958,&DAT_10080fd88);
    lVar7 = alStack_1a0[1];
    param_6 = alStack_1a0[2];
  }
  uStack_78 = uStack_c0;
  local_80 = local_c8;
  puVar12 = (undefined8 *)(alStack_1a0[4] + *(int *)(lVar7 + 0x1c));
  uVar1 = *puVar12;
  uVar2 = puVar12[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1000a9ec8(&local_80);
  lVar7 = alStack_1a0[6];
  lVar6 = alStack_1a0[5];
  if ((ulong)alStack_1a0[6] >> 0x3c < 0xf) {
    FUN_100008184(alStack_1a0[5],alStack_1a0[6]);
    FUN_100006cdc(local_148,local_140);
    local_140 = lVar7;
    local_148 = lVar6;
  }
  *local_138 = param_6;
  *(byte *)(local_138 + 1) = local_e8;
  *(undefined4 *)((long)local_138 + 9) = local_f0;
  *(uint *)((long)local_138 + 0xc) = CONCAT31(uStack_ec,local_f0._3_1_);
  local_138[2] = puVar11;
  local_138[3] = uVar1;
  local_138[4] = uVar2;
  local_138[5] = local_148;
  local_138[6] = local_140;
  local_138[8] = uStack_f8;
  local_138[7] = local_100;
  local_138[9] = local_160 | local_168;
  local_138[10] = local_150;
  local_138[0xb] = local_158;
  return;
}

