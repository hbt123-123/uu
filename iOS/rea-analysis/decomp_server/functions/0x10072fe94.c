// rea decompile_all
// name: SAKeyChainItemWrapper::fetchPasswordWithAccount:service:accessGroup:
// address: 0x10072fe94
// body: available
// range: 0x10072fe94-0x1007300df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007300dc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SAKeyChainItemWrapper::fetchPasswordWithAccount_service_accessGroup_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  undefined8 uVar3;
  ID local_68;
  
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc_init();
  local_68 = 0;
  objc_stub::setObject_forKey_
            ((ID)puVar1,*(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlock_100995660,
             *(undefined8 *)PTR__kSecAttrAccessible_100995658);
  objc_stub::setObject_forKey_
            ((ID)puVar1,*(undefined8 *)PTR__kSecClassGenericPassword_100995680,
             *(undefined8 *)PTR__kSecClass_100995678);
  uVar3 = *(undefined8 *)PTR__kCFBooleanTrue_1009953d0;
  objc_stub::setObject_forKey_((ID)puVar1,uVar3,*(undefined8 *)PTR__kSecReturnData_1009956b8);
  objc_stub::setObject_forKey_((ID)puVar1,uVar3,*(undefined8 *)PTR__kSecReturnAttributes_1009956b0);
  objc_stub::setObject_forKey_
            ((ID)puVar1,*(undefined8 *)PTR__kSecMatchLimitOne_1009956a0,
             *(undefined8 *)PTR__kSecMatchLimit_100995698);
  IVar2 = param_5;
  FUN_10072fe34();
  if ((int)IVar2 != 0) {
    objc_stub::setObject_forKey_
              ((ID)puVar1,param_5,*(undefined8 *)PTR__kSecAttrAccessGroup_100995650);
  }
  IVar2 = param_3;
  FUN_10072fe34();
  if ((int)IVar2 != 0) {
    objc_stub::setObject_forKey_((ID)puVar1,param_3,*(undefined8 *)PTR__kSecAttrAccount_100995668);
  }
  IVar2 = param_4;
  FUN_10072fe34();
  if ((int)IVar2 != 0) {
    objc_stub::setObject_forKey_((ID)puVar1,param_4,*(undefined8 *)PTR__kSecAttrService_100995670);
  }
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  _SecItemCopyMatching(puVar1,&local_68);
  IVar2 = local_68;
  if ((int)puVar1 == 0) {
    NSMutableDictionary::addEntriesFromDictionary_(self,local_68);
    puVar1 = &_OBJC_CLASS___NSString;
    _objc_alloc();
    uVar3 = *(undefined8 *)PTR__kSecValueData_1009956c0;
    IVar2 = objc_stub::objectForKey_(IVar2,uVar3);
    IVar2 = objc_stub::initWithData_encoding_((ID)puVar1,IVar2,4);
    NSMutableDictionary::setObject_forKey_(self,IVar2,uVar3);
  }
  return self;
}

