// rea decompile_all
// name: FUN_100104644
// address: 0x100104644
// body: available
// range: 0x100104644-0x1001046b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100104644(void)

{
  long unaff_x20;
  long lVar1;
  
  _swift_getObjectType();
  lVar1 = *(long *)(unaff_x20 + _TtC14UURemoteServer16WallpaperManager::sessionEndUploadWorkItem);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar1);
  }
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}

