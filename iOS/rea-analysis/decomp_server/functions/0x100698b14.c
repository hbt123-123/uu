// rea decompile_all
// name: FUN_100698b14
// address: 0x100698b14
// body: available
// range: 0x100698b14-0x100698ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100698b14(int *param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  void *local_a0 [2];
  char local_89;
  undefined **local_88 [8];
  long *local_48;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar3 = operator_new__(0x40);
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar1 = param_2;
  }
  uVar4 = _readlink(pcVar1,pcVar3,0x40);
  if (uVar4 != 0xffffffffffffffff) {
    uVar6 = 0x40;
    do {
      if (uVar4 != uVar6) {
        FUN_10069a02c(param_1,pcVar3,pcVar3 + uVar4);
        if (param_3 == (int *)0x0) goto LAB_100698cac;
        *param_3 = 0;
        FUN_10069f164();
        goto LAB_100698bf4;
      }
      operator_delete__(pcVar3);
      uVar6 = uVar4 << 1;
      pcVar3 = operator_new__(uVar6);
      pcVar1 = *(char **)param_2;
      if (-1 < param_2[0x17]) {
        pcVar1 = param_2;
      }
      uVar4 = _readlink(pcVar1,pcVar3,uVar6);
    } while (uVar4 != 0xffffffffffffffff);
  }
  if (param_3 == (int *)0x0) {
    FUN_1006928dc(local_a0,"mars_boost::filesystem::read_symlink");
    piVar5 = ___error();
    iVar2 = *piVar5;
    FUN_10069f164();
    FUN_10069b5dc(local_88,local_a0,param_2,iVar2,piVar5);
    FUN_1006924cc(local_88);
    local_88[0] = &PTR_FUN_1009e6910;
    if (local_48 != (long *)0x0) {
      LOAcquire();
      iVar2 = (int)local_48[1];
      *(int *)(local_48 + 1) = iVar2 + -1;
      LORelease();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 0x10))(local_48);
        LOAcquire();
        iVar2 = *(int *)((long)local_48 + 0xc);
        *(int *)((long)local_48 + 0xc) = iVar2 + -1;
        LORelease();
        if (iVar2 == 1) {
          (**(code **)(*local_48 + 0x18))(local_48);
        }
      }
    }
    FUN_10069b978(local_88);
    if (local_89 < '\0') {
      operator_delete(local_a0[0]);
    }
  }
  else {
    param_1 = ___error();
    iVar2 = *param_1;
    FUN_10069f164();
    *param_3 = iVar2;
LAB_100698bf4:
    *(int **)(param_3 + 2) = param_1;
  }
LAB_100698cac:
  operator_delete__(pcVar3);
  return;
}

