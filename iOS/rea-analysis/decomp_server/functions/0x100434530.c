// rea decompile_all
// name: FUN_100434530
// address: 0x100434530
// body: available
// range: 0x100434530-0x100434763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100434530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [152];
  byte local_1f0;
  byte local_1e8;
  byte local_1e0;
  byte local_1d8;
  byte local_1d0;
  undefined1 auStack_1c8 [24];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  _swift_beginAccess(param_4 + 0x20,auStack_1c8,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x88);
  local_b0 = *(undefined8 *)(param_4 + 0x80);
  uStack_138 = *(undefined8 *)(param_4 + 0x98);
  uStack_140 = *(undefined8 *)(param_4 + 0x90);
  uStack_b8 = *(undefined8 *)(param_4 + 0x78);
  uStack_c0 = *(undefined8 *)(param_4 + 0x70);
  uStack_148 = *(undefined8 *)(param_4 + 0x88);
  local_150 = *(undefined8 *)(param_4 + 0x80);
  uStack_98 = *(undefined8 *)(param_4 + 0x98);
  uStack_a0 = *(undefined8 *)(param_4 + 0x90);
  uStack_128 = *(undefined8 *)(param_4 + 0xa8);
  local_130 = *(undefined8 *)(param_4 + 0xa0);
  uStack_e8 = *(undefined8 *)(param_4 + 0x48);
  local_f0 = *(undefined8 *)(param_4 + 0x40);
  local_178 = *(undefined8 *)(param_4 + 0x58);
  local_180 = *(undefined8 *)(param_4 + 0x50);
  uStack_f8 = *(undefined8 *)(param_4 + 0x38);
  uStack_100 = *(undefined8 *)(param_4 + 0x30);
  uStack_188 = *(undefined8 *)(param_4 + 0x48);
  local_190 = *(undefined8 *)(param_4 + 0x40);
  uStack_d8 = *(undefined8 *)(param_4 + 0x58);
  uStack_e0 = *(undefined8 *)(param_4 + 0x50);
  uStack_168 = *(undefined8 *)(param_4 + 0x68);
  local_170 = *(undefined8 *)(param_4 + 0x60);
  uStack_c8 = *(undefined8 *)(param_4 + 0x68);
  local_d0 = *(undefined8 *)(param_4 + 0x60);
  uStack_158 = *(undefined8 *)(param_4 + 0x78);
  local_160 = *(undefined8 *)(param_4 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_4 + 0x28);
  local_1b0 = *(undefined8 *)(param_4 + 0x20);
  local_198 = *(undefined8 *)(param_4 + 0x38);
  local_1a0 = *(undefined8 *)(param_4 + 0x30);
  uStack_108 = *(undefined8 *)(param_4 + 0x28);
  local_110 = *(undefined8 *)(param_4 + 0x20);
  uStack_88 = *(undefined8 *)(param_4 + 0xa8);
  local_90 = *(undefined8 *)(param_4 + 0xa0);
  local_120 = *(undefined8 *)(param_4 + 0xb0);
  local_80 = *(undefined8 *)(param_4 + 0xb0);
  iVar1 = (int)&local_110;
  FUN_100438dbc();
  if (iVar1 == 1) {
    uStack_298 = 0xf000000000000000;
    local_2a0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0xf000000000000000;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0xc000000000000000;
    uStack_2c0 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = 0;
    bVar2 = 0;
    local_1e8 = 1;
    local_1e0 = 1;
    bVar3 = 0;
    local_1d8 = 1;
    local_1d0 = 1;
    local_1f0 = 1;
  }
  else {
    uStack_2c8 = uStack_140;
    local_2d0 = uStack_148;
    uStack_2b8 = local_150;
    uStack_2c0 = uStack_158;
    uStack_2a8 = local_130;
    local_2b0 = uStack_138;
    uStack_298 = local_120;
    local_2a0 = uStack_128;
    uVar4 = local_1b0;
    uVar5 = local_1a0;
    uVar6 = local_190;
    uVar7 = local_180;
    uVar9 = uStack_168;
    uVar8 = local_178._4_4_;
    uVar10 = local_160._4_4_;
    bVar2 = (byte)local_170;
    local_1e8 = (byte)local_178;
    local_1e0 = (byte)uStack_188;
    bVar3 = local_198._1_1_;
    local_1d8 = (byte)local_198;
    local_1d0 = (byte)uStack_1a8;
    local_1f0 = (byte)local_160;
  }
  local_1d0 = local_1d0 & 1;
  local_1d8 = local_1d8 & 1;
  local_1e0 = local_1e0 & 1;
  local_1e8 = local_1e8 & 1;
  local_1f0 = local_1f0 & 1;
  FUN_10007f314(&local_1b0,auStack_288,&DAT_100a9f378,&DAT_100827760);
  *param_1 = uVar4;
  *(byte *)(param_1 + 1) = local_1d0;
  param_1[2] = uVar5;
  *(byte *)(param_1 + 3) = local_1d8;
  *(byte *)((long)param_1 + 0x19) = bVar3 & 1;
  param_1[4] = uVar6;
  *(byte *)(param_1 + 5) = local_1e0;
  param_1[6] = uVar7;
  *(byte *)(param_1 + 7) = local_1e8;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar8;
  *(byte *)(param_1 + 8) = bVar2 & 1;
  param_1[9] = uVar9;
  *(byte *)(param_1 + 10) = local_1f0;
  *(undefined4 *)((long)param_1 + 0x54) = uVar10;
  param_1[0xe] = uStack_2c8;
  param_1[0xd] = local_2d0;
  param_1[0xc] = uStack_2b8;
  param_1[0xb] = uStack_2c0;
  param_1[0x12] = uStack_298;
  param_1[0x11] = local_2a0;
  param_1[0x10] = uStack_2a8;
  param_1[0xf] = local_2b0;
  return;
}

