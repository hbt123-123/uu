// rea decompile_all
// name: FUN_10000852c
// address: 0x10000852c
// body: available
// range: 0x10000852c-0x10000859f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000852c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  uVar4 = *(undefined1 *)(unaff_x20 + 5);
  __ss6HasherV8_combineyys6UInt64VF(*unaff_x20);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  return;
}

