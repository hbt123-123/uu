// rea decompile_all
// name: FUN_100011068
// address: 0x100011068
// body: available
// range: 0x100011068-0x100011237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100011068(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x49435064756f6c63;
  if ((param_1 == 0x49435064756f6c63 && param_2 == -0x16ffffffffffff9c) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x49435064756f6c63,0xe900000000000064,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x4e435064756f6c63;
    if (((param_1 == 0x4e435064756f6c63) && (param_2 == -0x14ffffffff9a929f)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x4e435064756f6c63,0xeb00000000656d61,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x697463656e6e6f63;
      if (((param_1 == 0x697463656e6e6f63) && (param_2 == -0x109a8b9e8bac9191)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x697463656e6e6f63,0xef65746174536e6f,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0x6f72746e6f437369;
        if (((param_1 == 0x6f72746e6f437369) && (param_2 == -0x12ffff9891969394)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6f72746e6f437369,0xed0000676e696c6c,param_1,param_2,0), (uVar1 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
        }
        else if ((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffefff3b570)) {
          _swift_bridgeObjectRelease(0x80000001000c4a90);
          uVar2 = 4;
        }
        else {
          uVar1 = 0xd000000000000013;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000013,0x80000001000c4a90,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 4;
          if ((uVar1 & 1) == 0) {
            uVar2 = 5;
          }
        }
      }
    }
  }
  return uVar2;
}

