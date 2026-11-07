// rea decompile_all
// name: FUN_10079f4c8
// address: 0x10079f4c8
// body: available
// range: 0x10079f4c8-0x10079f65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079f5ec to 0x1007a4d6c FUN_1007a4d6c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10079f658 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079f4c8(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  char acStack_7d [21];
  long local_68;
  
  lVar7 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  uVar2 = *(uint *)(param_3 + 0x4e3);
  bVar4 = true;
LAB_10079f52c:
  bVar3 = bVar4;
  ppuVar8 = &PTR_s__1009e9a78 + lVar7 * 100;
  pcVar10 = (char *)(param_3 + 1);
  uVar11 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar5 = _strncmp(pcVar10,*ppuVar8,100);
      if (iVar5 != 0) {
        lVar7 = 1;
        bVar4 = false;
        if (!bVar3) goto LAB_10079f5ac;
        goto LAB_10079f52c;
      }
      ppuVar8 = ppuVar8 + 1;
      pcVar10 = pcVar10 + 100;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  iVar5 = _strncmp(pcVar1,(&PTR_s__1009e9a78 + lVar7 * 100)[(int)uVar2],100);
  if (iVar5 != 0) {
    lVar7 = 1;
    bVar4 = false;
    if (bVar3) goto LAB_10079f52c;
  }
  if (iVar5 == 0) {
    FUN_100799408(param_2,acStack_7d);
    uVar9 = *param_3;
    sVar6 = _strlen(acStack_7d);
    FUN_1007a4e8c(uVar9,param_1,acStack_7d,sVar6);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
      return;
    }
  }
  else {
LAB_10079f5ac:
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
      FUN_1007a4d6c(*param_3,param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

