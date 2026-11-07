// rea decompile_all
// name: FUN_10053255c
// address: 0x10053255c
// body: available
// range: 0x10053255c-0x1005325b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053255c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar3 = 0x1000000;
  if (*(char *)(unaff_x20 + 0x23) == '\0') {
    uVar3 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(unaff_x20 + 0x22) == '\0') {
    uVar2 = 0;
  }
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    uVar1 = 0;
  }
  FUN_1005302b4(param_1,param_2,uVar1 | *(byte *)(unaff_x20 + 0x20) | uVar2 | uVar3,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}

