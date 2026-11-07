// rea decompile_all
// name: FUN_100260c08
// address: 0x100260c08
// body: available
// range: 0x100260c08-0x100260caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100260c08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(lVar4 + 0x10,auStack_48,0,0);
  lVar1 = *(long *)(lVar4 + 0x28);
  lVar2 = *(long *)(lVar4 + 0x30);
  lVar4 = lVar4 + 0x10;
  FUN_10003f030(lVar4,lVar1);
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  (**(code **)(lVar5 + 0x10))(auStack_50 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar4,lVar1);
  lVar4 = lVar1;
  (**(code **)(lVar2 + 8))(lVar1,lVar2);
  (**(code **)(lVar5 + 8))(auStack_50 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return (uint)lVar4 & 1;
}

