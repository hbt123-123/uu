// rea decompile_all
// name: SensorsAnalyticsSDK::loginWithKey:loginId:properties:
// address: 0x100721f78
// body: available
// range: 0x100721f78-0x1007220cf inclusive
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

void SensorsAnalyticsSDK::loginWithKey_loginId_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  
  self = &objc::class_t::SASignUpEventObject;
  _objc_alloc();
  IVar1 = objc_stub::initWithEventId_((ID)self,&cf__SignUp);
  buildDynamicSuperProperties(param_1);
  IVar2 = serialQueue(param_1);
  local_88 = PTR___NSConcreteStackBlock_100995490;
  local_80 = 0xc2000000;
  local_78 = FUN_1007220d0;
  puStack_70 = &DAT_1009e7ec8;
  local_68 = param_1;
  local_60 = param_3;
  local_58 = param_4;
  local_50 = IVar1;
  local_48 = param_5;
  _dispatch_async(IVar2,&local_88);
  return;
}

