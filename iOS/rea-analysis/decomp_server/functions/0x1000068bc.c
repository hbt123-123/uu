// rea decompile_all
// name: FUN_1000068bc
// address: 0x1000068bc
// body: available
// range: 0x1000068bc-0x1000069ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000068bc(undefined8 param_1,byte *param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  if ((*param_2 & 1) == 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if ((param_3 != 0) &&
       (*(char *)(param_3 + _TtC14UURemoteServer13CursorManager::isSuspend) == '\x01')) {
      *(undefined1 *)(param_3 + _TtC14UURemoteServer13CursorManager::isSuspend) = 0;
      FUN_1000069ac();
      FUN_100006af4();
    }
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if ((param_3 != 0) &&
       ((*(byte *)(param_3 + _TtC14UURemoteServer13CursorManager::isSuspend) & 1) == 0)) {
      *(undefined1 *)(param_3 + _TtC14UURemoteServer13CursorManager::isSuspend) = 1;
      lVar1 = _TtC14UURemoteServer13CursorManager::refreshTimer;
      if (*(ID *)(param_3 + _TtC14UURemoteServer13CursorManager::refreshTimer) != 0) {
        _objc_msgSend(*(ID *)(param_3 + _TtC14UURemoteServer13CursorManager::refreshTimer),
                      "invalidate");
        *(undefined8 *)(param_3 + lVar1) = 0;
      }
    }
  }
  return;
}

