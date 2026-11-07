// rea decompile_all
// name: FUN_1005ced8c
// address: 0x1005ced8c
// body: available
// range: 0x1005ced8c-0x1005cee67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1005ced8c(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  
  plVar2 = param_1 + 2;
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 < (undefined4 *)*plVar2) {
    puVar11 = puVar9 + 1;
    *puVar9 = *param_2;
  }
  else {
    pvVar4 = (void *)*param_1;
    sVar5 = (long)puVar9 - (long)pvVar4;
    lVar10 = (long)sVar5 >> 2;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_1005cef44();
      if (pvVar4 < (void *)0x7ffffffffffffff8) {
        if (pvVar4 < (void *)0x17) {
          plVar2[1] = 0;
          plVar2[2] = 0;
          *plVar2 = 0;
          *(char *)((long)plVar2 + 0x17) = (char)pvVar4;
        }
        else {
          uVar1 = 0x19;
          if (((ulong)pvVar4 | 7) != 0x17) {
            uVar1 = ((ulong)pvVar4 | 7) + 1;
          }
          pvVar3 = operator_new(uVar1);
          plVar2[1] = (long)pvVar4;
          plVar2[2] = uVar1 | 0x8000000000000000;
          *plVar2 = (long)pvVar3;
        }
        return plVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1005ceee0();
    }
    uVar6 = *plVar2 - (long)pvVar4;
    uVar8 = (long)uVar6 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
      lVar7 = lVar10;
    }
    else {
      FUN_1005cef58();
      pvVar4 = (void *)*param_1;
      sVar5 = param_1[1] - (long)pvVar4;
      lVar7 = (long)sVar5 >> 2;
    }
    puVar9 = (undefined4 *)((long)plVar2 + lVar10 * 4);
    lVar10 = (long)plVar2 + uVar8 * 4;
    puVar11 = puVar9 + 1;
    *puVar9 = *param_2;
    _memcpy(puVar9 + -lVar7,pvVar4,sVar5);
    plVar2 = (long *)*param_1;
    *param_1 = (long)(puVar9 + -lVar7);
    param_1[1] = (long)puVar11;
    param_1[2] = lVar10;
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
    }
  }
  param_1[1] = (long)puVar11;
  return plVar2;
}

