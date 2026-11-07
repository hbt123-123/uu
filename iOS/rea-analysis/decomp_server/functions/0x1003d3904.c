// rea decompile_all
// name: FUN_1003d3904
// address: 0x1003d3904
// body: available
// range: 0x1003d3904-0x1003d3973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d3970 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d3904(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x745f64616f6c7075;
  if (*unaff_x20 == '\0') {
    uVar1 = 0x615f656369766564;
  }
  uVar2 = 0xeb00000000657079;
  if (*unaff_x20 == '\0') {
    uVar2 = 0xef7473696c5f7070;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return;
}

