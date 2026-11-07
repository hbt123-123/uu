// rea decompile_all
// name: FUN_1006655fc
// address: 0x1006655fc
// body: available
// range: 0x1006655fc-0x10066567b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006655fc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar2 = param_2;
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC();
  _swift_bridgeObjectRelease(param_2);
  if (uVar2 >> 0x3c < 0xf) {
    FUN_100665cbc(param_1,uVar2);
    FUN_100628ae0();
    FUN_100006cc8(param_1,uVar2);
  }
  return puVar1;
}

