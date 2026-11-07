// rea decompile_all
// name: FUN_1006948c0
// address: 0x1006948c0
// body: available
// range: 0x1006948c0-0x100694a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100694a20 to 0x100692980 FUN_100692980 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006948c0(long *param_1,ulong *param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  ulong *local_48;
  
  puVar7 = (ulong *)(param_1 + 2);
  puVar6 = (ulong *)param_1[1];
  if (puVar6 < (ulong *)*puVar7) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100384eb8(puVar6,*param_2,param_2[1]);
    }
    else {
      uVar3 = param_2[1];
      uVar9 = *param_2;
      puVar6[2] = param_2[2];
      puVar6[1] = uVar3;
      *puVar6 = uVar9;
    }
    puVar6 = puVar6 + 3;
  }
  else {
    lVar4 = (long)puVar6 - *param_1 >> 3;
    uVar9 = lVar4 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_100692980();
    }
    lVar2 = (long)*puVar7 - *param_1 >> 3;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar9 || uVar3 - uVar9 == 0) {
      uVar3 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    local_48 = puVar7;
    if (uVar3 == 0) {
      puVar7 = (ulong *)0x0;
      uVar3 = 0;
    }
    else {
      FUN_100694a24();
    }
    puVar8 = puVar7 + lVar4;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100384eb8(puVar8,*param_2,param_2[1]);
    }
    else {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      puVar8[2] = param_2[2];
      puVar8[1] = uVar10;
      *puVar8 = uVar9;
    }
    puVar6 = puVar8 + 3;
    sVar1 = param_1[1] - *param_1;
    pvVar5 = (void *)((long)puVar8 - sVar1);
    _memcpy(pvVar5,(void *)*param_1,sVar1);
    local_68 = *param_1;
    *param_1 = (long)pvVar5;
    param_1[1] = (long)puVar6;
    lStack_50 = param_1[2];
    param_1[2] = (long)(puVar7 + uVar3 * 3);
    lStack_60 = local_68;
    local_58 = local_68;
    FUN_100694a68(&local_68);
  }
  param_1[1] = (long)puVar6;
  return;
}

