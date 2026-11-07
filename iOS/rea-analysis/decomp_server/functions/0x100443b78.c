// rea decompile_all
// name: FUN_100443b78
// address: 0x100443b78
// body: available
// range: 0x100443b78-0x100443be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100443b78(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  if ((unaff_x20[2] & 0x3000000000000000) == 0x2000000000000000) {
    uVar1 = *unaff_x20;
    FUN_10020376c(uVar1,unaff_x20[1],unaff_x20[2],FUN_100008184);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

