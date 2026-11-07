// rea decompile_all
// name: FUN_1006b674c
// address: 0x1006b674c
// body: available
// range: 0x1006b674c-0x1006b67eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b674c(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 - 0x20U < 0xffffffea) {
    return 0xffffffffffffffd6;
  }
  if (param_1[1] - 0x1fU < 0xffffffe7) {
    return 0xffffffffffffffd6;
  }
  if (param_1[2] - 0x1fU < 0xffffffe7) {
    return 0xffffffffffffffd6;
  }
  if (0xffffffe1 < param_1[3] - 0x1fU) {
    if (0xfffffffa < param_1[4] - 8U) {
      uVar1 = 0xffffffffffffffd6;
      if (((uint)param_1[5] < 0x20001) &&
         (uVar1 = 0xffffffffffffffd6, 0xfffffff6 < param_1[6] - 10U)) {
        uVar1 = 0;
      }
      return uVar1;
    }
    return 0xffffffffffffffd6;
  }
  return 0xffffffffffffffd6;
}

