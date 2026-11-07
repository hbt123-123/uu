// rea decompile_all
// name: FUN_1005b9ca4
// address: 0x1005b9ca4
// body: available
// range: 0x1005b9ca4-0x1005b9cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b9ca4(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x10) =
       *(ulong *)(param_1 + 0x10) & 0xc000000000000000 |
       *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff | (ulong)(param_2 & 3) << 0x3c;
  *(byte *)(param_1 + 0x18) = (byte)(param_2 >> 2) & 1;
  return;
}

