// rea decompile_all
// name: FUN_100039c08
// address: 0x100039c08
// body: available
// range: 0x100039c08-0x100039ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_100039c08(double param_1,double param_2,undefined8 param_3,double param_4,ID param_5)

{
  ID self;
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  self = 0;
  dVar1 = param_1;
  dVar2 = param_2;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  thunk_FUN_1003d7218();
  if (self == 0) {
    _objc_msgSend(param_5,"frame");
  }
  else {
    _objc_msgSend(self,"frame");
  }
  param_2 = param_4 - param_2;
  _objc_msgSend(param_5,"frame");
  _objc_msgSend(param_5,"frame");
  _objc_msgSend(param_5,"frame");
  auVar3._8_8_ = param_4 - (param_2 - dVar2);
  auVar3._0_8_ = param_1 - dVar1;
  return auVar3;
}

