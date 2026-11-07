// rea decompile_all
// name: FUN_10000f5b4
// address: 0x10000f5b4
// body: available
// range: 0x10000f5b4-0x10000f6e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000f5b4(undefined8 param_1,double param_2,undefined8 param_3,double param_4)

{
  int iVar1;
  ID self;
  long unaff_x20;
  ID IVar2;
  
  NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
  self = _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"screenId");
  FUN_100027f54();
  if (self != 0) {
    IVar2 = _objc_msgSend(self,"frame");
    iVar1 = (int)IVar2;
    _CGRectContainsPoint();
    if (iVar1 != 0) {
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      IVar2 = self;
      thunk_FUN_1003d7218();
      if (IVar2 == 0) {
        _objc_msgSend(self,"frame");
      }
      else {
        _objc_msgSend(IVar2,"frame");
      }
      FUN_100039c08(param_1,param_4 - param_2,self);
    }
  }
  return;
}

