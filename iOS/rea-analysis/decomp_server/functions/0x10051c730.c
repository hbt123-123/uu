// rea decompile_all
// name: FUN_10051c730
// address: 0x10051c730
// body: available
// range: 0x10051c730-0x10051c78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10051c730(undefined8 param_1)

{
  _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
  _swift_bridgeObjectRetain(param_1);
  FUN_100008184(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  FUN_100006cdc(0,0xc000000000000000);
  return param_1;
}

