// rea decompile_all
// name: FUN_10069eff0
// address: 0x10069eff0
// body: available
// range: 0x10069eff0-0x10069f0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069eff0(string *param_1,failure *param_2)

{
  int *piVar1;
  char *pcVar2;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  piVar1 = ___error();
  if (*piVar1 == 0) {
    pcVar2 = "";
  }
  else {
    piVar1 = ___error();
    pcVar2 = _strerror(*piVar1);
  }
  _strlen((char *)param_2);
  _strlen(pcVar2);
  std::string::reserve((ulong)&local_48);
  std::string::append((char *)&local_48);
  std::string::append((char *)&local_48);
  std::string::append((char *)&local_48);
  std::iostream_category();
  std::ios_base::failure::failure(param_2,param_1,(error_code *)&local_48);
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}

