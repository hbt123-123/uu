// rea decompile_all
// name: SentryProfilerState::copyProfilingData
// address: 0x1007a2c24
// body: available
// range: 0x1007a2c24-0x1007a2e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a2e24 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfilerState::copyProfilingData(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  ID local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *pcStack_a0;
  cfstringStruct *local_98;
  cfstringStruct *pcStack_90;
  ID local_88;
  ID IStack_80;
  ID local_78;
  ID IStack_70;
  cfstringStruct *local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  std::mutex::lock();
  IVar1 = objc_stub::samples(*(ID *)(param_1 + 8));
  IVar1 = objc_stub::copy(IVar1);
  IVar2 = objc_stub::stacks(*(ID *)(param_1 + 8));
  IVar2 = objc_stub::copy(IVar2);
  IVar3 = objc_stub::frames(*(ID *)(param_1 + 8));
  IVar3 = objc_stub::copy(IVar3);
  IVar4 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  self = objc_stub::threadMetadata(*(ID *)(param_1 + 8));
  local_d0 = PTR___NSConcreteStackBlock_100995490;
  local_c8 = 0xc2000000;
  local_c0 = FUN_1007a2ec4;
  puStack_b8 = &DAT_1009ea1d8;
  local_b0 = IVar4;
  objc_stub::enumerateKeysAndObjectsUsingBlock_(self,&local_d0);
  local_68 = &cf_profile;
  local_a8 = &cf_samples;
  pcStack_a0 = &cf_stacks;
  local_98 = &cf_frames;
  pcStack_90 = &cf_thread_metadata;
  local_88 = IVar1;
  IStack_80 = IVar2;
  local_78 = IVar3;
  IStack_70 = IVar4;
  local_60 = objc_stub::dictionaryWithObjects_forKeys_count_
                       ((ID)&_OBJC_CLASS___NSDictionary,&local_88,&local_a8,4);
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
  std::mutex::unlock();
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

