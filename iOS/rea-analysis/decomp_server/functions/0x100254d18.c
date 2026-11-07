// rea decompile_all
// name: FUN_100254d18
// address: 0x100254d18
// body: available
// range: 0x100254d18-0x100254eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100254e40 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100254ea8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100254d18(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
  IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",uVar3);
  uVar3 = 0;
  if ((int)IVar2 != 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
    local_60 = 0;
    IVar2 = NSFileManager::removeItemAtPath_error_(IVar2,"removeItemAtPath:error:",uVar4,&local_60);
    if ((int)IVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
        return local_60;
      }
      goto LAB_100254ea8;
    }
    uVar3 = local_60;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_60);
    _swift_willThrow(0);
    _swift_errorRelease(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return uVar3;
  }
LAB_100254ea8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

