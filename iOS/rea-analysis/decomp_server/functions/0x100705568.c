// rea decompile_all
// name: FUN_100705568
// address: 0x100705568
// body: available
// range: 0x100705568-0x100705bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100705568(long *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  int iVar12;
  undefined8 uVar10;
  ulong uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
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
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  undefined4 local_44;
  
  iVar9 = (int)param_1[0xc];
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((long)param_1 + 0x34) == 0) {
    if (param_3 < 0x401) {
      *(undefined4 *)(param_1 + 10) = 1;
    }
    lVar4 = param_1[0xb];
    if (*(int *)(lVar4 + 0x400) == 2) {
      *(undefined4 *)(param_1 + 10) = 0;
      if (iVar9 != 2) {
        lVar4 = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        do {
          lVar2 = param_1[0xb];
          FUN_1006b4394(lVar2,lVar4);
          iVar9 = 1 << (ulong)(0xbU - (int)lVar2 & 0x1f);
          if ((int)lVar2 == 0) {
            iVar9 = 1;
          }
          *(int *)(*param_1 + lVar4 * 4) = iVar9;
          *(int *)(param_1 + 6) = (int)param_1[6] + iVar9;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x100);
        lVar4 = param_1[0xb];
      }
      lVar2 = 0;
      lVar7 = (long)(1 << (ulong)(*(ushort *)(lVar4 + 0xcb4) - 1 & 0x1f));
      if (*(ushort *)(lVar4 + 0xcb4) == 0) {
        lVar7 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      lVar6 = param_1[1];
      piVar8 = (int *)(lVar4 + lVar7 * 4 + 0xcbc);
      do {
        iVar9 = 1 << (ulong)(10 - (*piVar8 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar8 + 0xffffU < 0x10000) {
          iVar9 = 1;
        }
        *(int *)(lVar6 + lVar2) = iVar9;
        *(int *)((long)param_1 + 0x34) = iVar9 + *(int *)((long)param_1 + 0x34);
        lVar2 = lVar2 + 4;
        piVar8 = piVar8 + 2;
      } while (lVar2 != 0x90);
      lVar2 = 0;
      lVar7 = (long)(1 << (ulong)(*(ushort *)(lVar4 + 0x708) - 1 & 0x1f));
      if (*(ushort *)(lVar4 + 0x708) == 0) {
        lVar7 = 1;
      }
      *(undefined4 *)(param_1 + 7) = 0;
      lVar6 = param_1[2];
      piVar8 = (int *)(lVar4 + lVar7 * 4 + 0x710);
      do {
        iVar9 = 1 << (ulong)(10 - (*piVar8 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar8 + 0xffffU < 0x10000) {
          iVar9 = 1;
        }
        *(int *)(lVar6 + lVar2) = iVar9;
        *(int *)(param_1 + 7) = iVar9 + (int)param_1[7];
        lVar2 = lVar2 + 4;
        piVar8 = piVar8 + 2;
      } while (lVar2 != 0xd4);
      lVar2 = 0;
      lVar7 = (long)(1 << (ulong)(*(ushort *)(lVar4 + 0x404) - 1 & 0x1f));
      if (*(ushort *)(lVar4 + 0x404) == 0) {
        lVar7 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      lVar6 = param_1[3];
      piVar8 = (int *)(lVar4 + lVar7 * 4 + 0x40c);
      do {
        iVar9 = 1 << (ulong)(10 - (*piVar8 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar8 + 0xffffU < 0x10000) {
          iVar9 = 1;
        }
        *(int *)(lVar6 + lVar2) = iVar9;
        iVar9 = iVar9 + *(int *)((long)param_1 + 0x3c);
        *(int *)((long)param_1 + 0x3c) = iVar9;
        lVar2 = lVar2 + 4;
        piVar8 = piVar8 + 2;
      } while (lVar2 != 0x80);
      iVar12 = (int)param_1[0xc];
      goto joined_r0x000100705a08;
    }
    if (iVar9 != 2) {
      local_44 = 0xff;
      FUN_1006b2c4c(*param_1,&local_44,param_2,param_3);
      iVar9 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      lVar4 = 0x100;
      iVar15 = 0;
      iVar17 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      puVar3 = (undefined8 *)(*param_1 + 0x20);
      do {
        iVar41 = ((uint)puVar3[-4] >> 5) + 1;
        iVar42 = (uint)((ulong)puVar3[-4] >> 0x25) + 1;
        iVar43 = ((uint)puVar3[-3] >> 5) + 1;
        iVar44 = (uint)((ulong)puVar3[-3] >> 0x25) + 1;
        iVar29 = ((uint)puVar3[-2] >> 5) + 1;
        iVar30 = (uint)((ulong)puVar3[-2] >> 0x25) + 1;
        iVar31 = ((uint)puVar3[-1] >> 5) + 1;
        iVar32 = (uint)((ulong)puVar3[-1] >> 0x25) + 1;
        iVar33 = ((uint)*puVar3 >> 5) + 1;
        iVar34 = (uint)((ulong)*puVar3 >> 0x25) + 1;
        iVar35 = ((uint)puVar3[1] >> 5) + 1;
        iVar36 = (uint)((ulong)puVar3[1] >> 0x25) + 1;
        iVar37 = ((uint)puVar3[2] >> 5) + 1;
        iVar38 = (uint)((ulong)puVar3[2] >> 0x25) + 1;
        iVar39 = ((uint)puVar3[3] >> 5) + 1;
        iVar40 = (uint)((ulong)puVar3[3] >> 0x25) + 1;
        puVar3[-3] = CONCAT44(iVar44,iVar43);
        puVar3[-4] = CONCAT44(iVar42,iVar41);
        puVar3[-1] = CONCAT44(iVar32,iVar31);
        puVar3[-2] = CONCAT44(iVar30,iVar29);
        puVar3[1] = CONCAT44(iVar36,iVar35);
        *puVar3 = CONCAT44(iVar34,iVar33);
        puVar3[3] = CONCAT44(iVar40,iVar39);
        puVar3[2] = CONCAT44(iVar38,iVar37);
        iVar9 = iVar41 + iVar9;
        iVar12 = iVar42 + iVar12;
        iVar13 = iVar43 + iVar13;
        iVar14 = iVar44 + iVar14;
        iVar15 = iVar29 + iVar15;
        iVar17 = iVar30 + iVar17;
        iVar19 = iVar31 + iVar19;
        iVar20 = iVar32 + iVar20;
        iVar21 = iVar33 + iVar21;
        iVar22 = iVar34 + iVar22;
        iVar23 = iVar35 + iVar23;
        iVar24 = iVar36 + iVar24;
        iVar25 = iVar37 + iVar25;
        iVar26 = iVar38 + iVar26;
        iVar27 = iVar39 + iVar27;
        iVar28 = iVar40 + iVar28;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 8;
      } while (lVar4 != 0);
      *(int *)(param_1 + 6) =
           iVar25 + iVar21 + iVar15 + iVar9 + iVar26 + iVar22 + iVar17 + iVar12 +
           iVar27 + iVar23 + iVar19 + iVar13 + iVar28 + iVar24 + iVar20 + iVar14;
    }
    _memset_pattern16((void *)param_1[1],&DAT_10084ff90,0x90);
    *(undefined4 *)((long)param_1 + 0x34) = 0x24;
    _memset_pattern16((void *)param_1[2],&DAT_10084ff90,0xd4);
    *(undefined4 *)(param_1 + 7) = 0x35;
    _memset_pattern16((void *)param_1[3],&DAT_10084ff90,0x80);
    iVar9 = 0x20;
  }
  else {
    if (iVar9 != 2) {
      iVar9 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      lVar4 = 0x100;
      iVar15 = 0;
      iVar17 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      puVar3 = (undefined8 *)(*param_1 + 0x20);
      do {
        iVar41 = ((uint)puVar3[-4] >> 5) + 1;
        iVar42 = (uint)((ulong)puVar3[-4] >> 0x25) + 1;
        iVar43 = ((uint)puVar3[-3] >> 5) + 1;
        iVar44 = (uint)((ulong)puVar3[-3] >> 0x25) + 1;
        iVar29 = ((uint)puVar3[-2] >> 5) + 1;
        iVar30 = (uint)((ulong)puVar3[-2] >> 0x25) + 1;
        iVar31 = ((uint)puVar3[-1] >> 5) + 1;
        iVar32 = (uint)((ulong)puVar3[-1] >> 0x25) + 1;
        iVar33 = ((uint)*puVar3 >> 5) + 1;
        iVar34 = (uint)((ulong)*puVar3 >> 0x25) + 1;
        iVar35 = ((uint)puVar3[1] >> 5) + 1;
        iVar36 = (uint)((ulong)puVar3[1] >> 0x25) + 1;
        iVar37 = ((uint)puVar3[2] >> 5) + 1;
        iVar38 = (uint)((ulong)puVar3[2] >> 0x25) + 1;
        iVar39 = ((uint)puVar3[3] >> 5) + 1;
        iVar40 = (uint)((ulong)puVar3[3] >> 0x25) + 1;
        puVar3[-3] = CONCAT44(iVar44,iVar43);
        puVar3[-4] = CONCAT44(iVar42,iVar41);
        puVar3[-1] = CONCAT44(iVar32,iVar31);
        puVar3[-2] = CONCAT44(iVar30,iVar29);
        puVar3[1] = CONCAT44(iVar36,iVar35);
        *puVar3 = CONCAT44(iVar34,iVar33);
        puVar3[3] = CONCAT44(iVar40,iVar39);
        puVar3[2] = CONCAT44(iVar38,iVar37);
        iVar9 = iVar41 + iVar9;
        iVar12 = iVar42 + iVar12;
        iVar13 = iVar43 + iVar13;
        iVar14 = iVar44 + iVar14;
        iVar15 = iVar29 + iVar15;
        iVar17 = iVar30 + iVar17;
        iVar19 = iVar31 + iVar19;
        iVar20 = iVar32 + iVar20;
        iVar21 = iVar33 + iVar21;
        iVar22 = iVar34 + iVar22;
        iVar23 = iVar35 + iVar23;
        iVar24 = iVar36 + iVar24;
        iVar25 = iVar37 + iVar25;
        iVar26 = iVar38 + iVar26;
        iVar27 = iVar39 + iVar27;
        iVar28 = iVar40 + iVar28;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 8;
      } while (lVar4 != 0);
      *(int *)(param_1 + 6) =
           iVar25 + iVar21 + iVar15 + iVar9 + iVar26 + iVar22 + iVar17 + iVar12 +
           iVar27 + iVar23 + iVar19 + iVar13 + iVar28 + iVar24 + iVar20 + iVar14;
    }
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    iVar9 = ((uint)*puVar3 >> 4) + 1;
    iVar12 = (uint)((ulong)*puVar3 >> 0x24) + 1;
    iVar13 = ((uint)puVar3[1] >> 4) + 1;
    iVar14 = (uint)((ulong)puVar3[1] >> 0x24) + 1;
    iVar15 = ((uint)puVar3[2] >> 4) + 1;
    iVar17 = (uint)((ulong)puVar3[2] >> 0x24) + 1;
    iVar19 = ((uint)puVar3[3] >> 4) + 1;
    iVar20 = (uint)((ulong)puVar3[3] >> 0x24) + 1;
    puVar3[1] = CONCAT44(iVar14,iVar13);
    *puVar3 = CONCAT44(iVar12,iVar9);
    puVar3[3] = CONCAT44(iVar20,iVar19);
    puVar3[2] = CONCAT44(iVar17,iVar15);
    iVar21 = ((uint)puVar3[4] >> 4) + 1;
    iVar22 = (uint)((ulong)puVar3[4] >> 0x24) + 1;
    iVar23 = ((uint)puVar3[5] >> 4) + 1;
    iVar24 = (uint)((ulong)puVar3[5] >> 0x24) + 1;
    iVar25 = ((uint)puVar3[6] >> 4) + 1;
    iVar26 = (uint)((ulong)puVar3[6] >> 0x24) + 1;
    iVar27 = ((uint)puVar3[7] >> 4) + 1;
    iVar28 = (uint)((ulong)puVar3[7] >> 0x24) + 1;
    puVar3[5] = CONCAT44(iVar24,iVar23);
    puVar3[4] = CONCAT44(iVar22,iVar21);
    puVar3[7] = CONCAT44(iVar28,iVar27);
    puVar3[6] = CONCAT44(iVar26,iVar25);
    iVar29 = ((uint)puVar3[8] >> 4) + 1;
    iVar30 = (uint)((ulong)puVar3[8] >> 0x24) + 1;
    iVar31 = ((uint)puVar3[9] >> 4) + 1;
    iVar32 = (uint)((ulong)puVar3[9] >> 0x24) + 1;
    iVar33 = ((uint)puVar3[10] >> 4) + 1;
    iVar34 = (uint)((ulong)puVar3[10] >> 0x24) + 1;
    iVar35 = ((uint)puVar3[0xb] >> 4) + 1;
    iVar36 = (uint)((ulong)puVar3[0xb] >> 0x24) + 1;
    puVar3[9] = CONCAT44(iVar32,iVar31);
    puVar3[8] = CONCAT44(iVar30,iVar29);
    puVar3[0xb] = CONCAT44(iVar36,iVar35);
    puVar3[10] = CONCAT44(iVar34,iVar33);
    iVar37 = ((uint)puVar3[0xc] >> 4) + 1;
    iVar38 = (uint)((ulong)puVar3[0xc] >> 0x24) + 1;
    iVar39 = ((uint)puVar3[0xd] >> 4) + 1;
    iVar40 = (uint)((ulong)puVar3[0xd] >> 0x24) + 1;
    iVar41 = ((uint)puVar3[0xe] >> 4) + 1;
    iVar42 = (uint)((ulong)puVar3[0xe] >> 0x24) + 1;
    iVar43 = ((uint)puVar3[0xf] >> 4) + 1;
    iVar44 = (uint)((ulong)puVar3[0xf] >> 0x24) + 1;
    puVar3[0xd] = CONCAT44(iVar40,iVar39);
    puVar3[0xc] = CONCAT44(iVar38,iVar37);
    puVar3[0xf] = CONCAT44(iVar44,iVar43);
    puVar3[0xe] = CONCAT44(iVar42,iVar41);
    iVar46 = ((uint)puVar3[0x10] >> 4) + 1;
    iVar48 = (uint)((ulong)puVar3[0x10] >> 0x24) + 1;
    iVar50 = ((uint)puVar3[0x11] >> 4) + 1;
    iVar52 = (uint)((ulong)puVar3[0x11] >> 0x24) + 1;
    puVar3[0x11] = CONCAT44(iVar52,iVar50);
    puVar3[0x10] = CONCAT44(iVar48,iVar46);
    *(int *)((long)param_1 + 0x34) =
         iVar46 + iVar29 + iVar37 + iVar21 + iVar41 + iVar25 + iVar33 + iVar15 + iVar9 +
         iVar48 + iVar30 + iVar38 + iVar22 + iVar42 + iVar26 + iVar34 + iVar17 + iVar12 +
         iVar50 + iVar31 + iVar39 + iVar23 + iVar43 + iVar27 + iVar35 + iVar19 + iVar13 +
         iVar52 + iVar32 + iVar40 + iVar24 + iVar44 + iVar28 + iVar36 + iVar20 + iVar14;
    iVar30 = ((uint)*puVar1 >> 4) + 1;
    iVar31 = (uint)((ulong)*puVar1 >> 0x24) + 1;
    iVar32 = ((uint)puVar1[1] >> 4) + 1;
    iVar33 = (uint)((ulong)puVar1[1] >> 0x24) + 1;
    iVar12 = ((uint)puVar1[2] >> 4) + 1;
    iVar13 = (uint)((ulong)puVar1[2] >> 0x24) + 1;
    iVar14 = ((uint)puVar1[3] >> 4) + 1;
    iVar15 = (uint)((ulong)puVar1[3] >> 0x24) + 1;
    iVar17 = ((uint)puVar1[4] >> 4) + 1;
    iVar19 = (uint)((ulong)puVar1[4] >> 0x24) + 1;
    iVar20 = ((uint)puVar1[5] >> 4) + 1;
    iVar21 = (uint)((ulong)puVar1[5] >> 0x24) + 1;
    iVar22 = ((uint)puVar1[6] >> 4) + 1;
    iVar23 = (uint)((ulong)puVar1[6] >> 0x24) + 1;
    iVar24 = ((uint)puVar1[7] >> 4) + 1;
    iVar25 = (uint)((ulong)puVar1[7] >> 0x24) + 1;
    puVar1[1] = CONCAT44(iVar33,iVar32);
    *puVar1 = CONCAT44(iVar31,iVar30);
    puVar1[3] = CONCAT44(iVar15,iVar14);
    puVar1[2] = CONCAT44(iVar13,iVar12);
    puVar1[5] = CONCAT44(iVar21,iVar20);
    puVar1[4] = CONCAT44(iVar19,iVar17);
    puVar1[7] = CONCAT44(iVar25,iVar24);
    puVar1[6] = CONCAT44(iVar23,iVar22);
    iVar48 = ((uint)puVar1[8] >> 4) + 1;
    iVar50 = (uint)((ulong)puVar1[8] >> 0x24) + 1;
    iVar52 = ((uint)puVar1[9] >> 4) + 1;
    iVar45 = (uint)((ulong)puVar1[9] >> 0x24) + 1;
    iVar26 = ((uint)puVar1[10] >> 4) + 1;
    iVar27 = (uint)((ulong)puVar1[10] >> 0x24) + 1;
    iVar28 = ((uint)puVar1[0xb] >> 4) + 1;
    iVar29 = (uint)((ulong)puVar1[0xb] >> 0x24) + 1;
    iVar34 = ((uint)puVar1[0xc] >> 4) + 1;
    iVar35 = (uint)((ulong)puVar1[0xc] >> 0x24) + 1;
    iVar36 = ((uint)puVar1[0xd] >> 4) + 1;
    iVar37 = (uint)((ulong)puVar1[0xd] >> 0x24) + 1;
    iVar38 = ((uint)puVar1[0xe] >> 4) + 1;
    iVar39 = (uint)((ulong)puVar1[0xe] >> 0x24) + 1;
    iVar40 = ((uint)puVar1[0xf] >> 4) + 1;
    iVar41 = (uint)((ulong)puVar1[0xf] >> 0x24) + 1;
    puVar1[9] = CONCAT44(iVar45,iVar52);
    puVar1[8] = CONCAT44(iVar50,iVar48);
    puVar1[0xb] = CONCAT44(iVar29,iVar28);
    puVar1[10] = CONCAT44(iVar27,iVar26);
    puVar1[0xd] = CONCAT44(iVar37,iVar36);
    puVar1[0xc] = CONCAT44(iVar35,iVar34);
    puVar1[0xf] = CONCAT44(iVar41,iVar40);
    puVar1[0xe] = CONCAT44(iVar39,iVar38);
    iVar58 = ((uint)puVar1[0x10] >> 4) + 1;
    iVar59 = (uint)((ulong)puVar1[0x10] >> 0x24) + 1;
    iVar60 = ((uint)puVar1[0x11] >> 4) + 1;
    iVar61 = (uint)((ulong)puVar1[0x11] >> 0x24) + 1;
    iVar42 = ((uint)puVar1[0x12] >> 4) + 1;
    iVar43 = (uint)((ulong)puVar1[0x12] >> 0x24) + 1;
    iVar44 = ((uint)puVar1[0x13] >> 4) + 1;
    iVar46 = (uint)((ulong)puVar1[0x13] >> 0x24) + 1;
    iVar47 = ((uint)puVar1[0x14] >> 4) + 1;
    iVar49 = (uint)((ulong)puVar1[0x14] >> 0x24) + 1;
    iVar51 = ((uint)puVar1[0x15] >> 4) + 1;
    iVar53 = (uint)((ulong)puVar1[0x15] >> 0x24) + 1;
    iVar54 = ((uint)puVar1[0x16] >> 4) + 1;
    iVar55 = (uint)((ulong)puVar1[0x16] >> 0x24) + 1;
    iVar56 = ((uint)puVar1[0x17] >> 4) + 1;
    iVar57 = (uint)((ulong)puVar1[0x17] >> 0x24) + 1;
    puVar1[0x11] = CONCAT44(iVar61,iVar60);
    puVar1[0x10] = CONCAT44(iVar59,iVar58);
    puVar1[0x13] = CONCAT44(iVar46,iVar44);
    puVar1[0x12] = CONCAT44(iVar43,iVar42);
    puVar1[0x15] = CONCAT44(iVar53,iVar51);
    puVar1[0x14] = CONCAT44(iVar49,iVar47);
    puVar1[0x17] = CONCAT44(iVar57,iVar56);
    puVar1[0x16] = CONCAT44(iVar55,iVar54);
    iVar62 = ((uint)puVar1[0x18] >> 4) + 1;
    iVar63 = (uint)((ulong)puVar1[0x18] >> 0x24) + 1;
    iVar64 = ((uint)puVar1[0x19] >> 4) + 1;
    iVar65 = (uint)((ulong)puVar1[0x19] >> 0x24) + 1;
    puVar1[0x19] = CONCAT44(iVar65,iVar64);
    puVar1[0x18] = CONCAT44(iVar63,iVar62);
    iVar9 = (*(uint *)(puVar1 + 0x1a) >> 4) + 1;
    *(int *)(puVar1 + 0x1a) = iVar9;
    *(int *)(param_1 + 7) =
         iVar9 + iVar62 + iVar54 + iVar38 + iVar22 +
                          iVar47 + iVar34 + iVar17 +
                          iVar42 + iVar26 + iVar12 + iVar58 + iVar48 + iVar30 +
                          iVar55 + iVar39 + iVar23 +
                          iVar49 + iVar35 + iVar19 +
                          iVar43 + iVar27 + iVar13 + iVar59 + iVar50 + iVar31 +
                          iVar56 + iVar40 + iVar24 +
                          iVar51 + iVar36 + iVar20 +
                          iVar44 + iVar28 + iVar14 + iVar60 + iVar52 + iVar32 +
                          iVar57 + iVar41 + iVar25 +
                          iVar53 + iVar37 + iVar21 +
                          iVar46 + iVar29 + iVar15 + iVar61 + iVar45 + iVar33 + iVar63 +
                 iVar64 + iVar65;
    puVar3 = (undefined8 *)param_1[3];
    iVar41 = ((uint)puVar3[0xe] >> 4) + 1;
    iVar42 = (uint)((ulong)puVar3[0xe] >> 0x24) + 1;
    iVar43 = ((uint)puVar3[0xf] >> 4) + 1;
    iVar44 = (uint)((ulong)puVar3[0xf] >> 0x24) + 1;
    iVar37 = ((uint)puVar3[0xc] >> 4) + 1;
    iVar38 = (uint)((ulong)puVar3[0xc] >> 0x24) + 1;
    iVar39 = ((uint)puVar3[0xd] >> 4) + 1;
    iVar40 = (uint)((ulong)puVar3[0xd] >> 0x24) + 1;
    iVar33 = ((uint)puVar3[10] >> 4) + 1;
    iVar34 = (uint)((ulong)puVar3[10] >> 0x24) + 1;
    iVar35 = ((uint)puVar3[0xb] >> 4) + 1;
    iVar36 = (uint)((ulong)puVar3[0xb] >> 0x24) + 1;
    iVar29 = ((uint)puVar3[8] >> 4) + 1;
    iVar30 = (uint)((ulong)puVar3[8] >> 0x24) + 1;
    iVar31 = ((uint)puVar3[9] >> 4) + 1;
    iVar32 = (uint)((ulong)puVar3[9] >> 0x24) + 1;
    iVar25 = ((uint)puVar3[6] >> 4) + 1;
    iVar26 = (uint)((ulong)puVar3[6] >> 0x24) + 1;
    iVar27 = ((uint)puVar3[7] >> 4) + 1;
    iVar28 = (uint)((ulong)puVar3[7] >> 0x24) + 1;
    iVar21 = ((uint)puVar3[4] >> 4) + 1;
    iVar22 = (uint)((ulong)puVar3[4] >> 0x24) + 1;
    iVar23 = ((uint)puVar3[5] >> 4) + 1;
    iVar24 = (uint)((ulong)puVar3[5] >> 0x24) + 1;
    iVar15 = ((uint)puVar3[2] >> 4) + 1;
    iVar17 = (uint)((ulong)puVar3[2] >> 0x24) + 1;
    iVar19 = ((uint)puVar3[3] >> 4) + 1;
    iVar20 = (uint)((ulong)puVar3[3] >> 0x24) + 1;
    iVar9 = ((uint)*puVar3 >> 4) + 1;
    iVar12 = (uint)((ulong)*puVar3 >> 0x24) + 1;
    iVar13 = ((uint)puVar3[1] >> 4) + 1;
    iVar14 = (uint)((ulong)puVar3[1] >> 0x24) + 1;
    puVar3[1] = CONCAT44(iVar14,iVar13);
    *puVar3 = CONCAT44(iVar12,iVar9);
    puVar3[3] = CONCAT44(iVar20,iVar19);
    puVar3[2] = CONCAT44(iVar17,iVar15);
    puVar3[5] = CONCAT44(iVar24,iVar23);
    puVar3[4] = CONCAT44(iVar22,iVar21);
    puVar3[7] = CONCAT44(iVar28,iVar27);
    puVar3[6] = CONCAT44(iVar26,iVar25);
    puVar3[9] = CONCAT44(iVar32,iVar31);
    puVar3[8] = CONCAT44(iVar30,iVar29);
    puVar3[0xb] = CONCAT44(iVar36,iVar35);
    puVar3[10] = CONCAT44(iVar34,iVar33);
    puVar3[0xd] = CONCAT44(iVar40,iVar39);
    puVar3[0xc] = CONCAT44(iVar38,iVar37);
    puVar3[0xf] = CONCAT44(iVar44,iVar43);
    puVar3[0xe] = CONCAT44(iVar42,iVar41);
    iVar9 = iVar9 + iVar29 + iVar21 + iVar37 + iVar15 + iVar33 + iVar25 + iVar41 +
            iVar12 + iVar30 + iVar22 + iVar38 + iVar17 + iVar34 + iVar26 + iVar42 +
            iVar13 + iVar31 + iVar23 + iVar39 + iVar19 + iVar35 + iVar27 + iVar43 +
            iVar14 + iVar32 + iVar24 + iVar40 + iVar20 + iVar36 + iVar28 + iVar44;
  }
  *(int *)((long)param_1 + 0x3c) = iVar9;
  iVar12 = (int)param_1[0xc];
joined_r0x000100705a08:
  if (iVar12 != 2) {
    iVar12 = (int)param_1[6] + 1;
    uVar5 = (uint)LZCOUNT(iVar12);
    uVar16 = uVar5 ^ 0x1f;
    uVar5 = uVar5 << 8 ^ 0x1f00;
    if (param_4 != 0) {
      uVar5 = ((uint)(iVar12 * 0x100) >> (ulong)(uVar16 & 0x1f)) + uVar16 * 0x100;
    }
    *(uint *)(param_1 + 8) = uVar5;
  }
  iVar12 = *(int *)((long)param_1 + 0x34) + 1;
  uVar5 = (uint)LZCOUNT(iVar12);
  if (param_4 == 0) {
    uVar5 = uVar5 << 8 ^ 0x1f00;
    uVar11 = (ulong)CONCAT15((char)LZCOUNT(iVar9 + 1),
                             (uint5)(uint3)LZCOUNT((int)param_1[7] + 1) << 8) ^ 0x1f0000001f00;
  }
  else {
    uVar5 = uVar5 ^ 0x1f;
    uVar5 = ((uint)(iVar12 * 0x100) >> (ulong)(uVar5 & 0x1f)) + uVar5 * 0x100;
    iVar12 = (int)param_1[7] + 1;
    uVar16 = (uint)(byte)((byte)LZCOUNT(iVar12) ^ 0x1f);
    uVar18 = (uint)(byte)((byte)LZCOUNT(iVar9 + 1) ^ 0x1f);
    uVar10 = NEON_ushl(CONCAT44((iVar9 + 1) * 0x100,iVar12 * 0x100),CONCAT44(-uVar18,-uVar16),4);
    uVar11 = CONCAT44(uVar18 * 0x100 + (int)((ulong)uVar10 >> 0x20),uVar16 * 0x100 + (int)uVar10);
  }
  *(uint *)((long)param_1 + 0x44) = uVar5;
  param_1[9] = uVar11;
  return;
}

