// rea decompile_all
// name: SensorsAnalyticsSDK::trackTimerStart:
// address: 0x100723490
// body: available
// range: 0x100723490-0x1007235a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007235a0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SensorsAnalyticsSDK::trackTimerStart_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  ID IStack_48;
  
  bVar1 = checkEventName_(param_1,param_3);
  if (bVar1 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::generateEventIdByEventName_(*(ID *)(param_1 + 0x28),param_3);
    IVar3 = param_1;
    _objc_opt_class();
    IVar3 = objc_stub::getSystemUpTime(IVar3);
    IVar4 = serialQueue(param_1);
    local_78 = PTR___NSConcreteStackBlock_100995490;
    local_70 = 0xc2000000;
    local_68 = FUN_1007235a4;
    puStack_60 = &DAT_1009e7f78;
    local_58 = param_1;
    local_50 = IVar2;
    IStack_48 = IVar3;
    _dispatch_async(IVar4,&local_78);
  }
  return IVar2;
}

