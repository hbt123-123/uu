// rea decompile_all
// name: FUN_100697f88
// address: 0x100697f88
// body: available
// range: 0x100697f88-0x10069837b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069834c) */
/* WARNING: Removing unreachable block (ram,0x00010069831c) */
/* WARNING: Removing unreachable block (ram,0x00010069827c) */
/* WARNING: Removing unreachable block (ram,0x00010069818c) */
/* WARNING: Removing unreachable block (ram,0x000100697ffc) */
/* WARNING: Removing unreachable block (ram,0x000100698144) */
/* WARNING: Removing unreachable block (ram,0x000100698204) */
/* WARNING: Removing unreachable block (ram,0x0001006982d4) */
/* WARNING: Removing unreachable block (ram,0x0001006980f8) */
/* WARNING: Removing unreachable block (ram,0x00010069835c) */

void FUN_100697f88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  void *local_148 [2];
  char local_131;
  void *local_130 [2];
  char local_119;
  void *local_118 [2];
  char local_101;
  void *local_100;
  void *pvStack_f8;
  void *local_f0;
  void *local_e0;
  void *pvStack_d8;
  void *local_d0;
  void *local_c8;
  ulong local_c0;
  byte local_b1;
  void *local_b0;
  void *pvStack_a8;
  undefined7 local_a0;
  char cStack_99;
  void *local_98;
  void *pvStack_90;
  undefined7 local_88;
  byte bStack_81;
  void *local_80;
  void *pvStack_78;
  void *local_70;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  
  puVar3 = param_3;
  FUN_10069b58c();
  if ((int)puVar3 == 0) {
    FUN_100699694(&local_60,0);
    FUN_100697f88(&local_80,param_3,&local_60);
  }
  else if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100384eb8(&local_80,*param_3,param_3[1]);
  }
  else {
    pvStack_78 = (void *)param_3[1];
    local_80 = (void *)*param_3;
    local_70 = (void *)param_3[2];
  }
  FUN_10069c9a0(&local_98,param_2);
  FUN_10069c9a0(&local_b0,&local_80);
  FUN_10069ca74(&local_c8,param_2);
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
    param_1[1] = pvStack_78;
    *param_1 = local_80;
    pvVar6 = local_70;
  }
  else {
    pvVar6 = pvStack_90;
    if (-1 < (char)bStack_81) {
      pvVar6 = (void *)(ulong)bStack_81;
    }
    if (-1 < (char)local_b1) {
      local_c0 = (ulong)local_b1;
    }
    if (pvVar6 != (void *)0x0) {
      if (local_c0 == 0) {
        FUN_10069ca74(local_118,&local_80);
        pvStack_58 = pvStack_90;
        local_60 = local_98;
        local_50 = (void *)CONCAT17(bStack_81,local_88);
        ppvVar4 = &local_60;
        FUN_10069bf10(ppvVar4,local_118);
        if (*(char *)((long)ppvVar4 + 0x17) < '\0') {
          FUN_100384eb8(&local_100,*ppvVar4,ppvVar4[1]);
        }
        else {
          pvStack_f8 = ppvVar4[1];
          local_100 = *ppvVar4;
          local_f0 = ppvVar4[2];
        }
        FUN_10069cc18(local_130,&local_80);
        if ((long)local_f0 < 0) {
          FUN_100384eb8(&local_60,local_100,pvStack_f8);
        }
        else {
          pvStack_58 = pvStack_f8;
          local_60 = local_100;
          local_50 = local_f0;
        }
        ppvVar4 = &local_60;
        FUN_10069bf10(ppvVar4,local_130);
        if (*(char *)((long)ppvVar4 + 0x17) < '\0') {
          FUN_100384eb8(&local_e0,*ppvVar4,ppvVar4[1]);
        }
        else {
          pvStack_d8 = ppvVar4[1];
          local_e0 = *ppvVar4;
          local_d0 = ppvVar4[2];
        }
        FUN_10069cc18(local_148,param_2);
        if ((long)local_d0 < 0) {
          FUN_100384eb8(&local_60,local_e0,pvStack_d8);
        }
        else {
          pvStack_58 = pvStack_d8;
          local_60 = local_e0;
          local_50 = local_d0;
        }
        ppvVar4 = &local_60;
        FUN_10069bf10(ppvVar4,local_148);
        if (*(char *)((long)ppvVar4 + 0x17) < '\0') {
          FUN_100384eb8(param_1,*ppvVar4,ppvVar4[1]);
        }
        else {
          pvVar7 = ppvVar4[1];
          pvVar6 = *ppvVar4;
          param_1[2] = ppvVar4[2];
          param_1[1] = pvVar7;
          *param_1 = pvVar6;
        }
        if (local_131 < '\0') {
          operator_delete(local_148[0]);
        }
        if ((long)local_d0 < 0) {
          operator_delete(local_e0);
        }
        if (local_119 < '\0') {
          operator_delete(local_130[0]);
        }
        if ((long)local_f0 < 0) {
          operator_delete(local_100);
        }
        if (local_101 < '\0') {
          operator_delete(local_118[0]);
        }
        goto LAB_100698324;
      }
      goto LAB_100698080;
    }
    if (local_c0 == 0) {
      pvStack_58 = pvStack_78;
      local_60 = local_80;
      local_50 = local_70;
LAB_1006982e0:
      ppvVar4 = &local_60;
      FUN_10069bf10(ppvVar4,param_2);
      if (*(char *)((long)ppvVar4 + 0x17) < '\0') {
        FUN_100384eb8(param_1,*ppvVar4,ppvVar4[1]);
      }
      else {
        pvVar7 = ppvVar4[1];
        pvVar6 = *ppvVar4;
        param_1[2] = ppvVar4[2];
        param_1[1] = pvVar7;
        *param_1 = pvVar6;
      }
      goto LAB_100698324;
    }
    if (cStack_99 < '\0') {
      if (pvStack_a8 != (void *)0x0) {
        FUN_100384eb8(&local_60,local_b0,pvStack_a8);
        goto LAB_1006982e0;
      }
    }
    else if (cStack_99 != '\0') {
      pvStack_58 = pvStack_a8;
      local_60 = local_b0;
      local_50 = (void *)CONCAT17(cStack_99,local_a0);
      goto LAB_1006982e0;
    }
LAB_100698080:
    if ((char)bVar2 < '\0') {
      FUN_100384eb8(param_1,*param_2,param_2[1]);
      goto LAB_100698324;
    }
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    pvVar6 = (void *)param_2[2];
  }
  param_1[2] = pvVar6;
LAB_100698324:
  if ((char)local_b1 < '\0') {
    operator_delete(local_c8);
  }
  if (cStack_99 < '\0') {
    operator_delete(local_b0);
  }
  return;
}

