// rea decompile_all
// name: FUN_1005b4e5c
// address: 0x1005b4e5c
// body: available
// range: 0x1005b4e5c-0x1005b4ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005b4e5c(void)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    return ZEXT816(1) << 0x40;
  }
  bVar3 = (*(byte *)(unaff_x20 + 3) & 1) != 0;
  bVar2 = ((uint)((ulong)unaff_x20[2] >> 0x3c) & 3) != 0;
  uVar1 = 0;
  if (!bVar3 && !bVar2) {
    uVar1 = *unaff_x20;
  }
  auVar4._8_4_ = ((bVar3 || bVar2) | *(byte *)(unaff_x20 + 1)) & 1;
  auVar4._0_8_ = uVar1;
  auVar4._12_4_ = 0;
  return auVar4;
}

