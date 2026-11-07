// rea decompile_all
// name: FUN_10040e228
// address: 0x10040e228
// body: available
// range: 0x10040e228-0x10040e333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040e228(byte param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 < 2) {
    uVar5 = 0x657a697366;
    if (param_1 != 0) {
      uVar5 = 0x6c7275;
    }
    lVar6 = -0x1b00000000000000;
    if (param_1 != 0) {
      lVar6 = -0x1d00000000000000;
    }
  }
  else {
    uVar7 = 0x35646d;
    if (param_1 != 2) {
      uVar7 = 0x656d696d;
    }
    uVar5 = (ulong)uVar7;
    lVar6 = -0x1d00000000000000;
    if (param_1 != 2) {
      lVar6 = -0x1c00000000000000;
    }
  }
  uVar7 = 0x35646d;
  if (param_2 != 2) {
    uVar7 = 0x656d696d;
  }
  lVar1 = -0x1d00000000000000;
  if (param_2 != 2) {
    lVar1 = -0x1c00000000000000;
  }
  uVar2 = 0x657a697366;
  if (param_2 != 0) {
    uVar2 = 0x6c7275;
  }
  lVar3 = -0x1b00000000000000;
  if (param_2 != 0) {
    lVar3 = -0x1d00000000000000;
  }
  uVar4 = (ulong)uVar7;
  if (param_2 < 2) {
    lVar1 = lVar3;
    uVar4 = uVar2;
  }
  if ((uVar5 == uVar4) && (lVar6 == lVar1)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar5,lVar6,uVar4,lVar1,0);
    uVar7 = (uint)uVar5;
  }
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar1);
  return uVar7 & 1;
}

