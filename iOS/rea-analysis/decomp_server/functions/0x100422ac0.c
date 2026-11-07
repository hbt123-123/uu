// rea decompile_all
// name: FUN_100422ac0
// address: 0x100422ac0
// body: available
// range: 0x100422ac0-0x100422dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100422cd4) */

void FUN_100422ac0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  bool bVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x21;
  code *pcVar15;
  long local_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  ulong local_160;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  byte bStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong local_c0;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  
  local_70 = 0;
  lStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uVar14 = param_1[8];
  bVar9 = *(byte *)(param_1 + 9);
  bVar10 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  plVar11 = param_1;
  if ((!bVar10 || bVar9 != 0xff) && ((bVar9 & 1) == 0 && ((uint)(uVar14 >> 0x3c) & 3) == 0)) {
    lVar1 = *param_1;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar6 = param_1[3];
    lVar3 = param_1[4];
    lVar7 = param_1[5];
    lVar4 = param_1[6];
    lVar8 = param_1[7];
    local_c0 = 0;
    lStack_d8 = 0;
    local_e0 = 0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    lStack_f8 = 0;
    local_100 = 0;
    lStack_e8 = 0;
    lStack_f0 = 0;
    uStack_118 = (undefined1)lVar8;
    local_117 = (undefined7)((ulong)lVar8 >> 8);
    uStack_110 = (undefined1)uVar14;
    uStack_10f = (undefined7)(uVar14 >> 8);
    local_150 = lVar1;
    lStack_148 = lVar5;
    local_140 = lVar2;
    lStack_138 = lVar6;
    local_130 = lVar3;
    lStack_128 = lVar7;
    local_120 = lVar4;
    bStack_108 = bVar9;
    FUN_10042c868(&local_150,&local_1a0);
    plVar11 = &local_100;
    FUN_100040bb4(plVar11,&DAT_100a9f360,&DAT_100827720);
    local_b0 = lVar1;
    lStack_a8 = lVar5;
    local_a0 = lVar2;
    lStack_98 = lVar6;
    local_90 = lVar3;
    lStack_88 = lVar7;
    local_80 = lVar4;
    lStack_78 = lVar8;
    local_70 = uVar14 & 0xcfffffffffffffff;
  }
  pcVar15 = *(code **)(param_4 + 0x198);
  FUN_10042ecf0();
  (*pcVar15)(&local_b0,&DAT_1009be6a8,plVar11,param_3,param_4);
  uVar14 = local_70;
  lVar8 = lStack_78;
  lVar7 = local_80;
  lVar6 = lStack_88;
  lVar5 = local_90;
  lVar4 = lStack_98;
  lVar3 = local_a0;
  lVar2 = lStack_a8;
  lVar1 = local_b0;
  uStack_118 = (undefined1)lStack_78;
  local_117 = (undefined7)((ulong)lStack_78 >> 8);
  uStack_110 = (undefined1)local_70;
  uStack_10f = (undefined7)(local_70 >> 8);
  if (unaff_x21 == 0) {
    lStack_198 = lStack_a8;
    local_1a0 = local_b0;
    lStack_188 = lStack_98;
    local_190 = local_a0;
    lStack_178 = lStack_88;
    local_180 = local_90;
    lStack_168 = lStack_78;
    local_170 = local_80;
    local_160 = local_70;
    if (local_b0 != 0) {
      if (bVar10 && bVar9 == 0xff) {
        lStack_128 = lStack_88;
        local_130 = local_90;
        local_120 = local_80;
        lStack_148 = lStack_a8;
        local_150 = local_b0;
        lStack_138 = lStack_98;
        local_140 = local_a0;
        FUN_10042c89c(&local_150,&local_100);
      }
      else {
        pcVar15 = *(code **)(param_4 + 8);
        lStack_128 = lStack_88;
        local_130 = local_90;
        local_120 = local_80;
        lStack_148 = lStack_a8;
        local_150 = local_b0;
        lStack_138 = lStack_98;
        local_140 = local_a0;
        FUN_10042c89c(&local_150,&local_100);
        (*pcVar15)(param_3,param_4);
      }
      lStack_d8 = lStack_88;
      local_e0 = local_90;
      lStack_c8 = lStack_78;
      lStack_d0 = local_80;
      local_c0 = local_70;
      lStack_f8 = lStack_a8;
      local_100 = local_b0;
      lStack_e8 = lStack_98;
      lStack_f0 = local_a0;
      FUN_100040bb4(&local_100,&DAT_100a9f360,&DAT_100827720);
      lStack_128 = param_1[5];
      local_130 = param_1[4];
      local_120 = param_1[6];
      uStack_118 = (undefined1)param_1[7];
      uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
      bStack_108 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
      local_117 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
      uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
      lStack_148 = param_1[1];
      local_150 = *param_1;
      lStack_138 = param_1[3];
      local_140 = param_1[2];
      param_1[1] = lVar2;
      *param_1 = lVar1;
      param_1[3] = lVar4;
      param_1[2] = lVar3;
      param_1[5] = lVar6;
      param_1[4] = lVar5;
      param_1[7] = lVar8;
      param_1[6] = lVar7;
      param_1[8] = uVar14 & 0xcfffffffffffffff;
      *(undefined1 *)(param_1 + 9) = 0;
      puVar12 = &DAT_100a9eea0;
      puVar13 = &DAT_100825d78;
      goto LAB_100422c2c;
    }
  }
  lStack_128 = lStack_88;
  local_130 = local_90;
  local_120 = local_80;
  lStack_148 = lStack_a8;
  local_150 = local_b0;
  lStack_138 = lStack_98;
  local_140 = local_a0;
  puVar12 = &DAT_100a9f360;
  puVar13 = &DAT_100827720;
LAB_100422c2c:
  FUN_100040bb4(&local_150,puVar12,puVar13);
  return;
}

