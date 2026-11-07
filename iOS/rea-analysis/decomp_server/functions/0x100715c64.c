// rea decompile_all
// name: FUN_100715c64
// address: 0x100715c64
// body: available
// range: 0x100715c64-0x100715d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100715d18 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100715c64(long param_1)

{
  ID IVar1;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  IVar1 = objc_stub::plugins(*(ID *)(param_1 + 0x20));
  local_50 = PTR___NSConcreteStackBlock_100995490;
  local_48 = 0xc2000000;
  local_40 = FUN_100715d1c;
  puStack_38 = &DAT_1009e7c18;
  local_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  objc_stub::enumerateObjectsWithOptions_usingBlock_(IVar1,2,&local_50);
  IVar1 = objc_stub::plugins(*(ID *)(param_1 + 0x20));
  objc_stub::insertObject_atIndex_(IVar1,*(undefined8 *)(param_1 + 0x28),0);
  return 0;
}

