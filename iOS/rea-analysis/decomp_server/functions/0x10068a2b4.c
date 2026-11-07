// rea decompile_all
// name: FUN_10068a2b4
// address: 0x10068a2b4
// body: available
// range: 0x10068a2b4-0x10068a347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10068a2b4(void)

{
  byte bVar1;
  ID IVar2;
  undefined *self;
  uint uVar3;
  int iVar4;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"initWithInteger:",(ulong)bVar1 & 1);
    if (IVar2 == 0) goto LAB_10068a32c;
  }
  else {
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
LAB_10068a32c:
      uVar3 = 0;
      iVar4 = 1;
      goto LAB_10068a334;
    }
    IVar2 = *(ID *)(unaff_x20 + 0x20);
  }
  IVar2 = _objc_msgSend(IVar2,"shortValue");
  iVar4 = 0;
  uVar3 = (uint)IVar2 & 0xffff;
LAB_10068a334:
  return uVar3 | iVar4 << 0x10;
}

