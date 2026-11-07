// rea decompile_all
// name: SAPropertyPluginManager::unregisterPropertyPluginWithPluginClass:
// address: 0x100730b74
// body: available
// range: 0x100730b74-0x100730c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAPropertyPluginManager::unregisterPropertyPluginWithPluginClass_
               (ID param_1,SEL param_2,CLASS param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  CLASS CStack_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  CLASS CStack_58;
  
  if (param_3 != 0) {
    IVar2 = superPlugins(param_1);
    puVar1 = PTR___NSConcreteStackBlock_100995490;
    local_80 = PTR___NSConcreteStackBlock_100995490;
    local_78 = 0xc2000000;
    local_70 = FUN_100730c4c;
    puStack_68 = &DAT_1009e8388;
    local_60 = param_1;
    CStack_58 = param_3;
    objc_stub::enumerateObjectsWithOptions_usingBlock_(IVar2,2,&local_80);
    IVar2 = plugins(param_1);
    local_b0 = puVar1;
    local_a8 = 0xc2000000;
    local_a0 = FUN_100730cbc;
    puStack_98 = &DAT_1009e8388;
    local_90 = param_1;
    CStack_88 = param_3;
    objc_stub::enumerateObjectsWithOptions_usingBlock_(IVar2,2,&local_b0);
  }
  return;
}

