// rea decompile_all
// name: SAPresetPropertyObject::sysctlByName:
// address: 0x10072c728
// body: available
// range: 0x10072c728-0x10072c86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072c868 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10072c86c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAPresetPropertyObject::sysctlByName_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  ID IVar3;
  long extraout_x8;
  ID aIStack_50 [2];
  size_t local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar3 = param_3;
  _objc_retainAutorelease();
  pcVar2 = (char *)objc_stub::UTF8String(IVar3);
  _sysctlbyname(pcVar2,(void *)0x0,&local_40,(void *)0x0,0);
  (*(code *)PTR____chkstk_darwin_100995498)(local_40);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retainAutorelease(param_3);
  pcVar2 = (char *)objc_stub::UTF8String(param_3);
  _sysctlbyname(pcVar2,(void *)((long)&local_40 + lVar1),&local_40,(void *)0x0,0);
  if (local_40 == 0) {
    *(cfstringStruct **)((long)aIStack_50 + lVar1) = &cf_Failedfetch__fromsysctl_;
    *(ID *)((long)aIStack_50 + lVar1 + 8) = param_3;
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/SAPresetPropertyObject.m"
               ,"-[SAPresetPropertyObject sysctlByName:]",0x96,0);
    IVar3 = 0;
  }
  else {
    IVar3 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,(void *)((long)&local_40 + lVar1));
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

