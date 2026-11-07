// rea decompile_all
// name: SAReferrerManager::propertiesWithURL:eventProperties:
// address: 0x100726fc4
// body: available
// range: 0x100726fc4-0x100727247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x20 bytes */

ID SAReferrerManager::propertiesWithURL_eventProperties_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID local_58;
  
  IVar1 = currentScreenUrl(param_1);
  setReferrerURL_(param_1,IVar1);
  IVar1 = currentScreenProperties(param_1);
  setReferrerProperties_(param_1,IVar1);
  IVar1 = NSMutableDictionary::dictionaryWithDictionary_
                    ((ID)&_OBJC_CLASS___NSMutableDictionary,param_4);
  IVar2 = NSMutableDictionary::objectForKeyedSubscript_(IVar1,&cf__url);
  if (IVar2 == 0) {
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,param_3,&cf__url);
  }
  IVar2 = referrerURL(param_1);
  if ((IVar2 != 0) &&
     (IVar2 = NSMutableDictionary::objectForKeyedSubscript_(IVar1,&cf__referrer), IVar2 == 0)) {
    IVar2 = referrerURL(param_1);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,IVar2,&cf__referrer);
  }
  IVar2 = NSMutableDictionary::dictionaryWithDictionary_
                    ((ID)&_OBJC_CLASS___NSMutableDictionary,IVar1);
  NSMutableDictionary::removeObjectForKey_(IVar2,&cf__referrer);
  IVar2 = NSMutableDictionary::copy(IVar2);
  setCurrentScreenProperties_(param_1,IVar2);
  IVar2 = NSMutableDictionary::objectForKeyedSubscript_(IVar1,&cf__url);
  setCurrentScreenUrl_(param_1,IVar2);
  IVar2 = serialQueue(param_1);
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0xc2000000;
  local_70 = FUN_100727248;
  puStack_68 = &DAT_1009e7980;
  local_60 = param_1;
  local_58 = IVar1;
  _dispatch_async(IVar2,&local_80);
  return IVar1;
}

