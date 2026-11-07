// rea decompile_all
// name: FUN_100060958
// address: 0x100060958
// body: available
// range: 0x100060958-0x1000609c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100060958(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_3 == '\0') {
    auVar2._8_8_ = 0xe600000000000000;
    auVar2._0_8_ = 0x706c65682d2d;
    return auVar2;
  }
  if (param_3 == '\x01') {
    _swift_bridgeObjectRetain(param_2);
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  auVar3._8_8_ = 0x80000001000ca530;
  auVar3._0_8_ = 0xd000000000000018;
  return auVar3;
}

