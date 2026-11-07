// rea decompile_all
// name: FUN_100649ca8
// address: 0x100649ca8
// body: available
// range: 0x100649ca8-0x100649cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100649cf4 to 0x1007dc01c _$sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE5index5afterA2B_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100649ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_10084b030;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10084b030);
  __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE5index5afterA2B_tF
            (param_1,param_2,param_3,pTVar1,PTR___sSiSxsWP_1009959a0);
  return;
}

