// rea decompile_all
// name: FUN_100776bac
// address: 0x100776bac
// body: available
// range: 0x100776bac-0x100776d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100776d68 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100776d6c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_100776bac(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  size_t local_88;
  int aiStack_80 [2];
  undefined1 auStack_78 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_88 = 0x20;
  aiStack_80[0] = 1;
  aiStack_80[1] = 0x41;
  piVar3 = ___error();
  *piVar3 = 0;
  iVar2 = _sysctl(aiStack_80,2,auStack_78,&local_88,(void *)0x0,0);
  piVar3 = ___error();
  iVar1 = *piVar3;
  if ((iVar1 != 0) &&
     (IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4),
     (int)IVar4 != 0)) {
    IVar4 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.mm"
                      );
    IVar4 = objc_stub::lastPathComponent(IVar4);
    objc_stub::stringByDeletingPathExtension(IVar4);
    _strerror(iVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__sfailedwithcode__d_description__s)
    ;
    IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,4);
  }
  if (iVar2 == 0) {
    pcVar5 = (cfstringStruct *)
             objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,auStack_78);
  }
  else {
    pcVar5 = &cf___;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

