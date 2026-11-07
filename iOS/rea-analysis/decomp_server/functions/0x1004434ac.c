// rea decompile_all
// name: FUN_1004434ac
// address: 0x1004434ac
// body: available
// range: 0x1004434ac-0x10044355f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004434ac(byte *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  *(undefined8 **)(param_1 + 0x18) = unaff_x20;
  if (*(byte *)((long)unaff_x20 + 0x34) >> 6 == 2 &&
      (((((unaff_x20[3] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
        (ulong)unaff_x20[4] >> 0x21 != 0x3fffffff) || (ulong)unaff_x20[5] >> 0x21 != 0) ||
      *(byte *)((long)unaff_x20 + 0x34) >> 1 != 0)) {
    uVar3 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar1 = *unaff_x20;
    FUN_10017ac64(uVar1,uVar3,uVar2);
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 0xc000000000000000;
  }
  *param_1 = (byte)uVar1 & 1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_100443560;
  return auVar4;
}

