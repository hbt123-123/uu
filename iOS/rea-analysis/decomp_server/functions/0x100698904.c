// rea decompile_all
// name: FUN_100698904
// address: 0x100698904
// body: available
// range: 0x100698904-0x100698b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100698904(uint *param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 extraout_var;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *local_130 [2];
  char local_119;
  undefined **local_118 [8];
  long *local_d8;
  stat sStack_d0;
  undefined8 uVar4;
  
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar1 = param_2;
  }
  iVar3 = _lstat(pcVar1,&sStack_d0);
  uVar4 = CONCAT44(extraout_var,iVar3);
  if (iVar3 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      FUN_10069f164();
      *(undefined8 *)(param_3 + 2) = uVar4;
    }
    uVar6 = sStack_d0.st_mode - 0x1000 >> 0xc;
    uVar9 = (uint)sStack_d0.st_mode;
    if (uVar6 < 5) {
      if (uVar6 == 0) {
        uVar7 = 7;
        uVar6 = sStack_d0.st_mode & 0xfff;
        goto LAB_100698aec;
      }
      uVar10 = uVar9 & 0xfff;
      uVar7 = 6;
      uVar8 = 3;
      if (uVar6 != 3) {
        uVar10 = 0xffff;
        uVar8 = 10;
      }
      bVar2 = uVar6 == 1;
    }
    else {
      uVar10 = uVar9 & 0xfff;
      if (uVar6 < 9) {
        uVar7 = 5;
        uVar8 = 2;
        if (uVar6 != 7) {
          uVar8 = 10;
          uVar10 = 0xffff;
        }
        bVar2 = uVar6 == 5;
      }
      else {
        uVar7 = 4;
        uVar8 = 8;
        if (uVar6 != 0xb) {
          uVar10 = 0xffff;
          uVar8 = 10;
        }
        bVar2 = uVar6 == 9;
      }
    }
    uVar6 = uVar9 & 0xfff;
    if (!bVar2) {
      uVar7 = uVar8;
      uVar6 = uVar10;
    }
  }
  else {
    if (param_3 != (int *)0x0) {
      piVar5 = ___error();
      iVar3 = *piVar5;
      FUN_10069f164();
      *param_3 = iVar3;
      *(int **)(param_3 + 2) = piVar5;
    }
    piVar5 = ___error();
    if (*piVar5 == 2) {
      uVar7 = 1;
      uVar6 = 0;
    }
    else {
      piVar5 = ___error();
      bVar2 = *piVar5 == 0x14;
      uVar6 = 0;
      if (!bVar2) {
        uVar6 = 0xffff;
      }
      uVar7 = (uint)bVar2;
      if ((!bVar2) && (param_3 == (int *)0x0)) {
        FUN_1006928dc(local_130,"mars_boost::filesystem::status");
        piVar5 = ___error();
        iVar3 = *piVar5;
        FUN_10069f164();
        FUN_10069b5dc(local_118,local_130,param_2,iVar3,piVar5);
        FUN_1006924cc(local_118);
        local_118[0] = &PTR_FUN_1009e6910;
        if (local_d8 != (long *)0x0) {
          LOAcquire();
          iVar3 = (int)local_d8[1];
          *(int *)(local_d8 + 1) = iVar3 + -1;
          LORelease();
          if (iVar3 == 1) {
            (**(code **)(*local_d8 + 0x10))(local_d8);
            LOAcquire();
            iVar3 = *(int *)((long)local_d8 + 0xc);
            *(int *)((long)local_d8 + 0xc) = iVar3 + -1;
            LORelease();
            if (iVar3 == 1) {
              (**(code **)(*local_d8 + 0x18))(local_d8);
            }
          }
        }
        FUN_10069b978(local_118);
        if (local_119 < '\0') {
          operator_delete(local_130[0]);
        }
        uVar7 = 0;
        uVar6 = 0xffff;
      }
    }
  }
LAB_100698aec:
  *param_1 = uVar7;
  param_1[1] = uVar6;
  return;
}

