// rea decompile_all
// name: FUN_100443878
// address: 0x100443878
// body: available
// range: 0x100443878-0x100443903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100443878(undefined4 *param_1)

{
  ulong *unaff_x20;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  *(ulong **)(param_1 + 6) = unaff_x20;
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[2];
  if (uVar3 < 0xffffffff00000000 && (uVar1 & 0x3000000000000000) == 0) {
    uVar2 = unaff_x20[1];
    FUN_10020376c(uVar3,uVar2,uVar1,FUN_100008184);
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0xc000000000000000;
  }
  *param_1 = (int)uVar3;
  *(ulong *)(param_1 + 2) = uVar2;
  *(ulong *)(param_1 + 4) = uVar1;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_100443904;
  return auVar4;
}

