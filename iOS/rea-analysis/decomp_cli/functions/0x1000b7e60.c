// rea decompile_all
// name: FUN_1000b7e60
// address: 0x1000b7e60
// body: available
// range: 0x1000b7e60-0x1000b7f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b7e60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar4 = 0xee00726f74616e69;
  uVar6 = 0x6d72655474736f70;
  if (bVar5 != 5) {
    uVar4 = 0xef64657a696e676f;
    uVar6 = 0x6365726e556c6c61;
  }
  uVar1 = 0xee006e6f6974704f;
  uVar3 = 0x7478654e6f547075;
  if (bVar5 != 3) {
    uVar1 = 0x80000001000cb080;
    uVar3 = 0xd000000000000011;
  }
  if (bVar5 < 5) {
    uVar4 = uVar1;
    uVar6 = uVar3;
  }
  uVar1 = 0x80000001000cb050;
  uVar3 = 0xd000000000000010;
  if (bVar5 != 1) {
    uVar1 = 0xed00006c616e6f69;
    uVar3 = 0x7469646e6f636e75;
  }
  uVar2 = 0x746c7561666564;
  if (bVar5 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  *param_1 = uVar6;
  param_1[1] = uVar4;
  return;
}

