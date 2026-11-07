// rea decompile_all
// name: FUN_1007097a8
// address: 0x1007097a8
// body: available
// range: 0x1007097a8-0x1007097eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1007097a8(dispatch_queue_t param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
  pcVar3 = _dispatch_queue_get_label(param_1);
  iVar1 = _strcmp(pcVar2,pcVar3);
  return iVar1 == 0;
}

