// rea decompile_all
// name: FUN_100433d9c
// address: 0x100433d9c
// body: available
// range: 0x100433d9c-0x100433dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100433d9c(undefined4 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  *(long *)(param_1 + 6) = unaff_x20;
  uVar5 = *(ulong *)(unaff_x20 + 0x90) >> 0x3c;
  uVar3 = 0;
  if (uVar5 < 0xf) {
    uVar3 = (undefined4)*(undefined8 *)(unaff_x20 + 0x80);
  }
  uVar4 = 0;
  if (uVar5 < 0xf) {
    uVar4 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x80) >> 0x20);
  }
  uVar1 = 0;
  if (uVar5 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  }
  uVar2 = 0xc000000000000000;
  if (uVar5 < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + 0x90);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(ulong *)(param_1 + 4) = uVar2;
  FUN_100040b80();
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = FUN_100433dfc;
  return auVar6;
}

