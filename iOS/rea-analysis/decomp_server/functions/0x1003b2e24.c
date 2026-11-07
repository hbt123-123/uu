// rea decompile_all
// name: FUN_1003b2e24
// address: 0x1003b2e24
// body: available
// range: 0x1003b2e24-0x1003b2e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b2e70 to 0x1007dbcb0 _$sSYsSHRzSH8RawValueSYRpzrlE4hash4intoys6HasherVz_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b2e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_1008211f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008211f8);
  __sSYsSHRzSH8RawValueSYRpzrlE4hash4intoys6HasherVz_tF
            (param_1,param_2,param_3,pTVar1,PTR___sSSSHsWP_100995808);
  return;
}

