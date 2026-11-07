// rea decompile_all
// name: FUN_100398ca4
// address: 0x100398ca4
// body: available
// range: 0x100398ca4-0x100398d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100398ca4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  _objc_msgSend(*(ID *)((long)unaff_x20 + *(long *)(lVar2 + 0x60)),"lock");
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0x21,0);
  lVar1 = 0;
  __sSqMa(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))((long)unaff_x20 + lVar3,param_1,lVar1);
  _swift_endAccess(auStack_48);
  _objc_msgSend(*(ID *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60)),"unlock");
  return;
}

