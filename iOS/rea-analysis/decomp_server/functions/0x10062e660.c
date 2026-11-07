// rea decompile_all
// name: FUN_10062e660
// address: 0x10062e660
// body: available
// range: 0x10062e660-0x10062e697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062e660(ulong *param_1,uint param_2)

{
  if (4 < param_2) {
    *param_1 = (ulong)(param_2 - 5);
    param_1[1] = 0x1000000000000000;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  param_1[1] = param_1[1] & 0xc000000000000000 |
               param_1[1] & 0xfffffffffffffff | ((ulong)param_2 & 3) << 0x3c;
  *(bool *)(param_1 + 2) = param_2 == 4;
  return;
}

