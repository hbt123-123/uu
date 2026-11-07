// rea decompile_all
// name: SAJSONUtil::JSONSerializableObject:
// address: 0x1007149c8
// body: available
// range: 0x1007149c8-0x100714e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100714c64 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100714e08 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAJSONUtil::JSONSerializableObject_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  undefined *local_188;
  undefined8 local_180;
  code *local_178;
  undefined *puStack_170;
  ID local_168;
  ID local_160;
  ID local_158;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = &_OBJC_CLASS___NSNull;
  _objc_opt_class(&_OBJC_CLASS___NSNull);
  IVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((IVar5 & 1) == 0) {
    IVar5 = objc_stub::copy(param_3);
    puVar1 = &_OBJC_CLASS___NSString;
    _objc_opt_class(&_OBJC_CLASS___NSString);
    IVar2 = IVar5;
    _objc_opt_isKindOfClass(IVar5,puVar1);
    if ((IVar2 & 1) == 0) {
      puVar1 = &_OBJC_CLASS___NSNumber;
      _objc_opt_class(&_OBJC_CLASS___NSNumber);
      IVar2 = IVar5;
      _objc_opt_isKindOfClass(IVar5,puVar1);
      if ((IVar2 & 1) == 0) {
        puVar1 = &_OBJC_CLASS___NSArray;
        _objc_opt_class(&_OBJC_CLASS___NSArray);
        IVar2 = IVar5;
        _objc_opt_isKindOfClass(IVar5,puVar1);
        if ((IVar2 & 1) == 0) {
          puVar1 = &_OBJC_CLASS___NSSet;
          _objc_opt_class(&_OBJC_CLASS___NSSet);
          IVar2 = IVar5;
          _objc_opt_isKindOfClass(IVar5,puVar1);
          if ((IVar2 & 1) == 0) {
            puVar1 = &_OBJC_CLASS___NSDictionary;
            _objc_opt_class(&_OBJC_CLASS___NSDictionary);
            IVar2 = IVar5;
            _objc_opt_isKindOfClass(IVar5,puVar1);
            if ((IVar2 & 1) == 0) {
              puVar1 = &_OBJC_CLASS___NSDate;
              _objc_opt_class(&_OBJC_CLASS___NSDate);
              IVar2 = IVar5;
              _objc_opt_isKindOfClass(IVar5,puVar1);
              if ((IVar2 & 1) == 0) {
                puVar1 = &_OBJC_CLASS___NSNull;
                _objc_opt_class(&_OBJC_CLASS___NSNull);
                IVar2 = IVar5;
                _objc_opt_isKindOfClass(IVar5,puVar1);
                if ((IVar2 & 1) == 0) {
                  IVar2 = IVar5;
                  _objc_opt_class();
                  objc_stub::log_level_file_function_line_context_format_
                            ((ID)&objc::class_t::SALog,1,2,
                             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAJSONUtil.m"
                             ,"+[SAJSONUtil JSONSerializableObject:]",0x76,0,
                             &
                             cf_propertyvaluesshouldbevalidjsontypes_butcurrentvalue____withinvalidtype___
                             ,IVar5,IVar2);
                }
                IVar5 = objc_stub::description(IVar5);
              }
              else {
                IVar2 = SADateFormatter::dateFormatterFromString_
                                  ((ID)&objc::class_t::SADateFormatter,
                                   (ID)&cf_yyyy_MM_ddHH_mm_ss_SSS);
                IVar5 = objc_stub::stringFromDate_(IVar2,IVar5);
              }
            }
            else {
              IVar2 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
              local_188 = PTR___NSConcreteStackBlock_100995490;
              local_180 = 0xc2000000;
              local_178 = FUN_100714e0c;
              puStack_170 = &DAT_1009e7bc8;
              local_168 = IVar5;
              local_160 = IVar2;
              local_158 = param_1;
              objc_stub::enumerateKeysAndObjectsUsingBlock_(IVar5,&local_188);
              IVar5 = NSDictionary::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSDictionary,IVar2)
              ;
            }
            goto LAB_100714c24;
          }
        }
        IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
        lStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        local_140 = (long *)0x0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar5,&local_150,auStack_f0,0x10);
        if (IVar3 != 0) {
          lVar6 = *local_140;
          do {
            IVar7 = 0;
            do {
              if (*local_140 != lVar6) {
                _objc_enumerationMutation(IVar5);
              }
              IVar4 = JSONSerializableObject_(param_1,*(ID *)(lStack_148 + IVar7 * 8));
              if (IVar4 != 0) {
                NSMutableArray::addObject_(IVar2,IVar4);
              }
              IVar7 = IVar7 + 1;
            } while (IVar3 != IVar7);
            IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar5,&local_150,auStack_f0,0x10);
          } while (IVar3 != 0);
        }
        IVar5 = NSArray::arrayWithArray_((ID)&_OBJC_CLASS___NSArray,IVar2);
      }
      else {
        IVar2 = objc_stub::stringValue(IVar5);
        if (IVar2 != 0) {
          IVar2 = objc_stub::stringValue(IVar5);
          IVar2 = objc_stub::rangeOfString_(IVar2,&cf__);
          if (IVar2 != 0x7fffffffffffffff) {
            if (IVar5 == 0) {
              local_108 = 0;
              uStack_100 = 0;
              local_f8 = 0;
            }
            else {
              objc_stub::decimalValue(IVar5,&local_108);
            }
            IVar5 = NSDecimalNumber::decimalNumberWithDecimal_
                              ((ID)&_OBJC_CLASS___NSDecimalNumber,&local_108);
          }
        }
      }
    }
  }
  else {
    IVar5 = 0;
  }
LAB_100714c24:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar5;
}

