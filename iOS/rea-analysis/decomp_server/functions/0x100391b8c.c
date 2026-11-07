// rea decompile_all
// name: FUN_100391b8c
// address: 0x100391b8c
// body: available
// range: 0x100391b8c-0x100391cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100391cb0 to 0x10038bda8 FUN_10038bda8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100391b8c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *local_58;
  long *plStack_50;
  long *local_48;
  long *plStack_40;
  long *local_38;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    plVar6 = param_1 + 2;
    lVar3 = *plVar6 - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    local_38 = plVar6;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = plVar6;
      FUN_100391cc8();
    }
    plStack_50 = plVar2 + lVar4;
    plStack_40 = plVar2 + uVar5 * 3;
    *plStack_50 = *param_2;
    *(int *)(plStack_50 + 1) = (int)param_2[1];
    plStack_50[2] = param_2[2];
    *(undefined4 *)param_2 = 0;
    local_48 = plStack_50 + 3;
    lVar4 = (long)plStack_50 + (*param_1 - param_1[1]);
    local_58 = plVar2;
    FUN_100391d0c(plVar6,*param_1,param_1[1],lVar4);
    plVar6 = local_48;
    local_58 = (long *)*param_1;
    *param_1 = lVar4;
    lVar4 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)local_48;
    plStack_50 = local_58;
    local_48 = local_58;
    plStack_40 = (long *)lVar4;
    FUN_100391d74(&local_58);
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038bda8();
}

