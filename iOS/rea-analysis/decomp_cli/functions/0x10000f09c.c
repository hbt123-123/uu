// rea decompile_all
// name: FUN_10000f09c
// address: 0x10000f09c
// body: available
// range: 0x10000f09c-0x10000f20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10000f09c(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6973726556696c63;
  if ((param_1 == 0x6973726556696c63 && param_2 == -0x15ffffffffff9191) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6973726556696c63,0xea00000000006e6f,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x6973726556707061;
    if (((param_1 == 0x6973726556707061) && (param_2 == -0x15ffffffffff9191)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6973726556707061,0xea00000000006e6f,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x6d754e646c697562) && (param_2 == -0x14ffffffff8d9a9e)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6d754e646c697562,0xeb00000000726562,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0x6567617373656d;
        if ((param_1 == 0x6567617373656d) && (param_2 == -0x1900000000000000)) {
          _swift_bridgeObjectRelease(0xe700000000000000);
          uVar2 = 3;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6567617373656d,0xe700000000000000,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 4;
          }
        }
      }
    }
  }
  return uVar2;
}

