// rea decompile_all
// name: SentryMigrateSessionInit::storeSessionInit:session:path:
// address: 0x1007839d8
// body: available
// range: 0x1007839d8-0x100783b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryMigrateSessionInit::storeSessionInit_session_path_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  ID local_58;
  
  IVar1 = objc_stub::FUN_1007f0740(param_1,param_4,param_3);
  self = &objc::class_t::SentryEnvelope;
  _objc_alloc();
  IVar2 = objc_stub::header(param_3);
  IVar1 = objc_stub::initWithHeader_items_((ID)self,IVar2,IVar1);
  IVar1 = objc_stub::FUN_1007e7b80((ID)&objc::class_t::SentrySerialization,IVar1);
  local_58 = 0;
  objc_stub::FUN_1007f83e0(IVar1,param_5,1,&local_58);
  if (local_58 != 0) {
    objc_stub::description(local_58);
    IVar1 = objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,
                       &cf_Couldnotmigratesessioninit_becausestoringtheupdatedenvelopefailed___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
  }
  return;
}

