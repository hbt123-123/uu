// rea decompile_all
// name: thunk_FUN_10039a6ec
// address: 0x10039b680
// body: available
// range: 0x10039b680-0x10039b683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10039a6ec(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  uVar1 = *(undefined8 *)((long)pvVar2 + 0x20);
  (**(code **)((long)pvVar2 + 0x28))(pvVar2,0);
  _swift_release(uVar1);
  _free(pvVar2);
  return;
}

