// rea decompile_all
// name: FUN_1000d761c
// address: 0x1000d761c
// body: available
// range: 0x1000d761c-0x1000d76ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000d761c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  uVar2 = 0;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (((uVar1 != 0) &&
      (((param_1 != 0x2e || (param_2 != 0xe100000000000000)) &&
       (uVar1 = param_1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (param_1,param_2,0x2e,0xe100000000000000,0), (uVar1 & 1) == 0)))) &&
     (((param_1 != 0x2e2e || (param_2 != 0xe200000000000000)) &&
      (uVar1 = param_1,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,0x2e2e,0xe200000000000000,0), (uVar1 & 1) == 0)))) {
    local_40 = 0x2f;
    uStack_38 = 0xe100000000000000;
    local_30 = param_1;
    uStack_28 = param_2;
    FUN_10009ff0c();
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (&local_40,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar1,uVar1);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}

