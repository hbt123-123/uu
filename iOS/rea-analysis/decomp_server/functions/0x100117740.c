// rea decompile_all
// name: FUN_100117740
// address: 0x100117740
// body: available
// range: 0x100117740-0x1001177b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100117740(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC14UURemoteServer15InputController::___lazy_storage___lock;
  IVar2 = *(ID *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___lock);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"init");
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}

