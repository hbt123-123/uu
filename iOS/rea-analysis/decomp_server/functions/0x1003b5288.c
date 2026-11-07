// rea decompile_all
// name: FUN_1003b5288
// address: 0x1003b5288
// body: available
// range: 0x1003b5288-0x1003b5427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003b5288(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (5 < param_1) {
    uVar6 = 0xec000000656c7469;
    uVar2 = 0x745f776f646e6977;
    if (param_1 != 10) {
      uVar6 = 0xe800000000000000;
      uVar2 = 0x656d616e5f657865;
    }
    uVar4 = 0xec00000068746170;
    uVar1 = 0x5f6c65725f657865;
    if (param_1 != 9) {
      uVar4 = uVar6;
      uVar1 = uVar2;
    }
    uVar6 = 0xee006769666e6f63;
    uVar2 = 0x5f6c6f72746e6f63;
    if (param_1 != 7) {
      uVar6 = 0xe900000000000070;
      uVar2 = 0x616d5f6c61636f6c;
    }
    uVar3 = 0xec00000064695f70;
    uVar5 = 0x70615f6d61657473;
    if (param_1 != 6) {
      uVar3 = uVar6;
      uVar5 = uVar2;
    }
    if (param_1 < 9) {
      uVar4 = uVar3;
      uVar1 = uVar5;
    }
    auVar8._8_8_ = uVar4;
    auVar8._0_8_ = uVar1;
    return auVar8;
  }
  uVar6 = 0xe90000000000006c;
  uVar2 = 0x72755f7265766f63;
  if (param_1 != 4) {
    uVar6 = 0xea00000000007461;
    uVar2 = 0x5f64657461647075;
  }
  uVar4 = 0x6c72755f6e6f6369;
  if (param_1 != 3) {
    uVar4 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (param_1 != 3) {
    uVar2 = uVar6;
  }
  uVar6 = 0x656d616e;
  if (param_1 != 1) {
    uVar6 = 0x7361696c61;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 != 1) {
    uVar1 = 0xe500000000000000;
  }
  uVar3 = 0x64695f707061;
  if (param_1 != 0) {
    uVar3 = uVar6;
  }
  uVar6 = 0xe600000000000000;
  if (param_1 != 0) {
    uVar6 = uVar1;
  }
  if (param_1 < 3) {
    uVar2 = uVar6;
    uVar4 = uVar3;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar4;
  return auVar7;
}

