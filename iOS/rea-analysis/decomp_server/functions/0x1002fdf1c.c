// rea decompile_all
// name: FUN_1002fdf1c
// address: 0x1002fdf1c
// body: available
// range: 0x1002fdf1c-0x1002fdfd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002fdf1c(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 auStack_78 [40];
  
  puVar1 = &DAT_1009af748;
  _swift_allocObject(&DAT_1009af748,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = in_x5;
  *(undefined8 *)(puVar1 + 0x18) = in_x6;
  *(undefined8 *)(puVar1 + 0x20) = in_x3;
  *(undefined8 *)(puVar1 + 0x28) = in_x4;
  _swift_retain(in_x4);
  FUN_1002fde08(auStack_78,in_x5,in_x6);
  FUN_1002fde5c();
  _swift_release(puVar1);
  FUN_10003f094(auStack_78);
  return in_x5;
}

