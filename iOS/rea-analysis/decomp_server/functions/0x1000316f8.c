// rea decompile_all
// name: FUN_1000316f8
// address: 0x1000316f8
// body: available
// range: 0x1000316f8-0x100031807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000316f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __ss11_StringGutsV4growyySiF(0x5a);
  __sSS6appendyySSF(0xd00000000000004e,0x8000000100879cc0);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x3a736b6361727420,0xe800000000000000);
  uVar3 = *(undefined8 *)(param_4 + 0x90);
  uVar1 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  FUN_100045da4();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = uVar1;
  puVar2 = PTR___ss6UInt32VN_100995dc0;
  __sSa11descriptionSSvg(uVar1,PTR___ss6UInt32VN_100995dc0);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(uVar3,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

