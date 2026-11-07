// rea decompile_all
// name: FUN_1006a12bc
// address: 0x1006a12bc
// body: available
// range: 0x1006a12bc-0x1006a132b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a12bc(long param_1)

{
  long lVar1;
  long local_30;
  char local_28;
  
  local_30 = *(long *)(param_1 + 8) + 200;
  local_28 = '\0';
  FUN_100696a10(&local_30);
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x19) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    FUN_1006a0c98(lVar1 + 0x38,1);
  }
  if (local_28 == '\x01') {
    FUN_100696d54(&local_30);
  }
  return;
}

