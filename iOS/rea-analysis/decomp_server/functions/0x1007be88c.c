// rea decompile_all
// name: FUN_1007be88c
// address: 0x1007be88c
// body: available
// range: 0x1007be88c-0x1007be8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007be88c(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = &DAT_d000000000000013;
  pcVar1 = "threadAttributed";
  if (*unaff_x20 == '\0') {
    puVar2 = &DAT_d000000000000010;
    pcVar1 = "";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = puVar2;
  return auVar3;
}

