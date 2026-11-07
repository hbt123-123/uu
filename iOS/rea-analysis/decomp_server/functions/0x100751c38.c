// rea decompile_all
// name: FUN_100751c38
// address: 0x100751c38
// body: available
// range: 0x100751c38-0x100751f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100751f40 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100751c38(long param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  IVar2 = objc_stub::absoluteTimestamp(param_2);
  FUN_10074411c(uVar5,IVar2);
  if ((uVar5 & 1) == 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar2 != 0) {
      IVar2 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                        );
      IVar2 = NSString::lastPathComponent(IVar2);
      NSString::stringByDeletingPathExtension(IVar2);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Filteringsampleasitcamebeforestarttimetobeginslicing_);
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,3);
    }
  }
  else {
    IVar2 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    IVar3 = objc_stub::absoluteTimestamp(param_2);
    FUN_100744128(uVar6,IVar3);
    iVar1 = _snprintf((char *)0x0,0,"%llu");
    pcVar4 = _malloc((long)(iVar1 + 1));
    _snprintf(pcVar4,(long)(iVar1 + 1),"%llu");
    IVar3 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar4,1);
    _free(pcVar4);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_elapsed_since_start_ns);
    objc_stub::threadID(param_2);
    iVar1 = _snprintf((char *)0x0,0,"%llu");
    pcVar4 = _malloc((long)(iVar1 + 1));
    _snprintf(pcVar4,(long)(iVar1 + 1),"%llu");
    IVar3 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar4,1);
    _free(pcVar4);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_thread_id);
    IVar3 = objc_stub::stackIndex(param_2);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_stack_id);
    IVar3 = objc_stub::queueAddress(param_2);
    if (IVar3 != 0) {
      IVar3 = objc_stub::queueAddress(param_2);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_queue_address);
    }
    objc_stub::addObject_(*(ID *)(param_1 + 0x20),IVar2);
  }
  return 0;
}

