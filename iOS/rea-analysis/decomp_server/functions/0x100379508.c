// rea decompile_all
// name: MMKV::close
// address: 0x100379508
// body: available
// range: 0x100379508-0x1003795bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

int MMKV::close(int param_1)

{
  int iVar1;
  ID IVar2;
  long local_28;
  
  local_28 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  FUN_100386734(1,"libMMKV.mm","-[MMKV close]",0x14d,"closing %@");
  objc_stub::removeObjectForKey_(DAT_100ad1388,*(undefined8 *)((ulong)(uint)param_1 + 0x10));
  IVar2 = objc_stub::retainCount((ulong)(uint)param_1);
  if (1 < IVar2) {
    FUN_100386734(2,"libMMKV.mm","-[MMKV close]",0x152,"There\'s still reference on this kv: %@");
  }
  iVar1 = (int)&local_28;
  FUN_10037b92c();
  return iVar1;
}

