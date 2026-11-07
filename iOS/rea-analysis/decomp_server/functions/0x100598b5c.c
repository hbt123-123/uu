// rea decompile_all
// name: FUN_100598b5c
// address: 0x100598b5c
// body: available
// range: 0x100598b5c-0x100598c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100598be0) */

void FUN_100598b5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&local_90);
  uStack_b8 = uStack_68;
  local_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = local_60;
  local_a0 = local_50;
  uStack_d8 = uStack_88;
  local_e0 = local_90;
  uStack_c8 = uStack_78;
  uStack_d0 = local_80;
  (*in_x3)(uVar4,&local_e0,uVar1,uVar3,uVar2,uVar4);
  FUN_100573624(&local_e0,uVar1,uVar3);
  uStack_58 = uStack_a8;
  local_60 = uStack_b0;
  local_50 = local_a0;
  uStack_78 = uStack_c8;
  local_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = local_c0;
  uStack_88 = uStack_d8;
  local_90 = local_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}

