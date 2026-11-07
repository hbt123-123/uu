// rea decompile_all
// name: FUN_1006499d4
// address: 0x1006499d4
// body: available
// range: 0x1006499d4-0x100649a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100649a34 to 0x1007dc034 _$sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE5index_8offsetByA2B_SitF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006499d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_10084b030;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10084b030,param_4);
  __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE5index_8offsetByA2B_SitF
            (param_1,param_2,param_3,param_4,pTVar1,PTR___sSiSxsWP_1009959a0);
  return;
}

