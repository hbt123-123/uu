// rea decompile_all
// name: FUN_100425e80
// address: 0x100425e80
// body: available
// range: 0x100425e80-0x100425f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100425e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 0x20) & *(ulong *)(unaff_x20 + 0x30) & *(ulong *)(unaff_x20 + 0x40) ^
       0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x40) >> 0x3b) & 6 |
            (uint)(*(ulong *)(unaff_x20 + 0x30) >> 0x3d) & 1;
    if (uVar1 < 4) {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          FUN_100425f94();
        }
        else {
          FUN_100426044();
        }
      }
      else if (uVar1 == 2) {
        FUN_100426104();
      }
      else {
        FUN_1004261c4();
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 4) {
        FUN_100426278();
      }
      else {
        FUN_100426344();
      }
    }
    else if (uVar1 == 6) {
      FUN_1004263f8();
    }
    else {
      FUN_1004264ac();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),param_2,
                param_3);
  return;
}

