// rea decompile_all
// name: FUN_10000e4bc
// address: 0x10000e4bc
// body: available
// range: 0x10000e4bc-0x10000e53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10000e4bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0xe900000000000074;
  uVar5 = 0x4164657472617473;
  if (bVar4 != 2) {
    uVar1 = 0xe900000000000072;
    uVar5 = 0x6f7272457473616c;
  }
  uVar2 = 0x6449747369737361;
  if (bVar4 != 0) {
    uVar2 = 0x6574617473;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xe500000000000000;
  }
  if (bVar4 < 2) {
    uVar1 = uVar3;
    uVar5 = uVar2;
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar5;
  return auVar6;
}

