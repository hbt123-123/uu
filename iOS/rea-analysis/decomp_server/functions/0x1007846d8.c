// rea decompile_all
// name: SentrySession::serialize
// address: 0x1007846d8
// body: available
// range: 0x1007846d8-0x100784a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100784a2c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100784a30 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySession::serialize(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ID local_70;
  ID local_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  _objc_sync_enter();
  local_88 = &cf_sid;
  local_70 = objc_stub::UUIDString(*(ID *)(param_1 + 0x10));
  local_80 = &cf_errors;
  local_68 = objc_stub::numberWithUnsignedInteger_
                       ((ID)&_OBJC_CLASS___NSNumber,*(undefined8 *)(param_1 + 0x28));
  local_78 = &cf_started;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_1007868c4();
  local_60 = uVar1;
  IVar2 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_88,3);
  IVar2 = objc_stub::mutableCopy(IVar2);
  objc_stub::FUN_1007f1de0
            ((ID)&objc::class_t::SentryDictionary,*(undefined8 *)(param_1 + 8),&cf_init,IVar2);
  uVar5 = *(long *)(param_1 + 0x20) - 1;
  if (uVar5 < 3) {
    pcVar4 = (cfstringStruct *)(&PTR_cf_exited_1009e95f0)[uVar5];
  }
  else {
    pcVar4 = &cf_ok;
  }
  objc_stub::setValue_forKey_(IVar2,pcVar4,&cf_status);
  IVar3 = *(ID *)(param_1 + 0x40);
  if (IVar3 == 0) {
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar3 = objc_stub::dateProvider(IVar3);
    IVar3 = objc_stub::date(IVar3);
  }
  FUN_1007868c4(IVar3);
  objc_stub::setValue_forKey_(IVar2,IVar3,&cf_timestamp);
  if (*(long *)(param_1 + 0x48) == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      objc_stub::FUN_1007f6fc0(*(ID *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x18));
      IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
      objc_stub::setValue_forKey_(IVar2,IVar3,&cf_duration);
    }
  }
  else {
    objc_stub::setValue_forKey_(IVar2,*(long *)(param_1 + 0x48),&cf_duration);
  }
  IVar3 = objc_stub::numberWithUnsignedInteger_
                    ((ID)&_OBJC_CLASS___NSNumber,*(undefined8 *)(param_1 + 0x30));
  objc_stub::setValue_forKey_(IVar2,IVar3,&cf_seq);
  if ((*(long *)(param_1 + 0x50) != 0) || (*(long *)(param_1 + 0x58) != 0)) {
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)self);
    if (*(long *)(param_1 + 0x50) != 0) {
      objc_stub::setValue_forKey_(IVar3,*(long *)(param_1 + 0x50),&cf_release);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      objc_stub::setValue_forKey_(IVar3,*(long *)(param_1 + 0x58),&cf_environment);
    }
    objc_stub::setValue_forKey_(IVar2,IVar3,&cf_attrs);
  }
  objc_stub::setValue_forKey_(IVar2,*(undefined8 *)(param_1 + 0x38),&cf_did);
  if (*(long *)(param_1 + 0x68) != 0) {
    objc_stub::setObject_forKeyedSubscript_(IVar2,*(long *)(param_1 + 0x68),&cf_abnormal_mechanism);
  }
  _objc_sync_exit(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

