// rea decompile_all
// name: FUN_10039046c
// address: 0x10039046c
// body: available
// range: 0x10039046c-0x100390583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100390580 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_10039046c(long *param_1)

{
  long *plVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_40;
  undefined8 local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,plVar1);
  local_40 = 0;
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  local_38 = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
  local_30 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,0x1ff);
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_30,&local_38,1);
  IVar2 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    (IVar3,IVar2,1,IVar4,&local_40);
  if ((IVar2 & 1) == 0) {
    IVar3 = objc_stub::localizedDescription(local_40);
    objc_stub::UTF8String(IVar3);
    FUN_100386734(2,"MemoryFile.cpp","mkPath",0x151,"%s");
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

