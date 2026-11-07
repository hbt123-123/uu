// rea decompile_all
// name: SentryRequestOperation::initWithSession:request:completionHandler:
// address: 0x10077e054
// body: available
// range: 0x10077e054-0x10077e1ab inclusive
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

ID SentryRequestOperation::initWithSession_request_completionHandler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID self;
  ID IVar1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryRequestOperation;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    objc_stub::FUN_1007f4620(self,param_4);
    IVar1 = objc_stub::FUN_1007f0860(self);
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0xc2000000;
    local_80 = FUN_10077e1ac;
    puStack_78 = &DAT_1009e9560;
    local_70 = self;
    local_68 = param_5;
    IVar1 = objc_stub::dataTaskWithRequest_completionHandler_(param_3,IVar1,&local_90);
    objc_stub::FUN_1007f4f40(self,IVar1);
  }
  return self;
}

