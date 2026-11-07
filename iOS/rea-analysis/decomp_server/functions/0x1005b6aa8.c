// rea decompile_all
// name: FUN_1005b6aa8
// address: 0x1005b6aa8
// body: available
// range: 0x1005b6aa8-0x1005b6b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b6aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(unaff_x20 + 0x18) != 0xff)) {
    uVar1 = 4;
    if ((*(byte *)(unaff_x20 + 0x18) & 1) == 0) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | (uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3c) & 3;
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        FUN_1005b6b94();
      }
      else if (uVar1 == 1) {
        FUN_1005b6c44();
      }
      else {
        FUN_1005b6cb4();
      }
    }
    else if (uVar1 == 3) {
      FUN_1005b6d28();
    }
    else if (uVar1 == 4) {
      FUN_1005b6d94();
    }
    else {
      FUN_1005b6e4c();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),param_2,
                param_3);
  return;
}

