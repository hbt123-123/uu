// rea decompile_all
// name: FUN_10037e964
// address: 0x10037e964
// body: available
// range: 0x10037e964-0x10037e9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10037e964(char *param_1,char *param_2)

{
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  
  if (*param_1 == '\0') {
    sVar6 = (size_t)(byte)param_1[1];
    cVar4 = *param_2;
    uVar2 = (ulong)(byte)param_2[1];
    if (cVar4 != '\0') {
      uVar2 = *(ulong *)(param_2 + 2);
    }
    if (uVar2 != sVar6) {
      return false;
    }
    param_1 = param_1 + 2;
  }
  else {
    sVar6 = *(size_t *)(param_1 + 2);
    cVar4 = *param_2;
    sVar1 = (ulong)(byte)param_2[1];
    if (cVar4 != '\0') {
      sVar1 = *(size_t *)(param_2 + 2);
    }
    if (sVar6 != sVar1) {
      return false;
    }
    param_1 = *(char **)(param_1 + 10);
  }
  pcVar3 = param_2 + 2;
  if (cVar4 != '\0') {
    pcVar3 = *(char **)(param_2 + 10);
  }
  iVar5 = _memcmp(param_1,pcVar3,sVar6);
  return iVar5 == 0;
}

