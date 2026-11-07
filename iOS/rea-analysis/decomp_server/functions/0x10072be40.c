// rea decompile_all
// name: SAAppLifecycle::setupListeners
// address: 0x10072be40
// body: available
// range: 0x10072be40-0x10072bf1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072bf1c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SAAppLifecycle::setupListeners(ID param_1,SEL param_2)

{
  bool bVar1;
  ID self;
  
  bVar1 = SAApplication::isAppExtension((ID)&objc::class_t::SAApplication);
  if ((bVar1 & 1) != 0) {
    return;
  }
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_
            (self,param_1,"applicationDidFinishLaunching:",
             *(undefined8 *)PTR__NSApplicationDidFinishLaunchingNotification_100995410,0);
  NSNotificationCenter::addObserver_selector_name_object_
            (self,param_1,"applicationDidBecomeActive:",
             *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_100995400,0);
  NSNotificationCenter::addObserver_selector_name_object_
            (self,param_1,"applicationDidResignActive:",
             *(undefined8 *)PTR__NSApplicationDidResignActiveNotification_100995418,0);
  NSNotificationCenter::addObserver_selector_name_object_
            (self,param_1,"applicationWillTerminate:",
             *(undefined8 *)PTR__NSApplicationWillTerminateNotification_100995428,0);
  return;
}

