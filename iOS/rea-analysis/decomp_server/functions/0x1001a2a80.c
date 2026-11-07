// rea decompile_all
// name: FUN_1001a2a80
// address: 0x1001a2a80
// body: available
// range: 0x1001a2a80-0x1001a2c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a2a80(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  uint local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_70,0,0);
    lVar2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      _swift_release(param_2);
    }
    else {
      uVar1 = *(uint *)(lVar2 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      IVar3 = _objc_msgSend(*(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                                   _TtC14UURemoteServer15StreamerManager::controlled),
                            "ControlledGetConnectionStats:",(ulong)uVar1);
      uVar4 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
      uStack_7c = (undefined4)IVar3;
      local_80 = uVar1;
      FUN_1003fb48c(FUN_10003f65c,auStack_90,0xd000000000000095,0x8000000100877f50,
                    0xd000000000000017,0x800000010089a430,0x1a8,0);
      _swift_release(param_2);
    }
  }
  return;
}

