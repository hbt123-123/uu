// rea decompile_all
// name: FUN_1005d1ca8
// address: 0x1005d1ca8
// body: available
// range: 0x1005d1ca8-0x1005d1d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d1ca8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"lock");
    lVar1 = param_1 + 0x28;
    _swift_unknownObjectWeakLoadStrong();
    lVar3 = *(long *)(param_1 + 0x30);
    _objc_msgSend(*(ID *)(param_1 + 0x20),"unlock");
    if (lVar1 != 0) {
      lVar2 = lVar1;
      _swift_getObjectType(lVar1);
      (**(code **)(lVar3 + 0x10))(param_1,lVar2,lVar3);
      _swift_unknownObjectRelease(lVar1);
    }
    _swift_release(param_1);
  }
  return;
}

