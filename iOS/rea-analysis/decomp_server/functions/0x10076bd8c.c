// rea decompile_all
// name: FUN_10076bd8c
// address: 0x10076bd8c
// body: available
// range: 0x10076bd8c-0x10076bebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076bd8c(long param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  
  lVar4 = 0;
  puVar3 = (undefined1 *)(param_2 + 4);
  do {
    puVar2 = puVar3;
    puVar2[-4] = (&DAT_1008501b0)[*(byte *)(param_1 + lVar4) >> 4];
    puVar2[-3] = (&DAT_1008501b0)[(ulong)*(byte *)(param_1 + lVar4) & 0xf];
    lVar4 = lVar4 + 1;
    puVar3 = puVar2 + 2;
  } while ((int)lVar4 != 4);
  puVar2[-2] = 0x2d;
  pbVar6 = (byte *)(param_1 + lVar4);
  bVar1 = true;
  do {
    bVar7 = bVar1;
    puVar2 = puVar3;
    puVar2[-3] = (&DAT_1008501b0)[*pbVar6 >> 4];
    pbVar5 = pbVar6 + 1;
    puVar2[-2] = (&DAT_1008501b0)[(ulong)*pbVar6 & 0xf];
    puVar3 = puVar2 + 2;
    pbVar6 = pbVar5;
    bVar1 = false;
  } while (bVar7);
  puVar2[-1] = 0x2d;
  bVar1 = true;
  do {
    bVar7 = bVar1;
    puVar2 = puVar3;
    puVar2[-2] = (&DAT_1008501b0)[*pbVar5 >> 4];
    pbVar6 = pbVar5 + 1;
    puVar2[-1] = (&DAT_1008501b0)[(ulong)*pbVar5 & 0xf];
    puVar3 = puVar2 + 2;
    pbVar5 = pbVar6;
    bVar1 = false;
  } while (bVar7);
  *puVar2 = 0x2d;
  bVar1 = true;
  do {
    bVar7 = bVar1;
    puVar2 = puVar3;
    puVar2[-1] = (&DAT_1008501b0)[*pbVar6 >> 4];
    pbVar5 = pbVar6 + 1;
    puVar3 = puVar2 + 2;
    *puVar2 = (&DAT_1008501b0)[(ulong)*pbVar6 & 0xf];
    pbVar6 = pbVar5;
    bVar1 = false;
  } while (bVar7);
  puVar2[1] = 0x2d;
  iVar8 = 6;
  do {
    *puVar3 = (&DAT_1008501b0)[*pbVar5 >> 4];
    puVar3[1] = (&DAT_1008501b0)[(ulong)*pbVar5 & 0xf];
    puVar3 = puVar3 + 2;
    iVar8 = iVar8 + -1;
    pbVar5 = pbVar5 + 1;
  } while (iVar8 != 0);
  *puVar3 = 0;
  return;
}

