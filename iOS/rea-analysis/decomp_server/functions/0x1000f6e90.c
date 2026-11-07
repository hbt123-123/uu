// rea decompile_all
// name: FUN_1000f6e90
// address: 0x1000f6e90
// body: available
// range: 0x1000f6e90-0x1000f6f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6e90(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x2f);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar4 = *param_2;
  uVar2 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  puVar1 = PTR___sSSN_1009957f8;
  puVar3 = PTR___sSSN_1009957f8;
  __sSD11descriptionSSvg();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(uVar2,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = puVar1;
  *param_1 = 0xd00000000000002d;
  param_1[1] = 0x8000000100889870;
  return;
}

