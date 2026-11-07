// rea decompile_all
// name: FUN_10054dec4
// address: 0x10054dec4
// body: available
// range: 0x10054dec4-0x10054df2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10054dec4(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  pcVar2 = "JSON encoding error";
  if (param_1 != 2) {
    pcVar2 = "C99D01E10InternPool";
  }
  pcVar1 = "Stream decoding error";
  if (param_1 != 0) {
    pcVar1 = "JSON decoding error";
  }
  puVar3 = &DAT_d000000000000013;
  if (param_1 < 2) {
    pcVar2 = pcVar1;
    puVar3 = (undefined1 *)0xd000000000000015;
  }
  auVar4._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar4._0_8_ = puVar3;
  return auVar4;
}

