// rea decompile_all
// name: FUN_100097f40
// address: 0x100097f40
// body: available
// range: 0x100097f40-0x1000980ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100097f40(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar2 = param_3;
  do {
    while( true ) {
      uVar3 = uVar4;
      if ((uVar2 ^ param_4) < 0x4000) {
        __sSS8IteratorV4nextSJSgyF();
        _swift_bridgeObjectRelease(param_2);
        if (uVar3 == 0) {
          return 1;
        }
        goto LAB_100097fb4;
      }
      uVar1 = uVar2;
      uVar5 = param_3;
      __sSsySJSS5IndexVcig(uVar2,param_3,param_4,param_5,param_6);
      uVar6 = param_3;
      __sSs5index5afterSS5IndexVAD_tF(uVar2,param_3,param_4,param_5,param_6);
      uVar3 = uVar2;
      __sSS8IteratorV4nextSJSgyF();
      if (uVar6 == 0) {
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if ((uVar1 != uVar3) || (uVar6 != uVar5)) break;
      uVar4 = uVar6;
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
    uVar4 = uVar5;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar1,uVar5,uVar3,uVar6,0);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = param_2;
  } while ((uVar1 & 1) != 0);
LAB_100097fb4:
  _swift_bridgeObjectRelease(uVar3);
  return 0;
}

