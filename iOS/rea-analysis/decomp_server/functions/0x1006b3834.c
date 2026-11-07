// rea decompile_all
// name: FUN_1006b3834
// address: 0x1006b3834
// body: available
// range: 0x1006b3834-0x1006b3a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b3a2c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b3834(void *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  byte *pbVar5;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte *pbVar6;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((*param_2 < 0xff) || (*param_2 = 0xff, 0x5db < param_4)) {
    FUN_1006b2fdc();
    goto LAB_1006b3910;
  }
  _bzero(param_1,0x400);
  if (param_4 == 0) {
    *param_2 = 0;
    goto LAB_1006b3910;
  }
  pbVar6 = param_3;
  do {
    pbVar5 = pbVar6 + 1;
    *(int *)((long)param_1 + (ulong)*pbVar6 * 4) = *(int *)((long)param_1 + (ulong)*pbVar6 * 4) + 1;
    pbVar6 = pbVar5;
  } while (pbVar5 < param_3 + param_4);
  uVar7 = 0x100;
  do {
    uVar13 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar13;
  } while (*(int *)((long)param_1 + uVar7 * 4) == 0);
  *param_2 = uVar13;
  if (uVar13 < 3) {
    uVar9 = 0;
    uVar13 = 0;
  }
  else {
    uVar1 = uVar7 + 1;
    if (uVar13 < 0xf) {
      uVar13 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = uVar1 & 0x1fffffff0;
      uVar11 = uVar7 + 1 & 0x1fffffff0;
      auVar14 = ZEXT816(0);
      auVar15 = ZEXT816(0);
      auVar16 = ZEXT816(0);
      auVar17 = ZEXT816(0);
      pauVar10 = (undefined1 (*) [16])((long)param_1 + 0x20);
      do {
        auVar14 = NEON_umax(pauVar10[-2],auVar14,4);
        auVar15 = NEON_umax(pauVar10[-1],auVar15,4);
        auVar16 = NEON_umax(*pauVar10,auVar16,4);
        auVar17 = NEON_umax(pauVar10[1],auVar17,4);
        uVar11 = uVar11 - 0x10;
        pauVar10 = pauVar10 + 4;
      } while (uVar11 != 0);
      auVar14 = NEON_umax(auVar14,auVar15,4);
      auVar14 = NEON_umax(auVar14,auVar16,4);
      auVar14 = NEON_umax(auVar14,auVar17,4);
      uVar13 = NEON_umaxv(auVar14,4);
      if (uVar1 == uVar9) goto LAB_1006b3910;
      if ((uVar1 & 0xc) == 0) goto LAB_1006b3a04;
    }
    lVar8 = uVar9 * 4;
    lVar12 = uVar9 - (uVar7 + 1 & 0x1fffffffc);
    uVar9 = uVar1 & 0x1fffffffc;
    auVar14._4_4_ = uVar13;
    auVar14._0_4_ = uVar13;
    auVar14._8_4_ = uVar13;
    auVar14._12_4_ = uVar13;
    pauVar10 = (undefined1 (*) [16])((long)param_1 + lVar8);
    do {
      auVar14 = NEON_umax(*pauVar10,auVar14,4);
      lVar12 = lVar12 + 4;
      pauVar10 = pauVar10 + 1;
    } while (lVar12 != 0);
    uVar13 = NEON_umaxv(auVar14,4);
    if (uVar1 == uVar9) goto LAB_1006b3910;
  }
LAB_1006b3a04:
  lVar8 = (uVar7 - uVar9) + 1;
  puVar4 = (uint *)((long)param_1 + uVar9 * 4);
  do {
    uVar2 = *puVar4;
    if (*puVar4 <= uVar13) {
      uVar2 = uVar13;
    }
    lVar8 = lVar8 + -1;
    puVar4 = puVar4 + 1;
    uVar13 = uVar2;
  } while (lVar8 != 0);
LAB_1006b3910:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar3) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

