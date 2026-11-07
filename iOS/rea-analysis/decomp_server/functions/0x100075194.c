// rea decompile_all
// name: FUN_100075194
// address: 0x100075194
// body: available
// range: 0x100075194-0x100075337 inclusive
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

undefined * FUN_100075194(void)

{
  code *pcVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar4 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar6 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar6 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar8;
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    FUN_10006fbb8(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100075338);
      (*pcVar1)();
    }
    uVar7 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar2 = (undefined4)*(undefined8 *)(uVar3 + uVar7 * 8 + 0x20);
      }
      else {
        uVar5 = uVar7;
        FUN_100169c00(uVar7,uVar3);
        uVar2 = (undefined4)uVar5;
      }
      FUN_1003d541c();
      uVar5 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        FUN_10006fbb8(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
      *(undefined4 *)(puVar8 + uVar5 * 4 + 0x20) = uVar2;
    } while (uVar6 != uVar7);
    _swift_bridgeObjectRelease(uVar3);
  }
  return puVar8;
}

