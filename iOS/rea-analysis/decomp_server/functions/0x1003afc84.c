// rea decompile_all
// name: FUN_1003afc84
// address: 0x1003afc84
// body: available
// range: 0x1003afc84-0x1003afceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003afc84(void)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  long unaff_x20;
  
  _swift_allocObject();
  __s8Dispatch0A4TimeV17uptimeNanosecondsACs6UInt64V_tcfC
            (unaff_x20 + _TtC8UUCommon23PromiseFrequencyLimiter::last,0);
  lVar1 = _TtC8UUCommon23PromiseFrequencyLimiter::lock;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  return unaff_x20;
}

