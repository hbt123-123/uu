// rea decompile_all
// name: FUN_100011784
// address: 0x100011784
// body: available
// range: 0x100011784-0x10001199f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100011784(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6973726556707061;
  if (((param_1 == 0x6973726556707061) && (param_2 == -0x15ffffffffff9191)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6973726556707061,0xea00000000006e6f,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x6f6973726556736f;
    if (((param_1 == 0x6f6973726556736f) && (param_2 == -0x16ffffffffffff92)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6f6973726556736f,0xe90000000000006e,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x646567676f4c7369;
      if (((param_1 == 0x646567676f4c7369) && (param_2 == -0x15ffffffffff91b7)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x646567676f4c7369,0xea00000000006e49,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0x5365636976726573;
        if (((param_1 == 0x5365636976726573) && (param_2 == -0x12ffff8c8a8b9e8c)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x5365636976726573,0xed00007375746174,param_1,param_2,0), (uVar1 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0;
          if (((param_1 == 0x536b726f7774656e) && (param_2 == -0x12ffff8c8a8b9e8c)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x536b726f7774656e,0xed00007375746174,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            uVar2 = 4;
          }
          else {
            uVar1 = 0;
            if ((param_1 == 0x6f7272457473616c) && (param_2 == -0x16ffffffffffff8e)) {
              _swift_bridgeObjectRelease(0xe900000000000072);
              uVar2 = 5;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6f7272457473616c,0xe900000000000072,param_1,param_2,0);
              _swift_bridgeObjectRelease(param_2);
              uVar2 = 5;
              if ((uVar1 & 1) == 0) {
                uVar2 = 6;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

