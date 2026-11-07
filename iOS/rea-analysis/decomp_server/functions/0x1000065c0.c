// rea decompile_all
// name: thunk_FUN_100005554
// address: 0x1000065c0
// body: available
// range: 0x1000065c0-0x1000065c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100005554(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20 & *param_2;
  if (uVar1 != 0) {
    *unaff_x20 = *unaff_x20 & (*param_2 ^ 0xffffffffffffffff);
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 == 0;
  return;
}

