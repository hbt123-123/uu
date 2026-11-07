// rea decompile_all
// name: FUN_1006b344c
// address: 0x1006b344c
// body: available
// range: 0x1006b344c-0x1006b3633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b3630 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b344c(void *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  byte *pbVar4;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte *pbVar5;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar2 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (0x5db < param_4) {
    FUN_1006b2fdc();
    goto LAB_1006b35fc;
  }
  uVar13 = *param_2;
  _bzero(param_1,(ulong)(uVar13 + 1) << 2);
  if (param_4 == 0) {
    *param_2 = 0;
    goto LAB_1006b35fc;
  }
  pbVar5 = param_3;
  do {
    pbVar4 = pbVar5 + 1;
    *(int *)((long)param_1 + (ulong)*pbVar5 * 4) = *(int *)((long)param_1 + (ulong)*pbVar5 * 4) + 1;
    pbVar5 = pbVar4;
  } while (pbVar4 < param_3 + param_4);
  do {
    uVar12 = uVar13;
    uVar13 = uVar12 - 1;
  } while (*(int *)((long)param_1 + (ulong)uVar12 * 4) == 0);
  uVar6 = (ulong)uVar12;
  *param_2 = uVar12;
  if (uVar12 < 3) {
    uVar8 = 0;
    uVar13 = 0;
  }
  else {
    uVar1 = (ulong)uVar12 + 1;
    if (uVar12 < 0xf) {
      uVar13 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = uVar1 & 0x1fffffff0;
      uVar10 = uVar6 + 1 & 0x1fffffff0;
      auVar14 = ZEXT816(0);
      auVar15 = ZEXT816(0);
      auVar16 = ZEXT816(0);
      auVar17 = ZEXT816(0);
      pauVar9 = (undefined1 (*) [16])((long)param_1 + 0x20);
      do {
        auVar14 = NEON_umax(pauVar9[-2],auVar14,4);
        auVar15 = NEON_umax(pauVar9[-1],auVar15,4);
        auVar16 = NEON_umax(*pauVar9,auVar16,4);
        auVar17 = NEON_umax(pauVar9[1],auVar17,4);
        uVar10 = uVar10 - 0x10;
        pauVar9 = pauVar9 + 4;
      } while (uVar10 != 0);
      auVar14 = NEON_umax(auVar14,auVar15,4);
      auVar14 = NEON_umax(auVar14,auVar16,4);
      auVar14 = NEON_umax(auVar14,auVar17,4);
      uVar13 = NEON_umaxv(auVar14,4);
      if (uVar1 == uVar8) goto LAB_1006b35fc;
      if ((uVar1 & 0xc) == 0) goto LAB_1006b35d8;
    }
    lVar7 = uVar8 * 4;
    lVar11 = uVar8 - (uVar6 + 1 & 0x1fffffffc);
    uVar8 = uVar1 & 0x1fffffffc;
    auVar14._4_4_ = uVar13;
    auVar14._0_4_ = uVar13;
    auVar14._8_4_ = uVar13;
    auVar14._12_4_ = uVar13;
    pauVar9 = (undefined1 (*) [16])((long)param_1 + lVar7);
    do {
      auVar14 = NEON_umax(*pauVar9,auVar14,4);
      lVar11 = lVar11 + 4;
      pauVar9 = pauVar9 + 1;
    } while (lVar11 != 0);
    uVar13 = NEON_umaxv(auVar14,4);
    if (uVar1 == uVar8) goto LAB_1006b35fc;
  }
LAB_1006b35d8:
  lVar7 = (uVar6 - uVar8) + 1;
  puVar3 = (uint *)((long)param_1 + uVar8 * 4);
  do {
    uVar12 = *puVar3;
    if (*puVar3 <= uVar13) {
      uVar12 = uVar13;
    }
    lVar7 = lVar7 + -1;
    puVar3 = puVar3 + 1;
    uVar13 = uVar12;
  } while (lVar7 != 0);
LAB_1006b35fc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

