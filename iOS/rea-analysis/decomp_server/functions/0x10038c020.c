// rea decompile_all
// name: FUN_10038c020
// address: 0x10038c020
// body: available
// range: 0x10038c020-0x10038c0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038c0f0 to 0x10038bda8 FUN_10038bda8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038c020(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  void *pvVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  
  puVar2 = (ulong *)(param_1 + 2);
  puVar7 = (ulong *)param_1[1];
  if (puVar7 < (ulong *)*puVar2) {
    uVar10 = *param_2;
    puVar7[1] = param_2[1];
    *puVar7 = uVar10;
    puVar7 = puVar7 + 2;
  }
  else {
    lVar9 = (long)puVar7 - *param_1 >> 4;
    uVar10 = lVar9 + 1;
    if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10038bda8();
    }
    uVar5 = (long)*puVar2 - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      FUN_10037bc60();
    }
    puVar1 = puVar2 + lVar9 * 2;
    uVar10 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar10;
    puVar7 = puVar1 + 2;
    sVar4 = param_1[1] - *param_1;
    pvVar8 = (void *)((long)puVar1 - sVar4);
    _memcpy(pvVar8,(void *)*param_1,sVar4);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar8;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)(puVar2 + uVar6 * 2);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  param_1[1] = (long)puVar7;
  return;
}

