// rea decompile_all
// name: FUN_1003e8774
// address: 0x1003e8774
// body: available
// range: 0x1003e8774-0x1003e87c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e8774(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100a76740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100a76738;
  FUN_100004c48(&DAT_100a76738,&DAT_10080b238);
  puVar2 = PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_100996328;
  _swift_getWitnessTable(PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_100996328,puVar1)
  ;
  DAT_100a76740 = puVar2;
  return;
}

