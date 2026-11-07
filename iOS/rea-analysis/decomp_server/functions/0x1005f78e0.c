// rea decompile_all
// name: FUN_1005f78e0
// address: 0x1005f78e0
// body: available
// range: 0x1005f78e0-0x1005f79cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005f78e0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar7 = *unaff_x20;
  puVar1 = (undefined1 *)0x6874615079706f63;
  if (bVar7 != 5) {
    puVar1 = (undefined1 *)0x737365636f7270;
  }
  uVar2 = 0xe800000000000000;
  if (bVar7 != 5) {
    uVar2 = 0xe700000000000000;
  }
  puVar3 = (undefined1 *)0x656d69547466656c;
  if (bVar7 != 3) {
    puVar3 = (undefined1 *)0x656c694679706f63;
  }
  uVar4 = 0xe800000000000000;
  if (bVar7 != 3) {
    uVar4 = 0xec000000656d614e;
  }
  if (bVar7 < 5) {
    uVar2 = uVar4;
    puVar1 = puVar3;
  }
  uVar4 = 0x8000000100895870;
  puVar3 = &DAT_d000000000000010;
  if (bVar7 != 1) {
    uVar4 = 0xee00746e756f4361;
    puVar3 = (undefined1 *)0x7461446c61746f74;
  }
  puVar5 = (undefined1 *)0x64496b736174;
  if (bVar7 != 0) {
    puVar5 = puVar3;
  }
  uVar6 = 0xe600000000000000;
  if (bVar7 != 0) {
    uVar6 = uVar4;
  }
  if (bVar7 < 3) {
    uVar2 = uVar6;
    puVar1 = puVar5;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puVar1;
  return auVar8;
}

