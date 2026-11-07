// rea decompile_all
// name: FUN_1005f1d04
// address: 0x1005f1d04
// body: available
// range: 0x1005f1d04-0x1005f1db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005f1d04(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar2 = *unaff_x20;
  uVar5 = 0xef687461506e6f69;
  uVar3 = 0x74616e6974736564;
  if (bVar2 != 3) {
    uVar5 = 0xe600000000000000;
    uVar3 = 0x6e6f73616572;
  }
  uVar1 = 0xef656d614e6e6f69;
  uVar4 = 0x74616e6974736564;
  if (bVar2 != 2) {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  uVar5 = 0xe900000000000044;
  uVar3 = 0x496e6f6973736573;
  if (bVar2 != 0) {
    uVar5 = 0xe900000000000064;
    uVar3 = 0x6574726f70707573;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

