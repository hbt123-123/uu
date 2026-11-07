// rea decompile_all
// name: FUN_1000b8170
// address: 0x1000b8170
// body: available
// range: 0x1000b8170-0x1000b824f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b8170(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar4 = *unaff_x20;
  uVar6 = 0x73416d6f74737563;
  uVar3 = 0xeb00000000636e79;
  if (bVar4 != 5) {
    uVar6 = 0xd000000000000010;
    uVar3 = 0x80000001000cb100;
  }
  uVar5 = 0xec000000646e616d;
  uVar1 = 0x6d6f436c6c656873;
  if (bVar4 != 3) {
    uVar5 = 0xe600000000000000;
    uVar1 = 0x6d6f74737563;
  }
  if (bVar4 < 5) {
    uVar3 = uVar5;
    uVar6 = uVar1;
  }
  uVar5 = 0x656c6966;
  if (bVar4 != 1) {
    uVar5 = 0x726f746365726964;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xe900000000000079;
  }
  uVar2 = 0x7473696c;
  if (bVar4 != 0) {
    uVar2 = uVar5;
  }
  uVar5 = 0xe400000000000000;
  if (bVar4 != 0) {
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar5;
    uVar6 = uVar2;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

