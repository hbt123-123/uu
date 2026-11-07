// rea decompile_all
// name: FUN_1006ab458
// address: 0x1006ab458
// body: available
// range: 0x1006ab458-0x1006ab5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ab5d8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ab458(byte *param_1,undefined1 *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong auStack_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = auStack_78 + (char)*param_3;
  FUN_1006aaf60(auStack_78,param_1 + 1,(long)*(char *)((long)param_3 + 1));
  (*(code *)param_3[0x17])(puVar1,auStack_78,param_3);
  (*(code *)param_3[0x16])(puVar1,param_3);
  if (((*puVar1 & 1) != ((ulong)*param_1 & 1)) && (lVar7 = (long)(char)*param_3, 0 < lVar7)) {
    uVar9 = 0;
    puVar10 = puVar1;
    puVar5 = param_3;
    do {
      puVar5 = puVar5 + 1;
      uVar2 = *puVar10 + uVar9;
      if (uVar2 != 0) {
        uVar9 = (ulong)(*puVar5 < uVar2);
      }
      *puVar10 = *puVar5 - uVar2;
      lVar7 = lVar7 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
  }
  cVar3 = *(char *)((long)param_3 + 1);
  uVar4 = (uint)cVar3;
  if (0 < (int)uVar4) {
    lVar7 = (long)(int)cVar3;
    uVar8 = cVar3 * 8;
    puVar6 = param_2;
    do {
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 8;
      *puVar6 = (char)(*(ulong *)((long)auStack_78 + (ulong)(uVar4 & 0xfffffff8)) >> (uVar8 & 0x38))
      ;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
    cVar3 = *(char *)((long)param_3 + 1);
    if (0 < (long)cVar3) {
      lVar7 = (long)(int)cVar3;
      uVar8 = (uint)cVar3;
      uVar4 = uVar8 * 8;
      puVar6 = param_2 + cVar3;
      do {
        uVar8 = uVar8 - 1;
        uVar4 = uVar4 - 8;
        *puVar6 = (char)(*(ulong *)((long)puVar1 + (ulong)(uVar8 & 0xfffffff8)) >> (uVar4 & 0x38));
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

