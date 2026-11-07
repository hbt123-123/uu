// rea decompile_all
// name: FUN_1004107dc
// address: 0x1004107dc
// body: available
// range: 0x1004107dc-0x1004108e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004107dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar4 = *unaff_x20;
  uVar6 = 0xeb00000000736369;
  uVar5 = 0x74736f6e67616964;
  if (bVar4 != 6) {
    uVar6 = 0xe700000000000000;
    uVar5 = 0x747865746e6f63;
  }
  uVar7 = 0x80000001008b6620;
  uVar3 = 0xd000000000000011;
  if (bVar4 != 4) {
    uVar7 = 0xe900000000000070;
    uVar3 = 0x6d617473656d6974;
  }
  if (bVar4 < 6) {
    uVar6 = uVar7;
    uVar5 = uVar3;
  }
  uVar7 = 0x424d79726f6d656d;
  if (bVar4 != 2) {
    uVar7 = 0x6c6f687365726874;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xeb00000000424d64;
  }
  uVar1 = 0x737365636f7270;
  if (bVar4 != 0) {
    uVar1 = 0x646970;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe300000000000000;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar7 = uVar1;
  }
  if (bVar4 < 4) {
    uVar6 = uVar3;
    uVar5 = uVar7;
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}

