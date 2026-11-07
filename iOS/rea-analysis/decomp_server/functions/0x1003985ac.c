// rea decompile_all
// name: FUN_1003985ac
// address: 0x1003985ac
// body: available
// range: 0x1003985ac-0x10039866b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003985ac(undefined8 param_1)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),1,1,lVar1);
  lVar3 = *(long *)(*unaff_x20 + 0x60);
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)((long)unaff_x20 + lVar3) = IVar2;
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar4,auStack_48,0x21,0);
  lVar3 = 0;
  __sSqMa(0,lVar1);
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))((long)unaff_x20 + lVar4,param_1,lVar3);
  _swift_endAccess(auStack_48);
  return;
}

