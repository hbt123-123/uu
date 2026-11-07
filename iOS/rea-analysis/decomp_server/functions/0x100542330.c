// rea decompile_all
// name: FUN_100542330
// address: 0x100542330
// body: available
// range: 0x100542330-0x10054237b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100542330(void)

{
  undefined1 *puVar1;
  undefined8 *unaff_x20;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*unaff_x20;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)unaff_x20[1];
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      __ss6HasherV8_combineyys5UInt8VF(*puVar1);
    }
  }
  return;
}

