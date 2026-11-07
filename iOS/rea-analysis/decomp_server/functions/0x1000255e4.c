// rea decompile_all
// name: FUN_1000255e4
// address: 0x1000255e4
// body: available
// range: 0x1000255e4-0x1000257d7 inclusive
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

ulong FUN_1000255e4(void)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  if (*(char *)(*(long *)(unaff_x20 + 0x38) + 0x14) == '\x01') {
    FUN_100039b50();
  }
  else {
    iVar2 = *(int *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if (-1 < iVar2) {
      uVar4 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
      uVar5 = 0;
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
      if (uVar4 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar4 & 0xffffffffffffff8;
        if ((long)uVar4 < 0) {
          uVar8 = uVar4;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100025738);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
          }
          else {
            uVar6 = uVar9;
            FUN_100169c00(uVar9,uVar4);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100025734);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          FUN_1003d541c();
          if ((int)uVar7 == iVar2) {
            _swift_bridgeObjectRelease(uVar4);
            FUN_100025804(uVar6);
            return uVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar1 != uVar8);
      }
      _swift_bridgeObjectRelease(uVar4);
    }
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000257d8,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                0x8000000100877b20,0x45e,0);
  return 0;
}

