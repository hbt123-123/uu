// rea decompile_all
// name: FUN_100693a1c
// address: 0x100693a1c
// body: available
// range: 0x100693a1c-0x100693aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100693a1c(char *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  uVar2 = *(ulong *)(param_1 + 8);
  pcVar6 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar2 = (ulong)(byte)param_1[0x17];
    pcVar6 = param_1;
  }
  uVar3 = *(ulong *)(param_2 + 8);
  pcVar7 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar3 = (ulong)(byte)param_2[0x17];
    pcVar7 = param_2;
  }
  pcVar1 = pcVar6 + uVar2;
  pcVar9 = pcVar1;
  if (uVar2 != 0 && uVar3 != 0) {
    pcVar11 = pcVar6;
    pcVar12 = pcVar6;
    do {
      while (pcVar12 = pcVar12 + 1, pcVar8 = pcVar7, uVar5 = uVar3, *pcVar11 == *pcVar7) {
        do {
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar11;
          if (uVar5 - 1 == 0) break;
          if (pcVar12 == pcVar1) goto LAB_100693a60;
          cVar4 = *pcVar12;
          pcVar10 = pcVar9;
          pcVar12 = pcVar12 + 1;
          uVar5 = uVar5 - 1;
        } while (cVar4 == *pcVar8);
        pcVar11 = pcVar11 + 1;
        pcVar9 = pcVar10;
        pcVar12 = pcVar11;
        if (pcVar11 == pcVar1) goto LAB_100693a60;
      }
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 != pcVar1);
  }
LAB_100693a60:
  if ((pcVar9 != pcVar1 || uVar3 == 0) && (long)pcVar9 - (long)pcVar6 != -1) {
    return (long)pcVar9 - (long)pcVar6 == uVar2 - uVar3;
  }
  return false;
}

