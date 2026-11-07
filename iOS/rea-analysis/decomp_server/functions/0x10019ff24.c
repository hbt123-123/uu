// rea decompile_all
// name: FUN_10019ff24
// address: 0x10019ff24
// body: available
// range: 0x10019ff24-0x10019ff7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019ff24(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  
  pcVar1 = "remote_display_info";
  puVar3 = (undefined1 *)0xd000000000000012;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "local_display_info";
    puVar3 = &DAT_d000000000000018;
  }
  pcVar2 = "width";
  puVar4 = &DAT_d000000000000013;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    puVar4 = puVar3;
  }
  *param_1 = puVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}

