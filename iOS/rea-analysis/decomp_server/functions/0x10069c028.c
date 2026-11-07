// rea decompile_all
// name: FUN_10069c028
// address: 0x10069c028
// body: available
// range: 0x10069c028-0x10069c083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10069c028(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = *param_1 + lVar2;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) == '\0') {
      return 0;
    }
    lVar1 = (long)param_1 + lVar2;
  }
  if (*(char *)(lVar1 + -1) == '/') {
    return 0;
  }
  std::string::push_back((char)param_1);
  return lVar2;
}

