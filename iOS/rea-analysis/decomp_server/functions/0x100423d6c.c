// rea decompile_all
// name: FUN_100423d6c
// address: 0x100423d6c
// body: available
// range: 0x100423d6c-0x100423e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100423d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((((*(ulong *)(unaff_x20 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(unaff_x20 + 0x48) != 0xff)) {
    uVar1 = 4;
    if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | (uint)(*(ulong *)(unaff_x20 + 0x40) >> 0x3c) & 3;
    if (uVar1 < 4) {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          FUN_100423e80();
        }
        else {
          FUN_100423f3c();
        }
      }
      else if (uVar1 == 2) {
        FUN_100423ffc();
      }
      else {
        FUN_1004240bc();
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 4) {
        FUN_100424174();
      }
      else {
        FUN_10042422c();
      }
    }
    else if (uVar1 == 6) {
      FUN_1004242e4();
    }
    else {
      FUN_100424394();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),param_2,
                param_3);
  return;
}

