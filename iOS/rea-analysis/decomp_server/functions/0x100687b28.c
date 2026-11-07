// rea decompile_all
// name: FUN_100687b28
// address: 0x100687b28
// body: available
// range: 0x100687b28-0x100687b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100687b28(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  param_1[2] = unaff_x20;
  if (*(char *)(unaff_x20 + 0x31) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain();
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_100687b78;
  return auVar3;
}

