// rea decompile_all
// name: FUN_100039b50
// address: 0x100039b50
// body: available
// range: 0x100039b50-0x100039c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100039b50(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
    if (lVar2 == 0) {
      return false;
    }
    FUN_1000c7b64();
    lVar3 = *(long *)(lVar2 + 0x78);
    bVar1 = *(byte *)(lVar2 + 0x81);
    _swift_release(lVar2);
    if ((bVar1 & 1) == 0) {
      return lVar3 == 6;
    }
  }
  return false;
}

