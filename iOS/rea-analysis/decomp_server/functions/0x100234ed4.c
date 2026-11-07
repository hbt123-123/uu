// rea decompile_all
// name: FUN_100234ed4
// address: 0x100234ed4
// body: available
// range: 0x100234ed4-0x100234f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100234ed4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_188 [344];
  
  uVar1 = 0;
  FUN_100227a8c(0);
  puVar3 = auStack_188;
  _swift_initStackObject();
  FUN_100226e0c();
  uVar2 = uVar1;
  FUN_10023bde4();
  _swift_release(uVar1);
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

