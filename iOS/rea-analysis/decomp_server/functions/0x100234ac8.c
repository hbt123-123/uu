// rea decompile_all
// name: FUN_100234ac8
// address: 0x100234ac8
// body: available
// range: 0x100234ac8-0x100234aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100234ac8(undefined8 param_1,code *param_2,ID *param_3)

{
  ID IVar1;
  
  IVar1 = 0;
  (*param_2)();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(IVar1,"init");
  *param_3 = IVar1;
  return;
}

