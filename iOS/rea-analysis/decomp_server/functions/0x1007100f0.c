// rea decompile_all
// name: SAFlowManager::processWithTask:nodeIndex:input:completion:
// address: 0x1007100f0
// body: available
// range: 0x1007100f0-0x10071035b inclusive
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

void SAFlowManager::processWithTask_nodeIndex_input_completion_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  ID IVar2;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  long_long local_68;
  
  IVar1 = objc_stub::nodes(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (param_4 < IVar1) {
    IVar1 = objc_stub::nodes(param_3);
    IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,param_4);
  }
  else {
    IVar1 = objc_stub::nodeIDs(param_3);
    IVar1 = objc_stub::count(IVar1);
    if (IVar1 <= param_4) {
      (**(code **)(param_6 + 0x10))(param_6,param_5);
      return;
    }
    IVar1 = nodes(param_1);
    IVar2 = objc_stub::nodeIDs(param_3);
    IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,param_4);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,IVar2);
  }
  IVar2 = objc_stub::interceptor(IVar1);
  if (IVar2 == 0) {
    processWithTask_nodeIndex_input_completion_(param_1,param_3,param_4 + 1,param_5,param_6,param_7)
    ;
  }
  else {
    IVar2 = objc_stub::interceptor(IVar1);
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0xc2000000;
    local_98 = FUN_10071035c;
    puStack_90 = &DAT_1009e7ac8;
    local_88 = IVar1;
    local_80 = param_3;
    local_78 = param_1;
    local_70 = param_6;
    local_68 = param_4;
    objc_stub::processWithInput_completion_(IVar2,param_5,&local_a8);
  }
  return;
}

