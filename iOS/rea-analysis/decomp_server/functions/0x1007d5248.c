// rea decompile_all
// name: FUN_1007d5248
// address: 0x1007d5248
// body: available
// range: 0x1007d5248-0x1007d532f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007d5248(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_3;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if ((uVar1 & 0xffffffffffff) == 0) {
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    uVar5 = 0xf;
    do {
      uVar2 = uVar5;
      uVar3 = param_3;
      __sSSySJSS5IndexVcig(uVar5,param_3,param_4);
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
        _swift_bridgeObjectRelease(param_2);
        uVar4 = 0;
        goto LAB_1007d5310;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_1007d52f0;
      __sSS5index5afterSS5IndexVAD_tF(uVar5,param_3,param_4);
    } while ((uVar1 & 0xffffffffffff) << 2 != uVar5 >> 0xe);
    uVar5 = 0;
LAB_1007d52f0:
    uVar4 = (uint)uVar2 ^ 1;
  }
LAB_1007d5310:
  auVar6._8_4_ = uVar4 & 1;
  auVar6._0_8_ = uVar5;
  auVar6._12_4_ = 0;
  return auVar6;
}

