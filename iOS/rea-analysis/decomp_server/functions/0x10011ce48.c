// rea decompile_all
// name: FUN_10011ce48
// address: 0x10011ce48
// body: available
// range: 0x10011ce48-0x10011cea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10011ce48(uint param_1)

{
  ulong uVar1;
  
  if ((param_1 >> 0x11 & 1) == 0) {
    if ((param_1 >> 0x14 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x100000;
    }
  }
  else if ((param_1 >> 0x14 & 1) == 0) {
    uVar1 = 0x20000;
  }
  else {
    uVar1 = 0x120000;
  }
  if ((param_1 >> 0x12 & 1) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  if ((param_1 >> 0x13 & 1) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  if ((param_1 >> 0x17 & 1) != 0) {
    uVar1 = uVar1 | 0x800000;
  }
  return uVar1;
}

