// rea decompile_all
// name: SentryCrashIntegration::uninstall
// address: 0x10078b29c
// body: available
// range: 0x10078b29c-0x10078b30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078b308 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashIntegration::uninstall(ID param_1,SEL param_2)

{
  ID self;
  
  if (DAT_100b2e108 != 0) {
    objc_stub::FUN_1007f79c0(DAT_100b2e108);
    DAT_100b2e110 = 0;
  }
  FUN_10076c1c8(0);
  self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::FUN_1007f05e0
            (self,param_1,*(undefined8 *)PTR__NSCurrentLocaleDidChangeNotification_100995330,0);
  return;
}

