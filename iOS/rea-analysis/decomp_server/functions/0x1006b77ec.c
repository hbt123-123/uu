// rea decompile_all
// name: FUN_1006b77ec
// address: 0x1006b77ec
// body: available
// range: 0x1006b77ec-0x1006b7907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b77ec(uint *param_1,int param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  
  lVar5 = 500;
  if (param_3 != 0) {
    lVar5 = 0;
  }
  uVar1 = param_4 + param_3 + lVar5;
  uVar6 = param_3;
  if (param_3 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  if (param_4 + param_3 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar12 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar12 = uVar12 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar12 = uVar12 + 1;
  }
  iVar3 = 3;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = iVar3;
  }
  iVar3 = 0x16;
  if (param_2 < 0x17) {
    iVar3 = iVar2;
  }
  puVar11 = (uint *)(&DAT_10084eb60 + (long)iVar3 * 0x1c + uVar12 * 0x284);
  uVar7 = *puVar11;
  uVar10 = puVar11[2];
  uVar14 = *(undefined8 *)(puVar11 + 3);
  uVar8 = puVar11[5];
  uVar9 = puVar11[6];
  uVar1 = 0x201;
  if (1 < param_3 + 1 || param_4 == 0) {
    uVar1 = uVar6;
  }
  uVar13 = 6;
  if (0x3f < uVar1 + param_4) {
    uVar13 = ((uint)LZCOUNT((int)(uVar1 + param_4) + -1) ^ 0x1f) + 1;
  }
  uVar4 = uVar7;
  if (uVar13 <= uVar7) {
    uVar4 = uVar13;
  }
  if ((uVar1 | param_4) >> 0x1e == 0) {
    uVar7 = uVar4;
  }
  if (param_2 < 0) {
    uVar8 = -param_2;
  }
  if (uVar7 + 1 <= uVar10) {
    uVar10 = uVar7 + 1;
  }
  uVar13 = uVar7;
  if (5 < uVar9) {
    uVar13 = uVar7 + 1;
  }
  if (puVar11[1] - (uint)(5 < uVar9) <= uVar7) {
    uVar13 = puVar11[1];
  }
  if (uVar7 < 0xb) {
    uVar7 = 10;
  }
  *param_1 = uVar7;
  param_1[1] = uVar13;
  param_1[2] = uVar10;
  *(undefined8 *)(param_1 + 3) = uVar14;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  return;
}

