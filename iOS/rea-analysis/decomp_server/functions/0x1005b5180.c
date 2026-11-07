// rea decompile_all
// name: FUN_1005b5180
// address: 0x1005b5180
// body: available
// range: 0x1005b5180-0x1005b5203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005b5180(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  param_1[2] = unaff_x20;
  uVar4 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar2 = (uint)*(byte *)(unaff_x20 + 3);
  if (((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar2 == 0xff)) ||
     (((uint)(uVar1 >> 0x3c) & 3 | (uVar2 & 1) << 2) != 2)) {
    uVar4 = 0;
    uVar3 = 0xe000000000000000;
  }
  else {
    FUN_10051feb8(uVar4,uVar3,uVar1,uVar2 & 1);
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = FUN_1005b5204;
  return auVar5;
}

