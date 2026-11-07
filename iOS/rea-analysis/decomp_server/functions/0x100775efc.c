// rea decompile_all
// name: FUN_100775efc
// address: 0x100775efc
// body: available
// range: 0x100775efc-0x1007760df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007760dc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined * FUN_100775efc(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ID IVar5;
  undefined *puVar6;
  size_t local_60;
  int local_54;
  
  local_60 = 4;
  piVar4 = ___error();
  *piVar4 = 0;
  iVar3 = _sysctlbyname("hw.cpusubtype",&local_54,&local_60,(void *)0x0,0);
  piVar4 = ___error();
  iVar1 = *piVar4;
  if ((iVar1 != 0) &&
     (IVar5 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4),
     (int)IVar5 != 0)) {
    IVar5 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.mm"
                      );
    IVar5 = objc_stub::lastPathComponent(IVar5);
    objc_stub::stringByDeletingPathExtension(IVar5);
    _strerror(iVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__sfailedwithcode__d_description__s)
    ;
    IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar5,4);
  }
  if (iVar3 == 0) {
    uVar2 = local_54 - 1;
    if ((uVar2 < 0xc) && ((0xda7U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      puVar6 = (&PTR_cf_armv8_1009e9240)[(int)uVar2];
    }
    else {
      puVar6 = (undefined *)objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber);
      FUN_100776138(puVar6);
    }
  }
  else {
    puVar6 = (undefined *)0x0;
    FUN_100776138(0);
  }
  return puVar6;
}

