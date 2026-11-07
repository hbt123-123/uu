// rea decompile_all
// name: FUN_1006a21b0
// address: 0x1006a21b0
// body: available
// range: 0x1006a21b0-0x1006a22db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a22d8 to 0x100692980 FUN_100692980 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a21b0(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  size_t sVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  ulong *local_38;
  
  puVar1 = (ulong *)(param_1 + 2);
  puVar5 = (ulong *)param_1[1];
  if (puVar5 < (ulong *)*puVar1) {
    uVar7 = param_2[1];
    uVar9 = *param_2;
    puVar5[2] = param_2[2];
    puVar5[1] = uVar7;
    *puVar5 = uVar9;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar5 = puVar5 + 3;
  }
  else {
    lVar6 = (long)puVar5 - *param_1 >> 3;
    uVar9 = lVar6 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_100692980();
    }
    lVar3 = (long)*puVar1 - *param_1 >> 3;
    uVar7 = lVar3 * 0x5555555555555556;
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      uVar7 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    local_38 = puVar1;
    if (uVar7 == 0) {
      puVar1 = (ulong *)0x0;
    }
    else {
      FUN_100694a24();
    }
    puVar4 = puVar1 + lVar6;
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar10;
    *puVar4 = uVar9;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar5 = puVar4 + 3;
    sVar2 = param_1[1] - *param_1;
    pvVar8 = (void *)((long)puVar4 - sVar2);
    _memcpy(pvVar8,(void *)*param_1,sVar2);
    local_58 = *param_1;
    *param_1 = (long)pvVar8;
    param_1[1] = (long)puVar5;
    lStack_40 = param_1[2];
    param_1[2] = (long)(puVar1 + uVar7 * 3);
    lStack_50 = local_58;
    local_48 = local_58;
    FUN_100694a68(&local_58);
  }
  param_1[1] = (long)puVar5;
  return;
}

