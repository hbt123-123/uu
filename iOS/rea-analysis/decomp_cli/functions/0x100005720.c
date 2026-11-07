// rea decompile_all
// name: FUN_100005720
// address: 0x100005720
// body: available
// range: 0x100005720-0x100005767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100005720(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0x6567617373656d;
  if (cVar3 != '\x01') {
    uVar4 = 0x7461;
  }
  uVar1 = 0xe700000000000000;
  if (cVar3 != '\x01') {
    uVar1 = 0xe200000000000000;
  }
  uVar2 = 0x65646f63;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

