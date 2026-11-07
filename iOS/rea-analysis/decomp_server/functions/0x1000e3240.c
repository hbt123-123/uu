// rea decompile_all
// name: FUN_1000e3240
// address: 0x1000e3240
// body: available
// range: 0x1000e3240-0x1000e3493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000e3240(ID param_1)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  long extraout_x8;
  long lVar8;
  
  lVar1 = 0;
  __s10Foundation10CocoaErrorV4CodeVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  pcVar6 = "domain";
  uVar2 = _objc_msgSend(param_1,"domain");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  IVar3 = *(ID *)PTR__NSCocoaErrorDomain_1009952a0;
  pcVar7 = pcVar6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar2 == IVar3 && pcVar6 == pcVar7) {
    _swift_bridgeObjectRelease(pcVar6);
    _swift_bridgeObjectRelease(pcVar7);
LAB_1000e3338:
    IVar4 = _objc_msgSend(param_1,"code");
    IVar3 = IVar4;
    __s10Foundation10CocoaErrorV4CodeV21fileWriteNoPermissionAEvgZ
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation10CocoaErrorV4CodeV8rawValueSivg();
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    if (IVar4 != IVar3) goto LAB_1000e3370;
LAB_1000e342c:
    uVar5 = 5;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,pcVar6,IVar3,pcVar7,0);
    _swift_bridgeObjectRelease(pcVar6);
    _swift_bridgeObjectRelease(pcVar7);
    if ((uVar2 & 1) != 0) goto LAB_1000e3338;
LAB_1000e3370:
    pcVar6 = "domain";
    uVar2 = _objc_msgSend(param_1,"domain");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    IVar3 = *(ID *)PTR__NSPOSIXErrorDomain_100995308;
    pcVar7 = pcVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar2 == IVar3) && (pcVar6 == pcVar7)) {
      _swift_bridgeObjectRelease(pcVar6);
      _swift_bridgeObjectRelease(pcVar7);
LAB_1000e3404:
      IVar3 = _objc_msgSend(param_1,"code");
      if ((IVar3 == 0xd) || (IVar3 = _objc_msgSend(param_1,"code"), IVar3 == 1)) goto LAB_1000e342c;
      IVar3 = _objc_msgSend(param_1,"code");
      if (IVar3 == 0x1c) {
        return 6;
      }
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,pcVar6,IVar3,pcVar7,0);
      _swift_bridgeObjectRelease(pcVar6);
      _swift_bridgeObjectRelease(pcVar7);
      if ((uVar2 & 1) != 0) goto LAB_1000e3404;
    }
    uVar5 = 7;
  }
  return uVar5;
}

