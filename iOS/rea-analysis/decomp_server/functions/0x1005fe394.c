// rea decompile_all
// name: FUN_1005fe394
// address: 0x1005fe394
// body: available
// range: 0x1005fe394-0x1005fe467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005fe394(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar5 = *unaff_x20;
  uVar7 = 0xe900000000000065;
  uVar4 = 0x646f43726f727265;
  if (bVar5 != 4) {
    uVar7 = 0xe800000000000000;
    uVar4 = 0x73676e6974746573;
  }
  uVar1 = 0x44496e6565726373;
  if (bVar5 != 3) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar4 = uVar7;
  }
  uVar7 = 0x4449656369766564;
  if (bVar5 != 1) {
    uVar7 = 0x496e6f6973736573;
  }
  uVar2 = 0xe800000000000000;
  if (bVar5 != 1) {
    uVar2 = 0xe900000000000044;
  }
  uVar3 = 0xeb0000000044496e;
  uVar6 = 0x6f6974617265706f;
  if (bVar5 != 0) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar6;
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar1;
  return auVar8;
}

