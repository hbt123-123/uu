// rea decompile_all
// name: SAPropertyPluginManager::customPluginsWithFilter:
// address: 0x1007317dc
// body: available
// range: 0x1007317dc-0x1007318d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x18 bytes */

ID SAPropertyPluginManager::customPluginsWithFilter_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID IStack_38;
  
  IVar1 = customPlugins(param_1);
  IVar1 = objc_stub::copy(IVar1);
  IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_68 = PTR___NSConcreteStackBlock_100995490;
  local_60 = 0xc2000000;
  local_58 = FUN_1007318d4;
  puStack_50 = &DAT_1009e83f8;
  local_48 = param_3;
  local_40 = IVar2;
  IStack_38 = param_1;
  objc_stub::enumerateKeysAndObjectsUsingBlock_(IVar1,&local_68);
  return IVar2;
}

