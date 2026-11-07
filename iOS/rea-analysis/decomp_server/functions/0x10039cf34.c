// rea decompile_all
// name: FUN_10039cf34
// address: 0x10039cf34
// body: available
// range: 0x10039cf34-0x10039d007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10039cf34(int param_1,byte param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)puVar1,"init");
  *(ID *)(unaff_x20 + 0x20) = IVar2;
  puVar1 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)puVar1,"init");
  *(ID *)(unaff_x20 + 0x28) = IVar2;
  lVar3 = 0;
  FUN_1003a9b64();
  _swift_allocObject();
  if (param_1 < 0) {
    _swift_deallocPartialClassInstance();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    *(int *)(lVar3 + 0x10) = param_1;
    *(byte *)(lVar3 + 0x14) = param_2 & 1;
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  return unaff_x20;
}

