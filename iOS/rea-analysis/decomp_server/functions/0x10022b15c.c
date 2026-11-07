// rea decompile_all
// name: FUN_10022b15c
// address: 0x10022b15c
// body: available
// range: 0x10022b15c-0x10022b1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022b15c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess(lVar2 + 0x10,auStack_38,0,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *param_1 = *(undefined8 *)(lVar2 + 0x10);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}

