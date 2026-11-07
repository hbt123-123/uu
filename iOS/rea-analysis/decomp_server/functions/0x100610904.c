// rea decompile_all
// name: FUN_100610904
// address: 0x100610904
// body: available
// range: 0x100610904-0x10061099f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100610904(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x50);
  lVar3 = *(long *)(lVar2 + -8);
  puVar1 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100607a1c(0,lVar2);
  (**(code **)(lVar3 + 0x10))(puVar1,param_1,lVar2);
  FUN_1006078c4();
  _swift_allocObject();
  *(undefined1 **)(unaff_x20 + 0x10) = puVar1;
  return;
}

