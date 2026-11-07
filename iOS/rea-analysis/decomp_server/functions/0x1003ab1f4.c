// rea decompile_all
// name: FUN_1003ab1f4
// address: 0x1003ab1f4
// body: available
// range: 0x1003ab1f4-0x1003ab253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ab1f4(void)

{
  long lVar1;
  long lVar2;
  undefined *self;
  ID IVar3;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_1003ab028(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar2 = lVar1;
  __sS2ayxGycfC();
  unaff_x20[2] = lVar2;
  __sS2ayxGycfC();
  unaff_x20[3] = lVar1;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)self,"init");
  unaff_x20[4] = IVar3;
  return;
}

