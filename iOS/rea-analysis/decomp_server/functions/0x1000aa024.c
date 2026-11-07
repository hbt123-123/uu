// rea decompile_all
// name: FUN_1000aa024
// address: 0x1000aa024
// body: available
// range: 0x1000aa024-0x1000aa097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000aa024(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  ulong uVar1;
  
  uVar1 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar1 = param_6 >> 0x38 & 0xf;
  }
  if ((((param_3 == param_5) && (param_4 == param_6)) && (param_1 >> 0x10 == 0)) &&
     (param_2 >> 0x10 == uVar1)) {
    return 1;
  }
  __ss22_stringCompareInternal____9expectingSbs11_StringGutsV_SnySiGAdEs01_E16ComparisonResultOtF
            (param_3,param_4,param_1 >> 0x10,param_2 >> 0x10,param_5,param_6,0,uVar1,0);
  return (uint)param_3 & 1;
}

