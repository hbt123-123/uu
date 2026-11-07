// rea decompile_all
// name: FUN_100153b5c
// address: 0x100153b5c
// body: available
// range: 0x100153b5c-0x100153bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100153b5c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::timer;
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::timer),"invalidate");
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  FUN_100153bbc();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return;
}

