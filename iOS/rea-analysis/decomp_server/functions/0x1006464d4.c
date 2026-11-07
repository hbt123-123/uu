// rea decompile_all
// name: FUN_1006464d4
// address: 0x1006464d4
// body: available
// range: 0x1006464d4-0x10064657b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006464d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_60 = *(undefined1 *)(param_3 + 2);
  uVar1 = param_3[3];
  local_40 = *(undefined1 *)(unaff_x20 + 2);
  local_38 = unaff_x20[3];
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_68 = param_3[1];
  local_70 = *param_3;
  local_58 = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  FUN_10064dab4(&local_50,&local_70);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  *(undefined1 *)(param_1 + 2) = local_40;
  param_1[3] = local_38;
  param_2[1] = uStack_68;
  *param_2 = local_70;
  *(undefined1 *)(param_2 + 2) = local_60;
  param_2[3] = local_58;
  return;
}

