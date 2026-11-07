// rea decompile_all
// name: SADatabaseInterceptor::interceptorWithParam:
// address: 0x10070d878
// body: available
// range: 0x10070d878-0x10070da0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070da0c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SADatabaseInterceptor::interceptorWithParam_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID self;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::SADatabaseInterceptor;
  local_50 = param_1;
  self = SAInterceptor::interceptorWithParam_((ID)&local_50,"interceptorWithParam:",param_3);
  pcVar2 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(param_3,&cf_database_name);
  pcVar1 = &cf_message_v2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar2;
  }
  IVar3 = SAFileStorePlugin::filePath_((ID)&objc::class_t::SAFileStorePlugin,(ID)pcVar1);
  IVar4 = SAFlowManager::sharedInstance((ID)&objc::class_t::SAFlowManager);
  IVar4 = SAFlowManager::configOptions(IVar4);
  IVar4 = objc_stub::databaseFilePath(IVar4);
  if ((IVar4 != 0) && (IVar5 = objc_stub::hasSuffix_(IVar4,&cf__plist), (int)IVar5 != 0)) {
    IVar3 = IVar4;
  }
  IVar3 = SAEventStore::eventStoreWithFilePath_((ID)&objc::class_t::SAEventStore,IVar3);
  objc_stub::setEventStore_(self,IVar3);
  return self;
}

