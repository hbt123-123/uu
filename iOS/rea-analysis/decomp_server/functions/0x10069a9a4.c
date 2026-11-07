// rea decompile_all
// name: FUN_10069a9a4
// address: 0x10069a9a4
// body: available
// range: 0x10069a9a4-0x10069ab83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069a9a4(int *param_1,char *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_var;
  int *piVar9;
  uint uVar10;
  int iVar11;
  void *local_130 [2];
  char local_119;
  undefined **local_118 [8];
  long *local_d8;
  stat sStack_d0;
  undefined8 uVar8;
  
  pcVar4 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar4 = param_2;
  }
  iVar7 = _stat(pcVar4,&sStack_d0);
  uVar8 = CONCAT44(extraout_var,iVar7);
  if (iVar7 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      FUN_10069f164();
      *(undefined8 *)(param_3 + 2) = uVar8;
    }
    uVar5 = sStack_d0.st_mode - 0x1000 >> 0xc;
    uVar1 = sStack_d0.st_mode & 0xfff;
    uVar10 = uVar1;
    iVar7 = 8;
    if (uVar5 != 0xb) {
      uVar10 = 0xffff;
      iVar7 = 10;
    }
    uVar2 = uVar1;
    iVar11 = 2;
    if (uVar5 != 7) {
      uVar2 = uVar10;
      iVar11 = iVar7;
    }
    uVar10 = uVar1;
    iVar7 = 5;
    if (uVar5 != 5) {
      uVar10 = uVar2;
      iVar7 = iVar11;
    }
    iVar11 = 3;
    uVar2 = uVar1;
    if (uVar5 != 3) {
      iVar11 = 10;
      uVar2 = 0xffff;
    }
    uVar3 = uVar1;
    iVar6 = 6;
    if (uVar5 != 1) {
      uVar3 = uVar2;
      iVar6 = iVar11;
    }
    iVar11 = 7;
    if (uVar5 != 0) {
      uVar1 = uVar3;
      iVar11 = iVar6;
    }
    if (uVar5 < 5) {
      iVar7 = iVar11;
      uVar10 = uVar1;
    }
  }
  else {
    if (param_3 != (int *)0x0) {
      piVar9 = ___error();
      iVar7 = *piVar9;
      FUN_10069f164();
      *param_3 = iVar7;
      *(int **)(param_3 + 2) = piVar9;
    }
    piVar9 = ___error();
    FUN_10069ab84();
    iVar7 = (int)piVar9;
    uVar10 = 0;
    if (iVar7 == 0) {
      uVar10 = 0xffff;
    }
    if ((((ulong)piVar9 & 1) == 0) && (param_3 == (int *)0x0)) {
      FUN_1006928dc(local_130,"mars_boost::filesystem::status");
      piVar9 = ___error();
      iVar7 = *piVar9;
      FUN_10069f164();
      FUN_10069b5dc(local_118,local_130,param_2,iVar7,piVar9);
      FUN_1006924cc(local_118);
      local_118[0] = &PTR_FUN_1009e6910;
      if (local_d8 != (long *)0x0) {
        LOAcquire();
        iVar7 = (int)local_d8[1];
        *(int *)(local_d8 + 1) = iVar7 + -1;
        LORelease();
        if (iVar7 == 1) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          LOAcquire();
          iVar7 = *(int *)((long)local_d8 + 0xc);
          *(int *)((long)local_d8 + 0xc) = iVar7 + -1;
          LORelease();
          if (iVar7 == 1) {
            (**(code **)(*local_d8 + 0x18))(local_d8);
          }
        }
      }
      FUN_10069b978(local_118);
      if (local_119 < '\0') {
        operator_delete(local_130[0]);
      }
      iVar7 = 0;
      uVar10 = 0xffff;
    }
  }
  *param_1 = iVar7;
  param_1[1] = uVar10;
  return;
}

