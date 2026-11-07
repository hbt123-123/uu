// rea decompile_all
// name: FUN_10039b7a4
// address: 0x10039b7a4
// body: available
// range: 0x10039b7a4-0x10039b8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10039b7a4(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    uVar3 = 0x6874646977;
    if (param_1 != 2) {
      uVar3 = 0x746867696568;
    }
    uVar6 = 0xe500000000000000;
    if (param_1 != 2) {
      uVar6 = 0xe600000000000000;
    }
    uVar4 = 0x746f6c73;
    if (param_1 != 0) {
      uVar4 = 0x656d616e;
    }
    if (param_1 < 2) {
      uVar6 = 0xe400000000000000;
      uVar3 = (ulong)uVar4;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar3;
    return auVar8;
  }
  uVar6 = 0x80000001008affe0;
  uVar1 = 0x4164657461657263;
  if (param_1 != 7) {
    uVar1 = 0x4164657461647075;
  }
  uVar5 = 0xd000000000000012;
  if (param_1 != 6) {
    uVar6 = 0xe900000000000074;
    uVar5 = uVar1;
  }
  uVar1 = 0x4950446968;
  if (param_1 != 4) {
    uVar1 = 0x5268736572666572;
  }
  uVar2 = 0xe500000000000000;
  if (param_1 != 4) {
    uVar2 = 0xeb00000000657461;
  }
  if (param_1 < 6) {
    uVar6 = uVar2;
    uVar5 = uVar1;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}

