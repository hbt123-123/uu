// rea decompile_all
// name: FUN_1004dff08
// address: 0x1004dff08
// body: available
// range: 0x1004dff08-0x1004dffab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004dffa8 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004dff08(undefined8 *param_1)

{
  if ((ulong)param_1[0x10] >> 8 != 0xffffffff || (param_1[0x12] & 0x3000000000000000) != 0) {
    FUN_100482834(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                  param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12]);
  }
  FUN_100006cdc(param_1[0x13],param_1[0x14]);
  if (0xe < (ulong)param_1[0x17] >> 0x3c) {
    return;
  }
  FUN_100006cdc(param_1[0x16]);
  return;
}

