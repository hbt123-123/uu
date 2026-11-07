// rea decompile_all
// name: FUN_10069cc18
// address: 0x10069cc18
// body: available
// range: 0x10069cc18-0x10069ccbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069cc18(undefined8 param_1,undefined8 *param_2)

{
  char ***pppcVar1;
  long lVar2;
  char **local_58 [2];
  char local_41;
  long local_38;
  
  FUN_10069c3b0(local_58);
  while( true ) {
    lVar2 = (long)*(char *)((long)param_2 + 0x17);
    if (lVar2 < 0) {
      lVar2 = param_2[1];
    }
    if (local_38 == lVar2) break;
    pppcVar1 = (char ***)local_58[0];
    if (-1 < local_41) {
      pppcVar1 = local_58;
    }
    if (*(char *)pppcVar1 != '/') break;
    FUN_10069d89c(local_58);
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1006928dc(param_1,(long)param_2 + local_38);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}

