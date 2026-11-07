// rea decompile_all
// name: FUN_1000b462c
// address: 0x1000b462c
// body: available
// range: 0x1000b462c-0x1000b4877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b4874 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b462c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_80 [16];
  ulong local_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_60 = 0;
  lVar4 = 0;
  _SCDynamicStoreCopyConsoleUser(0,(long)&local_60 + 4,&local_60);
  if ((lVar4 == 0) || (_swift_dynamicCastObjCClass(lVar4,&_OBJC_CLASS___NSString), lVar4 == 0)) {
LAB_1000b4754:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar6 = FUN_1000b4878;
    uVar5 = 0x48;
  }
  else {
    local_58 = 0;
    local_50 = 0;
    __sSS10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo8NSStringC_SSSgztFZ();
    uVar3 = local_50;
    uVar2 = local_58;
    if (local_50 == 0) goto LAB_1000b4754;
    uVar1 = local_58 & 0xffffffffffff;
    if ((local_50 & 0x2000000000000000) != 0) {
      uVar1 = local_50 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_70 = uVar2;
      uStack_68 = uVar3;
      FUN_1003fb45c(FUN_1000b4880,auStack_80,0xd000000000000099,0x8000000100881de0,
                    0xd00000000000001e,0x8000000100881e80,0x4f,0);
      _swift_bridgeObjectRelease(uVar3);
      uVar5 = 2;
      goto LAB_1000b47c8;
    }
    _swift_bridgeObjectRelease(local_50);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar6 = FUN_1000b4888;
    uVar5 = 0x4c;
  }
  local_70 = (long)&local_60 + 4;
  FUN_1003fb45c(pcVar6,auStack_80,0xd000000000000099,0x8000000100881de0,0xd00000000000001e,
                0x8000000100881e80,uVar5,0);
  uVar5 = 1;
LAB_1000b47c8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}

