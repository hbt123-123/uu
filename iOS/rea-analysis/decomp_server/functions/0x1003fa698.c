// rea decompile_all
// name: FUN_1003fa698
// address: 0x1003fa698
// body: available
// range: 0x1003fa698-0x1003fa763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fa698(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar4 = 0x64695f7473657567;
  if (bVar5 != 4) {
    uVar4 = 0x6f745f7473657567;
  }
  uVar3 = 0xe800000000000000;
  if (bVar5 != 4) {
    uVar3 = 0xeb000000006e656b;
  }
  uVar1 = 0x64695f72657375;
  if (bVar5 != 3) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (bVar5 != 3) {
    uVar4 = uVar3;
  }
  uVar3 = 0x695f656369766564;
  if (bVar5 != 1) {
    uVar3 = 0x695f746e65696c63;
  }
  uVar2 = 0x6e656b6f74;
  if (bVar5 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe900000000000064;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}

