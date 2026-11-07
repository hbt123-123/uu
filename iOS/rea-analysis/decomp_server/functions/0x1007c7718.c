// rea decompile_all
// name: FUN_1007c7718
// address: 0x1007c7718
// body: available
// range: 0x1007c7718-0x1007c7737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007c7718(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = -(param_1 >> 7 & 1) & 0xfffffffffffff800 | (param_1 & 0xff) << 3;
  auVar2._0_8_ = *(undefined8 *)("frames" + uVar1);
  auVar2._8_8_ = *(undefined8 *)("registersnapshot" + uVar1 + 0x10);
  return auVar2;
}

