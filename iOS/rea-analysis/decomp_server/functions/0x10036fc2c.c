// rea decompile_all
// name: FUN_10036fc2c
// address: 0x10036fc2c
// body: available
// range: 0x10036fc2c-0x10036fd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10036fc2c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1 < 4) {
    uVar6 = 0x44414548;
    if (param_1 != 2) {
      uVar6 = 0x54534f50;
    }
    uVar4 = 0x534e4f4954504f;
    if (param_1 != 0) {
      uVar4 = 0x544547;
    }
    uVar5 = 0xe700000000000000;
    if (param_1 != 0) {
      uVar5 = 0xe300000000000000;
    }
    uVar1 = 0xe400000000000000;
    uVar7 = (ulong)uVar6;
    if (param_1 < 2) {
      uVar1 = uVar5;
      uVar7 = uVar4;
    }
    auVar9._8_8_ = uVar1;
    auVar9._0_8_ = uVar7;
    return auVar9;
  }
  uVar5 = 0x4543415254;
  if (param_1 != 7) {
    uVar5 = 0x5443454e4e4f43;
  }
  uVar1 = 0xe500000000000000;
  if (param_1 != 7) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x4554454c4544;
  if (param_1 != 6) {
    uVar2 = uVar5;
  }
  uVar5 = 0xe600000000000000;
  if (param_1 != 6) {
    uVar5 = uVar1;
  }
  uVar1 = 0x545550;
  if (param_1 != 4) {
    uVar1 = 0x4843544150;
  }
  uVar3 = 0xe300000000000000;
  if (param_1 != 4) {
    uVar3 = 0xe500000000000000;
  }
  if (param_1 < 6) {
    uVar5 = uVar3;
    uVar2 = uVar1;
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar2;
  return auVar8;
}

