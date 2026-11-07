// rea decompile_all
// name: SAIdentifier::mergeH5Identities:eventType:
// address: 0x10070be30
// body: available
// range: 0x10070be30-0x10070c0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070c0b4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10070c0b8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SAIdentifier::mergeH5Identities_eventType_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *self;
  ID IVar3;
  ID IVar4;
  uint uVar5;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined *local_68;
  ID IStack_60;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar5 = (uint)param_4;
  if ((uVar5 >> 3 & 1) == 0) {
    self = (undefined *)
           NSMutableDictionary::dictionaryWithDictionary_
                     ((ID)&_OBJC_CLASS___NSMutableDictionary,param_3);
    local_58 = &cf__identity_mac_serial_id;
    pcStack_50 = &cf__identity_mac_uuid;
    IVar3 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_58,2);
    objc_stub::removeObjectsForKeys_((ID)self,IVar3);
    IVar3 = identities(param_1);
    objc_stub::addEntriesFromDictionary_((ID)self,IVar3);
    if (param_3 == 0) {
      bVar1 = false;
    }
    else {
      IVar3 = loginIDKey(param_1);
      IVar3 = objc_stub::objectForKeyedSubscript_(param_3,IVar3);
      bVar1 = IVar3 == 0;
    }
    if (((uVar5 >> 1 & 1) != 0) && (!bVar1)) {
      resetIdentities(param_1);
    }
    if ((uVar5 >> 2 & 1) != 0) {
      IVar3 = queue(param_1);
      local_88 = PTR___NSConcreteStackBlock_100995490;
      local_80 = 0xc2000000;
      local_78 = FUN_10070c0bc;
      puStack_70 = &DAT_1009e7980;
      local_68 = self;
      IStack_60 = param_1;
      _dispatch_async(IVar3,&local_88);
    }
  }
  else {
    IVar3 = objc_stub::allKeys(param_3);
    IVar3 = objc_stub::firstObject(IVar3);
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,IVar3);
    bVar2 = isValidForUnbind_value_(param_1,IVar3,IVar4);
    self = PTR____NSDictionary0__struct_1009953b8;
    if (bVar2 != 0) {
      IVar4 = objc_stub::objectForKeyedSubscript_(param_3,IVar3);
      unbindIdentity_value_(param_1,IVar3,IVar4);
      self = (undefined *)param_3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return (ID)self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

