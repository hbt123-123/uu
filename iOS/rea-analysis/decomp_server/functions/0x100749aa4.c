// rea decompile_all
// name: SentryCrashWrapper::enrichScope:
// address: 0x100749aa4
// body: available
// range: 0x100749aa4-0x10074a173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashWrapper::enrichScope_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  objc_stub::setValue_forKey_(IVar1,&cf_macOS,&cf_name);
  IVar2 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  if (IVar2 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    objc_stub::operatingSystemVersion(IVar2,&local_78);
  }
  IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__d__d__d);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_version);
  IVar2 = objc_stub::FUN_1007f6ca0(param_1);
  if (IVar2 == 0) {
    objc_stub::FUN_1007f2080(param_3,IVar1,&cf_os);
  }
  else {
    IVar3 = objc_stub::count(IVar2);
    if (IVar3 != 0) {
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_osVersion);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_build);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_kernelVersion);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_kernel_version);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_isJailbroken);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_rooted);
    }
    objc_stub::FUN_1007f2080(param_3,IVar1,&cf_os);
    IVar1 = objc_stub::count(IVar2);
    if (IVar1 != 0) {
      IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar3 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_simulator);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_systemName);
      IVar4 = objc_stub::FUN_1007f82c0((ID)&_OBJC_CLASS___NSCharacterSet);
      IVar3 = objc_stub::componentsSeparatedByCharactersInSet_(IVar3,IVar4);
      IVar3 = objc_stub::firstObject(IVar3);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_family);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_cpuArchitecture);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_arch);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_machine);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_model);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_model);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_model_id);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_freeMemorySize);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_free_memory);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_usableMemorySize);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_usable_memory);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_memorySize);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_memory_size);
      IVar3 = objc_stub::autoupdatingCurrentLocale((ID)&_OBJC_CLASS___NSLocale);
      IVar3 = objc_stub::objectForKey_(IVar3,*(undefined8 *)PTR__NSLocaleIdentifier_100995348);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_locale);
      objc_stub::FUN_1007f2080(param_3,IVar1,&cf_device);
      IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar3 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      IVar3 = objc_stub::infoDictionary(IVar3);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_CFBundleIdentifier);
      objc_stub::setValue_forKey_(IVar1,IVar4,&cf_app_identifier);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_CFBundleName);
      objc_stub::setValue_forKey_(IVar1,IVar4,&cf_app_name);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_CFBundleVersion);
      objc_stub::setValue_forKey_(IVar1,IVar4,&cf_app_build);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_CFBundleShortVersionString);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_app_version);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_appStartTime);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_app_start_time);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_deviceAppHash);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_device_app_hash);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_appID);
      objc_stub::setValue_forKey_(IVar1,IVar3,&cf_app_id);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_buildType);
      objc_stub::setValue_forKey_(IVar1,IVar2,&cf_build_type);
      objc_stub::FUN_1007f2080(param_3,IVar1,&cf_app);
    }
  }
  return;
}

