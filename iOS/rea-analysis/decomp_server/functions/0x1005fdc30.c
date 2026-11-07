// rea decompile_all
// name: FUN_1005fdc30
// address: 0x1005fdc30
// body: available
// range: 0x1005fdc30-0x1005fdda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005fdc30(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 5) {
    uVar5 = 0x737066;
    if (param_1 != 3) {
      uVar5 = 0x7974696c617571;
    }
    uVar2 = 0xe300000000000000;
    if (param_1 != 3) {
      uVar2 = 0xe700000000000000;
    }
    uVar3 = 0xea00000000006174;
    uVar4 = 0x61446e6565726373;
    if (param_1 != 2) {
      uVar3 = uVar2;
      uVar4 = uVar5;
    }
    uVar5 = 0x4449656369766564;
    if (param_1 != 0) {
      uVar5 = 0x44496e6565726373;
    }
    if (param_1 < 2) {
      uVar3 = 0xe800000000000000;
      uVar4 = uVar5;
    }
    auVar7._8_8_ = uVar3;
    auVar7._0_8_ = uVar4;
    return auVar7;
  }
  uVar5 = 0x80000001008bea00;
  uVar2 = 0xd000000000000017;
  if (param_1 != 9) {
    uVar5 = 0xec00000065676173;
    uVar2 = 0x73654d726f727265;
  }
  uVar3 = 0xef73676e69747465;
  uVar4 = 0x5365727574706163;
  if (param_1 != 8) {
    uVar3 = uVar5;
    uVar4 = uVar2;
  }
  uVar5 = 0xe900000000000044;
  uVar2 = 0x496e6f6973736573;
  if (param_1 != 6) {
    uVar5 = 0xe800000000000000;
    uVar2 = 0x6e6f697369766572;
  }
  uVar1 = 0x6e6f697461746f72;
  if (param_1 != 5) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (param_1 != 5) {
    uVar2 = uVar5;
  }
  if (param_1 < 8) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

