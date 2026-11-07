// rea decompile_all
// name: FUN_100698f3c
// address: 0x100698f3c
// body: available
// range: 0x100698f3c-0x100699127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100698f3c(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  char ****ppppcVar4;
  int *piVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  char ****ppppcVar8;
  undefined4 uVar9;
  char *pcVar10;
  char ***local_120 [2];
  char local_109;
  char ***local_108 [2];
  char local_f1;
  stat sStack_f0;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  FUN_1006928dc(local_108,plVar1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_1006928dc(local_120,plVar1);
  pvVar3 = operator_new__(0x8000);
  ppppcVar4 = (char ****)local_108[0];
  if (-1 < local_f1) {
    ppppcVar4 = local_108;
  }
  _open(ppppcVar4,0);
  if ((int)ppppcVar4 < 0) {
LAB_100698ff0:
    operator_delete__(pvVar3);
  }
  else {
    ppppcVar6 = (char ****)local_108[0];
    if (-1 < local_f1) {
      ppppcVar6 = local_108;
    }
    iVar2 = _stat((char *)ppppcVar6,&sStack_f0);
    if (iVar2 != 0) {
      _close(ppppcVar4);
      goto LAB_100698ff0;
    }
    uVar9 = 0xe01;
    if (param_3 != 0) {
      uVar9 = 0x601;
    }
    ppppcVar6 = (char ****)local_120[0];
    if (-1 < local_109) {
      ppppcVar6 = local_120;
    }
    _open(ppppcVar6,uVar9);
    if ((int)ppppcVar6 < 0) {
      piVar5 = ___error();
      iVar2 = *piVar5;
      _close(ppppcVar4);
      piVar5 = ___error();
      *piVar5 = iVar2;
      goto LAB_100698ff0;
    }
    while (ppppcVar7 = ppppcVar4, _read(ppppcVar4,pvVar3,0x8000), ppppcVar8 = ppppcVar7,
          0 < (long)ppppcVar7) {
      pcVar10 = (char *)0x0;
      do {
        ppppcVar8 = ppppcVar6;
        _write(ppppcVar6,(char *)((long)pvVar3 + (long)pcVar10),(long)ppppcVar7 - (long)pcVar10);
        if ((long)ppppcVar8 < 0) goto LAB_1006990d8;
        pcVar10 = (char *)((long)ppppcVar8 + (long)pcVar10);
      } while ((long)pcVar10 < (long)ppppcVar7);
    }
LAB_1006990d8:
    _close();
    _close();
    operator_delete__(pvVar3);
    if (((-1 < (long)ppppcVar8) && (-1 < (int)ppppcVar6)) && (-1 < (int)ppppcVar4)) {
      iVar2 = 0;
      goto LAB_100699000;
    }
  }
  piVar5 = ___error();
  iVar2 = *piVar5;
LAB_100699000:
  FUN_100698e34(iVar2,param_1,param_2,param_4,"mars_boost::filesystem::copy_file");
  if (local_109 < '\0') {
    operator_delete(local_120[0]);
  }
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  return;
}

