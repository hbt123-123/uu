// rea decompile_all
// name: FUN_1003e4720
// address: 0x1003e4720
// body: available
// range: 0x1003e4720-0x1003e47c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e4720(long *param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*param_1 + 0x50);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_1 + 2,auStack_48,0x21,0);
  uVar1 = 0;
  __sSaMa(0,lVar2);
  __sSa6appendyyxnF(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1);
  _swift_endAccess(auStack_48);
  return;
}

