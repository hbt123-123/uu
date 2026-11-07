// rea decompile_all
// name: FUN_10064659c
// address: 0x10064659c
// body: available
// range: 0x10064659c-0x1006465e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064659c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if ((char)unaff_x20[2] == '\0') {
    if (*unaff_x20 == 0 && unaff_x20[1] == 0) {
      uVar1 = 0;
      goto LAB_1006465bc;
    }
  }
  else if (((char)unaff_x20[2] != '\x01') && (uVar1 = 0, *(long *)(unaff_x20[3] + 0x10) == 0))
  goto LAB_1006465bc;
  uVar1 = 1;
LAB_1006465bc:
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = PTR___swiftEmptyArrayStorage_100995ea0;
  return;
}

