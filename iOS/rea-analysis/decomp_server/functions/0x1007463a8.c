// rea decompile_all
// name: SentryMetricKitIntegration::getFirstUnprocessedSubFrames:processedFrameAddresses:
// address: 0x1007463a8
// body: available
// range: 0x1007463a8-0x100746497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100746494 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryMetricKitIntegration::getFirstUnprocessedSubFrames_processedFrameAddresses_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  local_58 = PTR___NSConcreteStackBlock_100995490;
  local_50 = 0xc2000000;
  local_48 = FUN_100746498;
  puStack_40 = &DAT_1009e8a38;
  local_38 = param_4;
  IVar1 = NSPredicate::predicateWithBlock_((ID)&_OBJC_CLASS___NSPredicate,&local_58);
  IVar1 = objc_stub::filteredArrayUsingPredicate_(param_3,IVar1);
  IVar1 = objc_stub::firstObject(IVar1);
  return IVar1;
}

