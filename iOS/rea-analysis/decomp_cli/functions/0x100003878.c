// rea decompile_all
// name: FUN_100003878
// address: 0x100003878
// body: available
// range: 0x100003878-0x1000038b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100003878(undefined8 *param_1)

{
  param_1[1] = 0xd000000000000024;
  *param_1 = 0x76;
  param_1[2] = 0x80000001000c4890;
  param_1[3] = 0xd00000000000002b;
  param_1[4] = 0x80000001000c48c0;
  return;
}

