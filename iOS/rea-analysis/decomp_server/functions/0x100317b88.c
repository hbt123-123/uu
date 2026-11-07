// rea decompile_all
// name: FUN_100317b88
// address: 0x100317b88
// body: available
// range: 0x100317b88-0x100317bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100317b88(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000002);
    param_1[1] = 0;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}

