// rea decompile_all
// name: FUN_1005e0090
// address: 0x1005e0090
// body: available
// range: 0x1005e0090-0x1005e016b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005e0090(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar7 = 0x80000001008bdca0;
  puVar6 = &DAT_d000000000000010;
  if (bVar5 != 4) {
    uVar7 = 0xef74756f656d6954;
    puVar6 = (undefined1 *)0x797469746e656469;
  }
  puVar1 = (undefined1 *)0x73736f4c656d6974;
  if (bVar5 != 3) {
    puVar1 = puVar6;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar4 = uVar7;
  }
  uVar7 = 0xeb0000000073736f;
  puVar6 = (undefined1 *)0x4c6e6f6973726576;
  if (bVar5 != 1) {
    uVar7 = 0xe900000000000073;
    puVar6 = (undefined1 *)0x736f4c646c697562;
  }
  puVar2 = (undefined1 *)0x73736f4c68746170;
  if (bVar5 != 0) {
    puVar2 = puVar6;
  }
  uVar3 = 0xe800000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar7;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    puVar1 = puVar2;
  }
  *param_1 = puVar1;
  param_1[1] = uVar4;
  return;
}

