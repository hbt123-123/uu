// rea decompile_all
// name: SentryInstallation::idWithCacheDirectoryPathNonCached:
// address: 0x100761430
// body: available
// range: 0x100761430-0x1007614bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007614bc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryInstallation::idWithCacheDirectoryPathNonCached_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *self;
  
  IVar1 = objc_stub::FUN_1007ec920((ID)&objc::class_t::SentryInstallation);
  IVar1 = objc_stub::dataWithContentsOfFile_((ID)&_OBJC_CLASS___NSData,IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    IVar1 = objc_stub::initWithData_encoding_((ID)self,IVar1,4);
  }
  return IVar1;
}

