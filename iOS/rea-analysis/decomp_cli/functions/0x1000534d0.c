// rea decompile_all
// name: FUN_1000534d0
// address: 0x1000534d0
// body: available
// range: 0x1000534d0-0x100053537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000534d0(long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  lVar2 = *param_2;
  _os_unfair_lock_lock(lVar2 + 0x20);
  auVar1 = *(undefined1 (*) [16])(lVar2 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(lVar2 + 0x18));
  _os_unfair_lock_unlock(lVar2 + 0x20);
  return auVar1;
}

