// rea decompile_all
// name: FUN_10051ad14
// address: 0x10051ad14
// body: available
// range: 0x10051ad14-0x10051adbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051ad14(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)*unaff_x20;
  uVar2 = (ulong)*(uint *)(unaff_x20 + 1);
  FUN_10051ab2c();
  if (uVar2 == 0) {
    FUN_1004f9a9c();
    _swift_allocError(&DAT_1009d0558,puVar1,0,0);
    *puVar1 = 2;
    _swift_willThrow();
  }
  else {
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(0x22,0xe100000000000000);
  }
  return;
}

