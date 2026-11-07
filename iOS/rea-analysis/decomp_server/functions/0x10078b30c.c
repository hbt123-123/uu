// rea decompile_all
// name: SentryCrashIntegration::configureScope
// address: 0x10078b30c
// body: available
// range: 0x10078b30c-0x10078b3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashIntegration::configureScope(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  local_48 = PTR___NSConcreteStackBlock_100995490;
  local_40 = 0xc2000000;
  local_38 = FUN_10078b3c8;
  puStack_30 = &DAT_1009e8a68;
  local_28 = param_1;
  objc_stub::FUN_1007e6f40(IVar1,&local_48);
  IVar1 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::addObserver_selector_name_object_
            (IVar1,param_1,"currentLocaleDidChange",
             *(undefined8 *)PTR__NSCurrentLocaleDidChangeNotification_100995330,0);
  return;
}

