// rea decompile_all
// name: FUN_1006b804c
// address: 0x1006b804c
// body: available
// range: 0x1006b804c-0x1006b8147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b804c(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  ushort *puVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar1 = (char *)param_1[4];
  pcVar2 = (char *)param_1[5];
  uVar7 = param_1[1] - *param_1;
  if ((uVar7 & 0x7fffffff8) != 0) {
    uVar7 = uVar7 >> 3 & 0xffffffff;
    puVar8 = (ushort *)(*param_1 + 6);
    pbVar9 = (byte *)param_1[6];
    pcVar10 = pcVar2;
    pcVar11 = pcVar1;
    do {
      while( true ) {
        uVar4 = puVar8[-1];
        if (uVar4 < 0x40) {
          cVar6 = (&DAT_10084f57c)[(uint)uVar4];
        }
        else {
          cVar6 = '2' - (char)LZCOUNT((uint)uVar4);
        }
        uVar4 = *puVar8;
        *pcVar11 = cVar6;
        *pbVar9 = (byte)LZCOUNT(*(undefined4 *)(puVar8 + -3)) ^ 0x1f;
        uVar5 = (uint)uVar4;
        if (0x7f < uVar5) break;
        puVar8 = puVar8 + 4;
        *pcVar10 = (&DAT_10084f5bc)[uVar5];
        pcVar11 = pcVar11 + 1;
        pbVar9 = pbVar9 + 1;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar10 + 1;
        if (uVar7 == 0) goto LAB_1006b8108;
      }
      puVar8 = puVar8 + 4;
      *pcVar10 = 'C' - (char)LZCOUNT(uVar5);
      pcVar11 = pcVar11 + 1;
      pbVar9 = pbVar9 + 1;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar7 != 0);
  }
LAB_1006b8108:
  iVar3 = (int)param_1[9];
  if (iVar3 == 1) {
    pcVar1[*(uint *)((long)param_1 + 0x4c)] = '#';
    iVar3 = (int)param_1[9];
  }
  if (iVar3 == 2) {
    pcVar2[*(uint *)((long)param_1 + 0x4c)] = '4';
    return;
  }
  return;
}

