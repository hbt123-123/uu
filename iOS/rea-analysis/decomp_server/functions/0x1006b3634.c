// rea decompile_all
// name: FUN_1006b3634
// address: 0x1006b3634
// body: available
// range: 0x1006b3634-0x1006b3833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b369c to 0x1006b2fdc FUN_1006b2fdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006b3730 to 0x1006b2fdc FUN_1006b2fdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1006b3634(void *param_1,uint *param_2,byte *param_3,ulong param_4,ulong param_5,
                    ulong param_6)

{
  ulong uVar1;
  uint *puVar2;
  byte *pbVar3;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte *pbVar4;
  
  if ((param_5 & 3) != 0) {
    return (void *)0xffffffffffffffff;
  }
  if (param_6 < 0x1000) {
    return (void *)0xffffffffffffffbe;
  }
  if (*param_2 < 0xff) {
    FUN_1006b2fdc();
    return param_1;
  }
  *param_2 = 0xff;
  if (0x5db < param_4) {
    FUN_1006b2fdc();
    return param_1;
  }
  _bzero(param_1,0x400);
  if (param_4 == 0) {
    *param_2 = 0;
    return (void *)0x0;
  }
  pbVar4 = param_3;
  do {
    pbVar3 = pbVar4 + 1;
    *(int *)((long)param_1 + (ulong)*pbVar4 * 4) = *(int *)((long)param_1 + (ulong)*pbVar4 * 4) + 1;
    pbVar4 = pbVar3;
  } while (pbVar3 < param_3 + param_4);
  uVar5 = 0x100;
  do {
    uVar12 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar12;
  } while (*(int *)((long)param_1 + uVar5 * 4) == 0);
  *param_2 = uVar12;
  if (uVar12 < 3) {
    uVar7 = 0;
    uVar12 = 0;
  }
  else {
    uVar1 = uVar5 + 1;
    if (uVar12 < 0xf) {
      uVar12 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = uVar1 & 0x1fffffff0;
      uVar10 = uVar5 + 1 & 0x1fffffff0;
      auVar13 = ZEXT816(0);
      auVar14 = ZEXT816(0);
      auVar15 = ZEXT816(0);
      auVar16 = ZEXT816(0);
      pauVar9 = (undefined1 (*) [16])((long)param_1 + 0x20);
      do {
        auVar13 = NEON_umax(pauVar9[-2],auVar13,4);
        auVar14 = NEON_umax(pauVar9[-1],auVar14,4);
        auVar15 = NEON_umax(*pauVar9,auVar15,4);
        auVar16 = NEON_umax(pauVar9[1],auVar16,4);
        uVar10 = uVar10 - 0x10;
        pauVar9 = pauVar9 + 4;
      } while (uVar10 != 0);
      auVar13 = NEON_umax(auVar13,auVar14,4);
      auVar13 = NEON_umax(auVar13,auVar15,4);
      auVar13 = NEON_umax(auVar13,auVar16,4);
      uVar12 = NEON_umaxv(auVar13,4);
      if (uVar1 == uVar7) goto LAB_1006b3820;
      if ((uVar1 & 0xc) == 0) goto LAB_1006b3800;
    }
    lVar6 = uVar7 * 4;
    lVar11 = uVar7 - (uVar5 + 1 & 0x1fffffffc);
    uVar7 = uVar1 & 0x1fffffffc;
    auVar13._4_4_ = uVar12;
    auVar13._0_4_ = uVar12;
    auVar13._8_4_ = uVar12;
    auVar13._12_4_ = uVar12;
    pauVar9 = (undefined1 (*) [16])((long)param_1 + lVar6);
    do {
      auVar13 = NEON_umax(*pauVar9,auVar13,4);
      lVar11 = lVar11 + 4;
      pauVar9 = pauVar9 + 1;
    } while (lVar11 != 0);
    uVar12 = NEON_umaxv(auVar13,4);
    if (uVar1 == uVar7) goto LAB_1006b3820;
  }
LAB_1006b3800:
  lVar6 = (uVar5 - uVar7) + 1;
  puVar2 = (uint *)((long)param_1 + uVar7 * 4);
  uVar8 = uVar12;
  do {
    uVar12 = *puVar2;
    if (*puVar2 <= uVar8) {
      uVar12 = uVar8;
    }
    lVar6 = lVar6 + -1;
    puVar2 = puVar2 + 1;
    uVar8 = uVar12;
  } while (lVar6 != 0);
LAB_1006b3820:
  return (void *)(ulong)uVar12;
}

