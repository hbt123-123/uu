// rea decompile_all
// name: FUN_100776138
// address: 0x100776138
// body: available
// range: 0x100776138-0x1007763d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077638c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_100776138(ID param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  undefined *self;
  size_t local_70;
  int local_64;
  
  local_70 = 4;
  piVar3 = ___error();
  *piVar3 = 0;
  iVar2 = _sysctlbyname("hw.cputype",&local_64,&local_70,(void *)0x0,0);
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
    if (local_64 < 0x1000007) {
      if (local_64 == 7) {
        return &cf_x86;
      }
      if (local_64 == 0xc) {
        return &cf_arm;
      }
    }
    else {
      if (local_64 == 0x1000007) {
        return &cf_x86_64;
      }
      if (local_64 == 0x100000c) {
        return &cf_arm64;
      }
      if (local_64 == 0x200000c) {
        return &cf_arm64_32;
      }
    }
    self = &_OBJC_CLASS___NSMutableString;
    if (param_1 != 0) {
      objc_stub::intValue(param_1);
      pcVar5 = (cfstringStruct *)
               objc_stub::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSMutableString,&cf_unknownCPUtype__d_andsubtype__d_);
      return pcVar5;
    }
    pcVar5 = &cf_unknownCPUtype__d_;
  }
  else {
    if (param_1 == 0) {
      return &cf_noCPUtypeorsubtype;
    }
    self = &_OBJC_CLASS___NSString;
    objc_stub::intValue(param_1);
    pcVar5 = &cf_noCPUtypeforunknownsubtype_d;
  }
  pcVar5 = (cfstringStruct *)objc_stub::stringWithFormat_((ID)self,pcVar5);
  return pcVar5;
}

