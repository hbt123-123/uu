// rea decompile_all
// name: FUN_1006a3390
// address: 0x1006a3390
// body: available
// range: 0x1006a3390-0x1006a3507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a3504 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a3390(long param_1)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  void *local_480;
  undefined8 uStack_478;
  long local_470;
  void *local_460 [2];
  undefined7 local_450;
  char cStack_449;
  timeval tStack_448;
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(char *)(param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x60) != 0) goto LAB_1006a33d0;
  }
  else if (*(char *)(param_1 + 0x6f) != '\0') {
LAB_1006a33d0:
    if (0 < *(int *)(param_1 + 0x70)) {
      _gettimeofday(&tStack_448,(void *)0x0);
      _bzero(auStack_438,0x400);
      plVar3 = (long *)(param_1 + 0x20);
      if (*(char *)(param_1 + 0x37) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      FUN_1006928dc(local_460,"xlog");
      FUN_1006a294c(param_1,&tStack_448,param_1 + 8,plVar3,local_460,auStack_438,0x400);
      if (cStack_449 < '\0') {
        operator_delete(local_460[0]);
      }
      FUN_1006928dc(local_460,auStack_438);
      FUN_10069a9a4(&local_480,local_460,0);
      uVar1 = (uint)local_480;
      if (cStack_449 < '\0') {
        operator_delete(local_460[0]);
      }
      if (uVar1 < 2) {
        if (*(char *)(param_1 + 0x6f) < '\0') {
          FUN_100384eb8(&local_480,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
        }
        else {
          uStack_478 = *(undefined8 *)(param_1 + 0x60);
          local_480 = *(void **)(param_1 + 0x58);
          local_470 = *(long *)(param_1 + 0x68);
        }
        FUN_10069a8dc(local_460,&local_480,0);
        if (local_470 < 0) {
          operator_delete(local_480);
        }
        bVar2 = (CONCAT17(cStack_449,local_450) & 0xffffffffc0000000) != 0;
        goto LAB_1006a3480;
      }
    }
  }
  bVar2 = false;
LAB_1006a3480:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(bVar2);
  }
  return;
}

