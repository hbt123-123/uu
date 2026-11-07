// rea decompile_all
// name: FUN_10058ed7c
// address: 0x10058ed7c
// body: available
// range: 0x10058ed7c-0x10058edfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010058edc8) */

void FUN_10058ed7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  local_40 = param_1[8];
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  FUN_1005a1080(&local_80,*unaff_x20,unaff_x20[1],unaff_x20[2],param_4);
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = local_40;
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}

