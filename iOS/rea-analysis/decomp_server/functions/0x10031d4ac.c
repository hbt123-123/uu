// rea decompile_all
// name: FUN_10031d4ac
// address: 0x10031d4ac
// body: available
// range: 0x10031d4ac-0x10031d53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031d4ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  int unaff_w20;
  long lVar1;
  
  _swift_getEnumCaseMultiPayload();
  if (unaff_w20 == 1) {
    lVar1 = *(long *)(param_2 + 0x18);
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_3);
    FUN_100328f14(param_3,lVar1,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x20))(param_1);
  }
  return;
}

