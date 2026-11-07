// rea decompile_all
// name: FUN_1005f87fc
// address: 0x1005f87fc
// body: available
// range: 0x1005f87fc-0x1005f890f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005f87fc(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = 0x6c6c6f72746e6f63;
  if ((param_1 == 0x6c6c6f72746e6f63 && param_2 == -0x15ffffffffff9b9b) ||
     (uVar1 = uVar3,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x6c6c6f72746e6f63,0xea00000000006465,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else if (((param_1 == 0x6c6c6f72746e6f63) && (param_2 == -0x15ffffffffff8d9b)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (0x6c6c6f72746e6f63,0xea00000000007265,param_1,param_2,0), (uVar3 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    if ((param_1 == 0x6e6f6d656164) && (param_2 == -0x1a00000000000000)) {
      _swift_bridgeObjectRelease(0xe600000000000000);
      uVar2 = 2;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e6f6d656164,0xe600000000000000,param_1,param_2,0);
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 2;
      if ((uVar3 & 1) == 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}

