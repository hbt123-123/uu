// rea decompile_all
// name: FUN_1000d7008
// address: 0x1000d7008
// body: available
// range: 0x1000d7008-0x1000d7167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d7164 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000d7008(undefined8 param_1,ID param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_50 = 0;
  IVar1 = _objc_msgSend(param_2,"removeItemAtURL:error:",uVar2,&local_50);
  if ((int)IVar1 == 0) {
    uVar2 = local_50;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    uVar3 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    local_70 = param_1;
    uStack_68 = uVar2;
    FUN_1003fb4ec(FUN_1000d7cd4,auStack_80,0xd0000000000000a3,0x8000000100886660,0xd000000000000021,
                  0x8000000100886830,0x79,0);
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}

