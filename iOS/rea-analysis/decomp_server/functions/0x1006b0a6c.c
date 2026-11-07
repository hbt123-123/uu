// rea decompile_all
// name: FUN_1006b0a6c
// address: 0x1006b0a6c
// body: available
// range: 0x1006b0a6c-0x1006b0ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1006b0a6c(byte *param_1,ulong param_2,int param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined1 auVar9 [12];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar10 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar8 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar3 = (int)param_2;
  pbVar1 = param_1 + param_2;
  if (((ulong)param_1 & 3) == 0) {
    if (param_2 < 0x10) {
      uVar6 = param_3 + 0x165667b1 + iVar3;
      pbVar5 = param_1 + 4;
      pbVar4 = param_1;
    }
    else {
      auVar10._0_4_ = param_3 + 0x24234428;
      auVar10._4_4_ = param_3 + -0x7a143589;
      auVar10._8_4_ = param_3;
      auVar10._12_4_ = param_3 + 0x61c8864f;
      pbVar4 = param_1;
      do {
        pbVar5 = pbVar4;
        pbVar4 = pbVar5 + 0x10;
        uVar6 = auVar10._0_4_ + (int)*(undefined8 *)pbVar5 * -0x7a143589;
        uVar13 = auVar10._4_4_ + (int)((ulong)*(undefined8 *)pbVar5 >> 0x20) * -0x7a143589;
        uVar14 = auVar10._8_4_ + (int)*(undefined8 *)(pbVar5 + 8) * -0x7a143589;
        uVar15 = auVar10._12_4_ + (int)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20) * -0x7a143589;
        auVar10._0_4_ = (uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f;
        auVar10._4_4_ = (uVar13 * 0x2000 + (uVar13 >> 0x13)) * -0x61c8864f;
        auVar10._8_4_ = (uVar14 * 0x2000 + (uVar14 >> 0x13)) * -0x61c8864f;
        auVar10._12_4_ = (uVar15 * 0x2000 + (uVar15 >> 0x13)) * -0x61c8864f;
      } while (pbVar4 <= pbVar1 + -0x10);
      auVar17 = NEON_ushl(auVar10,_DAT_10084e850,4);
      auVar16._12_4_ = 0x12;
      auVar16._0_12_ = _DAT_10084e860;
      auVar10 = NEON_ushl(auVar10,auVar16,4);
      iVar7 = CONCAT13(auVar10[3] | auVar17[3],
                       CONCAT12(auVar10[2] | auVar17[2],
                                CONCAT11(auVar10[1] | auVar17[1],auVar10[0] | auVar17[0])));
      auVar9._0_8_ = CONCAT17(auVar10[7] | auVar17[7],
                              CONCAT16(auVar10[6] | auVar17[6],
                                       CONCAT15(auVar10[5] | auVar17[5],
                                                CONCAT14(auVar10[4] | auVar17[4],iVar7))));
      auVar9[8] = auVar10[8] | auVar17[8];
      auVar9[9] = auVar10[9] | auVar17[9];
      auVar9[10] = auVar10[10] | auVar17[10];
      auVar9[0xb] = auVar10[0xb] | auVar17[0xb];
      auVar12[0xc] = auVar10[0xc] | auVar17[0xc];
      auVar12._0_12_ = auVar9;
      auVar12[0xd] = auVar10[0xd] | auVar17[0xd];
      auVar12[0xe] = auVar10[0xe] | auVar17[0xe];
      auVar12[0xf] = auVar10[0xf] | auVar17[0xf];
      uVar6 = iVar7 + (int)((ulong)auVar9._0_8_ >> 0x20) + auVar9._8_4_ + auVar12._12_4_ + iVar3;
      pbVar5 = pbVar5 + 0x14;
    }
    while (pbVar5 <= pbVar1) {
      uVar6 = uVar6 + *(int *)pbVar4 * -0x3d4d51c3;
      uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) * 0x27d4eb2f;
      pbVar5 = pbVar4 + 8;
      pbVar4 = pbVar4 + 4;
    }
    if (pbVar4 < pbVar1) {
      param_1 = param_1 + (param_2 - (long)pbVar4);
      do {
        uVar6 = uVar6 + (uint)*pbVar4 * 0x165667b1;
        uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f;
        param_1 = param_1 + -1;
        pbVar4 = pbVar4 + 1;
      } while (param_1 != (byte *)0x0);
    }
  }
  else {
    if (param_2 < 0x10) {
      uVar6 = param_3 + 0x165667b1 + iVar3;
      pbVar5 = param_1 + 4;
      pbVar4 = param_1;
    }
    else {
      auVar17._0_4_ = param_3 + 0x24234428;
      auVar17._4_4_ = param_3 + -0x7a143589;
      auVar17._8_4_ = param_3;
      auVar17._12_4_ = param_3 + 0x61c8864f;
      pbVar4 = param_1;
      do {
        pbVar5 = pbVar4;
        pbVar4 = pbVar5 + 0x10;
        uVar6 = auVar17._0_4_ + (int)*(undefined8 *)pbVar5 * -0x7a143589;
        uVar13 = auVar17._4_4_ + (int)((ulong)*(undefined8 *)pbVar5 >> 0x20) * -0x7a143589;
        uVar14 = auVar17._8_4_ + (int)*(undefined8 *)(pbVar5 + 8) * -0x7a143589;
        uVar15 = auVar17._12_4_ + (int)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20) * -0x7a143589;
        auVar17._0_4_ = (uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f;
        auVar17._4_4_ = (uVar13 * 0x2000 + (uVar13 >> 0x13)) * -0x61c8864f;
        auVar17._8_4_ = (uVar14 * 0x2000 + (uVar14 >> 0x13)) * -0x61c8864f;
        auVar17._12_4_ = (uVar15 * 0x2000 + (uVar15 >> 0x13)) * -0x61c8864f;
      } while (pbVar4 <= pbVar1 + -0x10);
      auVar16 = NEON_ushl(auVar17,_DAT_10084e850,4);
      auVar2._12_4_ = 0x12;
      auVar2._0_12_ = _DAT_10084e860;
      auVar10 = NEON_ushl(auVar17,auVar2,4);
      iVar7 = CONCAT13(auVar10[3] | auVar16[3],
                       CONCAT12(auVar10[2] | auVar16[2],
                                CONCAT11(auVar10[1] | auVar16[1],auVar10[0] | auVar16[0])));
      auVar8._0_8_ = CONCAT17(auVar10[7] | auVar16[7],
                              CONCAT16(auVar10[6] | auVar16[6],
                                       CONCAT15(auVar10[5] | auVar16[5],
                                                CONCAT14(auVar10[4] | auVar16[4],iVar7))));
      auVar8[8] = auVar10[8] | auVar16[8];
      auVar8[9] = auVar10[9] | auVar16[9];
      auVar8[10] = auVar10[10] | auVar16[10];
      auVar8[0xb] = auVar10[0xb] | auVar16[0xb];
      auVar11[0xc] = auVar10[0xc] | auVar16[0xc];
      auVar11._0_12_ = auVar8;
      auVar11[0xd] = auVar10[0xd] | auVar16[0xd];
      auVar11[0xe] = auVar10[0xe] | auVar16[0xe];
      auVar11[0xf] = auVar10[0xf] | auVar16[0xf];
      uVar6 = iVar7 + (int)((ulong)auVar8._0_8_ >> 0x20) + auVar8._8_4_ + auVar11._12_4_ + iVar3;
      pbVar5 = pbVar5 + 0x14;
    }
    while (pbVar5 <= pbVar1) {
      uVar6 = uVar6 + *(int *)pbVar4 * -0x3d4d51c3;
      uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) * 0x27d4eb2f;
      pbVar5 = pbVar4 + 8;
      pbVar4 = pbVar4 + 4;
    }
    if (pbVar4 < pbVar1) {
      param_1 = param_1 + (param_2 - (long)pbVar4);
      do {
        uVar6 = uVar6 + (uint)*pbVar4 * 0x165667b1;
        uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f;
        param_1 = param_1 + -1;
        pbVar4 = pbVar4 + 1;
      } while (param_1 != (byte *)0x0);
    }
  }
  uVar6 = (uVar6 ^ uVar6 >> 0xf) * -0x7a143589;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51c3;
  return uVar6 ^ uVar6 >> 0x10;
}

