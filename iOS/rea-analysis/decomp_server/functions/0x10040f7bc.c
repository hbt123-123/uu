// rea decompile_all
// name: FUN_10040f7bc
// address: 0x10040f7bc
// body: available
// range: 0x10040f7bc-0x10040f867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10040f7bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  puVar5 = (undefined1 *)0x656c62616e65;
  uVar2 = 0x80000001008afd10;
  puVar3 = (undefined1 *)0xd000000000000019;
  if (bVar4 != 3) {
    uVar2 = 0xef666669645f676f;
    puVar3 = (undefined1 *)0x6c5f656c706d6173;
  }
  if (bVar4 == 2) {
    puVar3 = (undefined1 *)0xd000000000000014;
    uVar2 = 0x80000001008afcf0;
  }
  if (bVar4 != 0) {
    puVar5 = &DAT_d000000000000013;
  }
  uVar1 = 0xe600000000000000;
  if (bVar4 != 0) {
    uVar1 = 0x80000001008afcd0;
  }
  if (bVar4 < 2) {
    uVar2 = uVar1;
    puVar3 = puVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = puVar3;
  return auVar6;
}

