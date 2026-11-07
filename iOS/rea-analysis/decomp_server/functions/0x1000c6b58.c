// rea decompile_all
// name: FUN_1000c6b58
// address: 0x1000c6b58
// body: available
// range: 0x1000c6b58-0x1000c6c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c6b58(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  lVar2 = *(long *)(unaff_x20 + 0x48);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(lVar2);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  _swift_release(uVar1);
  (**(code **)(unaff_x20 + 0x20))();
  FUN_1000c51e8();
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000c6d2c,0,0xd0000000000000ac,0x8000000100884780,0xd000000000000014,
                0x8000000100884940,0xe1,0);
  return;
}

