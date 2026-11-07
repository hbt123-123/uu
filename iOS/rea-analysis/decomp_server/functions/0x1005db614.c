// rea decompile_all
// name: FUN_1005db614
// address: 0x1005db614
// body: available
// range: 0x1005db614-0x1005db697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005db614(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  uVar4 = 0xec000000656d614e;
  bVar1 = *unaff_x20;
  uVar5 = 0xea00000000006874;
  uVar2 = 0x615074656b636f73;
  if (bVar1 != 2) {
    uVar5 = 0xe800000000000000;
    uVar2 = 0x68746150666e6f63;
  }
  uVar3 = 0x6c616e7265746e69;
  if (bVar1 != 0) {
    uVar4 = 0xe800000000000000;
    uVar3 = 0x6874615078756d74;
  }
  if (bVar1 < 2) {
    uVar5 = uVar4;
    uVar2 = uVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

