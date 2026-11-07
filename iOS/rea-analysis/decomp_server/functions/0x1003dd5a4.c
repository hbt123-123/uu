// rea decompile_all
// name: FUN_1003dd5a4
// address: 0x1003dd5a4
// body: available
// range: 0x1003dd5a4-0x1003dd68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003dd5a4(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte *unaff_x20;
  undefined1 auVar10 [16];
  
  bVar3 = *unaff_x20;
  uVar9 = 0xeb00000000657079;
  pcVar5 = "pub.service.lock";
  puVar6 = &DAT_d000000000000010;
  if (bVar3 != 6) {
    pcVar5 = "systemBypassList";
    puVar6 = (undefined1 *)0xd000000000000017;
  }
  uVar1 = (ulong)pcVar5 | 0x8000000000000000;
  puVar7 = (undefined1 *)0x656d616e72657375;
  if (bVar3 != 4) {
    puVar7 = (undefined1 *)0x64726f7773736170;
  }
  if (bVar3 < 6) {
    uVar1 = 0xe800000000000000;
    puVar6 = puVar7;
  }
  uVar4 = 0x74736f68;
  if (bVar3 != 2) {
    uVar4 = 0x74726f70;
  }
  puVar7 = (undefined1 *)0x54676e6974746573;
  if (bVar3 != 0) {
    uVar9 = 0xe400000000000000;
    puVar7 = (undefined1 *)0x65707974;
  }
  uVar2 = 0xe400000000000000;
  puVar8 = (undefined1 *)(ulong)uVar4;
  if (bVar3 < 2) {
    uVar2 = uVar9;
    puVar8 = puVar7;
  }
  if (bVar3 < 4) {
    uVar1 = uVar2;
    puVar6 = puVar8;
  }
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = puVar6;
  return auVar10;
}

