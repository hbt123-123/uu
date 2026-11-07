// rea decompile_all
// name: SentryCrashDoctorFunctionCall::descriptionWithParamCount:
// address: 0x10075aae0
// body: available
// range: 0x10075aae0-0x10075ad8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075ad88 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

ID SentryCrashDoctorFunctionCall::descriptionWithParamCount_(ID param_1,SEL param_2,int param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  
  IVar2 = objc_stub::FUN_1007e8460(param_1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::params(param_1);
    IVar2 = objc_stub::count(IVar2);
    if ((int)IVar2 < (int)param_3) {
      IVar2 = objc_stub::params(param_1);
      IVar2 = objc_stub::count(IVar2);
      param_3 = (int)IVar2;
    }
    IVar2 = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
    objc_stub::name(param_1);
    objc_stub::appendFormat_(IVar2,&cf_Function___);
    if (0 < (int)param_3) {
      uVar5 = 0;
      do {
        IVar3 = objc_stub::params(param_1);
        IVar3 = objc_stub::objectAtIndex_(IVar3,uVar5);
        uVar1 = uVar5 + 1;
        objc_stub::appendFormat_(IVar2,&cf_Param_d_);
        IVar4 = objc_stub::FUN_1007e69e0(IVar3);
        if (IVar4 != 0) {
          objc_stub::FUN_1007e69e0(IVar3);
          objc_stub::FUN_1007ed0e0(IVar3);
          objc_stub::appendFormat_(IVar2,&cf_______);
        }
        IVar4 = objc_stub::value(IVar3);
        if (IVar4 != 0) {
          objc_stub::value(IVar3);
          objc_stub::appendFormat_(IVar2,&cf___);
        }
        IVar4 = objc_stub::FUN_1007ef540(IVar3);
        if (IVar4 != 0) {
          objc_stub::FUN_1007ef540(IVar3);
          objc_stub::appendFormat_(IVar2,&cf__was___);
        }
        if (uVar5 < param_3 - 1) {
          objc_stub::appendString_(IVar2,&cf_newline_s_);
        }
        uVar5 = uVar1;
      } while (uVar1 != param_3);
    }
  }
  return IVar2;
}

