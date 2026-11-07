// rea decompile_all
// name: FUN_1003f4f14
// address: 0x1003f4f14
// body: available
// range: 0x1003f4f14-0x1003f4fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003f4f14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  uVar6 = 0xeb00000000746e65;
  uVar4 = 0x6d6e6f7269766e65;
  if (bVar5 != 4) {
    uVar6 = 0xe800000000000000;
    uVar4 = 0x65676175676e616c;
  }
  uVar1 = 0x6c656e6e616863;
  if (bVar5 != 3) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (bVar5 != 3) {
    uVar4 = uVar6;
  }
  uVar6 = 0x646c697562;
  if (bVar5 != 1) {
    uVar6 = 0x6449656c646e7562;
  }
  uVar2 = 0xe500000000000000;
  if (bVar5 != 1) {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0x6e6f6973726576;
  if (bVar5 != 0) {
    uVar3 = uVar6;
  }
  uVar6 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar6 = uVar2;
  }
  if (bVar5 < 3) {
    uVar4 = uVar6;
    uVar1 = uVar3;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar1;
  return auVar7;
}

