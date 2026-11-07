// rea decompile_all
// name: FUN_100073b5c
// address: 0x100073b5c
// body: available
// range: 0x100073b5c-0x100073c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100073b5c(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0x65757274 && param_2 == -0x1c00000000000000) ||
     (uVar1 = param_1,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (param_1,param_2,0x65757274,0xe400000000000000,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 1;
  }
  else if ((param_1 == 0x65736c6166) && (param_2 == -0x1b00000000000000)) {
    _swift_bridgeObjectRelease(0xe500000000000000);
    uVar2 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,0x65736c6166,0xe500000000000000,0);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
    if ((param_1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

