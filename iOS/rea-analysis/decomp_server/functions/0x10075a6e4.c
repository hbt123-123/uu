// rea decompile_all
// name: SentryCrashDoctorFunctionCall::descriptionForObjCCall
// address: 0x10075a6e4
// body: available
// range: 0x10075a6e4-0x10075aadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075aadc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashDoctorFunctionCall::descriptionForObjCCall(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  int iVar4;
  ulong uVar5;
  
  IVar1 = objc_stub::name(param_1);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_objc_msgSend);
  if ((int)IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::params(param_1);
    IVar1 = objc_stub::objectAtIndex_(IVar1,0);
    IVar2 = objc_stub::FUN_1007ef540(IVar1);
    if (IVar2 == 0) {
      objc_stub::FUN_1007e69e0(IVar1);
    }
    IVar1 = objc_stub::params(param_1);
    IVar1 = objc_stub::objectAtIndex_(IVar1,1);
    IVar2 = objc_stub::type(IVar1);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_string);
    if ((int)IVar2 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::value(IVar1);
      IVar1 = objc_stub::componentsSeparatedByString_(IVar1,&cf__);
      IVar2 = objc_stub::count(IVar1);
      objc_stub::objectAtIndex_(IVar1,0);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSMutableString,&cf_______);
      iVar4 = (int)IVar2;
      if (1 < iVar4) {
        uVar5 = 0;
        do {
          objc_stub::appendString_(IVar1,&cf__);
          if (uVar5 < 2) {
            IVar2 = objc_stub::params(param_1);
            IVar2 = objc_stub::objectAtIndex_(IVar2,uVar5 + 2);
            IVar3 = objc_stub::value(IVar2);
            if (IVar3 == 0) {
              IVar3 = objc_stub::FUN_1007ef540(IVar2);
              if (IVar3 == 0) {
                IVar3 = objc_stub::FUN_1007e69e0(IVar2);
                if (IVar3 == 0) {
                  objc_stub::appendString_(IVar1,&cf__);
                }
                else {
                  objc_stub::FUN_1007e69e0(IVar2);
                  objc_stub::FUN_1007ed0e0(IVar2);
                  objc_stub::appendFormat_(IVar1,&cf_______);
                }
              }
              else {
                IVar2 = objc_stub::FUN_1007ef540(IVar2);
                objc_stub::appendString_(IVar1,IVar2);
              }
            }
            else {
              IVar3 = objc_stub::type(IVar2);
              IVar3 = objc_stub::isEqualToString_(IVar3,&cf_string);
              IVar2 = objc_stub::value(IVar2);
              if ((int)IVar3 == 0) {
                objc_stub::appendString_(IVar1,IVar2);
              }
              else {
                objc_stub::appendFormat_(IVar1,&cf_____);
              }
            }
          }
          else {
            objc_stub::appendString_(IVar1,&cf__);
          }
          if ((long)uVar5 < (long)(iVar4 + -2)) {
            objc_stub::appendString_(IVar1,&cf_space_s_);
          }
          uVar5 = uVar5 + 1;
        } while (iVar4 - 1 != uVar5);
      }
      objc_stub::appendString_(IVar1,&cf__);
    }
  }
  return IVar1;
}

