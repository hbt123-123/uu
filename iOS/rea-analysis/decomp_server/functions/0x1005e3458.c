// rea decompile_all
// name: FUN_1005e3458
// address: 0x1005e3458
// body: available
// range: 0x1005e3458-0x1005e34df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005e3458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xeb0000000044496e;
  uVar4 = 0x6f6974617265706f;
  if (bVar3 != 2) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x73676e6974746573;
  }
  uVar1 = 0x4449656369766564;
  if (bVar3 != 0) {
    uVar1 = 0x496e6f6973736573;
  }
  uVar2 = 0xe800000000000000;
  if (bVar3 != 0) {
    uVar2 = 0xe900000000000044;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

