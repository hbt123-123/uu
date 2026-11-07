// rea decompile_all
// name: FUN_10071035c
// address: 0x10071035c
// body: available
// range: 0x10071035c-0x1007105bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007105b8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10071035c(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar1 = objc_stub::message(param_2);
  if (IVar1 != 0) {
    IVar1 = objc_stub::nodeID(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::name(*(ID *)(param_1 + 0x20));
    IVar3 = objc_stub::interceptor(*(ID *)(param_1 + 0x20));
    _objc_opt_class();
    IVar4 = objc_stub::message(param_2);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Flow/SAFlowManager.m"
               ,"-[SAFlowManager processWithTask:nodeIndex:input:completion:]_block_invoke",0x9b,0,
               &cf_Thenode_id____name____interceptor____error___,IVar1,IVar2,IVar3,IVar4);
    objc_stub::setMessage_(param_2,0);
  }
  IVar1 = objc_stub::state(param_2);
  if (IVar1 == 2) {
    IVar1 = objc_stub::nodeID(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::name(*(ID *)(param_1 + 0x20));
    IVar3 = objc_stub::interceptor(*(ID *)(param_1 + 0x20));
    _objc_opt_class();
    IVar4 = objc_stub::taskID(*(ID *)(param_1 + 0x28));
    IVar5 = objc_stub::name(*(ID *)(param_1 + 0x28));
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,2,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Flow/SAFlowManager.m"
               ,"-[SAFlowManager processWithTask:nodeIndex:input:completion:]_block_invoke",0x9f,0,
               &cf_Thenode_id____name____interceptor____stopthetask_id____name_____,IVar1,IVar2,
               IVar3,IVar4,IVar5);
  }
  IVar1 = objc_stub::state(param_2);
  if ((IVar1 == 1) || (IVar1 = objc_stub::state(param_2), IVar1 == 2)) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_2);
  }
  else {
    objc_stub::processWithTask_nodeIndex_input_completion_
              (*(ID *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x40) + 1
               ,param_2,*(undefined8 *)(param_1 + 0x38));
  }
  return 0;
}

