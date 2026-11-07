// rea decompile_all
// name: SentryCrashReportConverter::stackFramesForThreadIndex:
// address: 0x1007808c0
// body: available
// range: 0x1007808c0-0x100780a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100780a84 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::stackFramesForThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID self_00;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_1007efbc0(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSArray);
  }
  else {
    self = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
    IVar3 = 0;
    self_00 = 0;
    do {
      IVar2 = objc_stub::FUN_1007efbc0(param_1,param_3);
      IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,IVar3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_instruction_addr);
      IVar2 = objc_stub::unsignedLongLongValue(IVar2);
      if (IVar2 == 0xfffffffffffffb2d) {
        if (self_00 != 0) {
          IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
          objc_stub::FUN_1007f4ca0(self_00,IVar2);
        }
      }
      else {
        self_00 = objc_stub::FUN_1007f5c80(param_1,IVar3,param_3);
        objc_stub::addObject_(self,self_00);
      }
      IVar3 = IVar3 + 1;
    } while (IVar1 != IVar3);
    IVar1 = objc_stub::reverseObjectEnumerator(self);
    IVar1 = objc_stub::allObjects(IVar1);
  }
  return IVar1;
}

