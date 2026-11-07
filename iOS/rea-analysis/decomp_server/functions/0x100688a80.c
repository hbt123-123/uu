// rea decompile_all
// name: FUN_100688a80
// address: 0x100688a80
// body: available
// range: 0x100688a80-0x100688b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100688a80(undefined8 param_1)

{
  byte bVar1;
  ID self;
  undefined *self_00;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self_00 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    self = _objc_msgSend((ID)self_00,"initWithInteger:",(ulong)bVar1 & 1);
    if (self == 0) goto LAB_100688afc;
  }
  else {
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
LAB_100688afc:
      param_1 = 0;
      uVar2 = 1;
      goto LAB_100688b00;
    }
    self = *(ID *)(unaff_x20 + 0x20);
  }
  _objc_msgSend(self,"doubleValue");
  uVar2 = 0;
LAB_100688b00:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}

