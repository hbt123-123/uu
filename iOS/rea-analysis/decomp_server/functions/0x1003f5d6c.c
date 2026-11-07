// rea decompile_all
// name: FUN_1003f5d6c
// address: 0x1003f5d6c
// body: available
// range: 0x1003f5d6c-0x1003f5db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f5d6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x755f726576726573;
  if (*unaff_x20 == '\0') {
    uVar1 = 0x6e5f726576726573;
  }
  uVar2 = 0xea00000000006c72;
  if (*unaff_x20 == '\0') {
    uVar2 = 0xeb00000000656d61;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}

