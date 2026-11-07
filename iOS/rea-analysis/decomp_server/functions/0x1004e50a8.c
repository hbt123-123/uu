// rea decompile_all
// name: FUN_1004e50a8
// address: 0x1004e50a8
// body: available
// range: 0x1004e50a8-0x1004e5117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004e50a8(undefined4 *param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  *(long *)(param_1 + 6) = unaff_x20;
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    FUN_100008184(uVar2,uVar3);
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xc000000000000000;
  }
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(ulong *)(param_1 + 4) = uVar3;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1004e5118;
  return auVar4;
}

