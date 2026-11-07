// rea decompile_all
// name: FUN_100727e24
// address: 0x100727e24
// body: available
// range: 0x100727e24-0x100727f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100727e24(long param_1)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  IVar1 = objc_stub::dynamicSuperPropertyBlock(*(ID *)(param_1 + 0x20));
  if (IVar1 != 0) {
    IVar1 = objc_stub::dynamicSuperPropertyBlock(*(ID *)(param_1 + 0x20));
    (**(code **)(IVar1 + 0x10))();
    IVar1 = objc_stub::copy(IVar1);
    IVar1 = objc_stub::validProperties_((ID)&objc::class_t::SAPropertyValidator,IVar1);
    objc_stub::FUN_1007f2780(*(ID *)(param_1 + 0x20),IVar1);
    IVar1 = objc_stub::sdkInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
    IVar1 = objc_stub::serialQueue(IVar1);
    local_58 = PTR___NSConcreteStackBlock_100995490;
    local_50 = 0xc2000000;
    local_48 = FUN_100727f64;
    puStack_40 = &DAT_1009e7950;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    _dispatch_async(IVar1,&local_58);
  }
  return 0;
}

