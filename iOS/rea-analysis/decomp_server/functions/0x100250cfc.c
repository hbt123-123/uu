// rea decompile_all
// name: FUN_100250cfc
// address: 0x100250cfc
// body: available
// range: 0x100250cfc-0x100250d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100250cfc(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    auVar1 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x98),*(undefined1 (*) [16])(param_1 + 0x98),
                      8,1);
    param_2[1] = auVar1._8_8_;
    *param_2 = auVar1._0_8_;
    return 0;
  }
  return 0xffffff9c;
}

