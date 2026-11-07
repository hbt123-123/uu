// rea decompile_all
// name: FUN_100707044
// address: 0x100707044
// body: available
// range: 0x100707044-0x1007070f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100707044(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_100b2c6f8 == -1) {
    iVar1 = DAT_100b2c6e8 - param_1;
  }
  else {
    FUN_1007da4f0();
    iVar1 = DAT_100b2c6e8 - param_1;
  }
  if (param_1 < DAT_100b2c6e8) {
    return true;
  }
  if (iVar1 < 0 != SBORROW4(DAT_100b2c6e8,param_1)) {
    return false;
  }
  if (DAT_100b2c6ec <= param_2) {
    if (param_2 <= DAT_100b2c6ec) {
      return param_3 <= DAT_100b2c6f0;
    }
    return false;
  }
  return true;
}

