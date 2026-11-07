// rea decompile_all
// name: SentryCrash::systemInfo
// address: 0x10078d3c0
// body: available
// range: 0x10078d3c0-0x10078da8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078da88 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::systemInfo(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long local_118;
  long local_110;
  long lStack_108;
  ulong local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  ulong uStack_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  long lStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  FUN_1007994c0();
  (**(code **)(param_1 + 0x10))(&local_210);
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  if (local_130 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_systemName);
  }
  if (lStack_128 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_systemVersion);
  }
  if (local_120 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_machine);
  }
  if (local_118 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_model);
  }
  if (local_110 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_kernelVersion);
  }
  if (lStack_108 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_osVersion);
  }
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,local_100 & 0xff);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_isJailbroken);
  if (local_f8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_bootTime);
  }
  if (local_f0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_appStartTime);
  }
  if (lStack_e8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_executablePath);
  }
  if (local_e0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_executableName);
  }
  if (local_d8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_bundleID);
  }
  if (local_d0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_bundleName);
  }
  if (lStack_c8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_bundleVersion);
  }
  if (local_c0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_bundleShortVersion);
  }
  if (local_b8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_appID);
  }
  if (local_b0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpuArchitecture);
  }
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uStack_a8 & 0xffffffff);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpuType);
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uStack_a8 >> 0x20);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpuSubType);
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,local_a0 & 0xffffffff);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_binaryCPUType);
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,local_a0 >> 0x20);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_binaryCPUSubType);
  if (local_98 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_processName);
  }
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,local_90 & 0xffffffff);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_processID);
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,local_90 >> 0x20);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_parentProcessID);
  if (lStack_88 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_deviceAppHash);
  }
  if (local_80 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_buildType);
  }
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_78);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_memorySize);
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_70);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_freeMemorySize);
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,uStack_68);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_usableMemorySize);
  return self;
}

