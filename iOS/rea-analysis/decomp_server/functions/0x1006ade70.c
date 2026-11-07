// rea decompile_all
// name: FUN_1006ade70
// address: 0x1006ade70
// body: available
// range: 0x1006ade70-0x1006ae18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ae188 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ade70(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [64];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_118 = 0;
  local_120 = 1;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = param_1[1];
  local_100 = *param_1;
  uStack_f0 = param_1[2];
  uStack_e8 = param_1[3];
  FUN_1006acfd8(&local_140,&DAT_1009e7108,param_1,&DAT_1009e7108,4);
  iVar4 = 1;
  uVar5 = 0;
  do {
    uStack_158 = uStack_f8;
    local_160 = local_100;
    uStack_148 = uStack_e8;
    uStack_150 = uStack_f0;
    uStack_178 = uStack_118;
    local_180 = local_120;
    uStack_168 = uStack_108;
    uStack_170 = uStack_110;
    uVar6 = 1;
    uStack_198 = uStack_138;
    local_1a0 = local_140;
    uStack_188 = uStack_128;
    uStack_190 = uStack_130;
    do {
      FUN_1006ae3f4(&local_160,&local_180,&local_1a0,&local_160,&local_180,&local_1a0);
      uVar1 = uVar6 & 0xffff;
      uVar6 = uVar6 + 1;
    } while (uVar1 < ((int)(char)iVar4 & 0xffffU));
    FUN_1006af210(auStack_98,&local_180,&local_120,4);
    FUN_1006ae18c(&local_b8,auStack_98);
    FUN_1006af210(auStack_98,&local_b8,param_1,4);
    FUN_1006ae18c(&local_b8,auStack_98);
    FUN_1006acfd8(&local_b8,&DAT_1009e7108,&local_b8,&DAT_1009e7108,4);
    FUN_1006af210(auStack_98,&local_160,&local_100,4);
    FUN_1006ae18c(&local_d8,auStack_98);
    FUN_1006adc18(&local_d8,&local_d8,&local_b8,&DAT_1009e7108,4);
    FUN_1006af210(auStack_98,&local_160,&local_120,4);
    FUN_1006ae18c(&local_b8,auStack_98);
    FUN_1006af210(auStack_98,&local_100,&local_180,4);
    FUN_1006ae18c(&local_180,auStack_98);
    FUN_1006adc18(&local_180,&local_180,&local_b8,&DAT_1009e7108,4);
    FUN_1006af210(auStack_98,&local_180,&local_180,4);
    FUN_1006ae18c(&local_1a0,auStack_98);
    FUN_1006af210(auStack_98,&local_1a0,param_1,4);
    FUN_1006ae18c(&local_1a0,auStack_98);
    FUN_1006acfd8(&local_1a0,&DAT_1009e7108,&local_1a0,&DAT_1009e7108,4);
    local_100 = local_d8;
    uStack_f8 = uStack_d0;
    uStack_e8 = uStack_c0;
    uStack_f0 = uStack_c8;
    uStack_158 = uStack_d0;
    local_160 = local_d8;
    uStack_148 = uStack_c0;
    uStack_150 = uStack_c8;
    uStack_118 = uStack_178;
    local_120 = local_180;
    uStack_110 = uStack_170;
    uStack_108 = uStack_168;
    local_140 = local_1a0;
    uStack_138 = uStack_198;
    uStack_128 = uStack_188;
    uStack_130 = uStack_190;
    iVar4 = (int)(char)iVar4 << 1;
    bVar3 = uVar5 < 6;
    uVar5 = uVar5 + 1;
  } while (bVar3);
  FUN_1006ae3f4(&local_100,&local_b8,&local_d8,&local_160,&local_180,&local_1a0);
  uVar5 = 1;
  do {
    uStack_158 = uStack_f8;
    local_160 = local_100;
    uStack_148 = uStack_e8;
    uStack_150 = uStack_f0;
    uStack_178 = uStack_b0;
    local_180 = local_b8;
    uStack_168 = uStack_a0;
    uStack_170 = uStack_a8;
    uStack_198 = uStack_d0;
    local_1a0 = local_d8;
    uStack_188 = uStack_c0;
    uStack_190 = uStack_c8;
    FUN_1006ae3f4(&local_100,&local_b8,&local_d8,&local_160,&local_180,&local_1a0);
    bVar7 = (byte)local_100 | (byte)uStack_f0;
    bVar8 = local_100._1_1_ | (byte)((ulong)uStack_f0 >> 8);
    bVar9 = local_100._2_1_ | (byte)((ulong)uStack_f0 >> 0x10);
    bVar10 = local_100._3_1_ | (byte)((ulong)uStack_f0 >> 0x18);
    bVar11 = local_100._4_1_ | (byte)((ulong)uStack_f0 >> 0x20);
    bVar12 = local_100._5_1_ | (byte)((ulong)uStack_f0 >> 0x28);
    bVar13 = local_100._6_1_ | (byte)((ulong)uStack_f0 >> 0x30);
    bVar14 = local_100._7_1_ | (byte)((ulong)uStack_f0 >> 0x38);
    bVar15 = (byte)uStack_f8 | (byte)uStack_e8;
    bVar16 = uStack_f8._1_1_ | (byte)((ulong)uStack_e8 >> 8);
    bVar17 = uStack_f8._2_1_ | (byte)((ulong)uStack_e8 >> 0x10);
    bVar18 = uStack_f8._3_1_ | (byte)((ulong)uStack_e8 >> 0x18);
    bVar19 = uStack_f8._4_1_ | (byte)((ulong)uStack_e8 >> 0x20);
    bVar20 = uStack_f8._5_1_ | (byte)((ulong)uStack_e8 >> 0x28);
    bVar21 = uStack_f8._6_1_ | (byte)((ulong)uStack_e8 >> 0x30);
    bVar22 = uStack_f8._7_1_ | (byte)((ulong)uStack_e8 >> 0x38);
    auVar23[1] = bVar8;
    auVar23[0] = bVar7;
    auVar23[2] = bVar9;
    auVar23[3] = bVar10;
    auVar23[4] = bVar11;
    auVar23[5] = bVar12;
    auVar23[6] = bVar13;
    auVar23[7] = bVar14;
    auVar23[8] = bVar15;
    auVar23[9] = bVar16;
    auVar23[10] = bVar17;
    auVar23[0xb] = bVar18;
    auVar23[0xc] = bVar19;
    auVar23[0xd] = bVar20;
    auVar23[0xe] = bVar21;
    auVar23[0xf] = bVar22;
    auVar2[1] = bVar8;
    auVar2[0] = bVar7;
    auVar2[2] = bVar9;
    auVar2[3] = bVar10;
    auVar2[4] = bVar11;
    auVar2[5] = bVar12;
    auVar2[6] = bVar13;
    auVar2[7] = bVar14;
    auVar2[8] = bVar15;
    auVar2[9] = bVar16;
    auVar2[10] = bVar17;
    auVar2[0xb] = bVar18;
    auVar2[0xc] = bVar19;
    auVar2[0xd] = bVar20;
    auVar2[0xe] = bVar21;
    auVar2[0xf] = bVar22;
    auVar23 = NEON_ext(auVar23,auVar2,8,1);
    if (CONCAT17(bVar14 | auVar23[7],
                 CONCAT16(bVar13 | auVar23[6],
                          CONCAT15(bVar12 | auVar23[5],
                                   CONCAT14(bVar11 | auVar23[4],
                                            CONCAT13(bVar10 | auVar23[3],
                                                     CONCAT12(bVar9 | auVar23[2],
                                                              CONCAT11(bVar8 | auVar23[1],
                                                                       bVar7 | auVar23[0]))))))) ==
        0) break;
    bVar3 = uVar5 < 0x5f;
    uVar5 = uVar5 + 1;
  } while (bVar3);
  FUN_1006ac870(&local_d8,&local_180,&DAT_1009e7108,4);
  FUN_1006af210(auStack_98,&local_160,&local_d8,4);
  FUN_1006ae18c(param_1,auStack_98);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

