// rea decompile_all
// name: FUN_100399328
// address: 0x100399328
// body: available
// range: 0x100399328-0x100399387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100399328(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar4 = *unaff_x20;
  uVar5 = 0x35646d;
  if (bVar4 != 2) {
    uVar5 = 0x656d696d;
  }
  uVar1 = 0xe300000000000000;
  if (bVar4 != 2) {
    uVar1 = 0xe400000000000000;
  }
  uVar2 = 0x657a697366;
  if (bVar4 != 0) {
    uVar2 = 0x6c7275;
  }
  uVar3 = 0xe500000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xe300000000000000;
  }
  uVar6 = (ulong)uVar5;
  if (bVar4 < 2) {
    uVar1 = uVar3;
    uVar6 = uVar2;
  }
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

