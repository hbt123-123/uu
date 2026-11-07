// rea decompile_all
// name: FUN_1006b7620
// address: 0x1006b7620
// body: available
// range: 0x1006b7620-0x1006b77eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b7620(uint *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  
  if ((param_3 == 0xffffffffffffffff) &&
     (param_3 = (ulong)*(uint *)(param_2 + 0x40), (int)*(uint *)(param_2 + 0x40) < 1)) {
    param_3 = 0xffffffffffffffff;
  }
  iVar11 = *(int *)(param_2 + 0x2c);
  lVar6 = 500;
  if (param_3 != 0) {
    lVar6 = 0;
  }
  uVar1 = lVar6 + param_3 + param_4;
  uVar20 = param_3;
  if (param_3 == 0) {
    uVar20 = 0xffffffffffffffff;
  }
  if (param_3 + param_4 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar18 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar18 = uVar18 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar18 = uVar18 + 1;
  }
  iVar3 = 3;
  if (iVar11 != 0) {
    iVar3 = iVar11;
  }
  iVar2 = 0;
  if (-1 < iVar11) {
    iVar2 = iVar3;
  }
  iVar3 = 0x16;
  if (iVar11 < 0x17) {
    iVar3 = iVar2;
  }
  puVar16 = (uint *)(&DAT_10084eb60 + (long)iVar3 * 0x1c + uVar18 * 0x284);
  uVar8 = *puVar16;
  uVar12 = puVar16[2];
  uVar17 = puVar16[3];
  uVar19 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar1 = 0x201;
  if (1 < param_3 + 1 || param_4 == 0) {
    uVar1 = uVar20;
  }
  uVar20 = (uVar1 | param_4) >> 0x1e;
  uVar1 = uVar1 + param_4;
  uVar15 = 6;
  uVar7 = uVar15;
  if (0x3f < uVar1) {
    uVar7 = ((uint)LZCOUNT((int)uVar1 + -1) ^ 0x1f) + 1;
  }
  uVar4 = uVar8;
  if (uVar7 <= uVar8) {
    uVar4 = uVar7;
  }
  if (uVar20 == 0) {
    uVar8 = uVar4;
  }
  uVar7 = uVar8;
  if (uVar8 < 0xb) {
    uVar7 = 10;
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    uVar7 = 0x1b;
  }
  if (*(uint *)(param_2 + 4) != 0) {
    uVar7 = *(uint *)(param_2 + 4);
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar13 = *(uint *)(param_2 + 0x14);
  uVar14 = *(uint *)(param_2 + 0x18);
  uVar21 = *(uint *)(param_2 + 0x1c);
  if (0x3f < uVar1) {
    uVar15 = ((uint)LZCOUNT((int)uVar1 + -1) ^ 0x1f) + 1;
  }
  uVar5 = uVar7;
  if (uVar15 <= uVar7) {
    uVar5 = uVar15;
  }
  if (uVar20 == 0) {
    uVar7 = uVar5;
  }
  if (iVar11 < 0) {
    uVar9 = -iVar11;
  }
  uVar15 = uVar8;
  if (5 < uVar10) {
    uVar15 = uVar8 + 1;
  }
  if (puVar16[1] - (uint)(5 < uVar10) <= uVar8) {
    uVar15 = puVar16[1];
  }
  if (*(uint *)(param_2 + 8) != 0) {
    uVar15 = *(uint *)(param_2 + 8);
  }
  if (uVar8 + 1 <= uVar12) {
    uVar12 = uVar8 + 1;
  }
  if (*(uint *)(param_2 + 0xc) != 0) {
    uVar12 = *(uint *)(param_2 + 0xc);
  }
  if (uVar7 + 1 <= uVar12) {
    uVar12 = uVar7 + 1;
  }
  uVar8 = uVar7;
  if (uVar7 < 0xb) {
    uVar8 = 10;
  }
  uVar21 = uVar21 ^ (uVar21 ^ uVar10) & -(uint)(uVar21 == 0);
  uVar10 = uVar7;
  if (5 < uVar21) {
    uVar10 = uVar7 + 1;
  }
  if (uVar15 - (5 < uVar21) <= uVar7) {
    uVar10 = uVar15;
  }
  *param_1 = uVar8;
  param_1[1] = uVar10;
  param_1[2] = uVar12;
  param_1[5] = uVar14 ^ (uVar14 ^ uVar9) & -(uint)(uVar14 == 0);
  param_1[6] = uVar21;
  param_1[3] = uVar4 ^ (uVar4 ^ uVar17) & -(uint)(uVar4 == 0);
  param_1[4] = uVar13 ^ (uVar13 ^ uVar19) & -(uint)(uVar13 == 0);
  return;
}

