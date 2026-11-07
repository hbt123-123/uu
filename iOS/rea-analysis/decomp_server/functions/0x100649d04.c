// rea decompile_all
// name: FUN_100649d04
// address: 0x100649d04
// body: available
// range: 0x100649d04-0x100649d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100649d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_38;
  
  local_38 = *param_1;
  pTVar1 = &TargetProtocolConformanceDescriptor_10084b030;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10084b030);
  (*param_4)(param_1,&local_38,param_2,pTVar1,PTR___sSiSxsWP_1009959a0);
  return;
}

