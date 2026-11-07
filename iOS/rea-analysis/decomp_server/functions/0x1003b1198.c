// rea decompile_all
// name: FUN_1003b1198
// address: 0x1003b1198
// body: available
// range: 0x1003b1198-0x1003b1243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b1210 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b1198(undefined8 param_1)

{
  ID self;
  undefined8 uVar1;
  
  if (DAT_100a89258 != -1) {
    _swift_once(&DAT_100a89258,FUN_1003b1084);
  }
  self = DAT_100a8bc10;
  _objc_msgSend(DAT_100a8bc10,"lock");
  if (DAT_100a89260 != -1) {
    _swift_once(&DAT_100a89260,FUN_1003b10b4);
  }
  FUN_1003b12ec();
  uVar1 = DAT_100a8bc18;
  DAT_100a8bc18 = param_1;
  _swift_release(uVar1);
  _objc_msgSend(self,"unlock");
  return;
}

