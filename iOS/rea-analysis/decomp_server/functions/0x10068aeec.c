// rea decompile_all
// name: FUN_10068aeec
// address: 0x10068aeec
// body: available
// range: 0x10068aeec-0x10068af97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10068aeec(long *param_1)

{
  byte bVar1;
  ID IVar2;
  undefined *self;
  undefined1 uVar3;
  long unaff_x20;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  *param_1 = unaff_x20;
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"initWithInteger:",(ulong)bVar1);
    if (IVar2 == 0) goto LAB_10068af6c;
  }
  else {
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
LAB_10068af6c:
      uVar4 = 0;
      uVar3 = 1;
      goto LAB_10068af74;
    }
    IVar2 = *(ID *)(unaff_x20 + 0x20);
  }
  IVar2 = _objc_msgSend(IVar2,"unsignedIntValue");
  uVar4 = (undefined4)IVar2;
  uVar3 = 0;
LAB_10068af74:
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc) = uVar3;
  auVar5._8_8_ = param_1 + 1;
  auVar5._0_8_ = FUN_10068af98;
  return auVar5;
}

