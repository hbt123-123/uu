// rea decompile_all
// name: FUN_10021a470
// address: 0x10021a470
// body: available
// range: 0x10021a470-0x10021a5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021a5e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021a470(void)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar1 = self;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_40 = 0;
  IVar1 = NSFileManager::removeItemAtURL_error_(self,"removeItemAtURL:error:",IVar1,&local_40);
  if ((int)IVar1 == 0) {
    uVar2 = local_40;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = uVar2;
    FUN_1003fb45c(FUN_10021a5ec,auStack_70,0xd0000000000000a4,0x80000001008a5270,0x694665766f6d6572,
                  0xef293a746128656c,0x9a,0);
    _swift_errorRelease(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar1;
}

