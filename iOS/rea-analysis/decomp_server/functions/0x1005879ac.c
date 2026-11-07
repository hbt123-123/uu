// rea decompile_all
// name: FUN_1005879ac
// address: 0x1005879ac
// body: available
// range: 0x1005879ac-0x100587a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005879ac(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1005a7a70();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar2 + 0x28) = puVar1;
  *(undefined **)(lVar2 + 0x30) = puVar1;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined **)(lVar2 + 0x48) = puVar1;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined **)(lVar2 + 0x98) = puVar1;
  *(undefined **)(lVar2 + 0xa0) = puVar1;
  *(undefined1 *)(lVar2 + 0xa8) = 3;
  DAT_100aabbd8 = lVar2;
  return;
}

