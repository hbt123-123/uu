// rea decompile_all
// name: FUN_1006893cc
// address: 0x1006893cc
// body: available
// range: 0x1006893cc-0x100689473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1006893cc(ID *param_1)

{
  byte bVar1;
  ID IVar2;
  undefined *self;
  undefined1 uVar3;
  ID unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"initWithInteger:",(ulong)bVar1);
    if (IVar2 == 0) goto LAB_100689448;
  }
  else {
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
LAB_100689448:
      IVar2 = 0;
      uVar3 = 1;
      goto LAB_100689450;
    }
    IVar2 = *(ID *)(unaff_x20 + 0x20);
  }
  IVar2 = _objc_msgSend(IVar2,"integerValue");
  uVar3 = 0;
LAB_100689450:
  *param_1 = IVar2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_100689474;
  return auVar4;
}

