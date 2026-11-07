// rea decompile_all
// name: FUN_1003779b4
// address: 0x1003779b4
// body: available
// range: 0x1003779b4-0x100377aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003779b4(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 < 2) {
    lVar5 = 0x6874646977;
    if (param_1 != 0) {
      lVar5 = 0x746867696568;
    }
    lVar6 = -0x1b00000000000000;
    if (param_1 != 0) {
      lVar6 = -0x1a00000000000000;
    }
  }
  else {
    lVar5 = 0x737066;
    if (param_1 != 2) {
      lVar5 = 0x735f616d6f726863;
    }
    lVar6 = -0x1d00000000000000;
    if (param_1 != 2) {
      lVar6 = -0x10989196938f929f;
    }
  }
  lVar1 = 0x737066;
  if (param_2 != 2) {
    lVar1 = 0x735f616d6f726863;
  }
  lVar4 = -0x1d00000000000000;
  if (param_2 != 2) {
    lVar4 = -0x10989196938f929f;
  }
  lVar2 = 0x6874646977;
  if (param_2 != 0) {
    lVar2 = 0x746867696568;
  }
  lVar3 = -0x1b00000000000000;
  if (param_2 != 0) {
    lVar3 = -0x1a00000000000000;
  }
  if (param_2 < 2) {
    lVar4 = lVar3;
    lVar1 = lVar2;
  }
  if ((lVar5 == lVar1) && (lVar6 == lVar4)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar6,lVar1,lVar4,0);
    uVar7 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar4);
  return uVar7 & 1;
}

