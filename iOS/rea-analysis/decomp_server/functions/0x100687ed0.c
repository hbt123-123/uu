// rea decompile_all
// name: FUN_100687ed0
// address: 0x100687ed0
// body: available
// range: 0x100687ed0-0x100687f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100687ed0(ID *param_1)

{
  byte bVar1;
  undefined *self;
  ID unaff_x20;
  ID IVar2;
  undefined1 auVar3 [16];
  
  param_1[1] = unaff_x20;
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"initWithInteger:",(ulong)bVar1);
  }
  else if (*(char *)(unaff_x20 + 0x31) == '\0') {
    IVar2 = *(ID *)(unaff_x20 + 0x20);
  }
  else {
    IVar2 = 0;
  }
  *param_1 = IVar2;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_100687f4c;
  return auVar3;
}

