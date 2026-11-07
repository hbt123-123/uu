// rea decompile_all
// name: FUN_1005ec678
// address: 0x1005ec678
// body: available
// range: 0x1005ec678-0x1005ec90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005ec678(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != (undefined1 *)0xd000000000000014) || (param_2 != -0x7ffffffeff7417e0)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000014,0x80000001008be820,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x656c69466e65706f;
      if (((param_1 == (undefined1 *)0x656c69466e65706f) && (param_2 == -0x109a89969a9c9aae)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656c69466e65706f,0xef65766965636552,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      uVar1 = 0xd000000000000017;
      if (((param_1 == (undefined1 *)0xd000000000000017) && (param_2 == -0x7ffffffeff7417c0)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000017,0x80000001008be840,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      uVar1 = 0xd000000000000019;
      if (((param_1 == (undefined1 *)0xd000000000000019) && (param_2 == -0x7ffffffeff7417a0)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000019,0x80000001008be860,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      uVar1 = 0;
      if (((param_1 == &DAT_d000000000000018) && (param_2 == -0x7ffffffeff741780)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (&DAT_d000000000000018,0x80000001008be880,param_1,param_2,0), (uVar1 & 1) != 0))
      {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      uVar1 = 0;
      if (((param_1 != (undefined1 *)0xd000000000000016) || (param_2 != -0x7ffffffeff741760)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000016,0x80000001008be8a0,param_1,param_2,0), (uVar1 & 1) == 0)) {
        if ((param_1 != (undefined1 *)0xd000000000000014) || (param_2 != -0x7ffffffeff741740)) {
          uVar1 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000014,0x80000001008be8c0,param_1,param_2,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = 0xd000000000000015;
            if ((param_1 == (undefined1 *)0xd000000000000015) && (param_2 == -0x7ffffffeff741720)) {
              _swift_bridgeObjectRelease(0x80000001008be8e0);
              return 7;
            }
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000015,0x80000001008be8e0,param_1,param_2,0);
            _swift_bridgeObjectRelease(param_2);
            if ((uVar1 & 1) != 0) {
              return 7;
            }
            return 8;
          }
        }
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

