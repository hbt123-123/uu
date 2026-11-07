// rea decompile_all
// name: FUN_1005b5038
// address: 0x1005b5038
// body: available
// range: 0x1005b5038-0x1005b5087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1005b5038(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  param_1[1] = unaff_x20;
  if (((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (uVar1 = 0, *(byte *)(unaff_x20 + 3) != 0xff)) &&
     (uVar1 = *unaff_x20,
     ((uint)((ulong)unaff_x20[2] >> 0x3c) & 3 | (*(byte *)(unaff_x20 + 3) & 1) << 2) != 1)) {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return FUN_1005b5088;
}

