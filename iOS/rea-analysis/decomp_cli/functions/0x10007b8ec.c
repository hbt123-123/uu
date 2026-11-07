// rea decompile_all
// name: FUN_10007b8ec
// address: 0x10007b8ec
// body: available
// range: 0x10007b8ec-0x10007b93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10007b8ec(void)

{
  undefined1 auStack_68 [8];
  long local_60;
  
  FUN_10007b83c(auStack_68);
  FUN_10001fc18(auStack_68,&DAT_100104818,&DAT_1000d62d0);
  return local_60 != 0;
}

