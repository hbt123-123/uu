// rea decompile_all
// name: FUN_100318f44
// address: 0x100318f44
// body: available
// range: 0x100318f44-0x100318f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100318f5c to 0x100318ed0 FUN_100318ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100318f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *unaff_x20;
  
  FUN_100318ed0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_4 + 0x10),param_2
                ,param_3);
  return;
}

