// rea decompile_all
// name: thunk_FUN_1000964e4
// address: 0x1000964e0
// body: available
// range: 0x1000964e0-0x1000964e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1000964e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100104c10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_1000d5dac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d5dac,&DAT_1000fa2d8);
  DAT_100104c10 = pTVar1;
  return;
}

