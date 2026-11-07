// rea decompile_all
// name: FUN_100004b64
// address: 0x100004b64
// body: available
// range: 0x100004b64-0x100004c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100004b64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0x656e696c6e4f7369;
  if (bVar4 != 3) {
    uVar1 = 0x6e6565537473616c;
  }
  uVar5 = 0x6d726f6674616c70;
  if (bVar4 != 2) {
    uVar5 = uVar1;
  }
  uVar1 = 0x6449656369766564;
  if (bVar4 != 0) {
    uVar1 = 0x614e656369766564;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xea0000000000656d;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}

