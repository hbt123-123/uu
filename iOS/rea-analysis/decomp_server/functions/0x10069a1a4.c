// rea decompile_all
// name: FUN_10069a1a4
// address: 0x10069a1a4
// body: available
// range: 0x10069a1a4-0x10069a55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069a3f0) */
/* WARNING: Removing unreachable block (ram,0x00010069a4d4) */
/* WARNING: Removing unreachable block (ram,0x00010069a4a0) */
/* WARNING: Removing unreachable block (ram,0x00010069a490) */
/* WARNING: Removing unreachable block (ram,0x00010069a400) */

void FUN_10069a1a4(undefined8 *param_1,void **param_2,string *param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void **ppvVar6;
  char *pcVar7;
  bool bVar8;
  void *pvVar9;
  void *pvVar10;
  void *local_100;
  void *pvStack_f8;
  void *local_f0;
  void *local_e0;
  void *pvStack_d8;
  void *local_d0;
  long local_c8;
  long lStack_c0;
  char local_b0;
  undefined7 uStack_af;
  ulong local_a8;
  byte local_99;
  long local_98;
  long lStack_90;
  int local_88 [2];
  void **local_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    ppvVar6 = &local_60;
    FUN_100384eb8(ppvVar6,*param_2,param_2[1]);
  }
  else {
    pvStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = param_2[2];
    ppvVar6 = param_2;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_88[0] = 0;
  FUN_10069f164();
  local_80 = ppvVar6;
  FUN_10069c5a0(&local_b0,param_2);
  pvVar9 = pvStack_58;
  if (-1 < (long)local_50) {
    pvVar9 = (void *)((ulong)local_50 >> 0x38);
  }
  while (pvVar9 != (void *)0x0) {
    FUN_10069a9a4(&local_e0,&local_60,local_88);
    iVar5 = (int)local_e0;
    uVar4 = (uint)((int)local_e0 == 0);
    FUN_100699888((int)local_e0 == 0,&local_60,param_3,"mars_boost::filesystem::weakly_canonical");
    if (uVar4 != 0) goto LAB_10069a3c0;
    if (iVar5 != 1) break;
    FUN_10069c604(&local_60);
    FUN_10069db04(&local_b0);
    pvVar9 = pvStack_58;
    if (-1 < (long)local_50) {
      pvVar9 = (void *)((ulong)local_50 >> 0x38);
    }
  }
  bVar8 = false;
  do {
    FUN_10069c5a0(&local_e0,param_2);
    bVar2 = local_98 == local_c8;
    bVar3 = lStack_90 == lStack_c0;
    if ((long)local_d0 < 0) {
      operator_delete(local_e0);
    }
    if (bVar2 && bVar3) {
      pvVar9 = pvStack_58;
      if (-1 < (long)local_50) {
        pvVar9 = (void *)((ulong)local_50 >> 0x38);
      }
      if (pvVar9 == (void *)0x0) {
        FUN_10069d3b4(param_1,param_2);
      }
      else {
        FUN_100699694(&local_e0,0);
        FUN_1006983b4(&local_100,&local_60,&local_e0,local_88);
        if ((long)local_d0 < 0) {
          operator_delete(local_e0);
        }
        std::string::operator=(param_3,(string *)&local_60);
        if ((long)local_f0 < 0) {
          operator_delete(local_100);
        }
        iVar5 = local_88[0];
        FUN_100699888(local_88[0],&local_60,param_3,"mars_boost::filesystem::weakly_canonical");
        if (iVar5 == 0) {
          uVar1 = local_70;
          if (-1 < (long)local_68) {
            uVar1 = local_68 >> 0x38;
          }
          if (uVar1 == 0) {
            param_1[1] = pvStack_58;
            *param_1 = local_60;
            param_1[2] = local_50;
          }
          else {
            if (bVar8) {
              pvStack_d8 = pvStack_58;
              local_e0 = local_60;
              local_d0 = local_50;
              ppvVar6 = &local_e0;
              FUN_10069bf10(ppvVar6,&local_78);
              if (*(char *)((long)ppvVar6 + 0x17) < '\0') {
                FUN_100384eb8(&local_100,*ppvVar6,ppvVar6[1]);
              }
              else {
                pvStack_f8 = ppvVar6[1];
                local_100 = *ppvVar6;
                local_f0 = ppvVar6[2];
              }
              if ((long)local_d0 < 0) {
                operator_delete(local_e0);
              }
              FUN_10069d3b4(param_1,&local_100);
              pvVar9 = local_100;
              pvVar10 = local_f0;
            }
            else {
              pvStack_d8 = pvStack_58;
              local_e0 = local_60;
              local_d0 = local_50;
              ppvVar6 = &local_e0;
              FUN_10069bf10(ppvVar6,&local_78);
              if (*(char *)((long)ppvVar6 + 0x17) < '\0') {
                FUN_100384eb8(param_1,*ppvVar6,ppvVar6[1]);
                pvVar9 = local_e0;
                pvVar10 = local_d0;
              }
              else {
                pvVar10 = ppvVar6[1];
                pvVar9 = *ppvVar6;
                param_1[2] = ppvVar6[2];
                param_1[1] = pvVar10;
                *param_1 = pvVar9;
                pvVar9 = local_e0;
                pvVar10 = local_d0;
              }
            }
            if ((long)pvVar10 < 0) {
              operator_delete(pvVar9);
            }
          }
        }
        else {
LAB_10069a3c0:
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
      }
      if ((char)local_99 < '\0') {
        operator_delete((void *)CONCAT71(uStack_af,local_b0));
      }
      return;
    }
    FUN_10069bf10(&local_78,&local_b0);
    if ((char)local_99 < '\0') {
      if ((local_a8 < 3) && (pcVar7 = (char *)CONCAT71(uStack_af,local_b0), *pcVar7 == '.')) {
        if (local_a8 != 1) goto LAB_10069a324;
        goto LAB_10069a330;
      }
    }
    else if ((local_99 < 3) && (local_b0 == '.')) {
      if (local_99 != 1) {
        pcVar7 = &local_b0;
LAB_10069a324:
        if (pcVar7[1] != '.') goto LAB_10069a334;
      }
LAB_10069a330:
      bVar8 = true;
    }
LAB_10069a334:
    FUN_10069d89c(&local_b0);
  } while( true );
}

