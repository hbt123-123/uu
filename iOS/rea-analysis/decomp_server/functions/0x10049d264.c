// rea decompile_all
// name: FUN_10049d264
// address: 0x10049d264
// body: available
// range: 0x10049d264-0x10049d2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10049d2bc to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10049d264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  if ((((((uint)((ulong)param_1 >> 8) & 1) == ((uint)((ulong)param_4 >> 8) & 1)) &&
       ((((uint)param_1 ^ (uint)param_4) & 1) == 0)) &&
      (((uint)((ulong)param_1 >> 0x10) & 1) == ((uint)((ulong)param_4 >> 0x10) & 1))) &&
     ((((uint)((ulong)param_1 >> 0x18) & 1) == ((uint)((ulong)param_4 >> 0x18) & 1) &&
      (((uint)((ulong)param_1 >> 0x20) & 1) == ((uint)((ulong)param_4 >> 0x20) & 1))))) {
    FUN_1000094a4(param_2,param_3,param_5,param_6);
    return param_2;
  }
  return 0;
}

