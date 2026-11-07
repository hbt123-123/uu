// rea decompile_all
// name: FUN_1003c47a4
// address: 0x1003c47a4
// body: available
// range: 0x1003c47a4-0x1003c4883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c47a4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != (undefined1 *)0x6c7275 || param_3 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6c7275,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      if ((param_2 == &DAT_d000000000000010) && (param_3 == -0x7ffffffeff74bb80)) {
        _swift_bridgeObjectRelease(0x80000001008b4480);
        uVar2 = 1;
      }
      else {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (&DAT_d000000000000010,0x80000001008b4480,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1003c4804;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1003c4804:
  *param_1 = uVar2;
  return;
}

