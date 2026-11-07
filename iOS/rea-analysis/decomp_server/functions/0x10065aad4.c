// rea decompile_all
// name: FUN_10065aad4
// address: 0x10065aad4
// body: available
// range: 0x10065aad4-0x10065ab57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065aad4(undefined8 *param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  long lStack_40;
  char local_38;
  long local_30;
  byte local_28;
  
  local_48 = *unaff_x20;
  lStack_40 = unaff_x20[1];
  local_38 = (char)unaff_x20[2];
  local_30 = unaff_x20[3];
  local_28 = *(byte *)(unaff_x20 + 4);
  if (local_38 == '\0') {
    if (local_48 == 0 && lStack_40 == 0) goto LAB_10065ab10;
  }
  else if ((local_38 != '\x01') && (*(long *)(local_30 + 0x10) == 0)) goto LAB_10065ab10;
  local_28 = local_28 ^ 1;
LAB_10065ab10:
  FUN_1006430ec(&local_70,param_2,&local_48);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  *(undefined1 *)(param_1 + 4) = local_50;
  return;
}

