// rea decompile_all
// name: FUN_1004c10d8
// address: 0x1004c10d8
// body: available
// range: 0x1004c10d8-0x1004c112b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004c10d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = *(ulong *)(unaff_x20 + 0xb8) >> 0x3c;
  uVar1 = 0;
  if (uVar4 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  }
  uVar2 = 0;
  if (uVar4 < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  }
  uVar3 = 0xc000000000000000;
  if (uVar4 < 0xf) {
    uVar3 = *(ulong *)(unaff_x20 + 0xb8);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = unaff_x20;
  FUN_100040b80();
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = FUN_1004c112c;
  return auVar5;
}

