// rea decompile_all
// name: FUN_1005fef64
// address: 0x1005fef64
// body: available
// range: 0x1005fef64-0x1005ff05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005fef64(void)

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
  uVar7 = 0xe900000000000074;
  uVar4 = 0x686769654878616d;
  if (bVar3 != 5) {
    uVar7 = 0xe600000000000000;
    uVar4 = 0x746c75736572;
  }
  uVar1 = 0x6874706544746962;
  if (bVar3 != 3) {
    uVar1 = 0x687464695778616d;
  }
  if (bVar3 < 5) {
    uVar7 = 0xe800000000000000;
    uVar4 = uVar1;
  }
  uVar1 = 0xee00676e696c706d;
  uVar5 = 0x6153616d6f726863;
  if (bVar3 != 1) {
    uVar1 = 0xef7974696c617551;
    uVar5 = 0x656d61724678616d;
  }
  uVar2 = 0xea00000000006365;
  uVar6 = 0x646f436f65646976;
  if (bVar3 != 0) {
    uVar2 = uVar1;
    uVar6 = uVar5;
  }
  if (bVar3 < 3) {
    uVar7 = uVar2;
    uVar4 = uVar6;
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

