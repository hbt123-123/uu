// rea decompile_all
// name: FUN_10079ecf0
// address: 0x10079ecf0
// body: available
// range: 0x10079ecf0-0x10079edbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10079ecf0(byte *param_1,uint param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  byte *pbVar4;
  long lVar5;
  
  if ((int)param_2 < 1) {
    bVar2 = false;
  }
  else {
    pbVar4 = param_1;
    do {
      pcVar3 = _strnstr((char *)pbVar4,"0x",(ulong)(uint)((int)(param_1 + param_2) - (int)pbVar4));
      if (pcVar3 == (char *)0x0) goto LAB_10079eda4;
      pbVar4 = (byte *)(pcVar3 + 2);
    } while (*(int *)(&DAT_100850420 + (ulong)*pbVar4 * 4) == 0xff);
    if (pbVar4 < param_1 + param_2) {
      lVar5 = 0;
      param_1 = param_1 + ((ulong)param_2 - (long)pcVar3) + -2;
      do {
        bVar1 = *pbVar4;
        if (*(uint *)(&DAT_100850420 + (ulong)bVar1 * 4) == 0xff) break;
        pbVar4 = pbVar4 + 1;
        lVar5 = (ulong)*(uint *)(&DAT_100850420 + (ulong)bVar1 * 4) + lVar5 * 0x10;
        param_1 = param_1 + -1;
      } while (param_1 != (byte *)0x0);
    }
    else {
      lVar5 = 0;
    }
    *param_3 = lVar5;
LAB_10079eda4:
    bVar2 = pcVar3 != (char *)0x0;
  }
  return bVar2;
}

