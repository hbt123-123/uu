// rea decompile_all
// name: FUN_1000efa44
// address: 0x1000efa44
// body: available
// range: 0x1000efa44-0x1000efa9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000efa44(long param_1,undefined8 param_2)

{
  undefined1 local_50 [8];
  long lStack_48;
  undefined1 auStack_38 [8];
  
  _swift_getErrorValue(param_2,auStack_38,local_50);
  *(long *)(param_1 + 0x18) = lStack_48;
  FUN_1000efc08(param_1);
  (**(code **)(*(long *)(lStack_48 + -8) + 0x10))();
  return;
}

