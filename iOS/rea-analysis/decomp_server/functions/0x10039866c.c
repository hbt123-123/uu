// rea decompile_all
// name: FUN_10039866c
// address: 0x10039866c
// body: available
// range: 0x10039866c-0x10039878f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039866c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _objc_msgSend(*(ID *)((long)unaff_x20 + *(long *)(lVar3 + 0x60)),"lock");
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_68,0,0);
  (**(code **)(lVar4 + 0x10))(param_1,(long)unaff_x20 + lVar3,lVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_80 + -extraout_x8,1,1,lVar2);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_80,0x21,0);
  (**(code **)(lVar4 + 0x28))((long)unaff_x20 + lVar3,auStack_80 + -extraout_x8,lVar1);
  _swift_endAccess(auStack_80);
  _objc_msgSend(*(ID *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60)),"unlock");
  return;
}

