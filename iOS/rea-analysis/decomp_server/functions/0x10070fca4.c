// rea decompile_all
// name: SAFlowManager::startWithFlow:input:completion:
// address: 0x10070fca4
// body: available
// range: 0x10070fca4-0x10070fde3 inclusive
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

void __thiscall
SAFlowManager::startWithFlow_input_completion_
          (SAFlowManager *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  undefined4 in_w6;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar1 = configOptions(param_1);
  objc_stub::setConfigOptions_(param_4,IVar1);
  IVar1 = objc_stub::param(param_4);
  IVar2 = objc_stub::param(param_3);
  objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
  local_68 = PTR___NSConcreteStackBlock_100995490;
  local_60 = 0xc2000000;
  local_58 = FUN_10070fde4;
  puStack_50 = &DAT_1009e7a68;
  local_48 = param_5;
  processWithFlow_taskIndex_input_completion_(param_1,param_3,0,param_4,(ID)&local_68,in_w6);
  return;
}

