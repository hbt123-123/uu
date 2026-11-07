// rea decompile_all
// name: FUN_1005d1628
// address: 0x1005d1628
// body: available
// range: 0x1005d1628-0x1005d1683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005d1628(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  self = *(ID *)(unaff_x20 + 0x20);
  _objc_msgSend(self,"lock");
  lVar1 = unaff_x20 + 0x28;
  _swift_unknownObjectWeakLoadStrong(lVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  _objc_msgSend(self,"unlock");
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}

