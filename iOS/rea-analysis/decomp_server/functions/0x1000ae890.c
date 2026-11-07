// rea decompile_all
// name: FUN_1000ae890
// address: 0x1000ae890
// body: available
// range: 0x1000ae890-0x1000ae8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ae890(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = param_2;
  FUN_1000ae6d0();
  _swift_allocObject();
  FUN_1000ae028(param_2);
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  return;
}

