// rea decompile_all
// name: FUN_1000018e0
// address: 0x1000018e0
// body: available
// range: 0x1000018e0-0x100001a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000018e0(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar4 = -0x13ffffff9b9a8b9d;
  if (param_1 < 2) {
    lVar3 = 0x656e6e6f63736964;
    lVar6 = lVar4;
    if (param_1 != 0) {
      lVar6 = -0x15ffffffffff9892;
      lVar3 = 0x697463656e6e6f63;
    }
  }
  else {
    lVar3 = 0x657463656e6e6f63;
    lVar6 = -0x16ffffffffffff9c;
    if (param_1 != 2) {
      lVar3 = 0x64656c696166;
      lVar6 = -0x1a00000000000000;
    }
  }
  lVar5 = -0x16ffffffffffff9c;
  lVar1 = 0x657463656e6e6f63;
  if (param_2 != 2) {
    lVar5 = -0x1a00000000000000;
    lVar1 = 0x64656c696166;
  }
  lVar2 = 0x656e6e6f63736964;
  if (param_2 != 0) {
    lVar4 = -0x15ffffffffff9892;
    lVar2 = 0x697463656e6e6f63;
  }
  if (param_2 < 2) {
    lVar5 = lVar4;
    lVar1 = lVar2;
  }
  if ((lVar3 == lVar1) && (lVar6 == lVar5)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar3,lVar6,lVar1,lVar5,0);
    uVar7 = (uint)lVar3;
  }
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar5);
  return uVar7 & 1;
}

