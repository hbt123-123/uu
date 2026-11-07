// rea decompile_all
// name: FUN_1005e0590
// address: 0x1005e0590
// body: available
// range: 0x1005e0590-0x1005e0607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005e0590(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar1 = *unaff_x20;
  uVar4 = 0xea00000000007265;
  uVar2 = 0x7466417972746572;
  if (bVar1 != 2) {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x79727465526e6163;
  }
  uVar3 = 0x6e6f73616572;
  if (bVar1 != 0) {
    uVar3 = 0x72656e6e6977;
  }
  if (bVar1 < 2) {
    uVar4 = 0xe600000000000000;
    uVar2 = uVar3;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

