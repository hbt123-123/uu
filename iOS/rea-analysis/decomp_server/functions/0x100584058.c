// rea decompile_all
// name: FUN_100584058
// address: 0x100584058
// body: available
// range: 0x100584058-0x100584093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100584058(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x60) >> 0x3c;
  uVar1 = 0;
  if (uVar3 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar2 = 0xc000000000000000;
  if (uVar3 < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
  }
  FUN_10010bd10();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

