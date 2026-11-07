// rea decompile_all
// name: FUN_1006ad7d8
// address: 0x1006ad7d8
// body: available
// range: 0x1006ad7d8-0x1006ad933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ad930 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ad7d8(void *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0 [5];
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_b0[1] = 0;
  local_b0[0] = 1;
  local_b0[3] = 0;
  local_b0[2] = 0;
  uStack_c8 = 0;
  local_d0 = 1;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar4 = *param_2;
  lVar10 = (long)(char)uVar4;
  if (0 < lVar10) {
    uVar6 = 0;
    puVar7 = local_b0;
    lVar8 = lVar10;
    puVar5 = param_2;
    do {
      puVar5 = puVar5 + 1;
      uVar9 = *puVar5;
      uVar2 = uVar9 + uVar6 + *puVar7;
      if (uVar2 != uVar9) {
        uVar6 = (ulong)(uVar2 < uVar9);
      }
      *puVar7 = uVar2;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  puVar5 = local_b0;
  FUN_1006ad34c(puVar5,lVar10);
  uVar3 = (uint)(short)((short)puVar5 + -1);
  if (1 < (int)uVar3) {
    do {
      FUN_1006af210(auStack_88,&local_d0,&local_d0,(long)(char)*param_2);
      (*(code *)param_2[0x18])(&local_d0,auStack_88);
      if ((local_b0[uVar3 >> 6] >> ((ulong)uVar3 & 0x3f) & 1) != 0) {
        FUN_1006af210(auStack_88,&local_d0,param_1,(long)(char)*param_2);
        (*(code *)param_2[0x18])(&local_d0,auStack_88);
      }
      bVar1 = 2 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  if ('\0' < (char)uVar4) {
    _memcpy(param_1,&local_d0,lVar10 << 3);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

