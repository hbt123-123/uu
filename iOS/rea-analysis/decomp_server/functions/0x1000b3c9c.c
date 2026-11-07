// rea decompile_all
// name: FUN_1000b3c9c
// address: 0x1000b3c9c
// body: available
// range: 0x1000b3c9c-0x1000b3e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b3c9c(uint param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar2 == 0) ||
     (lVar2 = *(long *)(lVar2 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar2 == 0)) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000b3e50,0,0xd000000000000099,0x8000000100881de0,0xd00000000000002a,
                  0x8000000100882050,0x1ee,0);
  }
  else {
    lVar1 = lVar2 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
    _swift_beginAccess(lVar1,auStack_48,0,0);
    if (*(long *)(lVar1 + 8) == 5) {
      FUN_1000b3ea8(*(undefined4 *)(lVar2 + _TtC14UURemoteServer22StreamerConnectSession::handle),
                    param_1 & 1);
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000b3e7c,0,0xd000000000000099,0x8000000100881de0,0xd00000000000002a,
                    0x8000000100882050,0x1f2,0);
    }
  }
  return;
}

