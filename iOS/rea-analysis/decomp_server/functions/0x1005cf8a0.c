// rea decompile_all
// name: FUN_1005cf8a0
// address: 0x1005cf8a0
// body: available
// range: 0x1005cf8a0-0x1005cf8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005cf8e8 to 0x1007db0ec _$s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cf8a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  pTVar1 = &TargetProtocolConformanceDescriptor_10083f108;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10083f108,param_3);
  __s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ(uVar2,uVar3,param_3,pTVar1);
  return;
}

