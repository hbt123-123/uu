// rea decompile_all
// name: FUN_1006b2c4c
// address: 0x1006b2c4c
// body: available
// range: 0x1006b2c4c-0x1006b2ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1006b2c4c(void *param_1,uint *param_2,byte *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  byte *pbVar9;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte *pbVar10;
  
  uVar12 = *param_2;
  _bzero(param_1,(ulong)(uVar12 + 1) << 2);
  if (param_4 == 0) {
    *param_2 = 0;
    return 0;
  }
  if (0 < param_4) {
    pbVar10 = param_3;
    do {
      pbVar9 = pbVar10 + 1;
      *(int *)((long)param_1 + (ulong)*pbVar10 * 4) =
           *(int *)((long)param_1 + (ulong)*pbVar10 * 4) + 1;
      pbVar10 = pbVar9;
    } while (pbVar9 < param_3 + param_4);
  }
  do {
    uVar11 = uVar12;
    uVar12 = uVar11 - 1;
  } while (*(int *)((long)param_1 + (ulong)uVar11 * 4) == 0);
  *param_2 = uVar11;
  if (uVar11 < 3) {
    uVar4 = 0;
    uVar12 = 0;
  }
  else {
    uVar3 = (ulong)uVar11 + 1;
    if (uVar11 < 0xf) {
      uVar12 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0x1fffffff0;
      uVar8 = (ulong)uVar11 + 1 & 0x1fffffff0;
      auVar13 = ZEXT816(0);
      auVar14 = ZEXT816(0);
      auVar15 = ZEXT816(0);
      auVar16 = ZEXT816(0);
      pauVar7 = (undefined1 (*) [16])((long)param_1 + 0x20);
      do {
        auVar13 = NEON_umax(pauVar7[-2],auVar13,4);
        auVar14 = NEON_umax(pauVar7[-1],auVar14,4);
        auVar15 = NEON_umax(*pauVar7,auVar15,4);
        auVar16 = NEON_umax(pauVar7[1],auVar16,4);
        uVar8 = uVar8 - 0x10;
        pauVar7 = pauVar7 + 4;
      } while (uVar8 != 0);
      auVar13 = NEON_umax(auVar13,auVar14,4);
      auVar13 = NEON_umax(auVar13,auVar15,4);
      auVar13 = NEON_umax(auVar13,auVar16,4);
      uVar12 = NEON_umaxv(auVar13,4);
      if (uVar3 == uVar4) {
        return uVar12;
      }
      if ((uVar3 & 0xc) == 0) goto LAB_1006b2da8;
    }
    lVar1 = uVar4 * 4;
    lVar6 = uVar4 - ((ulong)uVar11 + 1 & 0x1fffffffc);
    uVar4 = uVar3 & 0x1fffffffc;
    auVar13._4_4_ = uVar12;
    auVar13._0_4_ = uVar12;
    auVar13._8_4_ = uVar12;
    auVar13._12_4_ = uVar12;
    pauVar7 = (undefined1 (*) [16])((long)param_1 + lVar1);
    do {
      auVar13 = NEON_umax(*pauVar7,auVar13,4);
      lVar6 = lVar6 + 4;
      pauVar7 = pauVar7 + 1;
    } while (lVar6 != 0);
    uVar12 = NEON_umaxv(auVar13,4);
    if (uVar3 == uVar4) {
      return uVar12;
    }
  }
LAB_1006b2da8:
  uVar3 = uVar4 - 1;
  puVar5 = (uint *)((long)param_1 + uVar4 * 4);
  do {
    uVar2 = *puVar5;
    if (*puVar5 <= uVar12) {
      uVar2 = uVar12;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
    uVar12 = uVar2;
  } while (uVar3 < uVar11);
  return uVar2;
}

