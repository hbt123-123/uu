// rea decompile_all
// name: FUN_10011cb1c
// address: 0x10011cb1c
// body: available
// range: 0x10011cb1c-0x10011cd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011cd18 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_10011cb1c(void)

{
  undefined1 uVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  byte local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar6 = 1;
  uVar2 = 1;
  FUN_1000b35b4();
  if ((uVar2 & 1) != 0) {
    local_39 = 0;
    uVar2 = 0;
    FUN_10011bbac(0x10000,&local_39);
    if ((uVar2 & 1) == 0) {
      IVar3 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent,"modifierFlags");
      uVar2 = IVar3 >> 0x10 & 1;
    }
    else {
      uVar2 = (ulong)local_39;
    }
    uVar4 = 0;
    FUN_10011c298(0,uVar2);
    uVar1 = (undefined1)uVar2;
    if ((uVar4 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar5 = FUN_10011cd1c;
      uVar6 = 0x3c9;
    }
    else {
      FUN_10011c4ac();
      if ((uVar2 & 1) != 0) {
        uVar6 = 1;
        goto LAB_10011ccd0;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar5 = FUN_10011cd24;
      uVar6 = 0x3cd;
    }
    local_50 = uVar1;
    FUN_1003fb4ec(pcVar5,auStack_60,0xd000000000000092,0x8000000100882970,0xd000000000000017,
                  0x800000010088cdb0,uVar6,0);
    uVar6 = 0;
  }
LAB_10011ccd0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

