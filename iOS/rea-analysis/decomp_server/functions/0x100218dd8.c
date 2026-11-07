// rea decompile_all
// name: FUN_100218dd8
// address: 0x100218dd8
// body: available
// range: 0x100218dd8-0x1002190af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100218f04) */

undefined1  [16]
FUN_100218dd8(undefined *param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID self;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined1 auVar12 [16];
  
  puVar3 = param_1;
  FUN_10009ff0c();
  _swift_bridgeObjectRetain_n(param_2,2);
  puVar4 = PTR___sSSN_1009957f8;
  puVar10 = puVar3;
  __sSy10FoundationE23removingPercentEncodingSSSgvg();
  puVar5 = PTR___sSSN_1009957f8;
  while (puVar2 = puVar10, puVar1 = puVar4, puVar2 != (undefined *)0x0) {
    _swift_bridgeObjectRelease(param_2);
    if (((puVar1 == param_1) && (puVar2 == param_2)) ||
       (puVar4 = puVar1, param_4 = param_2,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (puVar1,puVar2,param_1,param_2,0), ((ulong)puVar4 & 1) != 0)) {
      _swift_bridgeObjectRelease(puVar2);
      goto LAB_100218ed8;
    }
    _swift_bridgeObjectRetain(puVar2);
    _swift_bridgeObjectRelease(param_2);
    puVar4 = puVar5;
    puVar10 = puVar3;
    __sSy10FoundationE23removingPercentEncodingSSSgvg();
    param_2 = puVar2;
    param_1 = puVar1;
  }
  _swift_bridgeObjectRelease(param_2);
LAB_100218ed8:
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  self = 0x2b5c5c;
  FUN_100218cf4(0x2b5c5c,0xe300000000000000,0);
  _swift_bridgeObjectRetain(param_2);
  puVar5 = param_1;
  __sSS9UTF16ViewV5countSivg(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (self == 0) {
    _swift_bridgeObjectRelease(param_2);
    pcVar7 = (char *)0x0;
    pcVar11 = (char *)0xe000000000000000;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    uVar6 = 0x2f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2f,0xe100000000000000);
    pcVar11 = "stringByReplacingMatchesInString:options:range:withTemplate:";
    param_4 = (undefined *)0x0;
    pcVar7 = (char *)_objc_msgSend(self,
                                   "stringByReplacingMatchesInString:options:range:withTemplate:",
                                   param_1,0,0,puVar5,uVar6);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  pcVar8 = pcVar7;
  pcVar9 = pcVar11;
  FUN_10021892c();
  if (pcVar9 != (char *)0x0) {
    if ((pcVar8 == (char *)0x2f) && (pcVar9 == (char *)0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      param_4 = (undefined *)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(pcVar9);
      if (((ulong)pcVar8 & 1) == 0) goto LAB_100219084;
    }
    pcVar9 = (char *)0x1;
    pcVar8 = pcVar11;
    FUN_1001dff9c(1,pcVar7,pcVar11);
    _swift_bridgeObjectRelease(pcVar11);
    __sSS14_fromSubstringySSSshFZ(pcVar9,pcVar7,pcVar8,param_4);
    _swift_bridgeObjectRelease(param_4);
    pcVar11 = pcVar7;
    pcVar7 = pcVar9;
  }
LAB_100219084:
  auVar12._8_8_ = pcVar11;
  auVar12._0_8_ = pcVar7;
  return auVar12;
}

