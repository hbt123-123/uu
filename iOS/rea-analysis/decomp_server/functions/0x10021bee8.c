// rea decompile_all
// name: FUN_10021bee8
// address: 0x10021bee8
// body: available
// range: 0x10021bee8-0x10021bf87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10021bee8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,auStack_38,0,0);
  pauVar1 = (undefined1 (*) [16])(DAT_100b36340 + FCountAppConfig::uid);
  _swift_beginAccess(pauVar1,auStack_50,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}

