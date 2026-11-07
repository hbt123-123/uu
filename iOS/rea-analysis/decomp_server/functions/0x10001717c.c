// rea decompile_all
// name: FUN_10001717c
// address: 0x10001717c
// body: available
// range: 0x10001717c-0x10001746b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100017464 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001717c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100025458,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000032,
                  0x800000010087ba20,0x447,0);
  }
  else {
    uVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar3 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
    if (uVar2 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar2 & 0xffffffffffffff8;
      if ((long)uVar2 < 0) {
        uVar8 = uVar2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar8 == 0) {
      _swift_bridgeObjectRelease(uVar2);
      return;
    }
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001746c);
      (*pcVar1)();
    }
    uVar9 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar9 * 8 + 0x20);
      }
      else {
        uVar4 = uVar9;
        FUN_100169c00(uVar9,uVar2);
      }
      FUN_1003d541c();
      uVar5 = uVar4;
      FUN_10004ffa0();
      if ((uVar5 & 1) == 0) {
        uVar5 = param_1;
        uVar6 = param_2;
        uVar7 = uVar4;
        FUN_10003d09c(param_1,param_2);
        if ((uVar7 & 1) != 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          pcVar1 = FUN_1000400d0;
          uVar3 = 0x452;
          goto LAB_100017390;
        }
        FUN_100024470(uVar4,uVar5,uVar5 >> 0x20,uVar6,uVar6 >> 0x20);
      }
      else {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar1 = FUN_1000400d8;
        uVar3 = 0x44e;
LAB_100017390:
        local_90 = (int)uVar4;
        FUN_1003fb48c(pcVar1,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000032,
                      0x800000010087ba20,uVar3,0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}

