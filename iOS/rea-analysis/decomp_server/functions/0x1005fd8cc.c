// rea decompile_all
// name: FUN_1005fd8cc
// address: 0x1005fd8cc
// body: available
// range: 0x1005fd8cc-0x1005fd90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fd8cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100aaf8e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100847188;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100847188,&DAT_1009dd0e0);
  DAT_100aaf8e0 = pTVar1;
  return;
}

