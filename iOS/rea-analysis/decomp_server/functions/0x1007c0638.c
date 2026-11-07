// rea decompile_all
// name: FUN_1007c0638
// address: 0x1007c0638
// body: available
// range: 0x1007c0638-0x1007c08b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1007c0638(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  if (param_1 != 0x55557972616e6962 || param_2 != (undefined1 *)0xea00000000004449) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x55557972616e6962,0xea00000000004449,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != -0x2fffffffffffffe5) ||
         (puVar2 = &SUB_80000001008dad60, param_2 != &SUB_80000001008dad60)) {
        uVar1 = 0xd00000000000001b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd00000000000001b,&SUB_80000001008dad60,param_1,param_2,0);
        puVar2 = param_2;
        if ((uVar1 & 1) == 0) {
          if ((param_1 != 0x614e7972616e6962) || (param_2 != (undefined1 *)0xea0000000000656d)) {
            uVar1 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x614e7972616e6962,0xea0000000000656d,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              if ((param_1 != 0x73736572646461) || (param_2 != (undefined1 *)0xe700000000000000)) {
                uVar1 = 0x73736572646461;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x73736572646461,0xe700000000000000,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  if ((param_1 != 0x656d617246627573) ||
                     (param_2 != (undefined1 *)0xe900000000000073)) {
                    uVar1 = 0x656d617246627573;
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x656d617246627573,0xe900000000000073,param_1,param_2,0);
                    if ((uVar1 & 1) == 0) {
                      if ((param_1 == 0x6f43656c706d6173) &&
                         (param_2 == (undefined1 *)0xeb00000000746e75)) {
                        _swift_bridgeObjectRelease(0xeb00000000746e75);
                        return 5;
                      }
                      uVar1 = 0x6f43656c706d6173;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x6f43656c706d6173,0xeb00000000746e75,param_1,param_2,0);
                      _swift_bridgeObjectRelease(param_2);
                      if ((uVar1 & 1) != 0) {
                        return 5;
                      }
                      return 6;
                    }
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 4;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              return 3;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 2;
        }
      }
      _swift_bridgeObjectRelease(puVar2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

