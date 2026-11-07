// rea decompile_all
// name: FUN_100406634
// address: 0x100406634
// body: available
// range: 0x100406634-0x100406773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100406770 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100406634(long param_1)

{
  ID self;
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = self;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_100006050(0);
    uVar2 = uVar1;
    FUN_1000d3e68();
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_1,uVar1,PTR___sypN_100995e88 + 8,uVar2);
  }
  local_50 = 0;
  IVar3 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (self,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",IVar3
                     ,1,param_1,&local_50);
  if ((int)IVar3 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_50);
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

