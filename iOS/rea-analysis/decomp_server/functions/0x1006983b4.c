// rea decompile_all
// name: FUN_1006983b4
// address: 0x1006983b4
// body: available
// range: 0x1006983b4-0x1006988cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006988a0) */
/* WARNING: Removing unreachable block (ram,0x00010069887c) */
/* WARNING: Removing unreachable block (ram,0x000100698544) */
/* WARNING: Removing unreachable block (ram,0x000100698700) */
/* WARNING: Removing unreachable block (ram,0x000100698890) */
/* WARNING: Removing unreachable block (ram,0x0001006988b0) */

void FUN_1006983b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,string *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  string *psVar6;
  string **ppsVar7;
  string **ppsVar8;
  int *piVar9;
  string *local_150;
  undefined8 uStack_148;
  ulong local_140;
  string *local_130 [2];
  char local_119;
  int local_118;
  undefined4 uStack_114;
  char local_101;
  long local_100;
  long lStack_f8;
  string *local_f0 [2];
  char local_d9;
  long local_d8;
  long lStack_d0;
  long *local_b0;
  int local_a8 [2];
  int local_a0;
  undefined4 uStack_9c;
  undefined8 *puStack_98;
  string *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar5 = param_2;
  FUN_10069b58c();
  if ((int)puVar5 == 0) {
    FUN_100697f88(&local_60,param_2,param_3);
  }
  else if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100384eb8(&local_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = param_2[2];
  }
  puVar5 = &local_60;
  FUN_10069c90c(local_78);
  local_90 = (string *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  FUN_10069f164();
  psVar6 = (string *)&local_60;
  puStack_98 = puVar5;
  FUN_10069a9a4(local_a8,psVar6,&local_a0);
  if (local_a8[0] != 1) {
    if (local_a0 == 0) {
LAB_100698530:
      local_90 = (string *)((ulong)local_90 & 0xffffffffffffff00);
      local_80 = local_80 & 0xffffffffffffff;
      FUN_10069c3b0(local_f0,&local_60);
      do {
        psVar6 = (string *)&local_60;
        FUN_10069c5a0(&local_118);
        bVar2 = local_d8 != local_100;
        bVar3 = lStack_d0 != lStack_f8;
        if (local_101 < '\0') {
          psVar6 = (string *)CONCAT44(uStack_114,local_118);
          operator_delete(psVar6);
        }
        if (!bVar2 && !bVar3) {
          bVar1 = true;
          bVar2 = bVar2 || bVar3;
          goto LAB_10069878c;
        }
        FUN_10069cfb0();
        ppsVar7 = local_f0;
        FUN_10069c180(ppsVar7,psVar6);
        if ((int)ppsVar7 != 0) {
          FUN_10069d0b4();
          ppsVar8 = local_f0;
          FUN_10069c180(ppsVar8,ppsVar7);
          if ((int)ppsVar8 == 0) {
            ppsVar7 = &local_90;
            FUN_10069c180(ppsVar7,local_78);
            if ((int)ppsVar7 != 0) {
              FUN_10069c604(&local_90);
            }
          }
          else {
            FUN_10069bf10(&local_90,local_f0);
            psVar6 = (string *)&local_90;
            FUN_100698904(&local_118,psVar6,param_4);
            if (param_4 == (string *)0x0) {
              if (local_118 == 4) {
                FUN_100698b14(local_130,&local_90,0);
                goto LAB_100698674;
              }
            }
            else {
              if (*(int *)param_4 != 0) {
                bVar1 = false;
                *param_1 = 0;
                param_1[1] = 0;
                param_1[2] = 0;
                bVar2 = false;
                goto LAB_10069878c;
              }
              if (local_118 == 4) goto LAB_10069863c;
            }
          }
        }
        FUN_10069d89c(local_f0);
      } while( true );
    }
    if (param_4 == (string *)0x0) {
      FUN_1006928dc(&local_118,"mars_boost::filesystem::canonical");
      FUN_10069b5dc(local_f0,&local_118,&local_60,CONCAT44(uStack_9c,local_a0),puStack_98);
      FUN_1006924cc(local_f0);
      local_f0[0] = (string *)&PTR_FUN_1009e6910;
      if (local_b0 != (long *)0x0) {
        LOAcquire();
        iVar4 = (int)local_b0[1];
        *(int *)(local_b0 + 1) = iVar4 + -1;
        LORelease();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          LOAcquire();
          iVar4 = *(int *)((long)local_b0 + 0xc);
          *(int *)((long)local_b0 + 0xc) = iVar4 + -1;
          LORelease();
          if (iVar4 == 1) {
            (**(code **)(*local_b0 + 0x18))(local_b0);
          }
        }
      }
      FUN_10069b978(local_f0);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT44(uStack_114,local_118));
      }
    }
    *(undefined8 **)(param_4 + 8) = puStack_98;
    *(ulong *)param_4 = CONCAT44(uStack_9c,local_a0);
    goto LAB_100698860;
  }
  if (param_4 == (string *)0x0) {
    piVar9 = &local_118;
    FUN_1006928dc(piVar9,"mars_boost::filesystem::canonical");
    FUN_10069f198();
    FUN_10069b5dc(local_f0,&local_118,&local_60,2,piVar9);
    FUN_1006924cc(local_f0);
    local_f0[0] = (string *)&PTR_FUN_1009e6910;
    if (local_b0 != (long *)0x0) {
      LOAcquire();
      iVar4 = (int)local_b0[1];
      *(int *)(local_b0 + 1) = iVar4 + -1;
      LORelease();
      if (iVar4 == 1) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        LOAcquire();
        iVar4 = *(int *)((long)local_b0 + 0xc);
        *(int *)((long)local_b0 + 0xc) = iVar4 + -1;
        LORelease();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 0x18))(local_b0);
        }
      }
    }
    FUN_10069b978(local_f0);
    if (local_101 < '\0') {
      operator_delete((void *)CONCAT44(uStack_114,local_118));
    }
    goto LAB_100698860;
  }
  FUN_10069f198();
  *(undefined4 *)param_4 = 2;
LAB_10069846c:
  *(string **)(param_4 + 8) = psVar6;
LAB_100698860:
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[2] = local_80;
  return;
LAB_10069863c:
  psVar6 = (string *)&local_90;
  FUN_100698b14(local_130,psVar6,param_4);
  if (*(int *)param_4 == 0) {
LAB_100698674:
    FUN_10069c604(&local_90);
    iVar4 = (int)local_130;
    FUN_10069b58c();
    if (iVar4 == 0) {
      uStack_148 = uStack_88;
      local_150 = local_90;
      local_140 = local_80;
      ppsVar7 = local_130;
      do {
        FUN_10069bf10(&local_150,ppsVar7);
        FUN_10069d89c(local_f0);
        FUN_10069c5a0(&local_118,&local_60);
        bVar2 = local_d8 != local_100;
        bVar3 = lStack_d0 != lStack_f8;
        if (local_101 < '\0') {
          operator_delete((void *)CONCAT44(uStack_114,local_118));
        }
        ppsVar7 = local_f0;
      } while (bVar2 || bVar3);
      psVar6 = (string *)&local_60;
      std::string::operator=(param_4,psVar6);
      if ((long)local_140 < 0) {
        psVar6 = local_150;
        operator_delete(local_150);
      }
    }
    else {
      while( true ) {
        FUN_10069d89c(local_f0);
        FUN_10069c5a0(&local_118,&local_60);
        bVar2 = local_d8 == local_100;
        bVar3 = lStack_d0 == lStack_f8;
        if (local_101 < '\0') {
          operator_delete((void *)CONCAT44(uStack_114,local_118));
        }
        if (bVar2 && bVar3) break;
        FUN_10069bf10(local_130,local_f0);
      }
      psVar6 = (string *)&local_60;
      std::string::operator=(param_4,psVar6);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  bVar2 = bVar1;
  if (local_119 < '\0') {
    psVar6 = local_130[0];
    operator_delete(local_130[0]);
  }
LAB_10069878c:
  if (local_d9 < '\0') {
    psVar6 = local_f0[0];
    operator_delete(local_f0[0]);
  }
  if (!bVar1) {
    return;
  }
  if (!bVar2) goto LAB_100698850;
  goto LAB_100698530;
LAB_100698850:
  if (param_4 == (string *)0x0) goto LAB_100698860;
  *(undefined4 *)param_4 = 0;
  FUN_10069f164();
  goto LAB_10069846c;
}

