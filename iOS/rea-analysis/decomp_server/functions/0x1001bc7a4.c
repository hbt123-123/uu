// rea decompile_all
// name: FUN_1001bc7a4
// address: 0x1001bc7a4
// body: available
// range: 0x1001bc7a4-0x1001bc887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001bc7a4(undefined8 param_1,byte *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if ((*param_2 & 1) == 0) {
    puVar1 = auStack_48;
    _swift_beginAccess(param_3 + 0x10,puVar1,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      return;
    }
    if (*(char *)(param_3 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) != '\x01') {
      return;
    }
    *(undefined1 *)(param_3 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) = 0;
    lVar2 = 0x28;
  }
  else {
    puVar1 = auStack_48;
    _swift_beginAccess(param_3 + 0x10,puVar1,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      return;
    }
    if ((*(byte *)(param_3 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_3 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) = 1;
    lVar2 = 0x20;
  }
  FUN_1001bc1d8();
  _swift_getObjectType();
  (**(code **)(puVar1 + lVar2))();
  _swift_unknownObjectRelease(param_3);
  return;
}

