// rea decompile_all
// name: FUN_10069c780
// address: 0x10069c780
// body: available
// range: 0x10069c780-0x10069c85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10069c780(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  void *local_48;
  ulong local_40;
  byte local_31;
  
  lVar3 = (long)param_1[0x17];
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  FUN_10069c85c(&local_48,param_1);
  if (-1 < (char)local_31) {
    local_40 = (ulong)local_31;
  }
  std::string::erase((ulong)param_1,lVar3 - local_40);
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  cVar1 = param_2[0x17];
  if (cVar1 < '\0') {
    if (*(long *)(param_2 + 8) == 0) {
      return param_1;
    }
    pcVar2 = *(char **)param_2;
  }
  else {
    pcVar2 = param_2;
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  if (*pcVar2 != '.') {
    std::string::push_back((char)param_1);
    cVar1 = param_2[0x17];
  }
  pcVar2 = *(char **)param_2;
  if (-1 < cVar1) {
    pcVar2 = param_2;
  }
  std::string::append(param_1,(ulong)pcVar2);
  return param_1;
}

