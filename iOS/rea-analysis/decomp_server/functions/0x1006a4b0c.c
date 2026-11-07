// rea decompile_all
// name: FUN_1006a4b0c
// address: 0x1006a4b0c
// body: available
// range: 0x1006a4b0c-0x1006a4b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006a4b0c(undefined8 param_1,undefined8 *param_2)

{
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100384eb8(&local_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    local_40 = (void *)*param_2;
    local_30 = param_2[2];
  }
  FUN_10069c180(param_1,&local_40);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return param_1;
}

