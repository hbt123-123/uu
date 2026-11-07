// rea decompile_all
// name: FUN_100027f54
// address: 0x100027f54
// body: available
// range: 0x100027f54-0x1000281b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100027f54(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_80 [16];
  uint local_70;
  
  uVar6 = (uint)param_1;
  if (*(char *)(*(long *)(unaff_x20 + 0x38) + 0x14) == '\x01') {
    FUN_100039b50();
    if ((param_1 & 1) == 0) {
      if ((int)uVar6 < 0) {
        FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      }
      else {
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        uVar7 = (ulong)uVar6;
        FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
        FUN_1003d56bc();
        if (uVar7 != 0) {
          return;
        }
      }
      thunk_FUN_1003d7218();
      return;
    }
  }
  else {
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if (-1 < (int)uVar1) {
      uVar7 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
      uVar4 = 0;
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar7,uVar4);
      if (uVar7 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffff8;
        if ((long)uVar7 < 0) {
          uVar8 = uVar7;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100028174);
              (*pcVar2)();
            }
            uVar3 = (uint)*(undefined8 *)(uVar7 + uVar9 * 8 + 0x20);
          }
          else {
            uVar5 = uVar9;
            FUN_100169c00(uVar9,uVar7);
            uVar3 = (uint)uVar5;
          }
          uVar5 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100028170);
            (*pcVar2)();
          }
          FUN_1003d541c();
          if ((uVar3 == uVar1) && ((uVar1 == uVar6 || (uVar6 == 0xffffffff)))) {
            _swift_bridgeObjectRelease(uVar7);
            return;
          }
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar8);
      }
      _swift_bridgeObjectRelease(uVar7);
      return;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = uVar6;
  FUN_1003fb48c(FUN_10003f630,auStack_80,0xd0000000000000a9,0x8000000100877660,0xd000000000000015,
                0x8000000100877d30,0x577,0);
  return;
}

