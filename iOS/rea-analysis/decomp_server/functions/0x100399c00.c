// rea decompile_all
// name: FUN_100399c00
// address: 0x100399c00
// body: available
// range: 0x100399c00-0x100399c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100399c4c) */

void FUN_100399c00(void)

{
  undefined1 *puVar1;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  puVar1 = &DAT_d000000000000028;
  FUN_100218cf4(&DAT_d000000000000028,0x80000001008aff10,0);
  DAT_100a8ac90 = puVar1;
  return;
}

