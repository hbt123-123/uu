// rea decompile_all
// name: SAFirstDayPropertyPlugin::initWithQueue:
// address: 0x10072a91c
// body: available
// range: 0x10072a91c-0x10072a9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFirstDayPropertyPlugin::initWithQueue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SAFirstDayPropertyPlugin;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + (long)_queue) = param_3;
    local_68 = PTR___NSConcreteStackBlock_100995490;
    local_60 = 0xc2000000;
    local_58 = FUN_10072a9e8;
    puStack_50 = &DAT_1009e7950;
    local_48 = IVar1;
    _dispatch_async(param_3,&local_68);
  }
  return IVar1;
}

