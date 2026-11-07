// rea decompile_all
// name: FUN_1004e5478
// address: 0x1004e5478
// body: available
// range: 0x1004e5478-0x1004e54ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004e5478(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004eff04();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined2 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined8 *)(lVar1 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  *(undefined1 *)(lVar1 + 0x40) = 1;
  *(undefined4 *)(lVar1 + 0x44) = 0;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined2 *)(lVar1 + 0x58) = 1;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined1 *)(lVar1 + 0x68) = 1;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x78) = 1;
  *(undefined8 *)(lVar1 + 0x84) = 0;
  *(undefined8 *)(lVar1 + 0x7c) = 0;
  *(undefined4 *)(lVar1 + 0x8c) = 0;
  DAT_100aa1bf8 = lVar1;
  return;
}

