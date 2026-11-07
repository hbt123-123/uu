// rea decompile_all
// name: SAIdentifier::unbindIdentity:value:
// address: 0x10070c7f4
// body: available
// range: 0x10070c7f4-0x10070ca8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAIdentifier::unbindIdentity_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID local_58;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,param_4,param_3);
  IVar2 = identities(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,param_3);
  IVar2 = objc_stub::isEqualToString_(param_4,IVar2);
  if (((int)IVar2 == 0) || (bVar1 = isDeviceIDKey_(param_1,param_3), (bVar1 & 1) != 0)) {
    IVar2 = queue(param_1);
    local_80 = PTR___NSConcreteStackBlock_100995490;
    local_78 = 0xc2000000;
    local_70 = FUN_10070ca8c;
    puStack_68 = &DAT_1009e7980;
    local_60 = param_1;
    local_58 = self;
    _dispatch_async(IVar2,&local_80);
  }
  else {
    IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_______);
    IVar3 = loginId(param_1);
    IVar2 = NSString::isEqualToString_(IVar2,IVar3);
    if ((int)IVar2 != 0) {
      clearLoginInfo(param_1);
    }
    IVar2 = identities(param_1);
    IVar2 = objc_stub::mutableCopy(IVar2);
    objc_stub::removeObjectForKey_(IVar2,param_3);
    IVar3 = queue(param_1);
    local_b8 = PTR___NSConcreteStackBlock_100995490;
    local_b0 = 0xc2000000;
    local_a8 = FUN_10070ca94;
    puStack_a0 = &DAT_1009e79b0;
    local_98 = param_1;
    local_90 = self;
    local_88 = IVar2;
    _dispatch_async(IVar3,&local_b8);
  }
  return;
}

