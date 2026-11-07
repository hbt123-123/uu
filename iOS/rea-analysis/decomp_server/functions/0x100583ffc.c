// rea decompile_all
// name: FUN_100583ffc
// address: 0x100583ffc
// body: available
// range: 0x100583ffc-0x100584027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100583ffc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x50) == '\0') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100584028;
  return auVar2;
}

