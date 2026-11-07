// rea decompile_all
// name: FUN_100095004
// address: 0x100095004
// body: available
// range: 0x100095004-0x1000950db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100095004(undefined8 *param_1)

{
  __ss11_StringGutsV4growyySiF(0x3c);
  __sSS6appendyySSF(0x6f6c7055676f4c5b,0xed00005d72656461);
  __sSS6appendyySSF(0xd000000000000038,0x80000001008802a0);
  if (DAT_100a73bb0 != -1) {
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  __sSS6appendyySSF(DAT_100b36258,DAT_100b36260);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

