// rea decompile_all
// name: FUN_10011dcd8
// address: 0x10011dcd8
// body: available
// range: 0x10011dcd8-0x10011ddab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011dcd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar7 = 0x80000001008761e0;
  puVar4 = &DAT_d000000000000018;
  if (bVar3 != 4) {
    uVar7 = 0xea00000000007475;
    puVar4 = (undefined1 *)0x706e695f74786574;
  }
  uVar2 = 0x80000001008761c0;
  puVar5 = (undefined1 *)0xd000000000000016;
  if (bVar3 != 3) {
    uVar2 = uVar7;
    puVar5 = puVar4;
  }
  uVar7 = 0xeb00000000657361;
  puVar4 = (undefined1 *)0x656c65725f64626b;
  if (bVar3 != 1) {
    uVar7 = 0xe90000000000006b;
    puVar4 = (undefined1 *)0x63696c635f64626b;
  }
  uVar1 = 0xe900000000000073;
  puVar6 = (undefined1 *)0x736572705f64626b;
  if (bVar3 != 0) {
    uVar1 = uVar7;
    puVar6 = puVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    puVar5 = puVar6;
  }
  *param_1 = puVar5;
  param_1[1] = uVar2;
  return;
}

