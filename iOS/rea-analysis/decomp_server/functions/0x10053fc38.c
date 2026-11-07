// rea decompile_all
// name: FUN_10053fc38
// address: 0x10053fc38
// body: available
// range: 0x10053fc38-0x10053fcbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053fc8c) */

void FUN_10053fc38(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = (undefined1)unaff_x20[3];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x21);
  local_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_100599dbc(&local_b0);
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = local_70;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}

