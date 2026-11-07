// rea decompile_all
// name: FUN_100407618
// address: 0x100407618
// body: available
// range: 0x100407618-0x100407673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100407618(void)

{
  undefined1 auVar1 [16];
  
  if (DAT_100a893b8 != -1) {
    _swift_once(&DAT_100a893b8,FUN_1004075f0);
  }
  auVar1._8_8_ = DAT_100b369f8;
  auVar1._0_8_ = DAT_100b369f0;
  _swift_bridgeObjectRetain(DAT_100b369f8);
  return auVar1;
}

