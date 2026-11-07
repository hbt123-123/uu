// rea decompile_all
// name: SentryByteCountFormatter::bytesCountDescription:
// address: 0x100756590
// body: available
// range: 0x100756590-0x1007567a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007567a0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007567a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryByteCountFormatter::bytesCountDescription_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  double dVar5;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  cfstringStruct *local_78;
  cfstringStruct *pcStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_88 = &cf_bytes;
  pcStack_80 = &cf_KB;
  local_78 = &cf_MB;
  pcStack_70 = &cf_GB;
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_88,4);
  dVar5 = (double)param_3;
  if (param_3 < 0x400) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      IVar2 = objc_stub::count(IVar1);
      if (IVar2 - 1 <= uVar4) break;
      dVar5 = dVar5 * 0.0009765625;
      uVar4 = uVar4 + 1;
    } while (1024.0 <= dVar5);
    uVar4 = uVar4 & 0xffffffff;
  }
  self = &_OBJC_CLASS___NSNumberFormatter;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)self);
  IVar3 = objc_stub::localeWithLocaleIdentifier_((ID)&_OBJC_CLASS___NSLocale,&cf_en_US);
  objc_stub::setLocale_(IVar2,IVar3);
  objc_stub::setNumberStyle_(IVar2,1);
  objc_stub::FUN_1007f4700(IVar2,1);
  objc_stub::FUN_1007f4140(IVar2,&cf_____0);
  IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,dVar5);
  objc_stub::FUN_1007f6820(IVar2,IVar3);
  objc_stub::objectAtIndexedSubscript_(IVar1,uVar4);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

