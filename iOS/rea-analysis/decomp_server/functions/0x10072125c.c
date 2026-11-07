// rea decompile_all
// name: SensorsAnalyticsSDK::registerPropertyPlugin
// address: 0x10072125c
// body: available
// range: 0x10072125c-0x10072133b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::registerPropertyPlugin(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  class_t *pcVar2;
  ID IVar3;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  class_t *local_40;
  class_t *local_38;
  
  pcVar1 = &objc::class_t::SANetworkInfoPropertyPlugin;
  _objc_alloc_init();
  pcVar2 = &objc::class_t::SACarrierNamePropertyPlugin;
  _objc_alloc_init();
  IVar3 = serialQueue(param_1);
  local_68 = PTR___NSConcreteStackBlock_100995490;
  local_60 = 0xc2000000;
  local_58 = FUN_10072133c;
  puStack_50 = &DAT_1009e79b0;
  local_48 = param_1;
  local_40 = pcVar2;
  local_38 = pcVar1;
  _dispatch_async(IVar3,&local_68);
  return;
}

