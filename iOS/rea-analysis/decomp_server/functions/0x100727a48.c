// rea decompile_all
// name: SACommonUtility::saveUserAgent:
// address: 0x100727a48
// body: available
// range: 0x100727a48-0x100727b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100727b04 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SACommonUtility::saveUserAgent_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *self;
  ID IVar2;
  ID self_00;
  
  bVar1 = SAValidator::isValidString_((ID)&objc::class_t::SAValidator,param_3);
  if (bVar1 != 0) {
    self = &_OBJC_CLASS___NSDictionary;
    _objc_alloc();
    IVar2 = objc_stub::initWithObjectsAndKeys_((ID)self,param_3);
    self_00 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    NSUserDefaults::registerDefaults_(self_00,IVar2);
    IVar2 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    NSUserDefaults::synchronize(IVar2);
  }
  return;
}

