// rea decompile_all
// name: FUN_1000d35b0
// address: 0x1000d35b0
// body: available
// range: 0x1000d35b0-0x1000d3847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d35b0(undefined8 *param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  undefined1 uVar6;
  long extraout_x8;
  long lVar7;
  char *pcVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = 0;
  local_68 = param_3;
  __s10Foundation10CocoaErrorV4CodeVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  pcVar5 = "domain";
  uVar2 = _objc_msgSend(param_2,"domain");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  IVar3 = *(ID *)PTR__NSCocoaErrorDomain_1009952a0;
  pcVar8 = pcVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar2 == IVar3 && pcVar5 == pcVar8) {
    _swift_bridgeObjectRelease(pcVar5);
    _swift_bridgeObjectRelease(pcVar8);
LAB_1000d36b4:
    IVar4 = _objc_msgSend(param_2,"code");
    IVar3 = IVar4;
    __s10Foundation10CocoaErrorV4CodeV20fileReadNoPermissionAEvgZ
              (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation10CocoaErrorV4CodeV8rawValueSivg();
    (**(code **)(lVar7 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    if (IVar4 != IVar3) goto LAB_1000d36f0;
LAB_1000d37b4:
    _swift_bridgeObjectRetain(param_4);
    IVar3 = 0;
    pcVar8 = (char *)0x0;
    uVar6 = 3;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,pcVar5,IVar3,pcVar8,0);
    _swift_bridgeObjectRelease(pcVar5);
    _swift_bridgeObjectRelease(pcVar8);
    if ((uVar2 & 1) != 0) goto LAB_1000d36b4;
LAB_1000d36f0:
    pcVar5 = "domain";
    uVar2 = _objc_msgSend(param_2,"domain");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    IVar3 = *(ID *)PTR__NSPOSIXErrorDomain_100995308;
    pcVar8 = pcVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar2 == IVar3) && (pcVar5 == pcVar8)) {
      _swift_bridgeObjectRelease(pcVar5);
      _swift_bridgeObjectRelease(pcVar8);
LAB_1000d3784:
      IVar3 = _objc_msgSend(param_2,"code");
      if ((IVar3 == 0xd) || (IVar3 = _objc_msgSend(param_2,"code"), IVar3 == 1)) goto LAB_1000d37b4;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,pcVar5,IVar3,pcVar8,0);
      _swift_bridgeObjectRelease(pcVar5);
      _swift_bridgeObjectRelease(pcVar8);
      if ((uVar2 & 1) != 0) goto LAB_1000d3784;
    }
    _swift_bridgeObjectRetain(param_4);
    pcVar8 = "localizedDescription";
    IVar3 = _objc_msgSend(param_2,"localizedDescription");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = 4;
  }
  *param_1 = local_68;
  param_1[1] = param_4;
  param_1[2] = IVar3;
  param_1[3] = pcVar8;
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}

