// rea decompile_all
// name: FUN_100443be4
// address: 0x100443be4
// body: available
// range: 0x100443be4-0x100443c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100443be4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *unaff_x20;
  
  FUN_10020373c(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  *unaff_x20 = param_1 & 0xffffffff;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3 | 0x2000000000000000;
  return;
}

