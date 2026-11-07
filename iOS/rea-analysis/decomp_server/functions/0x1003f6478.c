// rea decompile_all
// name: FUN_1003f6478
// address: 0x1003f6478
// body: available
// range: 0x1003f6478-0x1003f6507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003f6478(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_allocObject();
  puVar1 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar1 = 0;
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar2 = 0;
  _swift_beginAccess(puVar2,auStack_58,1,0);
  *puVar2 = param_1;
  _swift_beginAccess(puVar1,auStack_70,1,0);
  *puVar1 = param_2;
  return unaff_x20;
}

