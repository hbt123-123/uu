// rea decompile_all
// name: SentryBreadcrumbTracker::addEnabledCrumb
// address: 0x10078a098
// body: available
// range: 0x10078a098-0x10078a117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078a114 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryBreadcrumbTracker::addEnabledCrumb(ID param_1,SEL param_2)

{
  class_t *self;
  ID self_00;
  ID self_01;
  
  self = &objc::class_t::SentryBreadcrumb;
  _objc_alloc();
  self_00 = objc_stub::FUN_1007ebc60((ID)self,2,&cf_started);
  objc_stub::setType_(self_00,&cf_debug);
  objc_stub::setMessage_(self_00,&cf_BreadcrumbTracking);
  self_01 = objc_stub::delegate(param_1);
  objc_stub::addBreadcrumb_(self_01,self_00);
  return;
}

