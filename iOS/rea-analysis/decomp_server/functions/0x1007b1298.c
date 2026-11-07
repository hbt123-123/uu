// rea decompile_all
// name: SentryEvent::addSimpleProperties:
// address: 0x1007b1298
// body: available
// range: 0x1007b1298-0x1007b17e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b17e4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::addSimpleProperties_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::sdk(param_1);
  FUN_10077cc54(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_sdk);
  IVar1 = objc_stub::releaseName(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_release);
  IVar1 = objc_stub::dist(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_dist);
  IVar1 = objc_stub::environment(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_environment);
  IVar1 = objc_stub::FUN_1007f76e0(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f76e0(param_1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_transaction);
  }
  IVar1 = objc_stub::FUN_1007e9c20(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_fingerprint);
  IVar1 = objc_stub::user(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_user);
  IVar1 = objc_stub::FUN_1007ee620(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_modules);
  IVar1 = objc_stub::stacktrace(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_stacktrace);
  IVar1 = objc_stub::FUN_1007f16e0(param_1);
  IVar2 = objc_stub::FUN_1007f1760(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_1007f1760(param_1);
    objc_stub::addObjectsFromArray_(IVar1,IVar2);
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_breadcrumbs);
  }
  IVar1 = objc_stub::context(param_1);
  FUN_10077cc54(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_contexts);
  IVar1 = objc_stub::message(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::message(param_1);
    IVar1 = objc_stub::serialize(IVar1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_message);
  }
  IVar1 = objc_stub::FUN_1007ede00(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_logger);
  IVar1 = objc_stub::FUN_1007f17a0(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_server_name);
  IVar1 = objc_stub::type(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_type);
  IVar1 = objc_stub::type(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::type(param_1);
    IVar1 = objc_stub::isEqualToString_(IVar1,&cf_transaction);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007f5f60(param_1);
      if (IVar1 == 0) {
        IVar1 = objc_stub::timestamp(param_1);
      }
      else {
        IVar1 = objc_stub::FUN_1007f5f60(param_1);
      }
      objc_stub::timeIntervalSince1970(IVar1);
      IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
      objc_stub::setValue_forKey_(param_3,IVar1,&cf_start_timestamp);
    }
  }
  IVar1 = objc_stub::FUN_1007f0860(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f0860(param_1);
    IVar1 = objc_stub::serialize(IVar1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_request);
  }
  return;
}

