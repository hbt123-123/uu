// rea decompile_all
// name: FUN_100290054
// address: 0x100290054
// body: available
// range: 0x100290054-0x1002900db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100290054(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar1);
  _swift_beginAccess(lVar2 + 0x18,auStack_48,0x21,0);
  if (*(ID *)(lVar2 + 0x18) != 0) {
    _objc_msgSend(*(ID *)(lVar2 + 0x18),"close");
  }
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar1);
  FUN_1002cb990(param_1);
  return;
}

