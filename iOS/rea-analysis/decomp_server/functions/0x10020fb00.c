// rea decompile_all
// name: FUN_10020fb00
// address: 0x10020fb00
// body: available
// range: 0x10020fb00-0x10020fb57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020fb00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *unaff_x20;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 4);
  uVar2 = *(undefined4 *)(unaff_x20 + 8);
  uVar3 = *(undefined4 *)(unaff_x20 + 0xc);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  __ss6HasherV8_combineyys6UInt32VF(uVar2);
  __ss6HasherV8_combineyys6UInt32VF(uVar3);
  return;
}

