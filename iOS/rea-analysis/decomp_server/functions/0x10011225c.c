// rea decompile_all
// name: FUN_10011225c
// address: 0x10011225c
// body: available
// range: 0x10011225c-0x10011234f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011225c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  __ss11_StringGutsV4growyySiF(0x43);
  __sSS6appendyySSF(0xd000000000000032,0x800000010088bd90);
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  __sSa11descriptionSSvg(param_2,PTR___ss6UInt32VN_100995dc0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x5364656c69616620,0xed00003a73746f6c);
  puVar1 = PTR___sSiN_100995968;
  __sSa11descriptionSSvg(param_3,PTR___sSiN_100995968);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

