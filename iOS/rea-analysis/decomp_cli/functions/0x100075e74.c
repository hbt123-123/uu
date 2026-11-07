// rea decompile_all
// name: FUN_100075e74
// address: 0x100075e74
// body: available
// range: 0x100075e74-0x100075ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100075e74(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = 0x6974706f;
  if (param_1 == 0x736e6f6974706f && param_2 == -0x1900000000000000) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x736e6f6974706f,0xe700000000000000,param_1,param_2,0);
    _swift_bridgeObjectRelease(param_2);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

