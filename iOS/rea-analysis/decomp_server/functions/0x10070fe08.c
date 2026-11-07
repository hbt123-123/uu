// rea decompile_all
// name: SAFlowManager::processWithFlow:taskIndex:input:completion:
// address: 0x10070fe08
// body: available
// range: 0x10070fe08-0x100710053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SAFlowManager::processWithFlow_taskIndex_input_completion_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID local_78;
  ID local_70;
  long_long local_68;
  
  IVar1 = objc_stub::tasks(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (param_4 < IVar1) {
    IVar1 = objc_stub::tasks(param_3);
    IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,param_4);
  }
  else {
    IVar1 = objc_stub::taskIDs(param_3);
    IVar1 = objc_stub::count(IVar1);
    if (IVar1 <= param_4) {
      (**(code **)(param_6 + 0x10))(param_6,param_5);
      return;
    }
    IVar1 = tasks(param_1);
    IVar2 = objc_stub::taskIDs(param_3);
    IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,param_4);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,IVar2);
  }
  IVar2 = objc_stub::param(param_5);
  IVar3 = objc_stub::param(IVar1);
  objc_stub::addEntriesFromDictionary_(IVar2,IVar3);
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0xc2000000;
  local_90 = FUN_100710054;
  puStack_88 = &DAT_1009e7a98;
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_6;
  local_68 = param_4;
  processWithTask_nodeIndex_input_completion_(param_1,IVar1,0,param_5,(ID)&local_a0,param_7);
  return;
}

