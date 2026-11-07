// rea decompile_all
// name: FUN_100725ad8
// address: 0x100725ad8
// body: available
// range: 0x100725ad8-0x100725c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100725ad8(long param_1)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  undefined1 auVar3 [16];
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_properties);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_sensorsdata_app_visual_properties);
  if (IVar1 != 0) {
    IVar2 = objc_stub::event(*(ID *)(param_1 + 0x28));
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf__WebClick);
    if ((IVar2 & 1) != 0) {
      self = &_OBJC_CLASS___NSData;
      _objc_alloc();
      IVar1 = objc_stub::initWithBase64EncodedString_options_((ID)self,IVar1,1);
      IVar1 = SAJSONUtil::JSONObjectWithData_((ID)&objc::class_t::SAJSONUtil,IVar1);
      IVar2 = SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
      local_70 = PTR___NSConcreteStackBlock_100995490;
      local_68 = 0xc2000000;
      local_60 = FUN_100725c68;
      puStack_58 = &DAT_1009e8018;
      auVar3 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x28),
                        *(undefined1 (*) [16])(param_1 + 0x28),8,1);
      uStack_48 = auVar3._8_8_;
      local_50 = auVar3._0_8_;
      objc_stub::queryVisualPropertiesWithConfigs_completionHandler_(IVar2,IVar1,&local_70);
      return 0;
    }
  }
  objc_stub::trackFromH5WithEventObject_properties_
            (*(ID *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
  return 0;
}

