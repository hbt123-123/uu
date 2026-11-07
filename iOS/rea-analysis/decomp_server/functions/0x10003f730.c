// rea decompile_all
// name: FUN_10003f730
// address: 0x10003f730
// body: available
// range: 0x10003f730-0x10003f793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10003f730(int param_1,int param_2)

{
  bool bVar1;
  ID IVar2;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + 0x10);
  IVar2 = _objc_msgSend(self,"screenId");
  if ((int)IVar2 == param_1) {
    bVar1 = false;
  }
  else {
    IVar2 = _objc_msgSend(self,"videoTrackIndex");
    bVar1 = (int)IVar2 == param_2;
  }
  return bVar1;
}

