// rea decompile_all
// name: FUN_100004060
// address: 0x100004060
// body: available
// range: 0x100004060-0x1000040e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100004060(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar1 = *unaff_x20;
  uVar4 = 0xeb00000000726562;
  uVar2 = 0x6d754e646c697562;
  if (bVar1 != 2) {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6567617373656d;
  }
  uVar3 = 0x6973726556696c63;
  if (bVar1 != 0) {
    uVar3 = 0x6973726556707061;
  }
  if (bVar1 < 2) {
    uVar4 = 0xea00000000006e6f;
    uVar2 = uVar3;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

