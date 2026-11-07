// rea decompile_all
// name: FUN_100351fe8
// address: 0x100351fe8
// body: available
// range: 0x100351fe8-0x10035207b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100351fe8(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar5;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  FUN_10003f030(param_2,lVar3);
  __ss9CodingKeyP11stringValueSSvgTj();
  if (lVar4 == lVar3 && lVar1 == lVar5) {
    uVar2 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar4,lVar1,lVar3,lVar5,0);
    uVar2 = (uint)lVar4;
  }
  _swift_bridgeObjectRelease(lVar5);
  return uVar2 & 1;
}

