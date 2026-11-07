// rea decompile_all
// name: FUN_100204424
// address: 0x100204424
// body: available
// range: 0x100204424-0x10020455f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100204424(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_retain(uVar1);
  FUN_100407cdc(FUN_1000ce01c,uVar1,PTR___sytN_100995e90 + 8);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1002104f8,0,0xd0000000000000b2,0x8000000100885c70,0xd000000000000014,
                0x8000000100885d30,0x6a,0);
  _swift_release(uVar1);
  FUN_1003fb48c(FUN_100204560,0,0xd0000000000000a6,0x80000001008a2d40,0x74696e696564,
                0xe600000000000000,0x49,0);
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}

