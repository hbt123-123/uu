// rea decompile_all
// name: FUN_10016949c
// address: 0x10016949c
// body: available
// range: 0x10016949c-0x100169567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016949c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
    _swift_retain(lVar1);
    if ((lVar1 != 0) && (_swift_release(lVar1), lVar1 == param_2)) {
      _swift_beginAccess(param_1 + 0x10,auStack_60,0,0);
      param_1 = param_1 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (param_1 != 0) {
        FUN_10015659c(0x1000000000000021,0x8000000100894c10);
      }
    }
  }
  return;
}

