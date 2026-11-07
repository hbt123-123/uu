// rea decompile_all
// name: FUN_1000ec4fc
// address: 0x1000ec4fc
// body: available
// range: 0x1000ec4fc-0x1000ec5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000ec4fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar4 = *unaff_x20;
  uVar7 = 0xe900000000000074;
  uVar5 = 0x4164657461647075;
  if (bVar4 != 5) {
    uVar7 = 0xe600000000000000;
    uVar5 = 0x737574617473;
  }
  uVar1 = 0x73656c6966;
  if (bVar4 != 3) {
    uVar1 = 0x4164657461657263;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar2 = 0xe900000000000074;
  }
  if (bVar4 < 5) {
    uVar7 = uVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0xea00000000006874;
  uVar2 = 0x6150746567726174;
  if (bVar4 != 1) {
    uVar1 = 0xea0000000000656d;
    uVar2 = 0x614e7265646c6f66;
  }
  uVar3 = 0xec00000044496575;
  uVar6 = 0x71696e556b736174;
  if (bVar4 != 0) {
    uVar3 = uVar1;
    uVar6 = uVar2;
  }
  if (bVar4 < 3) {
    uVar7 = uVar3;
    uVar5 = uVar6;
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar5;
  return auVar8;
}

