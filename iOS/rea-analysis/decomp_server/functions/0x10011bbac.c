// rea decompile_all
// name: FUN_10011bbac
// address: 0x10011bbac
// body: available
// range: 0x10011bbac-0x10011be47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011be44 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10011bbac(long param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [16];
  int local_60;
  int local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 == 0x10000) {
    uVar7 = 1;
  }
  else {
    if (param_1 != 0x200000) {
      FUN_100401b14(0);
      FUN_1003fb4ec(thunk_FUN_10011aebc,0,0xd000000000000092,0x8000000100882970,0xd000000000000029,
                    0x800000010088cfe0,0x478,0);
      uVar7 = 0;
      goto LAB_10011be00;
    }
    uVar7 = 2;
  }
  local_4c = 0;
  pcVar3 = "IOHIDSystem";
  _IOServiceMatching("IOHIDSystem");
  uVar4 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  puVar1 = (uint *)PTR__kIOMainPortDefault_100995600;
  if ((uVar4 & 1) == 0) {
    puVar1 = (uint *)PTR__kIOMasterPortDefault_100995608;
  }
  uVar6 = (ulong)*puVar1;
  _IOServiceGetMatchingService(uVar6,pcVar3);
  uVar4 = uVar6;
  _IOServiceOpen();
  if ((int)uVar4 == 0) {
    iVar2 = local_4c;
    _IOHIDGetModifierLockState(local_4c,uVar7,param_2);
    if (iVar2 != 0) {
      uVar7 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar7);
      pcVar5 = FUN_10011cd50;
      uVar7 = 0x48a;
      local_60 = iVar2;
      goto LAB_10011bdd8;
    }
    uVar7 = 1;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar5 = thunk_FUN_10011cd94;
    uVar7 = 0x48d;
    local_60 = (int)uVar4;
LAB_10011bdd8:
    FUN_1003fb4ec(pcVar5,auStack_70,0xd000000000000092,0x8000000100882970,0xd000000000000029,
                  0x800000010088cfe0,uVar7,0);
    uVar7 = 0;
  }
  if (local_4c != 0) {
    _IOServiceClose();
  }
  _IOObjectRelease(uVar6);
LAB_10011be00:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

