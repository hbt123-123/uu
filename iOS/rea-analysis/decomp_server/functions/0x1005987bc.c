// rea decompile_all
// name: FUN_1005987bc
// address: 0x1005987bc
// body: available
// range: 0x1005987bc-0x1005988cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100598838) */

void FUN_1005987bc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
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
  
  __ss6HasherV5_seedABSi_tcfC(&local_90,0);
  uStack_b8 = uStack_68;
  local_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = local_60;
  local_a0 = local_50;
  uStack_d8 = uStack_88;
  local_e0 = local_90;
  uStack_c8 = uStack_78;
  uStack_d0 = local_80;
  (*param_5)(param_4,&local_e0,param_1,param_2,param_3,param_4);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_1005988b0;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_100598840;
  }
  else {
    if (uVar2 != 2) goto LAB_100598840;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_1005988b0:
    if (lVar3 == lVar4) goto LAB_100598840;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_e0,param_1,param_2);
LAB_100598840:
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

