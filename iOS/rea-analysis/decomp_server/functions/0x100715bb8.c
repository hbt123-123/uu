// rea decompile_all
// name: SABaseStoreManager::registerStorePlugin:
// address: 0x100715bb8
// body: available
// range: 0x100715bb8-0x100715c63 inclusive
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

void SABaseStoreManager::registerStorePlugin_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID local_38;
  
  IVar1 = serialQueue(param_1);
  local_60 = PTR___NSConcreteStackBlock_100995490;
  local_58 = 0xc2000000;
  local_50 = FUN_100715c64;
  puStack_48 = &DAT_1009e7980;
  local_40 = param_1;
  local_38 = param_3;
  _dispatch_async(IVar1,&local_60);
  return;
}

