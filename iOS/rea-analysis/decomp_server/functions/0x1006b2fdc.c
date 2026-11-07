// rea decompile_all
// name: FUN_1006b2fdc
// address: 0x1006b2fdc
// body: available
// range: 0x1006b2fdc-0x1006b344b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b2fdc(void *param_1,uint *param_2,uint *param_3,long param_4,int param_5,
                   undefined8 *param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  
  uVar20 = *param_2;
  _bzero(param_6,0x1000);
  if (param_4 == 0) {
    _bzero(param_1,(ulong)(uVar20 + 1));
    *param_2 = 0;
    return 0;
  }
  uVar21 = 0xff;
  if (uVar20 != 0) {
    uVar21 = uVar20;
  }
  uVar8 = (ulong)uVar21;
  puVar15 = param_3;
  puVar9 = param_3;
  if (0x13 < param_4) {
    uVar20 = *param_3;
    puVar14 = param_3;
    do {
      uVar13 = puVar14[1];
      *(int *)((long)param_6 + (ulong)(uVar20 & 0xff) * 4) =
           *(int *)((long)param_6 + (ulong)(uVar20 & 0xff) * 4) + 1;
      uVar2 = uVar20 >> 8 & 0xff;
      *(int *)((long)param_6 + (ulong)uVar2 * 4 + 0x400) =
           *(int *)((long)param_6 + (ulong)uVar2 * 4 + 0x400) + 1;
      uVar2 = uVar20 >> 0x10 & 0xff;
      *(int *)((long)param_6 + (ulong)uVar2 * 4 + 0x800) =
           *(int *)((long)param_6 + (ulong)uVar2 * 4 + 0x800) + 1;
      *(int *)((long)param_6 + (ulong)(uVar20 >> 0x18) * 4 + 0xc00) =
           *(int *)((long)param_6 + (ulong)(uVar20 >> 0x18) * 4 + 0xc00) + 1;
      uVar20 = puVar14[2];
      *(int *)((long)param_6 + ((ulong)uVar13 & 0xff) * 4) =
           *(int *)((long)param_6 + ((ulong)uVar13 & 0xff) * 4) + 1;
      uVar7 = (ulong)(uVar13 >> 8) & 0xff;
      *(int *)((long)param_6 + uVar7 * 4 + 0x400) = *(int *)((long)param_6 + uVar7 * 4 + 0x400) + 1;
      uVar7 = (ulong)(uVar13 >> 0x10) & 0xff;
      *(int *)((long)param_6 + uVar7 * 4 + 0x800) = *(int *)((long)param_6 + uVar7 * 4 + 0x800) + 1;
      uVar7 = (ulong)(uVar13 >> 0x16) & 0x3fc;
      *(int *)((long)param_6 + uVar7 + 0xc00) = *(int *)((long)param_6 + uVar7 + 0xc00) + 1;
      uVar13 = puVar14[3];
      *(int *)((long)param_6 + ((ulong)uVar20 & 0xff) * 4) =
           *(int *)((long)param_6 + ((ulong)uVar20 & 0xff) * 4) + 1;
      uVar7 = (ulong)(uVar20 >> 8) & 0xff;
      *(int *)((long)param_6 + uVar7 * 4 + 0x400) = *(int *)((long)param_6 + uVar7 * 4 + 0x400) + 1;
      uVar7 = (ulong)(uVar20 >> 0x10) & 0xff;
      *(int *)((long)param_6 + uVar7 * 4 + 0x800) = *(int *)((long)param_6 + uVar7 * 4 + 0x800) + 1;
      uVar7 = (ulong)(uVar20 >> 0x16) & 0x3fc;
      *(int *)((long)param_6 + uVar7 + 0xc00) = *(int *)((long)param_6 + uVar7 + 0xc00) + 1;
      puVar15 = puVar14 + 4;
      uVar20 = *puVar15;
      *(int *)((long)param_6 + ((ulong)uVar13 & 0xff) * 4) =
           *(int *)((long)param_6 + ((ulong)uVar13 & 0xff) * 4) + 1;
      uVar7 = (ulong)(uVar13 >> 8) & 0xff;
      *(int *)((long)param_6 + uVar7 * 4 + 0x400) = *(int *)((long)param_6 + uVar7 * 4 + 0x400) + 1;
      uVar7 = (ulong)(uVar13 >> 0x10) & 0xff;
      *(int *)((long)param_6 + uVar7 * 4 + 0x800) = *(int *)((long)param_6 + uVar7 * 4 + 0x800) + 1;
      uVar7 = (ulong)(uVar13 >> 0x16) & 0x3fc;
      *(int *)((long)param_6 + uVar7 + 0xc00) = *(int *)((long)param_6 + uVar7 + 0xc00) + 1;
      puVar9 = puVar9 + 4;
      puVar1 = puVar14 + 5;
      puVar14 = puVar15;
    } while (puVar1 < (uint *)(((long)param_3 + param_4) - 0xfU));
  }
  if (puVar15 < (uint *)((long)param_3 + param_4)) {
    pbVar17 = (byte *)((long)param_3 + (param_4 - (long)puVar9));
    do {
      *(int *)((long)param_6 + (ulong)(byte)*puVar15 * 4) =
           *(int *)((long)param_6 + (ulong)(byte)*puVar15 * 4) + 1;
      pbVar17 = pbVar17 + -1;
      puVar15 = (uint *)((long)puVar15 + 1);
    } while (pbVar17 != (byte *)0x0);
  }
  if ((param_5 != 0) && (uVar21 < 0xff)) {
    uVar7 = 0xff;
    do {
      iVar26 = *(int *)((long)param_6 + uVar7 * 4 + 0x800) +
               *(int *)((long)param_6 + uVar7 * 4 + 0x400) +
               *(int *)((long)param_6 + uVar7 * 4 + 0xc00) + *(int *)((long)param_6 + uVar7 * 4);
      *(int *)((long)param_6 + uVar7 * 4) = iVar26;
      if (iVar26 != 0) {
        return 0xffffffffffffffd0;
      }
      uVar20 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar20;
    } while (uVar21 < uVar20);
  }
  uVar20 = uVar21;
  if (0xfe < uVar21) {
    uVar20 = 0xff;
  }
  if (uVar21 < 3) {
LAB_1006b3230:
    uVar7 = 0;
    uVar21 = 0;
  }
  else {
    uVar13 = uVar21;
    if (0xfe < uVar21) {
      uVar13 = 0xff;
    }
    if ((param_1 < (void *)((long)param_6 + (ulong)(uVar13 << 2) + 0xc04)) &&
       (param_6 < (undefined8 *)((long)param_1 + (ulong)(uVar13 << 2) + 4))) goto LAB_1006b3230;
    uVar12 = (ulong)(uVar20 + 1);
    if (uVar21 < 0xf) {
      uVar21 = 0;
      uVar10 = 0;
LAB_1006b33ec:
      uVar7 = uVar12 & 0x1fc;
      auVar22._4_4_ = uVar21;
      auVar22._0_4_ = uVar21;
      auVar22._8_4_ = uVar21;
      auVar22._12_4_ = uVar21;
      piVar11 = (int *)((long)param_6 + uVar10 * 4);
      lVar19 = uVar10 - uVar7;
      puVar18 = (undefined8 *)((long)param_1 + uVar10 * 4);
      do {
        auVar23._0_8_ =
             CONCAT44(piVar11[0x101] + piVar11[1] + piVar11[0x201] + piVar11[0x301],
                      piVar11[0x100] + *piVar11 + piVar11[0x200] + piVar11[0x300]);
        auVar23._8_4_ = piVar11[0x102] + piVar11[2] + piVar11[0x202] + piVar11[0x302];
        auVar23._12_4_ = piVar11[0x103] + piVar11[3] + piVar11[0x203] + piVar11[0x303];
        puVar18[1] = auVar23._8_8_;
        *puVar18 = auVar23._0_8_;
        auVar22 = NEON_umax(auVar23,auVar22,4);
        piVar11 = piVar11 + 4;
        lVar19 = lVar19 + 4;
        puVar18 = puVar18 + 2;
      } while (lVar19 != 0);
      uVar21 = NEON_umaxv(auVar22,4);
      if (uVar7 == uVar12) goto LAB_1006b328c;
    }
    else {
      uVar7 = uVar12 & 0x1f0;
      auVar22 = ZEXT816(0);
      auVar23 = ZEXT816(0);
      auVar24 = ZEXT816(0);
      auVar25 = ZEXT816(0);
      puVar16 = (undefined8 *)((long)param_1 + 0x20);
      puVar18 = param_6;
      uVar10 = uVar7;
      do {
        iVar26 = (int)puVar18[0x80] + (int)*puVar18 + (int)puVar18[0x100] + (int)puVar18[0x180];
        iVar27 = (int)((ulong)puVar18[0x80] >> 0x20) + (int)((ulong)*puVar18 >> 0x20) +
                 (int)((ulong)puVar18[0x100] >> 0x20) + (int)((ulong)puVar18[0x180] >> 0x20);
        iVar28 = (int)puVar18[0x81] + (int)puVar18[1] + (int)puVar18[0x101] + (int)puVar18[0x181];
        iVar29 = (int)((ulong)puVar18[0x81] >> 0x20) + (int)((ulong)puVar18[1] >> 0x20) +
                 (int)((ulong)puVar18[0x101] >> 0x20) + (int)((ulong)puVar18[0x181] >> 0x20);
        iVar30 = (int)puVar18[0x82] + (int)puVar18[2] + (int)puVar18[0x102] + (int)puVar18[0x182];
        iVar31 = (int)((ulong)puVar18[0x82] >> 0x20) + (int)((ulong)puVar18[2] >> 0x20) +
                 (int)((ulong)puVar18[0x102] >> 0x20) + (int)((ulong)puVar18[0x182] >> 0x20);
        iVar32 = (int)puVar18[0x83] + (int)puVar18[3] + (int)puVar18[0x103] + (int)puVar18[0x183];
        iVar33 = (int)((ulong)puVar18[0x83] >> 0x20) + (int)((ulong)puVar18[3] >> 0x20) +
                 (int)((ulong)puVar18[0x103] >> 0x20) + (int)((ulong)puVar18[0x183] >> 0x20);
        iVar34 = (int)puVar18[0x84] + (int)puVar18[4] + (int)puVar18[0x104] + (int)puVar18[0x184];
        iVar35 = (int)((ulong)puVar18[0x84] >> 0x20) + (int)((ulong)puVar18[4] >> 0x20) +
                 (int)((ulong)puVar18[0x104] >> 0x20) + (int)((ulong)puVar18[0x184] >> 0x20);
        iVar36 = (int)puVar18[0x85] + (int)puVar18[5] + (int)puVar18[0x105] + (int)puVar18[0x185];
        iVar37 = (int)((ulong)puVar18[0x85] >> 0x20) + (int)((ulong)puVar18[5] >> 0x20) +
                 (int)((ulong)puVar18[0x105] >> 0x20) + (int)((ulong)puVar18[0x185] >> 0x20);
        iVar38 = (int)puVar18[0x86] + (int)puVar18[6] + (int)puVar18[0x106] + (int)puVar18[0x186];
        iVar39 = (int)((ulong)puVar18[0x86] >> 0x20) + (int)((ulong)puVar18[6] >> 0x20) +
                 (int)((ulong)puVar18[0x106] >> 0x20) + (int)((ulong)puVar18[0x186] >> 0x20);
        iVar40 = (int)puVar18[0x87] + (int)puVar18[7] + (int)puVar18[0x107] + (int)puVar18[0x187];
        iVar41 = (int)((ulong)puVar18[0x87] >> 0x20) + (int)((ulong)puVar18[7] >> 0x20) +
                 (int)((ulong)puVar18[0x107] >> 0x20) + (int)((ulong)puVar18[0x187] >> 0x20);
        puVar16[-3] = CONCAT44(iVar29,iVar28);
        puVar16[-4] = CONCAT44(iVar27,iVar26);
        puVar16[-1] = CONCAT44(iVar33,iVar32);
        puVar16[-2] = CONCAT44(iVar31,iVar30);
        auVar3._4_4_ = iVar27;
        auVar3._0_4_ = iVar26;
        auVar3._8_4_ = iVar28;
        auVar3._12_4_ = iVar29;
        auVar22 = NEON_umax(auVar3,auVar22,4);
        auVar4._4_4_ = iVar31;
        auVar4._0_4_ = iVar30;
        auVar4._8_4_ = iVar32;
        auVar4._12_4_ = iVar33;
        auVar23 = NEON_umax(auVar4,auVar23,4);
        auVar5._4_4_ = iVar35;
        auVar5._0_4_ = iVar34;
        auVar5._8_4_ = iVar36;
        auVar5._12_4_ = iVar37;
        auVar24 = NEON_umax(auVar5,auVar24,4);
        auVar6._4_4_ = iVar39;
        auVar6._0_4_ = iVar38;
        auVar6._8_4_ = iVar40;
        auVar6._12_4_ = iVar41;
        auVar25 = NEON_umax(auVar6,auVar25,4);
        puVar16[1] = CONCAT44(iVar37,iVar36);
        *puVar16 = CONCAT44(iVar35,iVar34);
        puVar16[3] = CONCAT44(iVar41,iVar40);
        puVar16[2] = CONCAT44(iVar39,iVar38);
        puVar18 = puVar18 + 8;
        uVar10 = uVar10 - 0x10;
        puVar16 = puVar16 + 8;
      } while (uVar10 != 0);
      auVar22 = NEON_umax(auVar22,auVar23,4);
      auVar22 = NEON_umax(auVar22,auVar24,4);
      auVar22 = NEON_umax(auVar22,auVar25,4);
      uVar21 = NEON_umaxv(auVar22,4);
      if (uVar7 == uVar12) goto LAB_1006b328c;
      uVar10 = uVar7;
      if ((uVar20 + 1 & 0xc) != 0) goto LAB_1006b33ec;
    }
  }
  piVar11 = (int *)((long)param_6 + uVar7 * 4);
  if (0xfe < uVar8) {
    uVar8 = 0xff;
  }
  lVar19 = (uVar8 - uVar7) + 1;
  puVar9 = (uint *)((long)param_1 + uVar7 * 4);
  uVar13 = uVar21;
  do {
    uVar21 = piVar11[0x100] + *piVar11 + piVar11[0x200] + piVar11[0x300];
    *puVar9 = uVar21;
    if (uVar21 <= uVar13) {
      uVar21 = uVar13;
    }
    piVar11 = piVar11 + 1;
    lVar19 = lVar19 + -1;
    puVar9 = puVar9 + 1;
    uVar13 = uVar21;
  } while (lVar19 != 0);
LAB_1006b328c:
  do {
    uVar13 = uVar20;
    uVar20 = uVar13 - 1;
  } while (*(int *)((long)param_1 + (ulong)uVar13 * 4) == 0);
  *param_2 = uVar13;
  return (ulong)uVar21;
}

