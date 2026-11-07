// rea decompile_all
// name: FUN_10065f594
// address: 0x10065f594
// body: available
// range: 0x10065f594-0x10065f637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065f594(undefined8 *param_1,long *param_2)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
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
  
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = *(undefined1 *)(param_1 + 4);
  local_48 = *param_2;
  lStack_40 = param_2[1];
  local_38 = (char)param_2[2];
  local_30 = param_2[3];
  local_28 = *(byte *)(param_2 + 4);
  if (local_38 == '\0') {
    if (local_48 == 0 && lStack_40 == 0) goto LAB_10065f5e0;
  }
  else if ((local_38 != '\x01') && (*(long *)(local_30 + 0x10) == 0)) goto LAB_10065f5e0;
  local_28 = local_28 ^ 1;
LAB_10065f5e0:
  FUN_1006430ec(&local_98,&local_70,&local_48);
  FUN_1006433f0(&local_70);
  param_1[1] = uStack_90;
  *param_1 = local_98;
  param_1[3] = uStack_80;
  param_1[2] = local_88;
  *(undefined1 *)(param_1 + 4) = local_78;
  return;
}

