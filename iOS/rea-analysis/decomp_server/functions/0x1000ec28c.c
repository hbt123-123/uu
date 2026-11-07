// rea decompile_all
// name: FUN_1000ec28c
// address: 0x1000ec28c
// body: available
// range: 0x1000ec28c-0x1000ec3a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000ec28c(void)

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
  uVar6 = 0xe900000000000078;
  uVar2 = 0xeb00000000657a69;
  uVar4 = 0x536e657474697277;
  if (bVar3 != 6) {
    uVar2 = 0xeb00000000646574;
    uVar4 = 0x656c706d6f437369;
  }
  uVar7 = 0xed00006874615079;
  uVar1 = 0x7261726f706d6574;
  if (bVar3 != 4) {
    uVar7 = 0xe900000000000068;
    uVar1 = 0x7461506c616e6966;
  }
  if (bVar3 < 6) {
    uVar2 = uVar7;
    uVar4 = uVar1;
  }
  uVar7 = 0x657a6973;
  if (bVar3 != 2) {
    uVar7 = 0x6465696669646f6d;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3 != 2) {
    uVar1 = 0xec000000656d6954;
  }
  uVar5 = 0x65646e49656c6966;
  if (bVar3 != 0) {
    uVar6 = 0xe700000000000000;
    uVar5 = 0x687461506c6572;
  }
  if (bVar3 < 2) {
    uVar1 = uVar6;
    uVar7 = uVar5;
  }
  if (bVar3 < 4) {
    uVar2 = uVar1;
    uVar4 = uVar7;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

