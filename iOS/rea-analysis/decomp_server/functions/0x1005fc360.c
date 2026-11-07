// rea decompile_all
// name: FUN_1005fc360
// address: 0x1005fc360
// body: available
// range: 0x1005fc360-0x1005fc5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005fc360(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == (undefined1 *)0x64496b736174 && param_2 == -0x1a00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x64496b736174,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff76a790)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (&DAT_d000000000000010,0x8000000100895870,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_1 == (undefined1 *)0x7461446c61746f74) && (param_2 == -0x11ff8b918a90bc9f)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x7461446c61746f74,0xee00746e756f4361,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          return 2;
        }
        uVar2 = 0;
        if (((param_1 != (undefined1 *)0x656d69547466656c) || (param_2 != -0x1800000000000000)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x656d69547466656c,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) == 0))
        {
          uVar2 = 0x656c694679706f63;
          if (((param_1 != (undefined1 *)0x656c694679706f63) || (param_2 != -0x13ffffff9a929eb2)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x656c694679706f63,0xec000000656d614e,param_1,param_2,0), (uVar2 & 1) == 0)
             ) {
            uVar2 = 0x6874615079706f63;
            if (((param_1 != (undefined1 *)0x6874615079706f63) || (param_2 != -0x1800000000000000))
               && (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x6874615079706f63,0xe800000000000000,param_1,param_2,0),
                  (uVar2 & 1) == 0)) {
              uVar2 = 0;
              if ((param_1 == (undefined1 *)0x737365636f7270) && (param_2 == -0x1900000000000000)) {
                _swift_bridgeObjectRelease(0xe700000000000000);
                return 6;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x737365636f7270,0xe700000000000000,param_1,param_2,0);
              _swift_bridgeObjectRelease(param_2);
              if ((uVar2 & 1) != 0) {
                return 6;
              }
              return 7;
            }
            _swift_bridgeObjectRelease(param_2);
            return 5;
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

