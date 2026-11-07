// rea decompile_all
// name: FUN_1001692b4
// address: 0x1001692b4
// body: available
// range: 0x1001692b4-0x1001693e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001692b4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_70 = param_1;
  FUN_1003fb4ec(uVar1,FUN_10016c08c,auStack_80,0xd0000000000000a4,0x800000010088d870,
                0xd000000000000029,0x8000000100894be0,0x43d,0);
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
    _swift_retain(lVar2);
    if ((lVar2 != 0) && (_swift_release(lVar2), lVar2 == param_3)) {
      _swift_beginAccess(param_2 + 0x10,auStack_60,0,0);
      param_2 = param_2 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (param_2 != 0) {
        FUN_10015659c(0x1000000000000018,0x8000000100894c40);
      }
    }
  }
  return;
}

