// rea decompile_all
// name: FUN_1006883dc
// address: 0x1006883dc
// body: available
// range: 0x1006883dc-0x100688417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1006883dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x31) == '\x05') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

