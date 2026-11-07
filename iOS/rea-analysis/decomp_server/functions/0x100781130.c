// rea decompile_all
// name: SentryCrashReportConverter::convertExceptions
// address: 0x100781130
// body: available
// range: 0x100781130-0x100781a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078181c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100781a20 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertExceptions(ID param_1,SEL param_2)

{
  cfstringStruct *self;
  ID IVar1;
  cfstringStruct *pcVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long extraout_x1;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::FUN_1007e9640(param_1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_1007e9640(param_1);
    pcVar2 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar1,&cf_type);
    self = &cf_UnknownException;
    if (pcVar2 != (cfstringStruct *)0x0) {
      self = pcVar2;
    }
    IVar1 = objc_stub::isEqualToString_((ID)self,&cf_nsexception);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::isEqualToString_((ID)self,&cf_cpp_exception);
      if ((int)IVar1 == 0) {
        IVar1 = objc_stub::isEqualToString_((ID)self,&cf_mach);
        if ((int)IVar1 == 0) {
          IVar1 = objc_stub::isEqualToString_((ID)self,&cf_signal);
          if ((int)IVar1 == 0) {
            IVar1 = objc_stub::isEqualToString_((ID)self,&cf_user);
            if ((int)IVar1 == 0) {
              pcVar3 = &objc::class_t::SentryException;
              _objc_alloc();
              IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,&cf_UnknownException,self);
            }
            else {
              IVar1 = objc_stub::FUN_1007e9640(param_1);
              objc_stub::objectForKeyedSubscript_(IVar1,&cf_reason);
              IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___);
              pcVar3 = &objc::class_t::SentryException;
              _objc_alloc();
              IVar1 = objc_stub::FUN_1007e9640(param_1);
              IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_user_reported);
              IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_name);
              IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,IVar4,IVar1);
              IVar5 = objc_stub::rangeOfString_(IVar4,&cf__);
              if (IVar5 != 0x7fffffffffffffff) {
                pcVar3 = &objc::class_t::SentryException;
                _objc_alloc();
                IVar1 = objc_stub::length(IVar4);
                IVar1 = objc_stub::substringWithRange_
                                  (IVar4,IVar5 + extraout_x1,IVar1 - (IVar5 + extraout_x1));
                IVar6 = objc_stub::FUN_1007f82c0((ID)&_OBJC_CLASS___NSCharacterSet);
                IVar1 = objc_stub::stringByTrimmingCharactersInSet_(IVar1,IVar6);
                IVar4 = objc_stub::substringWithRange_(IVar4,0,IVar5);
                IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,IVar1,IVar4);
              }
            }
          }
          else {
            pcVar3 = &objc::class_t::SentryException;
            _objc_alloc();
            IVar1 = objc_stub::FUN_1007e9640(param_1);
            IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
            objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
            IVar1 = objc_stub::FUN_1007e9640(param_1);
            IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_signal);
            objc_stub::objectForKeyedSubscript_(IVar1,&cf_code);
            IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Signal___Code__);
            IVar4 = objc_stub::FUN_1007e9640(param_1);
            IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_signal);
            IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_name);
            IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,IVar1,IVar4);
          }
        }
        else {
          pcVar3 = &objc::class_t::SentryException;
          _objc_alloc();
          IVar1 = objc_stub::FUN_1007e9640(param_1);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
          objc_stub::objectForKeyedSubscript_(IVar1,&cf_exception);
          IVar1 = objc_stub::FUN_1007e9640(param_1);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
          objc_stub::objectForKeyedSubscript_(IVar1,&cf_code);
          IVar1 = objc_stub::FUN_1007e9640(param_1);
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
          objc_stub::objectForKeyedSubscript_(IVar1,&cf_subcode);
          IVar1 = objc_stub::stringWithFormat_
                            ((ID)&_OBJC_CLASS___NSString,&cf_Exception___Code___Subcode__);
          IVar4 = objc_stub::FUN_1007e9640(param_1);
          IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_mach);
          IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_exception_name);
          IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,IVar1,IVar4);
        }
      }
      else {
        pcVar3 = &objc::class_t::SentryException;
        _objc_alloc();
        IVar1 = objc_stub::FUN_1007e9640(param_1);
        IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_cpp_exception);
        IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_name);
        IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,IVar1,&cf_C__Exception);
      }
    }
    else {
      IVar1 = objc_stub::FUN_1007ef020(param_1);
    }
    objc_stub::FUN_1007e9160(param_1,IVar1);
    objc_stub::FUN_1007e9140(param_1,IVar1);
    IVar4 = objc_stub::FUN_1007e9840(param_1,self);
    objc_stub::setMechanism_(IVar1,IVar4);
    IVar4 = objc_stub::FUN_1007e75c0(param_1);
    IVar5 = objc_stub::threadId(IVar4);
    objc_stub::setThreadId_(IVar1,IVar5);
    IVar4 = objc_stub::stacktrace(IVar4);
    objc_stub::setStacktrace_(IVar1,IVar4);
    IVar4 = objc_stub::FUN_1007e8580(param_1);
    if (IVar4 != 0) {
      IVar4 = objc_stub::FUN_1007e8580(param_1);
      IVar4 = objc_stub::length(IVar4);
      if (IVar4 != 0) {
        IVar4 = objc_stub::FUN_1007e8580(param_1);
        IVar5 = objc_stub::value(IVar1);
        IVar4 = objc_stub::containsString_(IVar4,IVar5);
        if ((IVar4 & 1) == 0) {
          IVar4 = objc_stub::value(IVar1);
          objc_stub::FUN_1007e8580(param_1);
          IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_>__);
          IVar4 = objc_stub::stringByAppendingString_(IVar4,IVar5);
          objc_stub::FUN_1007f55e0(IVar1,IVar4);
        }
      }
    }
    local_70 = IVar1;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

