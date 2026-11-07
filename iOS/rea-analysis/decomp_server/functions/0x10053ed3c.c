// rea decompile_all
// name: FUN_10053ed3c
// address: 0x10053ed3c
// body: available
// range: 0x10053ed3c-0x10053ed6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053ed3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10053c260(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&DAT_1009d46c8,FUN_10058918c);
  return (uint)param_1 & 1;
}

