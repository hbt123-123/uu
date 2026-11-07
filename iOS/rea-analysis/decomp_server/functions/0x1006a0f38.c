// rea decompile_all
// name: FUN_1006a0f38
// address: 0x1006a0f38
// body: available
// range: 0x1006a0f38-0x1006a12bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a12b8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0f38(int *param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  void **ppvVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *local_8a8 [2];
  char local_891;
  uint local_890;
  undefined4 uStack_88c;
  char local_879;
  timeval tStack_878;
  int *local_868;
  char local_860;
  void *local_858 [2];
  char local_841;
  undefined1 auStack_458 [1024];
  long local_58;
  int *piVar3;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_1006a1284;
  lVar5 = (long)*(char *)((long)param_1 + 0x1f);
  if (lVar5 < 0) {
    lVar5 = *(long *)(param_1 + 4);
  }
  if (lVar5 == 0) goto LAB_1006a1284;
  local_868 = param_1 + 0x52;
  local_860 = '\0';
  FUN_100696f64(&local_868);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_1006a10b0;
LAB_1006a0fac:
    _gettimeofday(&tStack_878,(void *)0x0);
    _bzero(auStack_458,0x400);
    plVar6 = (long *)(param_1 + 8);
    plVar7 = plVar6;
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      plVar7 = (long *)*plVar6;
    }
    FUN_1006928dc(local_858,"xlog");
    FUN_1006a294c(param_1,&tStack_878,param_1 + 0x16,plVar7,local_858,auStack_458,0x400);
    if (local_841 < '\0') {
      operator_delete(local_858[0]);
    }
    piVar2 = param_1;
    FUN_1006a3390();
    if (((ulong)piVar2 & 1) == 0) {
      FUN_1006928dc(local_858,auStack_458);
      FUN_10069a9a4(&local_890,local_858,0);
      if (local_890 < 2) {
        iVar1 = 0;
      }
      else {
        piVar3 = param_1;
        FUN_1006a2ff4(param_1,param_1 + 0x16);
        iVar1 = (int)piVar3;
      }
      if (local_841 < '\0') {
        operator_delete(local_858[0]);
      }
      if (iVar1 != 0) goto LAB_1006a1148;
LAB_1006a1038:
      piVar2 = param_1;
      FUN_1006a2ff4(param_1,param_1 + 2);
      if ((int)piVar2 != 0) {
        piVar2 = param_1;
        FUN_1006a2e64(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x68));
        if ((*param_1 == 0) && (*(FILE **)(param_1 + 0x68) != (FILE *)0x0)) {
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          _fclose(*(FILE **)(param_1 + 0x68));
          param_1[0x68] = 0;
          param_1[0x69] = 0;
        }
        if (((ulong)piVar2 & 1) != 0) goto LAB_1006a1270;
        if ((*param_1 == 1) && (*(FILE **)(param_1 + 0x68) != (FILE *)0x0)) {
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          _fclose(*(FILE **)(param_1 + 0x68));
          param_1[0x68] = 0;
          param_1[0x69] = 0;
        }
      }
      piVar2 = param_1 + 0x16;
      goto LAB_1006a10b4;
    }
    piVar3 = param_1;
    FUN_1006a2ff4(param_1,param_1 + 0x16);
    if (((ulong)piVar3 & 1) == 0) goto LAB_1006a1038;
LAB_1006a1148:
    FUN_1006a2e64(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x68));
    if ((*param_1 == 0) && (*(FILE **)(param_1 + 0x68) != (FILE *)0x0)) {
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      _fclose(*(FILE **)(param_1 + 0x68));
      param_1[0x68] = 0;
      param_1[0x69] = 0;
    }
    if ((((uint)piVar2 | param_4 ^ 1) & 1) == 0) {
      _bzero(local_858,0x400);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        plVar6 = (long *)*plVar6;
      }
      FUN_1006928dc(&local_890,"xlog");
      FUN_1006a294c(param_1,&tStack_878,param_1 + 2,plVar6,&local_890,local_858,0x400);
      if (local_879 < '\0') {
        operator_delete((void *)CONCAT44(uStack_88c,local_890));
      }
      FUN_1006928dc(&local_890,auStack_458);
      ppvVar4 = local_8a8;
      FUN_1006928dc(ppvVar4,local_858);
      iVar1 = (int)ppvVar4;
      FUN_1006a2b04();
      if (local_891 < '\0') {
        operator_delete(local_8a8[0]);
      }
      if (local_879 < '\0') {
        operator_delete((void *)CONCAT44(uStack_88c,local_890));
      }
      if (iVar1 != 0) {
        if ((*param_1 == 1) && (*(FILE **)(param_1 + 0x68) != (FILE *)0x0)) {
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          _fclose(*(FILE **)(param_1 + 0x68));
          param_1[0x68] = 0;
          param_1[0x69] = 0;
        }
        FUN_1006928dc(&local_890,auStack_458);
        FUN_10069a560(&local_890,0);
        if (local_879 < '\0') {
          operator_delete((void *)CONCAT44(uStack_88c,local_890));
        }
      }
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x6f) != '\0') goto LAB_1006a0fac;
LAB_1006a10b0:
    piVar2 = param_1 + 2;
LAB_1006a10b4:
    piVar3 = param_1;
    FUN_1006a2ff4(param_1,piVar2);
    if ((((int)piVar3 != 0) &&
        (FUN_1006a2e64(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x68)), *param_1 == 0)) &&
       (*(FILE **)(param_1 + 0x68) != (FILE *)0x0)) {
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      _fclose(*(FILE **)(param_1 + 0x68));
      param_1[0x68] = 0;
      param_1[0x69] = 0;
    }
  }
LAB_1006a1270:
  if (local_860 == '\x01') {
    FUN_1006972a0(&local_868);
  }
LAB_1006a1284:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

