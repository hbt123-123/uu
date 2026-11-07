// rea decompile_all
// name: FUN_10000a36c
// address: 0x10000a36c
// body: available
// range: 0x10000a36c-0x10000a46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10000a36c(byte param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if (param_1 < 2) {
    uVar6 = 0x6469;
    if (param_1 != 0) {
      uVar6 = 0x737066;
    }
    lVar5 = -0x1e00000000000000;
    if (param_1 != 0) {
      lVar5 = -0x1d00000000000000;
    }
  }
  else {
    uVar6 = 0x65707974;
    if (param_1 != 2) {
      uVar6 = 0x726468;
    }
    lVar5 = -0x1c00000000000000;
    if (param_1 != 2) {
      lVar5 = -0x1d00000000000000;
    }
  }
  uVar4 = 0x65707974;
  if (param_2 != 2) {
    uVar4 = 0x726468;
  }
  lVar2 = -0x1c00000000000000;
  if (param_2 != 2) {
    lVar2 = -0x1d00000000000000;
  }
  uVar1 = 0x6469;
  if (param_2 != 0) {
    uVar1 = 0x737066;
  }
  lVar3 = -0x1e00000000000000;
  if (param_2 != 0) {
    lVar3 = -0x1d00000000000000;
  }
  if (param_2 < 2) {
    lVar2 = lVar3;
    uVar4 = uVar1;
  }
  if ((uVar6 == uVar4) && (lVar5 == lVar2)) {
    uVar6 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar6,lVar5,uVar4,lVar2,0);
  }
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lVar2);
  return uVar6 & 1;
}

