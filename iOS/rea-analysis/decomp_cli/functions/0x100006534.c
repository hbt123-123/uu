// rea decompile_all
// name: FUN_100006534
// address: 0x100006534
// body: available
// range: 0x100006534-0x100006633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100006534(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0x80000001000c4a90;
  uVar4 = 0xd000000000000013;
  if (bVar3 != 5) {
    uVar5 = 0xe900000000000072;
    uVar4 = 0x6f7272457473616c;
  }
  uVar6 = 0xef65746174536e6f;
  uVar2 = 0x697463656e6e6f63;
  if (bVar3 != 3) {
    uVar6 = 0xed0000676e696c6c;
    uVar2 = 0x6f72746e6f437369;
  }
  if (bVar3 < 5) {
    uVar5 = uVar6;
    uVar4 = uVar2;
  }
  uVar6 = 0xea0000000000656d;
  uVar2 = 0x614e656369766564;
  if (bVar3 != 1) {
    uVar6 = 0xe800000000000000;
    uVar2 = 0x6d726f6674616c70;
  }
  uVar1 = 0x6449656369766564;
  if (bVar3 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (bVar3 != 0) {
    uVar2 = uVar6;
  }
  if (bVar3 < 3) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}

