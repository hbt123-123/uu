// rea decompile_all
// name: FUN_100416dc0
// address: 0x100416dc0
// body: available
// range: 0x100416dc0-0x100416e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100416dc0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if ((*(ulong *)(unaff_x20 + 0x30) >> 0x3d & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    FUN_10012ac6c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

