// rea decompile_all
// name: FUN_1000b5a80
// address: 0x1000b5a80
// body: available
// range: 0x1000b5a80-0x1000b5b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b5a80(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffefff34f40)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000014,0x80000001000cb0c0,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x646e616d6d6f63;
      if ((param_2 == 0x646e616d6d6f63) && (param_3 == -0x1900000000000000)) {
        _swift_bridgeObjectRelease(0xe700000000000000);
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x646e616d6d6f63,0xe700000000000000,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1000b5aec;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1000b5aec:
  *param_1 = uVar2;
  return;
}

