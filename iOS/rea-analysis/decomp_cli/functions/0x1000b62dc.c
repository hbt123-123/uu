// rea decompile_all
// name: FUN_1000b62dc
// address: 0x1000b62dc
// body: available
// range: 0x1000b62dc-0x1000b640b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b62dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar3 = *unaff_x20;
  uVar6 = 0xeb0000000073646e;
  uVar4 = 0x616d6d6f63627573;
  if (bVar3 != 6) {
    uVar6 = 0xe900000000000073;
    uVar4 = 0x746e656d75677261;
  }
  uVar7 = 0x6973737563736964;
  uVar1 = 0xea00000000006e6f;
  if (bVar3 != 4) {
    uVar7 = 0xd000000000000011;
    uVar1 = 0x80000001000cb0e0;
  }
  if (bVar3 < 6) {
    uVar6 = uVar1;
    uVar4 = uVar7;
  }
  uVar7 = 0xeb00000000656d61;
  uVar1 = 0x4e646e616d6d6f63;
  if (bVar3 != 2) {
    uVar7 = 0xe800000000000000;
    uVar1 = 0x7463617274736261;
  }
  uVar2 = 0xed000073646e616d;
  uVar5 = 0x6d6f437265707573;
  if (bVar3 != 0) {
    uVar2 = 0xed000079616c7073;
    uVar5 = 0x6944646c756f6873;
  }
  if (bVar3 < 2) {
    uVar7 = uVar2;
    uVar1 = uVar5;
  }
  if (bVar3 < 4) {
    uVar6 = uVar7;
    uVar4 = uVar1;
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

