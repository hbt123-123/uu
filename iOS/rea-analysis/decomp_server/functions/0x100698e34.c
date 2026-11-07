// rea decompile_all
// name: FUN_100698e34
// address: 0x100698e34
// body: available
// range: 0x100698e34-0x100698f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100698e34(ulong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  int iVar1;
  void **ppvVar2;
  void *local_90 [2];
  char local_79;
  undefined **local_78 [8];
  long *local_38;
  
  ppvVar2 = local_90;
  iVar1 = (int)param_1;
  if (iVar1 == 0) {
    if (param_4 == (int *)0x0) {
      return;
    }
    *param_4 = 0;
    FUN_10069f164();
  }
  else {
    if (param_4 == (int *)0x0) {
      FUN_1006928dc(local_90,param_5);
      FUN_10069f164();
      FUN_10069ba2c(local_78,local_90,param_2,param_3,param_1 & 0xffffffff,ppvVar2);
      FUN_1006924cc(local_78);
      local_78[0] = &PTR_FUN_1009e6910;
      if (local_38 != (long *)0x0) {
        LOAcquire();
        iVar1 = (int)local_38[1];
        *(int *)(local_38 + 1) = iVar1 + -1;
        LORelease();
        if (iVar1 == 1) {
          (**(code **)(*local_38 + 0x10))(local_38);
          LOAcquire();
          iVar1 = *(int *)((long)local_38 + 0xc);
          *(int *)((long)local_38 + 0xc) = iVar1 + -1;
          LORelease();
          if (iVar1 == 1) {
            (**(code **)(*local_38 + 0x18))(local_38);
          }
        }
      }
      FUN_10069b978(local_78);
      if (-1 < local_79) {
        return;
      }
      operator_delete(local_90[0]);
      return;
    }
    FUN_10069f164();
    *param_4 = iVar1;
  }
  *(ulong *)(param_4 + 2) = param_1;
  return;
}

