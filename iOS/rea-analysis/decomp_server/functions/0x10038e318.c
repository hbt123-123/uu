// rea decompile_all
// name: FUN_10038e318
// address: 0x10038e318
// body: available
// range: 0x10038e318-0x10038e36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10038e318(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_28;
  
  uVar2 = *param_2;
  FUN_100385e74(local_38);
  pvVar1 = local_38[0];
  local_38[0] = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if (local_28 == '\x01') {
      FUN_10037e53c((long)pvVar1 + 0x18);
    }
    operator_delete(pvVar1);
  }
  return uVar2;
}

