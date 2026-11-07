// rea decompile_all
// name: FUN_100191bb0
// address: 0x100191bb0
// body: available
// range: 0x100191bb0-0x100191e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100191e24 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100191bb0(void)

{
  ID self;
  ID IVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long local_58;
  char *pcStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar5 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar1 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar5);
  pcVar5 = "fileExistsAtPath:";
  IVar1 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar1);
  lVar2 = 0;
  if ((IVar1 & 1) == 0) {
    __s10Foundation3URLV4pathSSvg();
    local_58 = lVar2;
    pcStack_50 = pcVar5;
    FUN_10009ff0c();
    pcVar3 = PTR___sSSN_1009957f8;
    __sSy10FoundationE23removingPercentEncodingSSSgvg(PTR___sSSN_1009957f8);
    lVar6 = lVar2;
    _swift_bridgeObjectRelease(pcVar5);
    if (lVar2 == 0) {
      __s10Foundation3URLV4pathSSvg();
      lVar2 = lVar6;
      pcVar3 = pcVar5;
    }
    IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pcVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
    local_58 = 0;
    IVar1 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar1,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                       pcVar3,1,0,&local_58);
    if ((IVar1 & 1) != 0) {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_100190a4c,0,0xd0000000000000ad,0x8000000100890a70,0xd000000000000012,
                    0x8000000100898990,0x189,7);
      uVar4 = 1;
      goto LAB_100191df4;
    }
    lVar2 = local_58;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_58);
    _swift_willThrow(0);
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_100190a78,0,0xd0000000000000ad,0x8000000100890a70,0xd000000000000012,
                  0x8000000100898990,0x18c,7);
    _swift_errorRelease(lVar2);
  }
  uVar4 = 0;
LAB_100191df4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}

