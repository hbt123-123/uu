// rea decompile_all
// name: FUN_1006b1310
// address: 0x1006b1310
// body: available
// range: 0x1006b1310-0x1006b1403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1006b1310(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  
  pbVar6 = (byte *)(param_1 + 6);
  uVar3 = param_1[10];
  if (param_1[1] == 0) {
    iVar8 = param_1[4] + 0x165667b1;
  }
  else {
    auVar12 = NEON_ushl(*(undefined1 (*) [16])(param_1 + 2),_DAT_10084e850,4);
    auVar10 = NEON_ushl(*(undefined1 (*) [16])(param_1 + 2),_DAT_10084e860,4);
    iVar8 = CONCAT13(auVar10[3] | auVar12[3],
                     CONCAT12(auVar10[2] | auVar12[2],
                              CONCAT11(auVar10[1] | auVar12[1],auVar10[0] | auVar12[0])));
    auVar9._0_8_ = CONCAT17(auVar10[7] | auVar12[7],
                            CONCAT16(auVar10[6] | auVar12[6],
                                     CONCAT15(auVar10[5] | auVar12[5],
                                              CONCAT14(auVar10[4] | auVar12[4],iVar8))));
    auVar9[8] = auVar10[8] | auVar12[8];
    auVar9[9] = auVar10[9] | auVar12[9];
    auVar9[10] = auVar10[10] | auVar12[10];
    auVar9[0xb] = auVar10[0xb] | auVar12[0xb];
    auVar11[0xc] = auVar10[0xc] | auVar12[0xc];
    auVar11._0_12_ = auVar9;
    auVar11[0xd] = auVar10[0xd] | auVar12[0xd];
    auVar11[0xe] = auVar10[0xe] | auVar12[0xe];
    auVar11[0xf] = auVar10[0xf] | auVar12[0xf];
    iVar8 = iVar8 + (int)((ulong)auVar9._0_8_ >> 0x20) + auVar9._8_4_ + auVar11._12_4_;
  }
  pbVar2 = pbVar6 + uVar3;
  uVar5 = *param_1 + iVar8;
  if (3 < uVar3) {
    do {
      pbVar1 = pbVar6 + 4;
      pbVar7 = pbVar6 + 8;
      uVar5 = uVar5 + *(int *)pbVar6 * -0x3d4d51c3;
      uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
      pbVar6 = pbVar1;
    } while (pbVar7 <= pbVar2);
  }
  if (pbVar6 < pbVar2) {
    lVar4 = (long)param_1 + ((ulong)uVar3 - (long)pbVar6) + 0x18;
    do {
      uVar5 = uVar5 + (uint)*pbVar6 * 0x165667b1;
      uVar5 = (uVar5 >> 0x15 | uVar5 * 0x800) * -0x61c8864f;
      lVar4 = lVar4 + -1;
      pbVar6 = pbVar6 + 1;
    } while (lVar4 != 0);
  }
  uVar3 = (uVar5 ^ uVar5 >> 0xf) * -0x7a143589;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51c3;
  return uVar3 ^ uVar3 >> 0x10;
}

