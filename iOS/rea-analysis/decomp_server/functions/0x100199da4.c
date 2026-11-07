// rea decompile_all
// name: FUN_100199da4
// address: 0x100199da4
// body: available
// range: 0x100199da4-0x100199e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100199da4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x18,0);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 200;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c) = 0;
  *(undefined8 *)(unaff_x20 + 0x54) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x18,param_1);
  return;
}

