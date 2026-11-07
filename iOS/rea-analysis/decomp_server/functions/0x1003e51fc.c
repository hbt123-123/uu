// rea decompile_all
// name: FUN_1003e51fc
// address: 0x1003e51fc
// body: available
// range: 0x1003e51fc-0x1003e5287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e51fc(byte *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_2;
  _swift_beginAccess(param_2 + 2,auStack_48,0,0);
  uVar1 = 0;
  __sSaMa(0,*(undefined8 *)(lVar3 + 0x50));
  puVar2 = PTR___sSayxGSlsMc_1009958b0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  *param_1 = (byte)uVar1 & 1;
  return;
}

