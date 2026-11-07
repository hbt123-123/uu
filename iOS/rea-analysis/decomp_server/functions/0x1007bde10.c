// rea decompile_all
// name: FUN_1007bde10
// address: 0x1007bde10
// body: available
// range: 0x1007bde10-0x1007bde4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007bde10(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  bVar2 = (param_1 & 1) != 0;
  uVar3 = 0x636174536c6c6163;
  if (bVar2) {
    uVar3 = 0xd000000000000012;
  }
  uVar1 = 0xea0000000000736b;
  if (bVar2) {
    uVar1 = 0x80000001008dac40;
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

