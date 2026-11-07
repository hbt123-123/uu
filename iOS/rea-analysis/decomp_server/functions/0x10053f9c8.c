// rea decompile_all
// name: FUN_10053f9c8
// address: 0x10053f9c8
// body: available
// range: 0x10053f9c8-0x10053fa6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053fa38) */

void FUN_10053f9c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  local_50 = param_1[8];
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  (*param_4)(unaff_x20[3],&local_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_100573624(&local_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = local_50;
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}

