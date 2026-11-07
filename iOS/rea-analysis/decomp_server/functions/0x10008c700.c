// rea decompile_all
// name: FUN_10008c700
// address: 0x10008c700
// body: available
// range: 0x10008c700-0x10008c7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008c700(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  FUN_100005c00(0);
  uVar1 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  puVar2 = PTR___ss6UInt32VN_100995dc0;
  __sSD11descriptionSSvg();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(uVar1,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x100000000000002f;
  param_1[1] = 0x800000010087f980;
  return;
}

