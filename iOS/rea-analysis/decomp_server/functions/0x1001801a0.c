// rea decompile_all
// name: FUN_1001801a0
// address: 0x1001801a0
// body: available
// range: 0x1001801a0-0x10018036b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined4 FUN_1001801a0(ID param_1)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  long extraout_x8;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  
  lVar1 = 0;
  __s10Foundation10CocoaErrorV4CodeVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  pcVar7 = "domain";
  uVar2 = _objc_msgSend(param_1,"domain");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  IVar3 = *(ID *)PTR__NSCocoaErrorDomain_1009952a0;
  pcVar8 = pcVar7;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar2 == IVar3 && pcVar7 == pcVar8) {
    _swift_bridgeObjectRelease(pcVar7);
    _swift_bridgeObjectRelease(pcVar8);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,pcVar7,IVar3,pcVar8,0);
    _swift_bridgeObjectRelease(pcVar7);
    _swift_bridgeObjectRelease(pcVar8);
    if ((uVar2 & 1) == 0) {
      return 7;
    }
  }
  puVar4 = (undefined1 *)_objc_msgSend(param_1,"code");
  puVar5 = puVar4;
  __s10Foundation10CocoaErrorV14fileNoSuchFileAC4CodeVvgZ(puVar10);
  __s10Foundation10CocoaErrorV4CodeV8rawValueSivg();
  pcVar11 = *(code **)(lVar12 + 8);
  puVar6 = puVar10;
  (*pcVar11)(puVar10,lVar1);
  if (puVar5 == puVar4) {
    uVar9 = 10;
  }
  else {
    __s10Foundation10CocoaErrorV20fileReadNoPermissionAC4CodeVvgZ(puVar10);
    __s10Foundation10CocoaErrorV4CodeV8rawValueSivg();
    puVar5 = puVar10;
    (*pcVar11)(puVar10,lVar1);
    if (puVar6 == puVar4) {
      uVar9 = 5;
    }
    else {
      __s10Foundation10CocoaErrorV21fileWriteNoPermissionAC4CodeVvgZ(puVar10);
      __s10Foundation10CocoaErrorV4CodeV8rawValueSivg();
      (*pcVar11)(puVar10,lVar1);
      uVar9 = 5;
      if (puVar5 != puVar4) {
        uVar9 = 7;
      }
    }
  }
  return uVar9;
}

