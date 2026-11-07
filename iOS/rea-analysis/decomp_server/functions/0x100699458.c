// rea decompile_all
// name: FUN_100699458
// address: 0x100699458
// body: available
// range: 0x100699458-0x1006995b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100699458(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  int *piVar3;
  void **ppvVar4;
  void *local_a0 [2];
  char local_89;
  undefined **local_88 [8];
  long *local_48;
  undefined4 local_40 [2];
  int *local_38;
  
  ppvVar4 = local_a0;
  piVar3 = *(int **)param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    piVar3 = param_1;
  }
  iVar2 = _mkdir((char *)piVar3,0x1ff);
  piVar3 = (int *)CONCAT44(extraout_var,iVar2);
  if (iVar2 == 0) {
LAB_1006994cc:
    if (param_2 == (int *)0x0) goto LAB_1006994ec;
    *param_2 = 0;
    FUN_10069f164();
  }
  else {
    piVar3 = ___error();
    iVar1 = *piVar3;
    local_40[0] = 0;
    FUN_10069f164();
    local_38 = piVar3;
    if ((iVar1 == 0x11) &&
       (piVar3 = param_1, FUN_10069a9a4(local_88,param_1,local_40), (int)local_88[0] == 3))
    goto LAB_1006994cc;
    if (param_2 == (int *)0x0) {
      FUN_1006928dc(local_a0,"mars_boost::filesystem::create_directory");
      FUN_10069f164();
      FUN_10069b5dc(local_88,local_a0,param_1,iVar1,ppvVar4);
      FUN_1006924cc(local_88);
      local_88[0] = &PTR_FUN_1009e6910;
      if (local_48 != (long *)0x0) {
        LOAcquire();
        iVar1 = (int)local_48[1];
        *(int *)(local_48 + 1) = iVar1 + -1;
        LORelease();
        if (iVar1 == 1) {
          (**(code **)(*local_48 + 0x10))(local_48);
          LOAcquire();
          iVar1 = *(int *)((long)local_48 + 0xc);
          *(int *)((long)local_48 + 0xc) = iVar1 + -1;
          LORelease();
          if (iVar1 == 1) {
            (**(code **)(*local_48 + 0x18))(local_48);
          }
        }
      }
      FUN_10069b978(local_88);
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
      }
      goto LAB_1006994ec;
    }
    FUN_10069f164();
    *param_2 = iVar1;
  }
  *(int **)(param_2 + 2) = piVar3;
LAB_1006994ec:
  return iVar2 == 0;
}

