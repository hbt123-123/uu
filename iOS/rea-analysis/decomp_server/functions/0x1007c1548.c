// rea decompile_all
// name: FUN_1007c1548
// address: 0x1007c1548
// body: available
// range: 0x1007c1548-0x1007c16fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1007c1548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ID IVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *(ulong *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::events);
  if (uVar5 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRetain(uVar5);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar7 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar7 = uVar5;
    }
    _swift_bridgeObjectRetain(uVar5);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar6;
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(uVar5);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar8 = uVar7;
    if ((long)uVar7 < 1) {
      uVar8 = 0;
    }
    FUN_10006fef4(0,uVar8,0);
    puVar2 = PTR___sSSSHsWP_100995808;
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007c16fc);
      (*pcVar3)();
    }
    uVar8 = 0;
    puVar1 = PTR___sypN_100995e88 + 8;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar9 = *(ID *)(uVar5 + uVar8 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar9);
      }
      else {
        uVar9 = uVar8;
        FUN_1007d054c(uVar8,uVar5);
      }
      IVar4 = _objc_msgSend(uVar9,"serialize");
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar4,PTR___sSSN_1009957f8,puVar1,puVar2);
      _swift_unknownObjectRelease(uVar9);
      uVar9 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
        FUN_10006fef4(1 < *(ulong *)(puVar6 + 0x18),uVar9 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar9 + 1;
      *(ID *)(puVar6 + uVar9 * 8 + 0x20) = IVar4;
    } while (uVar7 != uVar8);
    _swift_bridgeObjectRelease(uVar5);
  }
  return puVar6;
}

