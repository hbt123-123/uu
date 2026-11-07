// rea decompile_all
// name: FUN_1003f704c
// address: 0x1003f704c
// body: available
// range: 0x1003f704c-0x1003f707f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003f704c(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = 0x737974696c696261;
  if (*unaff_x20 == '\0') {
    uVar1 = 0x6d726f6674616c70;
  }
  auVar2._8_8_ = 0xe800000000000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}

