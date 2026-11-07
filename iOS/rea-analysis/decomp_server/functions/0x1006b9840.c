// rea decompile_all
// name: FUN_1006b9840
// address: 0x1006b9840
// body: available
// range: 0x1006b9840-0x1006b993f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b9840(ulong param_1,int param_2)

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
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar1 = param_1 + 500;
  if (param_1 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar6 = 0x201;
  if (param_1 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  uVar11 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar11 = uVar11 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar11 = uVar11 + 1;
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
  puVar10 = (uint *)(&DAT_10084eb60 + (long)iVar3 * 0x1c + uVar11 * 0x284);
  uVar7 = *puVar10;
  uVar8 = puVar10[2];
  uVar9 = puVar10[6];
  uVar12 = 6;
  if (0x3f < uVar6 + param_1) {
    uVar12 = ((uint)LZCOUNT((int)(uVar6 + param_1) + -1) ^ 0x1f) + 1;
  }
  uVar4 = uVar7;
  if (uVar12 <= uVar7) {
    uVar4 = uVar12;
  }
  if ((uVar6 | param_1) >> 0x1e == 0) {
    uVar7 = uVar4;
  }
  if (uVar7 + 1 <= uVar8) {
    uVar8 = uVar7 + 1;
  }
  uVar12 = uVar7;
  if (5 < uVar9) {
    uVar12 = uVar7 + 1;
  }
  if (puVar10[1] - (uint)(5 < uVar9) <= uVar7) {
    uVar12 = puVar10[1];
  }
  lVar5 = 0;
  if (uVar9 != 1) {
    lVar5 = 4L << ((ulong)uVar12 & 0x3f);
  }
  return (param_1 + 7 & 0xfffffffffffffff8) + (4L << ((ulong)uVar8 & 0x3f)) + 0x2b40 + lVar5;
}

