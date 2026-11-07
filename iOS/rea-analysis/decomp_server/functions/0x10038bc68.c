// rea decompile_all
// name: FUN_10038bc68
// address: 0x10038bc68
// body: available
// range: 0x10038bc68-0x10038bd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038bd90 to 0x10038bda8 FUN_10038bda8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10038bc68(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *local_68;
  long *plStack_60;
  long *local_58;
  long *plStack_50;
  long *local_48;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (uVar1 < 0x666666666666667) {
    plVar6 = param_1 + 2;
    lVar3 = *plVar6 - *param_1 >> 3;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    local_48 = plVar6;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = plVar6;
      FUN_10038bdbc();
    }
    plVar7 = plVar2 + lVar4;
    plStack_50 = plVar2 + uVar5 * 5;
    *plVar7 = *param_2;
    local_68 = plVar2;
    plStack_60 = plVar7;
    FUN_10037eac4(plVar7 + 1,param_3);
    lVar4 = (long)plVar7 + (*param_1 - param_1[1]);
    local_58 = plVar7 + 5;
    FUN_10038be00(plVar6,*param_1,param_1[1],lVar4);
    plVar6 = local_58;
    local_68 = (long *)*param_1;
    *param_1 = lVar4;
    lVar4 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)local_58;
    plStack_60 = local_68;
    local_58 = local_68;
    plStack_50 = (long *)lVar4;
    FUN_10038be74(&local_68);
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038bda8();
}

