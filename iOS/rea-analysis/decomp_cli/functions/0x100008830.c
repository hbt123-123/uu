// rea decompile_all
// name: FUN_100008830
// address: 0x100008830
// body: available
// range: 0x100008830-0x1000088e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100008830(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar1 = 0xef65746174536e6f;
  uVar4 = 0x697463656e6e6f63;
  if (bVar3 != 3) {
    uVar1 = 0xe900000000000072;
    uVar4 = 0x6f7272457473616c;
  }
  uVar2 = 0xea00000000006574;
  uVar5 = 0x6174537265776f70;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xe900000000000064;
  uVar4 = 0x49435064756f6c63;
  if (bVar3 != 0) {
    uVar1 = 0xeb00000000656d61;
    uVar4 = 0x4e435064756f6c63;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar5;
  return auVar6;
}

