// rea decompile_all
// name: FUN_1005e1c4c
// address: 0x1005e1c4c
// body: available
// range: 0x1005e1c4c-0x1005e1ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005e1c4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0xea00000000007265;
  if (bVar5 != 3) {
    uVar1 = 0xea00000000006465;
  }
  uVar2 = 0x746e656761;
  if (bVar5 != 2) {
    uVar2 = 0x6c6c6f72746e6f63;
  }
  uVar4 = 0xe500000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar1 = 0x6e6f6d616564;
  }
  uVar3 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe600000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

