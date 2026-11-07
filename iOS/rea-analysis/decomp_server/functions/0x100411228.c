// rea decompile_all
// name: FUN_100411228
// address: 0x100411228
// body: available
// range: 0x100411228-0x1004112ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100411228(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar3 = 0x80000001008afcd0;
  puVar5 = &DAT_d000000000000013;
  if (bVar4 != 2) {
    uVar3 = 0xe900000000000070;
    puVar5 = (undefined1 *)0x6d617473656d6974;
  }
  puVar1 = (undefined1 *)0x646970;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0x6d5f79726f6d656d;
  }
  uVar2 = 0xe300000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000062;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    puVar5 = puVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = puVar5;
  return auVar6;
}

