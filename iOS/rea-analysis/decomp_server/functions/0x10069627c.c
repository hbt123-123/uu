// rea decompile_all
// name: FUN_10069627c
// address: 0x10069627c
// body: available
// range: 0x10069627c-0x100696323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10069627c(int *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  if (param_3 - 2U < 0x23) {
    iVar7 = *param_1;
    pcVar3 = param_2;
    pcVar4 = "ZYXWVUTSRQPONMLKJIHGFEDCBA9876543210123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (param_4 == 0) {
      pcVar4 = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz";
    }
    do {
      pcVar5 = pcVar3;
      iVar2 = 0;
      if (param_3 != 0) {
        iVar2 = iVar7 / param_3;
      }
      pcVar3 = pcVar5 + 1;
      *pcVar5 = pcVar4[(iVar7 - iVar2 * param_3) + 0x23];
      iVar7 = iVar2;
    } while (iVar2 != 0);
    pcVar4 = pcVar3;
    if (*param_1 < 0) {
      pcVar4 = pcVar5 + 2;
      *pcVar3 = '-';
    }
    pcVar3 = pcVar4 + -1;
    *pcVar4 = '\0';
    pcVar4 = param_2;
    if (param_2 < pcVar3) {
      do {
        pcVar6 = pcVar4 + 1;
        cVar1 = *pcVar3;
        pcVar5 = pcVar3 + -1;
        *pcVar3 = *pcVar4;
        *pcVar4 = cVar1;
        pcVar3 = pcVar5;
        pcVar4 = pcVar6;
      } while (pcVar6 < pcVar5);
    }
  }
  else {
    builtin_strncpy(param_2,"itoa err",9);
  }
  return param_2;
}

