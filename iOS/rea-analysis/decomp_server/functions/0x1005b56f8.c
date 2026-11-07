// rea decompile_all
// name: FUN_1005b56f8
// address: 0x1005b56f8
// body: available
// range: 0x1005b56f8-0x1005b578b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005b56f8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  param_1[3] = unaff_x20;
  puVar4 = (undefined *)*unaff_x20;
  uVar5 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar2 = (uint)*(byte *)(unaff_x20 + 3);
  if (((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar2 == 0xff)) ||
     (((uint)(uVar1 >> 0x3c) & 3 | (uVar2 & 1) << 2) != 5)) {
    uVar5 = 0;
    uVar3 = 0xc000000000000000;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar3 = uVar1 & 0xcfffffffffffffff;
    FUN_10051feb8(puVar4,uVar5,uVar1,uVar2 & 1);
  }
  *param_1 = puVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar3;
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = FUN_1005b578c;
  return auVar6;
}

