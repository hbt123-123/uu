// rea decompile_all
// name: FUN_10017cb2c
// address: 0x10017cb2c
// body: available
// range: 0x10017cb2c-0x10017ccd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10017cb2c(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  param_1 = param_1 & 0xff;
  if (param_1 < 6) {
    puVar8 = (undefined1 *)0x6c6f636f746f7270;
    uVar9 = 0xee00726f72726520;
    if (param_1 != 4) {
      puVar8 = (undefined1 *)0xd000000000000011;
      uVar9 = 0x8000000100896db0;
    }
    uVar5 = 0xed00006e69206465;
    puVar6 = (undefined1 *)0x67676f6c20746f6e;
    if (param_1 != 3) {
      uVar5 = uVar9;
      puVar6 = puVar8;
    }
    uVar2 = 0xe900000000000064;
    puVar8 = (undefined1 *)0x6564656563637573;
    if (param_1 != 1) {
      uVar2 = 0x8000000100896dd0;
      puVar8 = &DAT_d000000000000010;
    }
    uVar9 = 0x8000000100896df0;
    puVar7 = (undefined1 *)0xd000000000000011;
    if (param_1 != 0) {
      uVar9 = uVar2;
      puVar7 = puVar8;
    }
    bVar3 = SBORROW4(param_1,2);
    iVar1 = param_1 - 2;
    bVar4 = param_1 == 2;
  }
  else {
    puVar8 = (undefined1 *)0x746f6e20656c6966;
    uVar9 = 0xee00646e756f6620;
    if (param_1 != 10) {
      puVar8 = (undefined1 *)0xd000000000000012;
      uVar9 = 0x8000000100896d70;
    }
    puVar6 = (undefined1 *)0x646573756170;
    if (param_1 != 9) {
      puVar6 = puVar8;
    }
    uVar5 = 0xe600000000000000;
    if (param_1 != 9) {
      uVar5 = uVar9;
    }
    uVar9 = 0x8000000100896d90;
    puVar8 = (undefined1 *)0x726f727265206f69;
    if (param_1 != 7) {
      puVar8 = (undefined1 *)0x64656c65636e6163;
    }
    puVar7 = (undefined1 *)0xd000000000000011;
    if (param_1 != 6) {
      uVar9 = 0xe800000000000000;
      puVar7 = puVar8;
    }
    bVar3 = SBORROW4(param_1,8);
    iVar1 = param_1 - 8;
    bVar4 = param_1 == 8;
  }
  if (bVar4 || iVar1 < 0 != bVar3) {
    uVar5 = uVar9;
    puVar6 = puVar7;
  }
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = puVar6;
  return auVar10;
}

