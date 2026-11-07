// rea decompile_all
// name: FUN_1006a7154
// address: 0x1006a7154
// body: available
// range: 0x1006a7154-0x1006a736f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a736c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_1006a7154(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined7 local_78;
  undefined1 uStack_71;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar8 = param_3;
  if (param_1 != param_2) {
    uVar10 = (long)param_2 - (long)param_1;
    lVar9 = ((long)uVar10 >> 3) * -0x5555555555555555;
    puVar8 = param_2;
    if (0x18 < (long)uVar10) {
      uVar5 = lVar9 - 2U >> 1;
      lVar12 = uVar5 + 1;
      puVar3 = param_1 + uVar5 * 3;
      do {
        FUN_1006a7370(param_1,param_4,lVar9,puVar3);
        puVar3 = puVar3 + -3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    for (; puVar8 != param_3; puVar8 = puVar8 + 3) {
      puVar3 = puVar8;
      (*(code *)*param_4)(puVar8,param_1);
      if ((int)puVar3 != 0) {
        uVar6 = puVar8[2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar7 = param_1[2];
        uVar15 = *param_1;
        puVar8[1] = param_1[1];
        *puVar8 = uVar15;
        puVar8[2] = uVar7;
        param_1[1] = uVar14;
        *param_1 = uVar13;
        param_1[2] = uVar6;
        FUN_1006a7370(param_1,param_4,lVar9,param_1);
      }
    }
    if (0x18 < (long)uVar10) {
      lVar9 = (uVar10 >> 3) * -0x5555555555555555;
      do {
        puVar11 = param_2 + -3;
        uVar6 = *param_1;
        local_78 = (undefined7)param_1[1];
        uVar7 = *(undefined8 *)((long)param_1 + 0xf);
        uStack_71 = (undefined1)uVar7;
        uVar2 = *(undefined1 *)((long)param_1 + 0x17);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar3 = param_1;
        FUN_1006a7504(param_1,param_4,lVar9);
        if (puVar11 == puVar3) {
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            operator_delete((void *)*puVar3);
          }
          *puVar3 = uVar6;
          puVar3[1] = CONCAT17(uStack_71,local_78);
          *(undefined8 *)((long)puVar3 + 0xf) = uVar7;
          *(undefined1 *)((long)puVar3 + 0x17) = uVar2;
        }
        else {
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            operator_delete((void *)*puVar3);
          }
          uVar14 = param_2[-2];
          uVar13 = *puVar11;
          puVar3[2] = param_2[-1];
          puVar3[1] = uVar14;
          *puVar3 = uVar13;
          *puVar11 = uVar6;
          param_2[-2] = CONCAT17(uStack_71,local_78);
          *(undefined8 *)((long)param_2 + -9) = uVar7;
          *(undefined1 *)((long)param_2 + -1) = uVar2;
          FUN_1006a75d8(param_1,puVar3 + 3,param_4,
                        ((long)(puVar3 + 3) - (long)param_1 >> 3) * -0x5555555555555555);
        }
        bVar1 = 2 < lVar9;
        lVar9 = lVar9 + -1;
        param_2 = puVar11;
      } while (bVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar4) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar8;
}

