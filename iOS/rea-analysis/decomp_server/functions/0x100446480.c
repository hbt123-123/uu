// rea decompile_all
// name: FUN_100446480
// address: 0x100446480
// body: available
// range: 0x100446480-0x100446543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100446480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (((*(byte *)(unaff_x20 + 0x34) >> 1 != 0 || *(ulong *)(unaff_x20 + 0x28) >> 0x21 != 0) ||
      (*(ulong *)(unaff_x20 + 0x18) & 0x3000000000000000) != 0x3000000000000000) ||
      (*(ulong *)(unaff_x20 + 0x20) & 0xfffffffe00000000) != 0x7ffffffe00000000) {
    bVar1 = *(byte *)(unaff_x20 + 0x34) >> 6;
    if (bVar1 == 0) {
      FUN_100446544();
    }
    else if (bVar1 == 1) {
      FUN_100446620();
    }
    else {
      FUN_1004466fc();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),param_2,
                param_3);
  return;
}

