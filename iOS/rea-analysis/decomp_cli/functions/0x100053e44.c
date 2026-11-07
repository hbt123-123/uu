// rea decompile_all
// name: FUN_100053e44
// address: 0x100053e44
// body: available
// range: 0x100053e44-0x100053f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100053e44(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar1 = param_5 >> 0x38 & 0xf;
  }
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar8 = 0xf;
    do {
      if (uVar1 * 4 < param_3 >> 0xe || uVar1 * 4 - (param_3 >> 0xe) == 0) {
LAB_100053f74:
        param_3 = 0;
        uVar7 = 1;
        goto LAB_100053f7c;
      }
      uVar3 = param_3;
      uVar5 = param_4;
      __sSSySJSS5IndexVcig(param_3,param_4,param_5);
      uVar4 = uVar8;
      uVar6 = param_1;
      __sSSySJSS5IndexVcig(uVar8,param_1,param_2);
      if ((uVar3 == uVar4) && (uVar5 == uVar6)) {
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(uVar6);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar5,uVar4,uVar6,0);
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar3 & 1) == 0) goto LAB_100053f74;
      }
      __sSS5index5afterSS5IndexVAD_tF(param_3,param_4,param_5);
      __sSS5index5afterSS5IndexVAD_tF(uVar8,param_1,param_2);
    } while (uVar8 >> 0xe < uVar2 << 2);
  }
  uVar7 = 0;
LAB_100053f7c:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = param_3;
  return auVar9;
}

