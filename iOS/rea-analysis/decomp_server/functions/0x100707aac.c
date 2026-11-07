// rea decompile_all
// name: SAModuleManager::moduleNames
// address: 0x100707aac
// body: available
// range: 0x100707aac-0x100707b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100707b88 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100707b8c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAModuleManager::moduleNames(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_80;
  cfstringStruct *pcStack_78;
  cfstringStruct *local_70;
  cfstringStruct *pcStack_68;
  cfstringStruct *local_60;
  cfstringStruct *pcStack_58;
  cfstringStruct *local_50;
  cfstringStruct *pcStack_48;
  cfstringStruct *local_40;
  cfstringStruct *pcStack_38;
  cfstringStruct *local_30;
  cfstringStruct *pcStack_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_80 = &cf_JavaScriptBridge;
  pcStack_78 = &cf_AppPush;
  local_70 = &cf_ChannelMatch;
  pcStack_68 = &cf_DeepLink;
  local_60 = &cf_DebugMode;
  pcStack_58 = &cf_Location;
  local_50 = &cf_AutoTrack;
  pcStack_48 = &cf_Visualized;
  local_40 = &cf_Encrypt;
  pcStack_38 = &cf_DeviceOrientation;
  local_30 = &cf_Exception;
  pcStack_28 = &cf_RemoteConfig;
  local_20 = &cf_Exposure;
  IVar1 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_80,0xd);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

