// rea decompile_all
// name: FUN_100450e08
// address: 0x100450e08
// body: available
// range: 0x100450e08-0x100450e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100450e08(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  byte bVar7;
  long unaff_x20;
  
  bVar4 = (*(ulong *)(unaff_x20 + 0x28) & 0xff) != 2;
  bVar5 = 0;
  if (bVar4) {
    bVar5 = (byte)*(ulong *)(unaff_x20 + 0x28);
  }
  uVar1 = 0;
  if (bVar4) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  bVar7 = 1;
  if (bVar4) {
    bVar7 = (byte)*(undefined8 *)(unaff_x20 + 0x38);
  }
  uVar6 = 0;
  if (bVar4) {
    uVar6 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x38) >> 0x20);
  }
  uVar2 = 0;
  if (bVar4) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  uVar3 = 0xc000000000000000;
  if (bVar4) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  FUN_10045ebb8();
  *param_1 = bVar5 & 1;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[0x10] = bVar7 & 1;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}

