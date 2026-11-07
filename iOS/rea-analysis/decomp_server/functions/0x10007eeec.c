// rea decompile_all
// name: FUN_10007eeec
// address: 0x10007eeec
// body: available
// range: 0x10007eeec-0x10007ef47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007eeec(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  local_40[0] = param_1;
  local_38 = param_2;
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
    (**(code **)(lVar1 + 0x18))(local_40);
  }
  (*pcVar2)();
  return;
}

