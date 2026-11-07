// rea decompile_all
// name: FUN_100532e8c
// address: 0x100532e8c
// body: available
// range: 0x100532e8c-0x100532f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100532e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x20;
  long unaff_x21;
  
  FUN_1004f9e80(":",1);
  uVar3 = 0x1000000;
  if (*(char *)(unaff_x20 + 0x25) == '\0') {
    uVar3 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(unaff_x20 + 0x24) == '\0') {
    uVar2 = 0;
  }
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x23) == '\0') {
    uVar1 = 0;
  }
  FUN_100538a2c(uVar1 | *(byte *)(unaff_x20 + 0x22) | uVar2 | uVar3,param_2,param_3);
  if (unaff_x21 == 0) {
    FUN_1004fa030();
  }
  return;
}

