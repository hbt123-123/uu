// rea decompile_all
// name: FUN_100443c24
// address: 0x100443c24
// body: available
// range: 0x100443c24-0x100443c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100443c24(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  *(undefined8 **)(param_1 + 6) = unaff_x20;
  uVar1 = unaff_x20[2];
  if ((uVar1 & 0x3000000000000000) == 0x2000000000000000) {
    uVar3 = *unaff_x20;
    uVar4 = unaff_x20[1];
    uVar2 = uVar1 & 0xcfffffffffffffff;
    FUN_10020376c(uVar3,uVar4,uVar1,FUN_100008184);
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0xc000000000000000;
  }
  *param_1 = (int)uVar3;
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(ulong *)(param_1 + 4) = uVar2;
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = FUN_100443ca0;
  return auVar5;
}

