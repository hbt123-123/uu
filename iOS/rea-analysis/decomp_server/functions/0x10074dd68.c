// rea decompile_all
// name: SentrySdkInfo::initWithDict:
// address: 0x10074dd68
// body: available
// range: 0x10074dd68-0x10074e3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074e3b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySdkInfo::initWithDict_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ID IVar10;
  ID IVar11;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  undefined8 local_2d0;
  long lStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  long lStack_288;
  long *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  long lStack_248;
  long *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  ID IStack_200;
  ID local_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = &_OBJC_CLASS___NSMutableSet;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)puVar1);
  puVar1 = &_OBJC_CLASS___NSMutableSet;
  _objc_alloc();
  IVar3 = objc_stub::init((ID)puVar1);
  puVar1 = &_OBJC_CLASS___NSMutableSet;
  _objc_alloc();
  IVar4 = objc_stub::init((ID)puVar1);
  IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_name);
  IVar6 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar5 = objc_stub::isKindOfClass_(IVar5,IVar6);
  if ((int)IVar5 == 0) {
    local_2e8 = &cf___;
  }
  else {
    local_2e8 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(param_3,&cf_name);
  }
  IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_version);
  IVar6 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar5 = objc_stub::isKindOfClass_(IVar5,IVar6);
  if ((int)IVar5 == 0) {
    local_2f0 = &cf___;
  }
  else {
    local_2f0 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(param_3,&cf_version);
  }
  IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_integrations);
  IVar6 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar5 = objc_stub::isKindOfClass_(IVar5,IVar6);
  if ((int)IVar5 != 0) {
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    local_240 = (long *)0x0;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_integrations);
    IVar6 = objc_stub::countByEnumeratingWithState_objects_count_(IVar5,&local_250,auStack_f0,0x10);
    if (IVar6 != 0) {
      lVar9 = *local_240;
      do {
        IVar10 = 0;
        do {
          if (*local_240 != lVar9) {
            _objc_enumerationMutation(IVar5);
          }
          IVar11 = *(ID *)(lStack_248 + IVar10 * 8);
          IVar7 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
          IVar7 = objc_stub::isKindOfClass_(IVar11,IVar7);
          if ((int)IVar7 != 0) {
            objc_stub::addObject_(IVar2,IVar11);
          }
          IVar10 = IVar10 + 1;
        } while (IVar6 != IVar10);
        IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar5,&local_250,auStack_f0,0x10);
      } while (IVar6 != 0);
    }
  }
  IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_features);
  IVar6 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar5 = objc_stub::isKindOfClass_(IVar5,IVar6);
  if ((int)IVar5 != 0) {
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    local_280 = (long *)0x0;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_features);
    IVar6 = objc_stub::countByEnumeratingWithState_objects_count_(IVar5,&local_290,auStack_170,0x10)
    ;
    if (IVar6 != 0) {
      lVar9 = *local_280;
      do {
        IVar10 = 0;
        do {
          if (*local_280 != lVar9) {
            _objc_enumerationMutation(IVar5);
          }
          IVar11 = *(ID *)(lStack_288 + IVar10 * 8);
          IVar7 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
          IVar7 = objc_stub::isKindOfClass_(IVar11,IVar7);
          if ((int)IVar7 != 0) {
            objc_stub::addObject_(IVar3,IVar11);
          }
          IVar10 = IVar10 + 1;
        } while (IVar6 != IVar10);
        IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar5,&local_290,auStack_170,0x10);
      } while (IVar6 != 0);
    }
  }
  IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_packages);
  IVar6 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
  IVar5 = objc_stub::isKindOfClass_(IVar5,IVar6);
  if ((int)IVar5 != 0) {
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    lStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    local_2c0 = (long *)0x0;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_packages);
    IVar6 = objc_stub::countByEnumeratingWithState_objects_count_(IVar5,&local_2d0,auStack_1f0,0x10)
    ;
    if (IVar6 != 0) {
      lVar9 = *local_2c0;
      do {
        IVar10 = 0;
        do {
          if (*local_2c0 != lVar9) {
            _objc_enumerationMutation(IVar5);
          }
          IVar11 = *(ID *)(lStack_2c8 + IVar10 * 8);
          IVar7 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
          IVar7 = objc_stub::isKindOfClass_(IVar11,IVar7);
          if ((int)IVar7 != 0) {
            IVar7 = objc_stub::objectForKeyedSubscript_(IVar11,&cf_name);
            IVar8 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar7 = objc_stub::isKindOfClass_(IVar7,IVar8);
            if ((int)IVar7 != 0) {
              IVar7 = objc_stub::objectForKeyedSubscript_(IVar11,&cf_version);
              IVar8 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
              IVar7 = objc_stub::isKindOfClass_(IVar7,IVar8);
              if ((int)IVar7 != 0) {
                local_210 = &cf_name;
                IStack_200 = objc_stub::objectForKeyedSubscript_(IVar11);
                local_208 = &cf_version;
                local_1f8 = objc_stub::objectForKeyedSubscript_(IVar11);
                IVar7 = objc_stub::dictionaryWithObjects_forKeys_count_
                                  ((ID)&_OBJC_CLASS___NSDictionary,&IStack_200,&local_210,2);
                objc_stub::addObject_(IVar4,IVar7);
              }
            }
          }
          IVar10 = IVar10 + 1;
        } while (IVar6 != IVar10);
        IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar5,&local_2d0,auStack_1f0,0x10);
      } while (IVar6 != 0);
    }
  }
  IVar2 = objc_stub::allObjects(IVar2);
  IVar3 = objc_stub::allObjects(IVar3);
  IVar4 = objc_stub::allObjects(IVar4);
  IVar2 = objc_stub::FUN_1007ebe60(param_1,local_2e8,local_2f0,IVar2,IVar3,IVar4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

