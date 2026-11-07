// rea decompile_all
// name: FUN_1005b4f00
// address: 0x1005b4f00
// body: available
// range: 0x1005b4f00-0x1005b4f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1005b4f00(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *unaff_x20;
  
  param_1[2] = unaff_x20;
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    uVar3 = 0;
    bVar4 = 1;
  }
  else {
    bVar1 = ((uint)((ulong)unaff_x20[2] >> 0x3c) & 3) != 0;
    bVar2 = (*(byte *)(unaff_x20 + 3) & 1) != 0;
    uVar3 = 0;
    if (!bVar1 && !bVar2) {
      uVar3 = *unaff_x20;
    }
    bVar4 = (bVar1 || bVar2) | (byte)unaff_x20[1];
  }
  *param_1 = uVar3;
  *(byte *)(param_1 + 1) = bVar4 & 1;
  return FUN_1005b4f64;
}

