// rea decompile_all
// name: FUN_1002731b4
// address: 0x1002731b4
// body: available
// range: 0x1002731b4-0x10027325f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002731b4(void)

{
  undefined8 uVar1;
  undefined *self;
  undefined8 uVar2;
  ID IVar3;
  long *plVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2,uVar1);
  IVar3 = _objc_msgSend((ID)self,"initWithData:",uVar2);
  plVar4 = (long *)0x0;
  if (IVar3 == 0) {
    FUN_100262084();
    _swift_allocError(&DAT_1009a8e98,plVar4,0,0);
    *plVar4 = unaff_x20;
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 0;
    _swift_willThrow();
    _swift_retain();
  }
  return IVar3;
}

