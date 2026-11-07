// rea decompile_all
// name: FUN_1005f4f08
// address: 0x1005f4f08
// body: available
// range: 0x1005f4f08-0x1005f4fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005f4f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0xe900000000000066;
  uVar3 = 0x666944746e756f63;
  if (bVar4 != 4) {
    uVar1 = 0xeb0000000064656c;
    uVar3 = 0x6961466574697277;
  }
  uVar2 = 0x65636170536f6e;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6873696e6966;
  if (bVar4 != 1) {
    uVar1 = 0x64656c696166;
  }
  uVar5 = 0x776f6e6b6e75;
  if (bVar4 != 0) {
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = 0xe600000000000000;
    uVar2 = uVar5;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

