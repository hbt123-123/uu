// rea decompile_all
// name: FUN_1000b5338
// address: 0x1000b5338
// body: available
// range: 0x1000b5338-0x1000b553b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b5538 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b5338(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  int local_60;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_1000b507c();
  if ((param_1 >> 0x20 & 1) == 0) {
    _AXUIElementCreateApplication();
    local_50 = 0;
    uVar1 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000001008824c0);
    _AXUIElementCopyAttributeValue(param_1,uVar1,&local_50);
    lVar4 = local_50;
    if ((int)param_1 == 0 && local_50 != 0) {
      lVar2 = local_50;
      _swift_unknownObjectRetain();
      _CFGetTypeID();
      lVar3 = lVar2;
      _AXUIElementGetTypeID();
      if (lVar2 == lVar3) {
        uVar1 = 0;
        FUN_100005fec(0);
        _swift_dynamicCastUnknownClassUnconditional(lVar4,uVar1,0,0,0);
        _swift_unknownObjectRelease(local_50);
        goto LAB_1000b5508;
      }
      _swift_unknownObjectRelease(lVar4);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_60 = (int)param_1;
      FUN_1003fb45c(FUN_1000b6544,auStack_70,0xd000000000000099,0x8000000100881de0,
                    0xd00000000000001b,0x80000001008824a0,0x18d,0);
    }
    _swift_unknownObjectRelease(local_50);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1000b2d3c,0,0xd000000000000099,0x8000000100881de0,0xd00000000000001b,
                  0x80000001008824a0,0x186,0);
  }
  lVar4 = 0;
LAB_1000b5508:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar4);
}

