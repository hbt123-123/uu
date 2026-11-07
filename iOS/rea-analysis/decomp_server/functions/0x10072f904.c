// rea decompile_all
// name: SAKeyChainItemWrapper::saveOrUpdatePassword:account:service:accessGroup:
// address: 0x10072f904
// body: available
// range: 0x10072f904-0x10072fcaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

bool SAKeyChainItemWrapper::saveOrUpdatePassword_account_service_accessGroup_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  undefined *self;
  ID IVar2;
  ID self_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_68;
  
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc_init();
  local_68 = 0;
  uVar5 = *(undefined8 *)PTR__kSecAttrAccessible_100995658;
  objc_stub::setObject_forKey_
            ((ID)puVar1,*(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlock_100995660,uVar5);
  uVar8 = *(undefined8 *)PTR__kSecClassGenericPassword_100995680;
  uVar6 = *(undefined8 *)PTR__kSecClass_100995678;
  objc_stub::setObject_forKey_((ID)puVar1,uVar8,uVar6);
  uVar4 = *(undefined8 *)PTR__kCFBooleanTrue_1009953d0;
  uVar7 = *(undefined8 *)PTR__kSecReturnData_1009956b8;
  objc_stub::setObject_forKey_((ID)puVar1,uVar4,uVar7);
  uVar3 = *(undefined8 *)PTR__kSecReturnAttributes_1009956b0;
  objc_stub::setObject_forKey_((ID)puVar1,uVar4,uVar3);
  uVar4 = *(undefined8 *)PTR__kSecMatchLimit_100995698;
  objc_stub::setObject_forKey_((ID)puVar1,*(undefined8 *)PTR__kSecMatchLimitOne_1009956a0,uVar4);
  IVar2 = param_4;
  FUN_10072fe34();
  if ((int)IVar2 != 0) {
    objc_stub::setObject_forKey_((ID)puVar1,param_4,*(undefined8 *)PTR__kSecAttrAccount_100995668);
  }
  IVar2 = param_5;
  FUN_10072fe34();
  if ((int)IVar2 != 0) {
    objc_stub::setObject_forKey_((ID)puVar1,param_5,*(undefined8 *)PTR__kSecAttrService_100995670);
  }
  IVar2 = param_6;
  FUN_10072fe34();
  if ((int)IVar2 != 0) {
    objc_stub::setObject_forKey_
              ((ID)puVar1,param_6,*(undefined8 *)PTR__kSecAttrAccessGroup_100995650);
  }
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar2 = objc_stub::initWithDictionary_((ID)self,puVar1);
  _SecItemCopyMatching(IVar2,&local_68);
  if ((int)IVar2 == -0x62d4) {
    IVar2 = objc_stub::dataUsingEncoding_(param_3,4);
    objc_stub::setObject_forKey_((ID)puVar1,IVar2,*(undefined8 *)PTR__kSecValueData_1009956c0);
    objc_stub::removeObjectForKey_((ID)puVar1,uVar4);
    objc_stub::removeObjectForKey_((ID)puVar1,uVar3);
    objc_stub::removeObjectForKey_((ID)puVar1,uVar7);
    objc_stub::removeObjectForKey_((ID)puVar1,uVar5);
    _SecItemAdd(puVar1,&local_68);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,8,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SAKeyChainItemWrapper.m"
               ,"+[SAKeyChainItemWrapper saveOrUpdatePassword:account:service:accessGroup:]",0x8d,0,
               &cf_SecItemAddresult__d,puVar1);
  }
  else if ((int)IVar2 == 0) {
    self_00 = NSMutableDictionary::dictionaryWithDictionary_
                        ((ID)&_OBJC_CLASS___NSMutableDictionary,local_68);
    NSMutableDictionary::setObject_forKey_(self_00,uVar8,uVar6);
    puVar1 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc_init();
    IVar2 = objc_stub::dataUsingEncoding_(param_3,4);
    objc_stub::setObject_forKey_((ID)puVar1,IVar2,*(undefined8 *)PTR__kSecValueData_1009956c0);
    objc_stub::removeObjectForKey_((ID)puVar1,uVar6);
    _SecItemUpdate(self_00,puVar1);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,8,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SAKeyChainItemWrapper.m"
               ,"+[SAKeyChainItemWrapper saveOrUpdatePassword:account:service:accessGroup:]",0x7b,0,
               &cf_SecItemUpdateresult__d,self_00);
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)0x1;
  }
  return (bool)((int)puVar1 == 0);
}

