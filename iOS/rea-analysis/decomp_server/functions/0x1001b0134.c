// rea decompile_all
// name: FUN_1001b0134
// address: 0x1001b0134
// body: available
// range: 0x1001b0134-0x1001b0207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b0134(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  __ss11_StringGutsV4growyySiF(0x38);
  __sSS6appendyySSF(0x1000000000000036,0x800000010089b5d0);
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (*(undefined **)(param_2 + 0x40) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x40);
  }
  _swift_bridgeObjectRetain();
  puVar2 = PTR___sSSN_1009957f8;
  puVar3 = puVar1;
  puVar4 = PTR___sSSN_1009957f8;
  __sSa11descriptionSSvg(puVar1,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(puVar3,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = puVar2;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

