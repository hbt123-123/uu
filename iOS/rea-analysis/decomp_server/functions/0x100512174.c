// rea decompile_all
// name: FUN_100512174
// address: 0x100512174
// body: available
// range: 0x100512174-0x1005121f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005121f0 to 0x1007db7d0 _$sSH4hash4intoys6HasherVz_tFTj (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100512174(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,0x100900ffc,&TargetProtocolRequirement_10090100c);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar1,uVar2,0x100900ffc,&TargetProtocolRequirement_100901004);
  __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar2,uVar3);
  return;
}

