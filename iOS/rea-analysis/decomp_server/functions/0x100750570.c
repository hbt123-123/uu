// rea decompile_all
// name: FUN_100750570
// address: 0x100750570
// body: available
// range: 0x100750570-0x100750b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100750b04 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100750b08 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100750570(ID param_1,ID param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 local_170;
  long lStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *local_128;
  undefined8 local_120;
  code *local_118;
  undefined *puStack_110;
  ID local_108;
  cfstringStruct *local_100;
  ID IStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profile);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_samples);
  self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profile);
  IVar2 = objc_stub::mutableCopy(IVar2);
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_128 = PTR___NSConcreteStackBlock_100995490;
  local_120 = 0xc2000000;
  local_118 = FUN_100751fd8;
  puStack_110 = &DAT_1009e8bf0;
  local_108 = IVar3;
  objc_stub::enumerateObjectsUsingBlock_(IVar1,&local_128);
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_samples);
  objc_stub::setObject_forKeyedSubscript_(self,IVar2,&cf_profile);
  objc_stub::setObject_forKeyedSubscript_(self,&cf_2,&cf_version);
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = (long *)0x0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_5,&local_170,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_160;
    do {
      IVar3 = 0;
      do {
        if (*local_160 != lVar5) {
          _objc_enumerationMutation(param_5);
        }
        IVar4 = objc_stub::serialize(*(ID *)(lStack_168 + IVar3 * 8));
        objc_stub::addObject_(IVar1,IVar4);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_5,&local_170,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    local_100 = &cf_images;
    IStack_f8 = IVar1;
    IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&IStack_f8,&local_100,1);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_debug_meta);
  }
  IVar1 = objc_stub::sentryIdString(param_2);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_chunk_id);
  IVar1 = objc_stub::sentryIdString(param_1);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_profiler_id);
  IVar1 = objc_stub::scope(param_6);
  IVar1 = objc_stub::FUN_1007e9320(IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::getClient(param_6);
    IVar1 = objc_stub::options(IVar1);
    IVar1 = objc_stub::environment(IVar1);
  }
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_environment);
  IVar1 = objc_stub::getClient(param_6);
  IVar1 = objc_stub::options(IVar1);
  IVar1 = objc_stub::releaseName(IVar1);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_release);
  objc_stub::setObject_forKeyedSubscript_(self,&cf_cocoa,&cf_platform);
  IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = objc_stub::FUN_1007f0f40((ID)&objc::class_t::SentryMeta);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_name);
  IVar2 = objc_stub::FUN_1007f8120((ID)&objc::class_t::SentryMeta);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_version);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_client_sdk);
  IVar1 = objc_stub::count(param_4);
  if (IVar1 != 0) {
    objc_stub::setObject_forKeyedSubscript_(self,param_4,&cf_measurements);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

