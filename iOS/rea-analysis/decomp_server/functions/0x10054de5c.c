// rea decompile_all
// name: FUN_10054de5c
// address: 0x10054de5c
// body: available
// range: 0x10054de5c-0x10054dec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10054de5c(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar3 = *unaff_x20;
  pcVar2 = "JSON encoding error";
  if (bVar3 != 2) {
    pcVar2 = "C99D01E10InternPool";
  }
  pcVar1 = "Stream decoding error";
  if (bVar3 != 0) {
    pcVar1 = "JSON decoding error";
  }
  puVar4 = &DAT_d000000000000013;
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    puVar4 = (undefined1 *)0xd000000000000015;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = puVar4;
  return auVar5;
}

