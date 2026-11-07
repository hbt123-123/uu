// rea decompile_all
// name: FUN_10039070c
// address: 0x10039070c
// body: available
// range: 0x10039070c-0x100390967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100390964 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039070c(char *param_1,uint param_2,long param_3)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  int *piVar6;
  size_t sVar7;
  void *local_488 [2];
  char local_471;
  undefined4 local_46c;
  char acStack_468 [1024];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar4 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar4 = param_1;
  }
  pcVar3 = pcVar4;
  _opendir();
  if (pcVar3 == (char *)0x0) {
    ___error();
    piVar6 = ___error();
    _strerror(*piVar6);
    FUN_100386734(3,"MemoryFile.cpp","walkInDir",0x235,"opendir failed: %d(%s), %s");
  }
  else {
    sVar7 = *(size_t *)(param_1 + 8);
    if (-1 < param_1[0x17]) {
      sVar7 = (ulong)(byte)param_1[0x17];
    }
    _strncpy(acStack_468,pcVar4,sVar7 + 1);
    if (pcVar4[sVar7 - 1] != '/') {
      acStack_468[sVar7] = '/';
      sVar7 = sVar7 + 1;
    }
    pcVar4 = pcVar3;
    _readdir();
    while (pcVar4 != (char *)0x0) {
      if (((param_2 & 1) == 0) || (((byte)pcVar4[0x14] >> 3 & 1) == 0)) {
        if (((param_2 >> 1 & 1) != 0) && (((byte)pcVar4[0x14] >> 2 & 1) != 0)) {
          if (*(short *)(pcVar4 + 0x12) == 2) {
            if (pcVar4[0x15] == '.') {
              cVar1 = pcVar4[0x16];
              goto LAB_100390854;
            }
          }
          else if (*(short *)(pcVar4 + 0x12) == 1) {
            cVar1 = pcVar4[0x15];
LAB_100390854:
            if (cVar1 == '.') goto LAB_1003908b0;
          }
          _strcpy(acStack_468 + sVar7,pcVar4 + 0x15);
          acStack_468[sVar7 + *(ushort *)(pcVar4 + 0x12)] = '\0';
          FUN_100384ff4(local_488,acStack_468);
          local_46c = 2;
          plVar5 = *(long **)(param_3 + 0x18);
          if (plVar5 == (long *)0x0) {
            FUN_100390998();
LAB_100390960:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100390964);
            (*pcVar2)();
          }
          (**(code **)(*plVar5 + 0x30))(plVar5,local_488,&local_46c);
          goto LAB_1003908a0;
        }
      }
      else {
        _strcpy(acStack_468 + sVar7,pcVar4 + 0x15);
        acStack_468[sVar7 + *(ushort *)(pcVar4 + 0x12)] = '\0';
        FUN_100384ff4(local_488,acStack_468);
        local_46c = 1;
        plVar5 = *(long **)(param_3 + 0x18);
        if (plVar5 == (long *)0x0) {
          FUN_100390998();
          goto LAB_100390960;
        }
        (**(code **)(*plVar5 + 0x30))(plVar5,local_488,&local_46c);
LAB_1003908a0:
        if (local_471 < '\0') {
          operator_delete(local_488[0]);
        }
      }
LAB_1003908b0:
      pcVar4 = pcVar3;
      _readdir();
    }
    _closedir(pcVar3);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

