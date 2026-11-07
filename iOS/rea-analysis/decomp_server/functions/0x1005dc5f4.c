// rea decompile_all
// name: FUN_1005dc5f4
// address: 0x1005dc5f4
// body: available
// range: 0x1005dc5f4-0x1005dc647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005dc5f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auVar4 [16];
  
  cVar3 = *unaff_x20;
  uVar2 = 0x6449726f727265;
  if (cVar3 != '\x01') {
    uVar2 = 0x6567617373656d;
  }
  uVar1 = 0x65646f63;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe700000000000000;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

