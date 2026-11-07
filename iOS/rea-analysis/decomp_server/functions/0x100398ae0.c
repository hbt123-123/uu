// rea decompile_all
// name: FUN_100398ae0
// address: 0x100398ae0
// body: available
// range: 0x100398ae0-0x100398b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100398ae0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *unaff_x20;
  puVar1 = &DAT_1009b5de0;
  _swift_allocObject(&DAT_1009b5de0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_1009b5e08;
  _swift_allocObject(&DAT_1009b5e08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar3 + 0x50);
  *(undefined **)(puVar2 + 0x18) = puVar1;
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = FUN_100398ec4;
  return auVar4;
}

