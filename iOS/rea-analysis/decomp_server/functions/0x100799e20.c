// rea decompile_all
// name: FUN_100799e20
// address: 0x100799e20
// body: available
// range: 0x100799e20-0x10079a07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100799e20(host_info_t param_1,vm_size_t *param_2)

{
  bool bVar1;
  mach_port_t host_priv;
  kern_return_t kVar2;
  ID IVar3;
  mach_msg_type_number_t local_54;
  
  host_priv = _mach_host_self();
  kVar2 = _host_page_size(host_priv,param_2);
  if (kVar2 == 0) {
    local_54 = 0xf;
    kVar2 = _host_statistics(host_priv,2,param_1,&local_54);
    bVar1 = kVar2 == 0;
    if ((kVar2 != 0) &&
       (IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4),
       (int)IVar3 != 0)) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_System.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      _mach_error_string(kVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_host_statistics__s);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,4);
    }
  }
  else {
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_System.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      _mach_error_string(kVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_host_page_size__s);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,4);
    }
    bVar1 = false;
  }
  return bVar1;
}

