// rea decompile_all
// name: FUN_1000b7cfc
// address: 0x1000b7cfc
// body: available
// range: 0x1000b7cfc-0x1000b7e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b7cfc(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = 0xee00726f74616e69;
  uVar5 = 0x6d72655474736f70;
  if (param_1 != 5) {
    uVar4 = 0xef64657a696e676f;
    uVar5 = 0x6365726e556c6c61;
  }
  uVar1 = 0xee006e6f6974704f;
  uVar3 = 0x7478654e6f547075;
  if (param_1 != 3) {
    uVar1 = 0x80000001000cb080;
    uVar3 = 0xd000000000000011;
  }
  if (param_1 < 5) {
    uVar4 = uVar1;
    uVar5 = uVar3;
  }
  uVar1 = 0x80000001000cb050;
  uVar3 = 0xd000000000000010;
  if (param_1 != 1) {
    uVar1 = 0xed00006c616e6f69;
    uVar3 = 0x7469646e6f636e75;
  }
  uVar2 = 0x746c7561666564;
  if (param_1 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (param_1 != 0) {
    uVar3 = uVar1;
  }
  if (param_1 < 3) {
    uVar4 = uVar3;
    uVar5 = uVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}

