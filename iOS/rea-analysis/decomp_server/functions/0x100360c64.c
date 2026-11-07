// rea decompile_all
// name: FUN_100360c64
// address: 0x100360c64
// body: available
// range: 0x100360c64-0x100360d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100360cf8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100360c64(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  ulong *unaff_x20;
  
  self = param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *unaff_x20) + 0xd8))();
  if (self != 0) {
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_4);
    _objc_msgSend(self,"urlSession:dataTask:didReceive:",param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

