// rea decompile_all
// name: FUN_10011c298
// address: 0x10011c298
// body: available
// range: 0x10011c298-0x10011c4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011c4a8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10011c298(uint param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_70 [16];
  int local_60;
  uint local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_4c = 0;
  pcVar2 = "IOHIDSystem";
  _IOServiceMatching("IOHIDSystem");
  uVar5 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  puVar1 = (uint *)PTR__kIOMainPortDefault_100995600;
  if ((uVar5 & 1) == 0) {
    puVar1 = (uint *)PTR__kIOMasterPortDefault_100995608;
  }
  uVar5 = (ulong)*puVar1;
  _IOServiceGetMatchingService(uVar5,pcVar2);
  if ((int)uVar5 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_10011ac8c,0,0xd000000000000092,0x8000000100882970,0xd00000000000001b,
                  0x800000010088ce20,0x40c,0);
  }
  else {
    uVar3 = uVar5;
    _IOServiceOpen();
    if ((int)uVar3 == 0) {
      uVar4 = local_4c;
      FUN_10011a9cc(local_4c,param_1 & 1,param_2 & 1);
      if (local_4c != 0) {
        _IOServiceClose();
      }
      _IOObjectRelease(uVar5);
      goto LAB_10011c474;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = (int)uVar3;
    FUN_1003fb4ec(thunk_FUN_10011cd2c,auStack_70,0xd000000000000092,0x8000000100882970,
                  0xd00000000000001b,0x800000010088ce20,0x417,0);
    if (local_4c != 0) {
      _IOServiceClose();
    }
    _IOObjectRelease(uVar5);
  }
  uVar4 = 0;
LAB_10011c474:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

