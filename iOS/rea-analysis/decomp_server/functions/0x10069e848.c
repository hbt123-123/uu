// rea decompile_all
// name: FUN_10069e848
// address: 0x10069e848
// body: available
// range: 0x10069e848-0x10069e95f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069e8dc to 0x10069eba0 FUN_10069eba0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069e848(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  stat sStack_c0;
  
  iVar2 = *param_2;
  iVar3 = 0;
  if (iVar2 == 2) {
    iVar3 = 0x602;
  }
  iVar1 = (uint)(iVar2 == 2) << 1;
  if (*(long *)(param_2 + 6) != 0) {
    iVar1 = iVar3;
  }
  piVar4 = ___error();
  *piVar4 = 0;
  plVar5 = (long *)(param_2 + 10);
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  _open(plVar5,iVar1);
  *(int *)(param_1 + 0x70) = (int)plVar5;
  piVar4 = ___error();
  if (*piVar4 == 0) {
    if (((*(long *)(param_2 + 6) == 0) || (iVar2 != 2)) ||
       (iVar3 = _ftruncate(*(int *)(param_1 + 0x70),*(long *)(param_2 + 6)), iVar3 != -1)) {
      if (*(long *)(param_2 + 4) == -1) {
        iVar3 = _fstat(*(int *)(param_1 + 0x70),&sStack_c0);
        *(off_t *)(param_1 + 0x68) = sStack_c0.st_size;
        if (iVar3 == -1) {
          FUN_10069eba0(param_1,"failed querying file size");
        }
      }
      else {
        *(long *)(param_1 + 0x68) = *(long *)(param_2 + 4);
      }
      return;
    }
    pcVar6 = "failed setting file size";
  }
  else {
    pcVar6 = "failed opening file";
  }
  FUN_10069eba0(param_1,pcVar6);
  return;
}

