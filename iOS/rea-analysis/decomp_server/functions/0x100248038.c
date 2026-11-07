// rea decompile_all
// name: FUN_100248038
// address: 0x100248038
// body: available
// range: 0x100248038-0x1002480df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100248038(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auStack_48 [24];
  
  FUN_10024288c();
  if (DAT_100a7ddc8 != -1) {
    _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
  }
  lVar2 = DAT_100b362c8;
  _swift_beginAccess(DAT_100b362c8 + 0x10,auStack_48,0x21,0);
  _pthread_rwlock_rdlock((pthread_rwlock_t *)(lVar2 + 0x10));
  auVar1._8_8_ = DAT_100b363d0;
  auVar1._0_8_ = DAT_100b363c8;
  _swift_bridgeObjectRetain(DAT_100b363d0);
  _pthread_rwlock_unlock((pthread_rwlock_t *)(lVar2 + 0x10));
  _swift_endAccess(auStack_48);
  return auVar1;
}

