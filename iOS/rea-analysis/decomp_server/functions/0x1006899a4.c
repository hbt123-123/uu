// rea decompile_all
// name: FUN_1006899a4
// address: 0x1006899a4
// body: available
// range: 0x1006899a4-0x100689a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1006899a4(void)

{
  byte bVar1;
  ID IVar2;
  undefined *self;
  int iVar3;
  uint uVar4;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"initWithInteger:",(ulong)bVar1 & 1);
    if (IVar2 == 0) goto LAB_100689a18;
  }
  else {
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
LAB_100689a18:
      uVar4 = 0;
      iVar3 = 1;
      goto LAB_100689a20;
    }
    IVar2 = *(ID *)(unaff_x20 + 0x20);
  }
  IVar2 = _objc_msgSend(IVar2,"charValue");
  uVar4 = (uint)IVar2;
  iVar3 = 0;
LAB_100689a20:
  return uVar4 & 0xff | iVar3 << 8;
}

