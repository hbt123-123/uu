// rea decompile_all
// name: FUN_1005d9d50
// address: 0x1005d9d50
// body: available
// range: 0x1005d9d50-0x1005d9dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005d9d50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xe900000000000064;
  uVar1 = 0x6950746e65726170;
  if (bVar3 != 3) {
    uVar5 = 0xea00000000007367;
    uVar1 = 0x724168636e75616c;
  }
  uVar2 = 0xef706d617473656d;
  uVar4 = 0x695468636e75616c;
  if (bVar3 != 2) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  uVar5 = 0x6e6f6973726576;
  if (bVar3 != 0) {
    uVar5 = 0x646c697562;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0xe500000000000000;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

