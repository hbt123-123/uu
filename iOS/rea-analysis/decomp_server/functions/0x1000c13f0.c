// rea decompile_all
// name: FUN_1000c13f0
// address: 0x1000c13f0
// body: available
// range: 0x1000c13f0-0x1000c14a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_1000c13f0(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
    bVar1 = 0;
    if (lVar2 != 0) {
      FUN_1000c7b64();
      lVar3 = *(long *)(lVar2 + 0x68);
      bVar1 = *(byte *)(lVar2 + 0x71);
      _swift_release(lVar2);
      bVar1 = lVar3 == 2 & (bVar1 ^ 0xff);
    }
  }
  return bVar1;
}

