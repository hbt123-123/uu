// rea decompile_all
// name: FUN_100595ed4
// address: 0x100595ed4
// body: available
// range: 0x100595ed4-0x100595f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100595ed4(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1005a84e4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0x203;
  *(undefined1 *)(lVar2 + 0x12) = 3;
  *(undefined4 *)(lVar2 + 0x13) = 0x2020202;
  *(undefined2 *)(lVar2 + 0x17) = 0x302;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar2 + 0x28) = puVar1;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 1;
  *(undefined1 *)(lVar2 + 0x78) = 0;
  *(undefined **)(lVar2 + 0x80) = puVar1;
  DAT_100aabbf0 = lVar2;
  return;
}

