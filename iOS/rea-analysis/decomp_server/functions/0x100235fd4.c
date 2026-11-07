// rea decompile_all
// name: FUN_100235fd4
// address: 0x100235fd4
// body: available
// range: 0x100235fd4-0x10023606b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100235fd4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  if (DAT_100a7de20 != -1) {
    _swift_once(&DAT_100a7de20,FUN_100234cec);
  }
  *(undefined1 *)(DAT_100a7f1f8 + 0x11) = 0;
  if (param_1 != 0) {
    _swift_beginAccess(&DAT_100b36348,auStack_48,1,0);
    lVar1 = DAT_100b36348;
    DAT_100b36348 = param_1;
    _swift_retain(param_1);
    _swift_release(lVar1);
  }
  return;
}

