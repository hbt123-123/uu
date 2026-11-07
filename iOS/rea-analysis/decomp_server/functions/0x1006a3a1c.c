// rea decompile_all
// name: FUN_1006a3a1c
// address: 0x1006a3a1c
// body: available
// range: 0x1006a3a1c-0x1006a3b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a3a1c(byte *param_1,int param_2,char *param_3)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar6;
  long lVar7;
  byte *pbVar5;
  
  if (param_2 < 1) {
    *param_3 = '\n';
  }
  else {
    pbVar5 = param_1;
    do {
      pbVar4 = pbVar5 + 1;
      bVar3 = *pbVar5;
      *param_3 = "0123456789abcdef"[bVar3 >> 4];
      param_3[1] = "0123456789abcdef"[(ulong)bVar3 & 0xf];
      param_3[2] = ' ';
      param_3 = param_3 + 3;
      pbVar5 = pbVar4;
    } while ((long)pbVar4 - (long)param_1 < (long)param_2);
    *param_3 = '\n';
    puVar1 = PTR___DefaultRuneLocale_100995488;
    if (0 < param_2) {
      lVar6 = 0;
      lVar7 = 1;
      do {
        bVar3 = param_1[lVar6];
        if ((long)(char)bVar3 < 0) {
          iVar2 = ___maskrune((uint)bVar3,0x800);
          if (iVar2 != 0) goto LAB_1006a3ac4;
LAB_1006a3adc:
          bVar3 = 0x20;
        }
        else {
          if ((*(uint *)(puVar1 + (long)(char)bVar3 * 4 + 0x3c) & 0x800) == 0) goto LAB_1006a3adc;
LAB_1006a3ac4:
          bVar3 = param_1[lVar6];
        }
        pbVar5 = (byte *)(param_3 + lVar7);
        *pbVar5 = bVar3;
        pbVar5[1] = 0x20;
        pbVar5[2] = 0x20;
        lVar7 = lVar7 + 3;
        lVar6 = lVar6 + 1;
      } while (lVar6 < param_2);
    }
  }
  return;
}

