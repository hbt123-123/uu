// rea decompile_all
// name: FUN_1006b22f0
// address: 0x1006b22f0
// body: available
// range: 0x1006b22f0-0x1006b24c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b22f0(undefined2 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  mach_header *pmVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  uVar4 = (ulong)uVar2;
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = (short)param_2;
  sVar3 = (short)uVar2;
  param_1[1] = sVar3 + -1;
  if (param_2 == 1) {
    lVar6 = 0;
    do {
      *(short *)((long)puVar1 + lVar6 * 2) = (short)lVar6 + 2;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 2);
  }
  else if (param_2 < 5) {
    uVar7 = uVar4 & 0xfc;
    uVar10 = 0x300000002;
    pmVar9 = &__mh_execute_header;
    puVar8 = puVar1;
    do {
      *puVar8 = CONCAT26(sVar3 + (short)((ulong)uVar10 >> 0x20),
                         CONCAT24(sVar3 + (short)uVar10,
                                  CONCAT22(sVar3 + (short)((ulong)pmVar9 >> 0x20),
                                           sVar3 + (short)pmVar9)));
      pmVar9 = (mach_header *)CONCAT44((int)((ulong)pmVar9 >> 0x20) + 4,(int)pmVar9 + 4);
      uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20) + 4,(int)uVar10 + 4);
      uVar7 = uVar7 - 4;
      puVar8 = puVar8 + 1;
    } while (uVar7 != 0);
  }
  else {
    uVar7 = uVar4 & 0xffffffe0;
    iVar12 = 6;
    iVar14 = 7;
    uVar10 = 0x500000004;
    iVar16 = 2;
    iVar15 = 3;
    pmVar9 = &__mh_execute_header;
    puVar8 = (undefined8 *)(param_1 + 0x12);
    do {
      sVar17 = sVar3 + (short)pmVar9;
      iVar13 = (int)((ulong)pmVar9 >> 0x20);
      sVar18 = (short)(uVar2 + iVar13);
      sVar19 = (short)(uVar2 + iVar16);
      sVar20 = (short)(uVar2 + iVar15);
      sVar21 = sVar3 + (short)uVar10;
      iVar11 = (int)((ulong)uVar10 >> 0x20);
      sVar22 = (short)(uVar2 + iVar11);
      sVar23 = (short)(uVar2 + iVar12);
      sVar24 = (short)(uVar2 + iVar14);
      puVar8[-3] = CONCAT26(sVar24,CONCAT24(sVar23,CONCAT22(sVar22,sVar21)));
      puVar8[-4] = CONCAT26(sVar20,CONCAT24(sVar19,CONCAT22(sVar18,sVar17)));
      puVar8[-1] = CONCAT26(sVar24 + 8,CONCAT24(sVar23 + 8,CONCAT22(sVar22 + 8,sVar21 + 8)));
      puVar8[-2] = CONCAT26(sVar20 + 8,CONCAT24(sVar19 + 8,CONCAT22(sVar18 + 8,sVar17 + 8)));
      puVar8[1] = CONCAT26(sVar24 + 0x10,
                           CONCAT24(sVar23 + 0x10,CONCAT22(sVar22 + 0x10,sVar21 + 0x10)));
      *puVar8 = CONCAT26(sVar20 + 0x10,CONCAT24(sVar19 + 0x10,CONCAT22(sVar18 + 0x10,sVar17 + 0x10))
                        );
      puVar8[3] = CONCAT26(sVar24 + 0x18,
                           CONCAT24(sVar23 + 0x18,CONCAT22(sVar22 + 0x18,sVar21 + 0x18)));
      puVar8[2] = CONCAT26(sVar20 + 0x18,
                           CONCAT24(sVar19 + 0x18,CONCAT22(sVar18 + 0x18,sVar17 + 0x18)));
      pmVar9 = (mach_header *)CONCAT44(iVar13 + 0x20,(int)pmVar9 + 0x20);
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 0x20;
      uVar10 = CONCAT44(iVar11 + 0x20,(int)uVar10 + 0x20);
      iVar12 = iVar12 + 0x20;
      iVar14 = iVar14 + 0x20;
      uVar7 = uVar7 - 0x20;
      puVar8 = puVar8 + 8;
    } while (uVar7 != 0);
  }
  iVar12 = param_2 * 0x10000 - uVar2;
  if (param_2 != 1) {
    if (3 < param_2) {
      uVar4 = uVar4 & 0xfffffff0;
      iVar14 = 2;
      iVar16 = 3;
      pmVar9 = &__mh_execute_header;
      piVar5 = (int *)(param_1 + (ulong)(uVar2 >> 1) * 2 + 0x22);
      do {
        iVar15 = (int)pmVar9;
        iVar11 = (int)((ulong)pmVar9 >> 0x20);
        piVar5[-0x10] = iVar15 + -1;
        piVar5[-0xf] = iVar12;
        piVar5[-0xe] = iVar11 + -1;
        piVar5[-0xd] = iVar12;
        piVar5[-0xc] = iVar14 + -1;
        piVar5[-0xb] = iVar12;
        piVar5[-10] = iVar16 + -1;
        piVar5[-9] = iVar12;
        piVar5[-8] = iVar15 + 3;
        piVar5[-7] = iVar12;
        piVar5[-6] = iVar11 + 3;
        piVar5[-5] = iVar12;
        piVar5[-4] = iVar14 + 3;
        piVar5[-3] = iVar12;
        piVar5[-2] = iVar16 + 3;
        piVar5[-1] = iVar12;
        *piVar5 = iVar15 + 7;
        piVar5[1] = iVar12;
        piVar5[2] = iVar11 + 7;
        piVar5[3] = iVar12;
        piVar5[4] = iVar14 + 7;
        piVar5[5] = iVar12;
        piVar5[6] = iVar16 + 7;
        piVar5[7] = iVar12;
        piVar5[8] = iVar15 + 0xb;
        piVar5[9] = iVar12;
        piVar5[10] = iVar11 + 0xb;
        piVar5[0xb] = iVar12;
        piVar5[0xc] = iVar14 + 0xb;
        piVar5[0xd] = iVar12;
        piVar5[0xe] = iVar16 + 0xb;
        piVar5[0xf] = iVar12;
        pmVar9 = (mach_header *)CONCAT44(iVar11 + 0x10,iVar15 + 0x10);
        iVar14 = iVar14 + 0x10;
        iVar16 = iVar16 + 0x10;
        uVar4 = uVar4 - 0x10;
        piVar5 = piVar5 + 0x20;
      } while (uVar4 != 0);
      return 0;
    }
    piVar5 = (int *)((long)puVar1 + (ulong)(uVar2 >> 1) * 4);
    iVar14 = 2;
    iVar16 = 3;
    pmVar9 = &__mh_execute_header;
    uVar4 = uVar4 & 0xc;
    do {
      iVar15 = (int)((ulong)pmVar9 >> 0x20);
      *piVar5 = (int)pmVar9 + -1;
      piVar5[1] = iVar12;
      piVar5[2] = iVar15 + -1;
      piVar5[3] = iVar12;
      piVar5[4] = iVar14 + -1;
      piVar5[5] = iVar12;
      piVar5[6] = iVar16 + -1;
      piVar5[7] = iVar12;
      piVar5 = piVar5 + 8;
      pmVar9 = (mach_header *)CONCAT44(iVar15 + 4,(int)pmVar9 + 4);
      iVar14 = iVar14 + 4;
      iVar16 = iVar16 + 4;
      uVar4 = uVar4 - 4;
    } while (uVar4 != 0);
    return 0;
  }
  iVar14 = -1;
  lVar6 = 2;
  piVar5 = (int *)(param_1 + 2);
  do {
    piVar5[1] = iVar14;
    piVar5[2] = iVar12;
    iVar14 = iVar14 + 1;
    lVar6 = lVar6 + -1;
    piVar5 = piVar5 + 2;
  } while (lVar6 != 0);
  return 0;
}

