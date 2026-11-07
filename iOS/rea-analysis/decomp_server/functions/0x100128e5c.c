// rea decompile_all
// name: FUN_100128e5c
// address: 0x100128e5c
// body: available
// range: 0x100128e5c-0x100128ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100128e5c(double param_1,double param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < param_3) && ((ulong)ABS(param_1) < 0x7ff0000000000000)) {
    bVar1 = ((ulong)ABS(param_2) < 0x7ff0000000000000 && (param_1 <= 1.0 && 0.0 <= param_1)) &&
            (param_2 <= 1.0 && 0.0 <= param_2);
  }
  return bVar1;
}

