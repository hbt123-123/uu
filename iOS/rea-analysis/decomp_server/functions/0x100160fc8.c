// rea decompile_all
// name: FUN_100160fc8
// address: 0x100160fc8
// body: available
// range: 0x100160fc8-0x100161117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100160fc8(undefined8 param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_70 = param_2;
  local_68 = param_1;
  FUN_1003fb4ec(uVar1,FUN_10016bef4,auStack_80,0xd0000000000000a4,0x800000010088d870,
                0xd000000000000020,0x80000001008945d0,0x285,0);
  if (param_3 != 0) {
    _swift_beginAccess(param_4 + 0x10,auStack_48,0,0);
    lVar2 = param_4 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
      _swift_retain(lVar2);
      _swift_retain(param_3);
      if ((lVar2 != 0) && (_swift_release(lVar2), lVar2 == param_3)) {
        _swift_beginAccess(param_4 + 0x10,auStack_60,0,0);
        param_4 = param_4 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (param_4 != 0) {
          FUN_10015659c(0x1000000000000012,0x8000000100894690);
        }
      }
      _swift_release(param_3);
    }
  }
  return;
}

