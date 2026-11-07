// rea decompile_all
// name: SentryCrashReportFilterCombine::argBlockWithFilters:andKeys:
// address: 0x100757694
// body: available
// range: 0x100757694-0x100757783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100757780 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterCombine::argBlockWithFilters_andKeys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_58 = &local_50;
  local_50 = 0;
  local_40 = 0x2020000000;
  local_38 = 0;
  local_88 = PTR___NSConcreteStackBlock_100995490;
  local_80 = 0xc2000000;
  local_78 = FUN_10075779c;
  puStack_70 = &DAT_1009e8d50;
  local_68 = param_4;
  local_60 = param_3;
  puStack_48 = local_58;
  IVar1 = objc_stub::copy((ID)&local_88);
  __Block_object_dispose(&local_50,8);
  return IVar1;
}

