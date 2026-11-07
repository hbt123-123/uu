// rea decompile_all
// name: FUN_1003d2cd4
// address: 0x1003d2cd4
// body: available
// range: 0x1003d2cd4-0x1003d2e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003d2cd4(ID param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong self;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = _objc_msgSend(param_1,"exceptions");
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  FUN_1003d3098(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    uVar4 = 0;
    if (uVar6 == 0) goto LAB_1003d2e18;
  }
  else {
    uVar6 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar6 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar6 == 0) {
      uVar4 = 0;
      goto LAB_1003d2e18;
    }
  }
  uVar7 = 0;
  do {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d2e48);
        (*pcVar2)();
      }
      self = *(ID *)(uVar3 + uVar7 * 8 + 0x20);
    }
    else {
      self = uVar7;
      FUN_1003d71d4(uVar7,uVar3);
    }
    uVar1 = uVar7 + 1;
    if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003d2e44);
      (*pcVar2)();
    }
    IVar5 = _objc_msgSend(self,"mechanism");
    if (((IVar5 != 0) && (IVar5 = _objc_msgSend(IVar5,"handled"), IVar5 != 0)) &&
       (IVar5 = _objc_msgSend(IVar5,"boolValue"), (IVar5 & 1) == 0)) {
      uVar4 = 1;
      goto LAB_1003d2e18;
    }
    uVar7 = uVar7 + 1;
  } while (uVar1 != uVar6);
  uVar4 = 0;
LAB_1003d2e18:
  _swift_bridgeObjectRelease(uVar3);
  return uVar4;
}

