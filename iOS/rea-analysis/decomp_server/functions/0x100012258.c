// rea decompile_all
// name: FUN_100012258
// address: 0x100012258
// body: available
// range: 0x100012258-0x10001236b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100012258(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x80,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined **)(unaff_x20 + 0x80) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(unaff_x20 + 0x88,auStack_50,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined **)(unaff_x20 + 0x88) = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_bridgeObjectRelease(uVar1);
  if (DAT_100a73b08 != -1) {
    _swift_once(&DAT_100a73b08,FUN_100010e4c);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = DAT_100a756e0;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(unaff_x20 + 0x98) = 0;
  *(undefined1 *)(unaff_x20 + 0x9a) = 0;
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100031994,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000017,
                0x800000010087ae80,0x8de,0);
  return;
}

