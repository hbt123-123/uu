// rea decompile_all
// name: FUN_1004832b0
// address: 0x1004832b0
// body: available
// range: 0x1004832b0-0x1004832ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004832b0(void)

{
  byte *pbVar1;
  
  if (DAT_100aa0ad8 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_10082dbcc;
  _swift_getWitnessTable(&BYTE_10082dbcc,&DAT_1009c50b8);
  DAT_100aa0ad8 = pbVar1;
  return;
}

