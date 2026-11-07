// rea decompile_all
// name: FUN_1003b4f08
// address: 0x1003b4f08
// body: available
// range: 0x1003b4f08-0x1003b4f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003b4f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x6c7474;
  if (bVar5 != 2) {
    uVar1 = 0x657a69735f78616d;
  }
  uVar2 = 0xe300000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0x6e656b6f74;
  if (bVar5 != 0) {
    uVar3 = 0x6c72755f716572;
  }
  uVar4 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe700000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}

