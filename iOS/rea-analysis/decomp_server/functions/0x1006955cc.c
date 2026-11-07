// rea decompile_all
// name: FUN_1006955cc
// address: 0x1006955cc
// body: available
// range: 0x1006955cc-0x1006956cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006955cc(char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    pcVar6 = (char *)0x0;
    pcVar8 = param_1;
    pcVar5 = param_1;
    do {
      while ((pcVar6 != (char *)0x0 || (cVar2 != ' '))) {
        pcVar4 = pcVar8;
        if (cVar2 != '(') {
          pcVar3 = pcVar8;
          if (cVar2 == ':') {
            if (pcVar8[1] == ':') {
              lVar7 = 2;
              goto LAB_100695650;
            }
            goto joined_r0x000100695670;
          }
          pcVar4 = pcVar6;
          if (cVar2 == ']') goto joined_r0x000100695670;
        }
        cVar2 = pcVar8[1];
        pcVar6 = pcVar4;
        pcVar8 = pcVar8 + 1;
        pcVar3 = pcVar4;
        if (cVar2 == '\0') goto joined_r0x000100695670;
      }
      lVar7 = 1;
LAB_100695650:
      pcVar8 = pcVar8 + lVar7;
      cVar2 = *pcVar8;
      pcVar5 = pcVar8;
      pcVar3 = pcVar6;
    } while (cVar2 != '\0');
joined_r0x000100695670:
    if ((pcVar3 != (char *)0x0) && (pcVar5 + 1 < pcVar3)) {
      sVar1 = (long)pcVar3 - (long)pcVar5;
      if ((long)(param_3 + -1) <= (long)pcVar3 - (long)pcVar5) {
        sVar1 = (long)(param_3 + -1);
      }
      _memcpy(param_2,pcVar5,sVar1);
      goto LAB_1006956c0;
    }
  }
  _strncpy(param_2,param_1,(long)param_3);
  sVar1 = (long)param_3 - 1;
LAB_1006956c0:
  param_2[sVar1] = '\0';
  return;
}

