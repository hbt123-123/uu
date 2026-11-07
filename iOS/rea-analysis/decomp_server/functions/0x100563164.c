// rea decompile_all
// name: FUN_100563164
// address: 0x100563164
// body: available
// range: 0x100563164-0x1005631df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100563164(ulong param_1)

{
  long lVar1;
  
  if (param_1 < 0x80) {
    return 1;
  }
  if ((long)param_1 < 0) {
    return 10;
  }
  if (param_1 >> 0x23 == 0) {
    if (param_1 < 0x200000) {
      lVar1 = 2;
      if (param_1 < 0x4000) {
        return 2;
      }
      goto LAB_1005631d8;
    }
    lVar1 = 4;
LAB_1005631d0:
    param_1 = param_1 >> 0x1c;
  }
  else {
    if (param_1 >> 0x31 != 0) {
      param_1 = param_1 >> 0x1c;
      lVar1 = 8;
      goto LAB_1005631d0;
    }
    lVar1 = 6;
    param_1 = param_1 >> 0x2a;
  }
  if (param_1 == 0) {
    return lVar1;
  }
LAB_1005631d8:
  return lVar1 + 1;
}

