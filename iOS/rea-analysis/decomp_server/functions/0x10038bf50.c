// rea decompile_all
// name: FUN_10038bf50
// address: 0x10038bf50
// body: available
// range: 0x10038bf50-0x10038c01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038c01c to 0x10038bda8 FUN_10038bda8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038bf50(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  void *pvVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  
  puVar2 = (ulong *)(param_1 + 2);
  puVar8 = (ulong *)param_1[1];
  if (puVar8 < (ulong *)*puVar2) {
    puVar10 = puVar8 + 1;
    *puVar8 = *param_2;
  }
  else {
    lVar9 = (long)puVar8 - *param_1 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10038bda8();
    }
    uVar5 = (long)*puVar2 - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      FUN_10038c0f4();
    }
    puVar8 = puVar2 + lVar9;
    puVar10 = puVar8 + 1;
    *puVar8 = *param_2;
    sVar4 = param_1[1] - *param_1;
    pvVar7 = (void *)((long)puVar8 - sVar4);
    _memcpy(pvVar7,(void *)*param_1,sVar4);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar7;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(puVar2 + uVar6);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  param_1[1] = (long)puVar10;
  return;
}

