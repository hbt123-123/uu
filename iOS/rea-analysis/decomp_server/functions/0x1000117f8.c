// rea decompile_all
// name: FUN_1000117f8
// address: 0x1000117f8
// body: available
// range: 0x1000117f8-0x10001190f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10001190c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000117f8(void)

{
  ID IVar1;
  
  IVar1 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar1 = NSWorkspace::notificationCenter(IVar1,"notificationCenter");
  NSWorkspace::addObserver_selector_name_object_(IVar1,"addObserver:selector:name:object:");
  NSWorkspace::addObserver_selector_name_object_(IVar1,"addObserver:selector:name:object:");
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10002a598,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000020,
                0x800000010087b710,0x679,0);
  return 0;
}

