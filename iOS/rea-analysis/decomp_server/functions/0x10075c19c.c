// rea decompile_all
// name: SentryCrashDoctor::diagnoseCrash:
// address: 0x10075c19c
// body: available
// range: 0x10075c19c-0x10075c517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075c3cc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::diagnoseCrash_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  
  IVar1 = objc_stub::FUN_1007ed8e0(param_1,param_3);
  objc_stub::objectForKey_(IVar1,&cf_symbol_name);
  IVar2 = objc_stub::FUN_1007e7600(param_1,param_3);
  IVar1 = objc_stub::FUN_1007e93a0(param_1,param_3);
  IVar2 = objc_stub::FUN_1007ed4a0(param_1,IVar2);
  if ((int)IVar2 == 0) {
    IVar2 = objc_stub::objectForKey_(IVar1,&cf_type);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_nsexception);
    if ((int)IVar2 == 0) {
      IVar2 = objc_stub::FUN_1007ed280(param_1,param_3);
      if ((IVar2 & 1) == 0) {
        IVar2 = objc_stub::FUN_1007ed260(param_1,IVar1);
        if ((IVar2 & 1) == 0) {
          IVar2 = objc_stub::FUN_1007ed8c0(param_1,param_3);
          IVar2 = objc_stub::FUN_1007f8440(param_1,IVar2);
          if (IVar2 == 0) {
            IVar2 = objc_stub::FUN_1007ed140(param_1,IVar1);
            if ((int)IVar2 == 0) {
              IVar1 = objc_stub::FUN_1007f8240(param_1,IVar1);
              pcVar3 = &cf_GracefulOSterminationrequested_;
              if ((int)IVar1 == 0) {
                pcVar3 = (cfstringStruct *)0x0;
              }
            }
            else {
              IVar2 = objc_stub::objectForKey_(IVar1,&cf_address);
              IVar2 = objc_stub::unsignedLongLongValue(IVar2);
              if (IVar2 == 0) {
                pcVar3 = &cf_Attemptedtodereferencenullpointer_;
              }
              else {
                IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
                IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_code_name);
                if (IVar1 == 0) {
                  pcVar3 = (cfstringStruct *)
                           objc_stub::stringWithFormat_
                                     ((ID)&_OBJC_CLASS___NSString,
                                      &cf_Attemptedtodereferencegarbagepointerat_p_);
                }
                else {
                  pcVar3 = (cfstringStruct *)
                           objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___at_p_);
                }
              }
            }
          }
          else {
            pcVar3 = (cfstringStruct *)
                     objc_stub::stringWithFormat_
                               ((ID)&_OBJC_CLASS___NSString,&cf_Possiblezombieincall___);
          }
        }
        else {
          pcVar3 = &cf_Matherror_usuallycausedfromdivisionby0__;
        }
      }
      else {
        pcVar3 = &cf_Roguememorywritehascorruptedmemory_;
      }
    }
    else {
      IVar2 = objc_stub::objectForKey_(IVar1,&cf_nsexception);
      objc_stub::objectForKey_(IVar2,&cf_name);
      IVar4 = objc_stub::objectForKey_(IVar2,&cf_reason);
      if (IVar4 != 0) {
        IVar1 = IVar2;
      }
      objc_stub::objectForKey_(IVar1,&cf_reason);
      pcVar3 = (cfstringStruct *)
               objc_stub::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSString,&cf_Applicationthrewexception_____);
    }
  }
  else {
    pcVar3 = (cfstringStruct *)
             objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Stackoverflowin__);
  }
  return (ID)pcVar3;
}

