// rea decompile_all
// name: FUN_1006a3d1c
// address: 0x1006a3d1c
// body: available
// range: 0x1006a3d1c-0x1006a4013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a4010 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a3d1c(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint local_1090;
  undefined4 uStack_108c;
  char local_1079;
  void *local_1078 [2];
  char local_1061;
  timeval local_1060;
  uint local_1050 [2];
  void *local_1048 [2];
  char local_1031;
  undefined1 auStack_848 [2048];
  long local_48;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = (long)*(char *)(param_1 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 != 0) {
    _gettimeofday(&local_1060,(void *)0x0);
    local_1060.tv_sec = local_1060.tv_sec - param_2 * 0x15180;
    _bzero(auStack_848,0x800);
    FUN_1006928dc(local_1048,"xlog");
    FUN_1006a294c(param_1,&local_1060,param_1 + 8,param_3,local_1048,auStack_848,0x800);
    if (local_1031 < '\0') {
      operator_delete(local_1048[0]);
    }
    lVar3 = (long)*(char *)(param_1 + 0x6f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(param_1 + 0x60);
    }
    if (lVar3 == 0) {
      FUN_1006928dc(local_1048,auStack_848);
      FUN_1006a21b0(param_4,local_1048);
    }
    else {
      _bzero(local_1048,0x800);
      FUN_1006928dc(local_1078,"xlog");
      FUN_1006a294c(param_1,&local_1060,param_1 + 0x58,param_3,local_1078,local_1048,0x800);
      if (local_1061 < '\0') {
        operator_delete(local_1078[0]);
      }
      FUN_1006928dc(local_1078,auStack_848);
      FUN_10069a9a4(&local_1090,local_1078,0);
      uVar1 = local_1090;
      if (local_1061 < '\0') {
        operator_delete(local_1078[0]);
      }
      if (1 < uVar1) {
        FUN_1006928dc(local_1078,auStack_848);
        FUN_1006a21b0(param_4,local_1078);
        if (local_1061 < '\0') {
          operator_delete(local_1078[0]);
        }
      }
      FUN_1006928dc(local_1078,local_1048);
      FUN_10069a9a4(&local_1090,local_1078,0);
      uVar1 = local_1090;
      if (local_1061 < '\0') {
        operator_delete(local_1078[0]);
      }
      if (1 < uVar1) {
        FUN_1006928dc(local_1078,local_1048);
        FUN_1006a21b0(param_4,local_1078);
        if (local_1061 < '\0') {
          operator_delete(local_1078[0]);
        }
      }
      FUN_1006928dc(local_1078,auStack_848);
      FUN_10069a9a4(&local_1090,local_1078,0);
      if (local_1090 < 2) {
        FUN_1006928dc(&local_1090,local_1048);
        FUN_10069a9a4(local_1050,&local_1090,0);
        bVar2 = local_1050[0] < 2;
        if (local_1079 < '\0') {
          operator_delete((void *)CONCAT44(uStack_108c,local_1090));
        }
      }
      else {
        bVar2 = false;
      }
      if (local_1061 < '\0') {
        operator_delete(local_1078[0]);
      }
      if (!bVar2) goto LAB_1006a3fd4;
      FUN_1006928dc(local_1078,auStack_848);
      FUN_1006a21b0(param_4,local_1078);
      local_1048[0] = local_1078[0];
      local_1031 = local_1061;
    }
    if (local_1031 < '\0') {
      operator_delete(local_1048[0]);
    }
  }
LAB_1006a3fd4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(lVar4 != 0);
  }
  return;
}

