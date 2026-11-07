// rea decompile_all
// name: FUN_10002dad0
// address: 0x10002dad0
// body: available
// range: 0x10002dad0-0x10002dcb3 inclusive
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

undefined * FUN_10002dad0(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar4 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
  uVar11 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar11 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar9 = uVar11;
    if ((long)uVar4 < 0) {
      uVar9 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar2;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10002dc68);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        }
        else {
          uVar6 = uVar10;
          FUN_100169c00(uVar10,uVar4);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10002dc64);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        FUN_1003d541c();
        FUN_1000231b4();
        if ((uVar7 & 1) != 0) break;
        uVar10 = uVar10 + 1;
        if (uVar1 == uVar9) goto LAB_10002dc88;
      }
      puVar8 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_10006fb44(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar10 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
        FUN_10006fb44(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar2 + uVar10 * 8 + 0x20) = uVar6;
      uVar10 = uVar1;
    } while (uVar1 != uVar9);
  }
LAB_10002dc88:
  _swift_bridgeObjectRelease(uVar4);
  return puVar2;
}

