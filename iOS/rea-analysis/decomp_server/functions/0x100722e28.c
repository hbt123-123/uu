// rea decompile_all
// name: SensorsAnalyticsSDK::bind:value:
// address: 0x100722e28
// body: available
// range: 0x100722e28-0x100722f4f inclusive
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

void SensorsAnalyticsSDK::bind_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  
  self = &objc::class_t::SABindEventObject;
  _objc_alloc();
  IVar1 = objc_stub::initWithEventId_((ID)self,&cf__BindID);
  buildDynamicSuperProperties(param_1);
  IVar2 = serialQueue(param_1);
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0xc2000000;
  local_70 = FUN_100722f50;
  puStack_68 = &DAT_1009e7f48;
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  local_48 = IVar1;
  _dispatch_async(IVar2,&local_80);
  return;
}

