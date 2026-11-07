// rea decompile_all
// name: SAPropertyValidator::validProperties:validator:
// address: 0x100718824
// body: available
// range: 0x100718824-0x100718a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100718a8c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100718a90 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

ID SAPropertyValidator::validProperties_validator_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  ID local_140;
  ID local_138 [3];
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = &_OBJC_CLASS___NSDictionary;
  _objc_opt_class(&_OBJC_CLASS___NSDictionary);
  IVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((IVar2 & 1) == 0) ||
     (IVar2 = objc_stub::conformsToProtocol_
                        (param_4,&objc::protocol_t::SAEventPropertyValidatorProtocol),
     (int)IVar2 == 0)) {
    local_140 = 0;
  }
  else {
    IVar2 = NSDictionary::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSDictionary,param_3);
    local_140 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    local_138[2] = 0;
    local_138[1] = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    IVar3 = NSDictionary::countByEnumeratingWithState_objects_count_
                      (IVar2,local_138 + 1,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar7 = *local_120;
      do {
        IVar6 = 0;
        do {
          if (*local_120 != lVar7) {
            _objc_enumerationMutation(IVar2);
          }
          uVar8 = *(undefined8 *)(local_138[2] + IVar6 * 8);
          IVar4 = NSDictionary::objectForKeyedSubscript_(IVar2,uVar8);
          local_138[0] = 0;
          IVar4 = objc_stub::sensorsdata_validKey_value_error_(param_4,uVar8,IVar4,local_138);
          if (local_138[0] != 0) {
            IVar5 = objc_stub::localizedDescription(local_138[0]);
            objc_stub::log_level_file_function_line_context_format_
                      ((ID)&objc::class_t::SALog,1,1,
                       "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/EventObject/SAPropertyValidator.m"
                       ,"+[SAPropertyValidator validProperties:validator:]",0x9e,0,&cf___,IVar5);
          }
          if (IVar4 != 0) {
            NSMutableDictionary::setObject_forKeyedSubscript_(local_140,IVar4,uVar8);
          }
          IVar6 = IVar6 + 1;
        } while (IVar3 != IVar6);
        IVar3 = NSDictionary::countByEnumeratingWithState_objects_count_
                          (IVar2,local_138 + 1,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return local_140;
}

