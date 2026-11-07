// rea decompile_all
// name: FUN_10000443c
// address: 0x10000443c
// body: available
// range: 0x10000443c-0x1000044cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10000443c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar4 = 0x726174617661;
  if (bVar5 != 3) {
    uVar4 = 0x7069567369;
  }
  uVar1 = 0xe600000000000000;
  if (bVar5 != 3) {
    uVar1 = 0xe500000000000000;
  }
  uVar2 = 0x656d616e6b63696e;
  if (bVar5 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x644972657375;
  if (bVar5 != 0) {
    uVar1 = 0x656d616e72657375;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

