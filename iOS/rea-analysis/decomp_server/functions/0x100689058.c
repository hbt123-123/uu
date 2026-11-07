// rea decompile_all
// name: FUN_100689058
// address: 0x100689058
// body: available
// range: 0x100689058-0x10068910b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100689058(undefined4 param_1,long *param_2)

{
  byte bVar1;
  ID self;
  undefined *self_00;
  undefined1 uVar2;
  long unaff_x20;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  *param_2 = unaff_x20;
  uVar3 = 0;
  if (*(char *)(unaff_x20 + 0x31) == '\x02') {
    bVar1 = *(byte *)(unaff_x20 + 0x30);
    self_00 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    self = _objc_msgSend((ID)self_00,"initWithInteger:",(ulong)bVar1);
    if (self == 0) goto LAB_1006890e0;
  }
  else {
    if (*(char *)(unaff_x20 + 0x31) != '\0') {
LAB_1006890e0:
      uVar2 = 1;
      goto LAB_1006890e4;
    }
    self = *(ID *)(unaff_x20 + 0x20);
  }
  _objc_msgSend(self,"floatValue");
  uVar2 = 0;
  uVar3 = param_1;
LAB_1006890e4:
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined1 *)((long)param_2 + 0xc) = uVar2;
  auVar4._8_8_ = param_2 + 1;
  auVar4._0_8_ = FUN_10068910c;
  return auVar4;
}

