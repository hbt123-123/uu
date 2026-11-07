// rea decompile_all
// name: FUN_10040dd34
// address: 0x10040dd34
// body: available
// range: 0x10040dd34-0x10040de5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040dd34(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 < 2) {
    lVar5 = 0x6e656b6f74;
    if (param_1 != 0) {
      lVar5 = 0x6c72755f716572;
    }
    lVar6 = -0x1b00000000000000;
    if (param_1 != 0) {
      lVar6 = -0x1900000000000000;
    }
  }
  else {
    lVar5 = 0x6c7474;
    if (param_1 != 2) {
      lVar5 = 0x657a69735f78616d;
    }
    lVar6 = -0x1d00000000000000;
    if (param_1 != 2) {
      lVar6 = -0x1800000000000000;
    }
  }
  lVar1 = 0x6c7474;
  if (param_2 != 2) {
    lVar1 = 0x657a69735f78616d;
  }
  lVar2 = -0x1d00000000000000;
  if (param_2 != 2) {
    lVar2 = -0x1800000000000000;
  }
  lVar3 = 0x6e656b6f74;
  if (param_2 != 0) {
    lVar3 = 0x6c72755f716572;
  }
  lVar4 = -0x1b00000000000000;
  if (param_2 != 0) {
    lVar4 = -0x1900000000000000;
  }
  if (param_2 < 2) {
    lVar2 = lVar4;
    lVar1 = lVar3;
  }
  if ((lVar5 == lVar1) && (lVar6 == lVar2)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar6,lVar1,lVar2,0);
    uVar7 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar2);
  return uVar7 & 1;
}

