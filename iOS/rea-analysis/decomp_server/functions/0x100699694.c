// rea decompile_all
// name: FUN_100699694
// address: 0x100699694
// body: available
// range: 0x100699694-0x100699837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069975c to 0x1007ddfd8 /usr/lib/libc++.1.dylib::operator.delete[] (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100699694(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  void **ppvVar5;
  ulong uVar6;
  void *local_a0 [2];
  char local_89;
  undefined **local_88 [8];
  long *local_48;
  
  ppvVar5 = local_a0;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  pcVar2 = operator_new__(0x80);
  pcVar3 = _getcwd(pcVar2,0x80);
  if (pcVar3 == (char *)0x0) {
    uVar6 = 0x80;
    do {
      piVar4 = ___error();
      if (*piVar4 != 0x22) {
        piVar4 = ___error();
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          if (param_2 == (int *)0x0) {
            FUN_1006928dc(local_a0,"mars_boost::filesystem::current_path");
            FUN_10069f164();
            FUN_10069bad8(local_88,local_a0,iVar1,ppvVar5);
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
          }
          else {
            FUN_10069f164();
            *param_2 = iVar1;
            *(int **)(param_2 + 2) = piVar4;
          }
          operator_delete__(pcVar2);
          return;
        }
      }
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
        FUN_10069f164();
        *(int **)(param_2 + 2) = piVar4;
      }
      operator_delete__(pcVar2);
      uVar6 = uVar6 << 1;
      pcVar2 = operator_new__(uVar6);
      pcVar3 = _getcwd(pcVar2,uVar6);
    } while (pcVar3 == (char *)0x0);
  }
  std::string::assign(param_1);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    FUN_10069f164();
    *(char **)(param_2 + 2) = param_1;
  }
  operator_delete__(pcVar2);
  return;
}

