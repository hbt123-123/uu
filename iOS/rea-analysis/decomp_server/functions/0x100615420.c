// rea decompile_all
// name: FUN_100615420
// address: 0x100615420
// body: available
// range: 0x100615420-0x1006154df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100615420(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_100616300(0,lVar3);
  puVar2 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100607a1c(0,lVar1);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar2,param_1,lVar3);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  FUN_1006078c4();
  _swift_allocObject();
  *(undefined1 **)(unaff_x20 + 0x10) = puVar2;
  return;
}

