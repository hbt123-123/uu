// rea decompile_all
// name: FUN_10069b58c
// address: 0x10069b58c
// body: available
// range: 0x10069b58c-0x10069b5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10069b58c(void)

{
  bool bVar1;
  void *local_38;
  long lStack_30;
  char local_21;
  
  FUN_10069ca74(&local_38);
  if (local_21 < '\0') {
    bVar1 = lStack_30 == 0;
    operator_delete(local_38);
  }
  else {
    bVar1 = local_21 == '\0';
  }
  return !bVar1;
}

