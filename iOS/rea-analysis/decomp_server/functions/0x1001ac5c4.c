// rea decompile_all
// name: FUN_1001ac5c4
// address: 0x1001ac5c4
// body: available
// range: 0x1001ac5c4-0x1001ac77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001ac5c4(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (5 < param_1) {
    puVar10 = (undefined1 *)0x6f46616d726f6863;
    uVar3 = 0xec00000074616d72;
    if (param_1 != 10) {
      puVar10 = &DAT_d000000000000010;
      uVar3 = 0x800000010089aad0;
    }
    uVar5 = 0x800000010089aab0;
    puVar8 = &DAT_d000000000000010;
    if (param_1 != 9) {
      uVar5 = uVar3;
      puVar8 = puVar10;
    }
    puVar10 = (undefined1 *)0x737066;
    if (param_1 != 7) {
      puVar10 = (undefined1 *)0x617551656d617266;
    }
    uVar3 = 0xe300000000000000;
    if (param_1 != 7) {
      uVar3 = 0xec0000007974696c;
    }
    uVar4 = 0xeb000000006e6f69;
    puVar9 = (undefined1 *)0x7461746e6569726f;
    if (param_1 != 6) {
      uVar4 = uVar3;
      puVar9 = puVar10;
    }
    if (param_1 < 9) {
      uVar5 = uVar4;
      puVar8 = puVar9;
    }
    auVar12._8_8_ = uVar5;
    auVar12._0_8_ = puVar8;
    return auVar12;
  }
  pcVar6 = "resolutionHeight";
  puVar10 = (undefined1 *)0xd000000000000014;
  if (param_1 != 4) {
    pcVar6 = "resolutionPixelWidth";
    puVar10 = (undefined1 *)0xd000000000000015;
  }
  pcVar7 = "secondScreenSettings";
  puVar8 = &DAT_d000000000000010;
  if (param_1 != 3) {
    pcVar7 = pcVar6;
    puVar8 = puVar10;
  }
  uVar2 = 0xee00657079546e6f;
  if (param_1 != 1) {
    uVar2 = 0xef68746469576e6f;
  }
  uVar1 = 0xea00000000006465;
  puVar10 = (undefined1 *)0x72756769666e6f63;
  if (param_1 != 0) {
    uVar1 = uVar2;
    puVar10 = (undefined1 *)0x6974756c6f736572;
  }
  uVar2 = (ulong)pcVar7 | 0x8000000000000000;
  if (param_1 < 3) {
    uVar2 = uVar1;
    puVar8 = puVar10;
  }
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = puVar8;
  return auVar11;
}

