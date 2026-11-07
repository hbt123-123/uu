// rea decompile_all
// name: FUN_1006be594
// address: 0x1006be594
// body: available
// range: 0x1006be594-0x1006c199b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006be594(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  ulong *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  int *piVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  ulong uVar31;
  char *pcVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong uVar39;
  ulong *puVar40;
  ulong *puVar41;
  ulong *puVar42;
  undefined8 *puVar43;
  ulong *puVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  
  iVar6 = *(int *)(param_1 + 200);
  lVar33 = *(long *)(param_1 + 0x30);
  lVar34 = *(long *)(param_1 + 0x40);
  lVar36 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)((long)param_4 + param_5);
  iVar35 = (int)lVar36;
  iVar9 = (int)puVar2 - iVar35;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar4 = iVar9 - uVar7;
  if (iVar9 - *(uint *)(param_1 + 0x18) <= uVar7) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  puVar38 = puVar2 + -1;
  uVar5 = *param_3;
  uVar7 = param_3[1];
  pcVar3 = (char *)(lVar36 + (ulong)uVar4);
  puVar26 = param_4;
  if ((int)param_4 == (int)pcVar3) {
    puVar26 = (ulong *)((long)param_4 + 1);
  }
  uVar10 = (int)puVar26 - (int)pcVar3;
  uVar20 = 0;
  if (uVar7 <= uVar10) {
    uVar20 = uVar7;
  }
  uVar21 = (ulong)uVar20;
  uVar18 = 0;
  if (uVar5 <= uVar10) {
    uVar18 = uVar5;
  }
  uVar19 = (ulong)uVar18;
  if (iVar6 == 5) {
    if (puVar26 < puVar38) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar39 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      puVar40 = (ulong *)((long)puVar2 - 7);
      puVar41 = (ulong *)((long)puVar2 - 3);
      puVar42 = (ulong *)((long)puVar2 - 1);
      puVar37 = puVar2 + -4;
      lVar23 = lVar36 + -1;
      do {
        uVar13 = *puVar26;
        uVar24 = uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
        uVar16 = uVar13 * -0x30e4432345000000 >> (uVar39 & 0x3f);
        iVar6 = (int)puVar26 - iVar35;
        uVar20 = *(uint *)(lVar33 + uVar24 * 4);
        uVar31 = (ulong)uVar20;
        uVar18 = *(uint *)(lVar34 + uVar16 * 4);
        uVar25 = (ulong)uVar18;
        *(int *)(lVar34 + uVar16 * 4) = iVar6;
        *(int *)(lVar33 + uVar24 * 4) = iVar6;
        puVar44 = (ulong *)((long)puVar26 + 1);
        if (((int)uVar19 == 0) ||
           (*(int *)((long)puVar44 - (uVar19 & 0xffffffff)) != *(int *)puVar44)) {
          if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar31), *puVar27 == uVar13)) {
            puVar44 = puVar26 + 1;
            puVar22 = puVar27 + 1;
            puVar15 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar22 == *puVar44) {
                lVar17 = 0;
                puVar15 = puVar26 + 2;
                puVar22 = (ulong *)(lVar36 + 0x10 + uVar31);
                do {
                  if (puVar40 <= puVar15) goto LAB_1006c045c;
                  uVar21 = *puVar22;
                  uVar13 = *puVar15;
                  lVar17 = lVar17 + 8;
                  puVar15 = puVar15 + 1;
                  puVar22 = puVar22 + 1;
                } while (uVar21 == uVar13);
                uVar13 = uVar13 ^ uVar21;
                uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar44 ^ *puVar22;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 8;
            }
            else {
LAB_1006c045c:
              if (puVar15 < puVar41) {
                if ((int)*puVar22 == (int)*puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 4);
                  puVar22 = (ulong *)((long)puVar22 + 4);
                }
              }
              if (puVar15 < puVar42) {
                if (*(short *)puVar22 == *(short *)puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 2);
                  puVar22 = (ulong *)((long)puVar22 + 2);
                }
              }
              if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
              lVar17 = (long)puVar15 + (8 - (long)puVar44);
            }
            uVar13 = (long)puVar26 - (long)puVar27;
            if (param_4 < puVar26) {
              pcVar32 = (char *)(lVar23 + uVar31);
              puVar26 = (ulong *)((long)puVar26 + -1);
              do {
                if ((char)*puVar26 != *pcVar32) {
                  uVar21 = ((long)puVar26 + 1) - (long)param_4;
                  puVar27 = (ulong *)param_2[3];
                  puVar44 = (ulong *)((long)puVar26 + 1);
                  goto joined_r0x0001006c05fc;
                }
                lVar17 = lVar17 + 1;
                puVar44 = (ulong *)((long)puVar26 + -1);
              } while ((pcVar3 < pcVar32) &&
                      (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar44, bVar1))
              ;
              goto LAB_1006c06d4;
            }
LAB_1006c06ec:
            uVar21 = (long)puVar26 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            puVar44 = puVar26;
joined_r0x0001006c05fc:
            if (puVar37 < puVar44) goto LAB_1006c0860;
LAB_1006c0700:
            uVar16 = *param_4;
            puVar27[1] = param_4[1];
            *puVar27 = uVar16;
            lVar14 = param_2[3];
            if (uVar21 < 0x11) {
              param_2[3] = lVar14 + uVar21;
              piVar28 = (int *)param_2[1];
            }
            else {
              uVar16 = param_4[2];
              *(ulong *)(lVar14 + 0x18) = param_4[3];
              *(ulong *)(lVar14 + 0x10) = uVar16;
              uVar16 = param_4[4];
              *(ulong *)(lVar14 + 0x28) = param_4[5];
              *(ulong *)(lVar14 + 0x20) = uVar16;
              if (0x30 < (long)uVar21) {
                puVar26 = (ulong *)(lVar14 + 0x30);
                puVar27 = param_4 + 8;
                do {
                  uVar16 = puVar27[-2];
                  puVar26[1] = puVar27[-1];
                  *puVar26 = uVar16;
                  uVar16 = *puVar27;
                  puVar26[3] = puVar27[1];
                  puVar26[2] = uVar16;
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar26 < (ulong *)(lVar14 + uVar21));
              }
LAB_1006c0c34:
              param_2[3] = param_2[3] + uVar21;
              piVar28 = (int *)param_2[1];
              if (0xffff < uVar21) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
              }
            }
            uVar16 = lVar17 - 3;
            *(short *)(piVar28 + 1) = (short)uVar21;
            *piVar28 = (int)uVar13 + 3;
            uVar21 = uVar19;
            if (0xffff < uVar16) goto LAB_1006c09dc;
            goto LAB_1006c09f4;
          }
          if ((uVar4 < uVar18) && (piVar28 = (int *)(lVar36 + uVar25), *piVar28 == (int)*puVar26)) {
            uVar21 = *puVar44;
            uVar13 = uVar21 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar20 = *(uint *)(lVar33 + uVar13 * 4);
            uVar16 = (ulong)uVar20;
            *(int *)(lVar33 + uVar13 * 4) = iVar6 + 1;
            if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar16), *puVar27 == uVar21)) {
              puVar22 = (ulong *)((long)puVar26 + 9);
              puVar15 = puVar27 + 1;
              puVar30 = puVar22;
              if (puVar22 < puVar40) {
                if (*puVar15 == *puVar22) {
                  lVar17 = 0;
                  puVar30 = (ulong *)((long)puVar26 + 0x11);
                  puVar15 = (ulong *)(lVar36 + 0x10 + uVar16);
                  do {
                    if (puVar40 <= puVar30) goto joined_r0x0001006c0770;
                    uVar21 = *puVar15;
                    uVar13 = *puVar30;
                    lVar17 = lVar17 + 8;
                    puVar30 = puVar30 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar21 == uVar13);
                  uVar13 = uVar13 ^ uVar21;
                  uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                }
                else {
                  uVar21 = *puVar22 ^ *puVar15;
                  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                }
                lVar17 = uVar21 + 8;
              }
              else {
joined_r0x0001006c0770:
                if (puVar30 < puVar41) {
                  if ((int)*puVar15 == (int)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar30 < puVar42) {
                  if ((short)*puVar15 == (short)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar30 < puVar2) && ((char)*puVar15 == (char)*puVar30)) {
                  puVar30 = (ulong *)((long)puVar30 + 1);
                }
                lVar17 = (long)puVar30 + (8 - (long)puVar22);
              }
              uVar13 = (long)puVar44 - (long)puVar27;
              if (param_4 < puVar44) {
                pcVar32 = (char *)(lVar23 + uVar16);
                do {
                  if ((char)*puVar26 != *pcVar32) {
                    puVar44 = (ulong *)((long)puVar26 + 1);
                    uVar21 = (long)puVar44 - (long)param_4;
                    puVar27 = (ulong *)param_2[3];
                    goto joined_r0x0001006c05fc;
                  }
                  lVar17 = lVar17 + 1;
                  puVar27 = (ulong *)((long)puVar26 + -1);
                } while ((pcVar3 < pcVar32) &&
                        (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar27, bVar1
                        ));
LAB_1006c084c:
                puVar44 = (ulong *)((long)puVar27 + 1);
              }
              uVar21 = (long)puVar44 - (long)param_4;
              puVar27 = (ulong *)param_2[3];
              goto joined_r0x0001006c05fc;
            }
            puVar44 = (ulong *)((long)puVar26 + 4);
            puVar27 = (ulong *)(piVar28 + 1);
            puVar22 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar27 == *puVar44) {
                lVar17 = 0;
                puVar22 = (ulong *)((long)puVar26 + 0xc);
                puVar27 = (ulong *)(lVar36 + 0xc + uVar25);
                do {
                  if (puVar40 <= puVar22) goto LAB_1006c04fc;
                  uVar21 = *puVar27;
                  uVar13 = *puVar22;
                  lVar17 = lVar17 + 8;
                  puVar22 = puVar22 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar21 == uVar13);
                uVar13 = uVar13 ^ uVar21;
                uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar44 ^ *puVar27;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 4;
            }
            else {
LAB_1006c04fc:
              if (puVar22 < puVar41) {
                if ((int)*puVar27 == (int)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar22 < puVar42) {
                if (*(short *)puVar27 == *(short *)puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 1);
              }
              lVar17 = (long)puVar22 + (4 - (long)puVar44);
            }
            uVar13 = (long)puVar26 - (long)piVar28;
            if (puVar26 <= param_4) goto LAB_1006c06ec;
            pcVar32 = (char *)(lVar23 + uVar25);
            puVar27 = (ulong *)((long)puVar26 + -1);
            do {
              if ((char)*puVar27 != *pcVar32) goto LAB_1006c084c;
              lVar17 = lVar17 + 1;
              puVar44 = (ulong *)((long)puVar27 + -1);
            } while ((pcVar3 < pcVar32) &&
                    (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar27, puVar27 = puVar44, bVar1));
LAB_1006c06d4:
            puVar44 = (ulong *)((long)puVar44 + 1);
            uVar21 = (long)puVar44 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            if (puVar44 <= puVar37) goto LAB_1006c0700;
LAB_1006c0860:
            puVar22 = puVar27;
            puVar26 = param_4;
            if (param_4 <= puVar37) {
              puVar22 = (ulong *)((long)puVar27 + ((long)puVar37 - (long)param_4));
              uVar16 = *param_4;
              puVar27[1] = param_4[1];
              *puVar27 = uVar16;
              uVar16 = param_4[2];
              puVar27[3] = param_4[3];
              puVar27[2] = uVar16;
              puVar26 = puVar37;
              if (0x20 < (long)puVar37 - (long)param_4) {
                puVar27 = puVar27 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar16 = puVar15[-2];
                  puVar27[1] = puVar15[-1];
                  *puVar27 = uVar16;
                  uVar16 = *puVar15;
                  puVar27[3] = puVar15[1];
                  puVar27[2] = uVar16;
                  puVar27 = puVar27 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar27 < puVar22);
              }
            }
            if (puVar26 < puVar44) {
              uVar16 = (long)puVar44 - (long)puVar26;
              if ((7 < uVar16) && (0x3f < (ulong)((long)puVar22 - (long)puVar26))) {
                if (uVar16 < 0x40) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = uVar16 & 0xffffffffffffffc0;
                  puVar27 = puVar22 + 4;
                  puVar15 = puVar26 + 4;
                  uVar24 = uVar25;
                  do {
                    uVar31 = puVar15[-4];
                    uVar46 = puVar15[-1];
                    uVar45 = puVar15[-2];
                    uVar48 = puVar15[1];
                    uVar47 = *puVar15;
                    uVar50 = puVar15[3];
                    uVar49 = puVar15[2];
                    puVar27[-3] = puVar15[-3];
                    puVar27[-4] = uVar31;
                    puVar27[-1] = uVar46;
                    puVar27[-2] = uVar45;
                    puVar27[1] = uVar48;
                    *puVar27 = uVar47;
                    puVar27[3] = uVar50;
                    puVar27[2] = uVar49;
                    uVar24 = uVar24 - 0x40;
                    puVar27 = puVar27 + 8;
                    puVar15 = puVar15 + 8;
                  } while (uVar24 != 0);
                  if (uVar16 == uVar25) goto LAB_1006c0c34;
                  if ((uVar16 & 0x38) == 0) {
                    puVar26 = (ulong *)((long)puVar26 + uVar25);
                    puVar22 = (ulong *)((long)puVar22 + uVar25);
                    goto LAB_1006c0c24;
                  }
                }
                uVar24 = uVar16 & 0xfffffffffffffff8;
                lVar14 = uVar25 - uVar24;
                puVar29 = (undefined8 *)((long)puVar22 + uVar25);
                puVar43 = (undefined8 *)((long)puVar26 + uVar25);
                do {
                  *puVar29 = *puVar43;
                  lVar14 = lVar14 + 8;
                  puVar29 = puVar29 + 1;
                  puVar43 = puVar43 + 1;
                } while (lVar14 != 0);
                puVar26 = (ulong *)((long)puVar26 + uVar24);
                puVar22 = (ulong *)((long)puVar22 + uVar24);
                if (uVar16 == uVar24) goto LAB_1006c0c34;
              }
LAB_1006c0c24:
              do {
                puVar27 = (ulong *)((long)puVar26 + 1);
                *(char *)puVar22 = (char)*puVar26;
                puVar26 = puVar27;
                puVar22 = (ulong *)((long)puVar22 + 1);
              } while (puVar27 != puVar44);
            }
            goto LAB_1006c0c34;
          }
          puVar26 = (ulong *)((long)puVar26 + ((long)puVar26 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar27 = (ulong *)((long)puVar26 + 5);
          lVar17 = -(uVar19 & 0xffffffff);
          puVar22 = (ulong *)((long)puVar27 + lVar17);
          puVar15 = puVar27;
          if (puVar27 < puVar40) {
            if (*puVar22 == *puVar27) {
              lVar14 = 0;
              puVar15 = (ulong *)((long)puVar26 + 0xd);
              puVar22 = (ulong *)((long)puVar26 + 0xd + lVar17);
              do {
                if (puVar40 <= puVar15) goto LAB_1006c0250;
                uVar13 = *puVar22;
                uVar16 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar15 = puVar15 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar13 == uVar16);
              uVar16 = uVar16 ^ uVar13;
              uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
              puVar26 = (ulong *)param_2[3];
            }
            else {
              uVar13 = *puVar27 ^ *puVar22;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              puVar26 = (ulong *)param_2[3];
            }
            uVar13 = (long)puVar44 - (long)param_4;
            if (puVar37 < puVar44) goto LAB_1006c02ac;
LAB_1006c0380:
            uVar24 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar24;
            lVar17 = param_2[3];
            if (0x10 < uVar13) {
              uVar24 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar24;
              uVar24 = param_4[4];
              *(ulong *)(lVar17 + 0x28) = param_4[5];
              *(ulong *)(lVar17 + 0x20) = uVar24;
              if (0x30 < (long)uVar13) {
                puVar26 = (ulong *)(lVar17 + 0x30);
                puVar27 = param_4 + 8;
                do {
                  uVar24 = puVar27[-2];
                  puVar26[1] = puVar27[-1];
                  *puVar26 = uVar24;
                  uVar24 = *puVar27;
                  puVar26[3] = puVar27[1];
                  puVar26[2] = uVar24;
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar26 < (ulong *)(lVar17 + uVar13));
              }
              goto LAB_1006c0998;
            }
            param_2[3] = lVar17 + uVar13;
            piVar28 = (int *)param_2[1];
          }
          else {
LAB_1006c0250:
            if (puVar15 < puVar41) {
              if ((int)*puVar22 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar15 < puVar42) {
              if (*(short *)puVar22 == *(short *)puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar16 = (long)puVar15 - (long)puVar27;
            uVar13 = (long)puVar44 - (long)param_4;
            puVar26 = (ulong *)param_2[3];
            if (puVar44 <= puVar37) goto LAB_1006c0380;
LAB_1006c02ac:
            puVar22 = puVar26;
            puVar27 = param_4;
            if (param_4 <= puVar37) {
              puVar22 = (ulong *)((long)puVar26 + ((long)puVar37 - (long)param_4));
              uVar24 = *param_4;
              puVar26[1] = param_4[1];
              *puVar26 = uVar24;
              uVar24 = param_4[2];
              puVar26[3] = param_4[3];
              puVar26[2] = uVar24;
              puVar27 = puVar37;
              if (0x20 < (long)puVar37 - (long)param_4) {
                puVar26 = puVar26 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar24 = puVar15[-2];
                  puVar26[1] = puVar15[-1];
                  *puVar26 = uVar24;
                  uVar24 = *puVar15;
                  puVar26[3] = puVar15[1];
                  puVar26[2] = uVar24;
                  puVar26 = puVar26 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar26 < puVar22);
              }
            }
            if (puVar27 < puVar44) {
              uVar24 = (long)puVar44 - (long)puVar27;
              if ((7 < uVar24) && (0x3f < (ulong)((long)puVar22 - (long)puVar27))) {
                if (uVar24 < 0x40) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = uVar24 & 0xffffffffffffffc0;
                  puVar26 = puVar22 + 4;
                  puVar15 = puVar27 + 4;
                  uVar25 = uVar31;
                  do {
                    uVar45 = puVar15[-4];
                    uVar47 = puVar15[-1];
                    uVar46 = puVar15[-2];
                    uVar49 = puVar15[1];
                    uVar48 = *puVar15;
                    uVar51 = puVar15[3];
                    uVar50 = puVar15[2];
                    puVar26[-3] = puVar15[-3];
                    puVar26[-4] = uVar45;
                    puVar26[-1] = uVar47;
                    puVar26[-2] = uVar46;
                    puVar26[1] = uVar49;
                    *puVar26 = uVar48;
                    puVar26[3] = uVar51;
                    puVar26[2] = uVar50;
                    uVar25 = uVar25 - 0x40;
                    puVar26 = puVar26 + 8;
                    puVar15 = puVar15 + 8;
                  } while (uVar25 != 0);
                  if (uVar24 == uVar31) goto LAB_1006c0998;
                  if ((uVar24 & 0x38) == 0) {
                    puVar27 = (ulong *)((long)puVar27 + uVar31);
                    puVar22 = (ulong *)((long)puVar22 + uVar31);
                    goto LAB_1006c0988;
                  }
                }
                uVar25 = uVar24 & 0xfffffffffffffff8;
                lVar17 = uVar31 - uVar25;
                puVar29 = (undefined8 *)((long)puVar22 + uVar31);
                puVar43 = (undefined8 *)((long)puVar27 + uVar31);
                do {
                  *puVar29 = *puVar43;
                  lVar17 = lVar17 + 8;
                  puVar29 = puVar29 + 1;
                  puVar43 = puVar43 + 1;
                } while (lVar17 != 0);
                puVar27 = (ulong *)((long)puVar27 + uVar25);
                puVar22 = (ulong *)((long)puVar22 + uVar25);
                if (uVar24 == uVar25) goto LAB_1006c0998;
              }
LAB_1006c0988:
              do {
                puVar26 = (ulong *)((long)puVar27 + 1);
                *(char *)puVar22 = (char)*puVar27;
                puVar27 = puVar26;
                puVar22 = (ulong *)((long)puVar22 + 1);
              } while (puVar26 != puVar44);
            }
LAB_1006c0998:
            param_2[3] = param_2[3] + uVar13;
            piVar28 = (int *)param_2[1];
            if (0xffff < uVar13) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
            }
          }
          lVar17 = uVar16 + 4;
          uVar16 = uVar16 + 1;
          *(short *)(piVar28 + 1) = (short)uVar13;
          *piVar28 = 1;
          uVar13 = uVar19;
          if (uVar16 >> 0x10 != 0) {
LAB_1006c09dc:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
          }
LAB_1006c09f4:
          *(short *)((long)piVar28 + 6) = (short)uVar16;
          piVar28 = piVar28 + 2;
          param_2[1] = (long)piVar28;
          puVar26 = (ulong *)((long)puVar44 + lVar17);
          uVar19 = uVar13;
          param_4 = puVar26;
          if (puVar26 <= puVar38) {
            uVar20 = iVar6 + 2;
            lVar17 = *(long *)(lVar36 + (ulong)uVar20);
            *(uint *)(lVar33 + ((ulong)(lVar17 * -0x30e44323485a9b9d) >> (uVar12 & 0x3f)) * 4) =
                 uVar20;
            *(int *)(lVar33 + ((ulong)(*(long *)((long)puVar26 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 2U) - iVar35;
            *(uint *)(lVar34 + ((ulong)(lVar17 * -0x30e4432345000000) >> (uVar39 & 0x3f)) * 4) =
                 uVar20;
            *(int *)(lVar34 + ((ulong)(*(long *)((long)puVar26 - 1U) * -0x30e4432345000000) >>
                              (uVar39 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 1U) - iVar35;
            do {
              uVar16 = uVar13;
              uVar19 = uVar16;
              param_4 = puVar26;
              if (((int)uVar21 == 0) ||
                 ((int)*puVar26 != *(int *)((long)puVar26 - (uVar21 & 0xffffffff)))) break;
              puVar44 = (ulong *)((long)puVar26 + 4);
              lVar17 = -(uVar21 & 0xffffffff);
              puVar27 = (ulong *)((long)puVar44 + lVar17);
              puVar22 = puVar44;
              if (puVar44 < puVar40) {
                if (*puVar27 == *puVar44) {
                  lVar14 = 0;
                  puVar27 = (ulong *)((long)puVar26 + 0xc + lVar17);
                  puVar22 = (ulong *)((long)puVar26 + 0xc);
                  do {
                    if (puVar40 <= puVar22) goto LAB_1006c0b18;
                    uVar19 = *puVar27;
                    uVar13 = *puVar22;
                    lVar14 = lVar14 + 8;
                    puVar27 = puVar27 + 1;
                    puVar22 = puVar22 + 1;
                  } while (uVar19 == uVar13);
                  uVar13 = uVar13 ^ uVar19;
                  uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = lVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
                }
                else {
                  uVar19 = *puVar44 ^ *puVar27;
                  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
                }
              }
              else {
LAB_1006c0b18:
                if (puVar22 < puVar41) {
                  if ((int)*puVar27 == (int)*puVar22) {
                    puVar27 = (ulong *)((long)puVar27 + 4);
                    puVar22 = (ulong *)((long)puVar22 + 4);
                  }
                }
                if (puVar22 < puVar42) {
                  if (*(short *)puVar27 == *(short *)puVar22) {
                    puVar27 = (ulong *)((long)puVar27 + 2);
                    puVar22 = (ulong *)((long)puVar22 + 2);
                  }
                }
                if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                  puVar22 = (ulong *)((long)puVar22 + 1);
                }
                uVar19 = (long)puVar22 - (long)puVar44;
              }
              iVar6 = (int)puVar26 - iVar35;
              uVar13 = *puVar26;
              *(int *)(lVar34 + (uVar13 * -0x30e4432345000000 >> (uVar39 & 0x3f)) * 4) = iVar6;
              *(int *)(lVar33 + (uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
              if (puVar26 <= puVar37) {
                puVar44 = (ulong *)param_2[3];
                uVar13 = *puVar26;
                puVar44[1] = puVar26[1];
                *puVar44 = uVar13;
                piVar28 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar28 + 1) = 0;
              *piVar28 = 1;
              if (0xffff < uVar19 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
              }
              *(short *)((long)piVar28 + 6) = (short)(uVar19 + 1);
              piVar28 = piVar28 + 2;
              param_2[1] = (long)piVar28;
              puVar26 = (ulong *)((long)puVar26 + uVar19 + 4);
              uVar13 = uVar21;
              uVar19 = uVar21;
              uVar21 = uVar16;
              param_4 = puVar26;
            } while (puVar26 <= puVar38);
          }
        }
        uVar20 = (uint)uVar21;
        uVar18 = (uint)uVar19;
      } while (puVar26 < puVar38);
    }
  }
  else if (iVar6 == 6) {
    if (puVar26 < puVar38) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar39 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      puVar40 = (ulong *)((long)puVar2 - 7);
      puVar41 = (ulong *)((long)puVar2 - 3);
      puVar42 = (ulong *)((long)puVar2 - 1);
      puVar37 = puVar2 + -4;
      lVar23 = lVar36 + -1;
      do {
        uVar13 = *puVar26;
        uVar24 = uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
        uVar16 = uVar13 * -0x30e4432340650000 >> (uVar39 & 0x3f);
        iVar6 = (int)puVar26 - iVar35;
        uVar20 = *(uint *)(lVar33 + uVar24 * 4);
        uVar31 = (ulong)uVar20;
        uVar18 = *(uint *)(lVar34 + uVar16 * 4);
        uVar25 = (ulong)uVar18;
        *(int *)(lVar34 + uVar16 * 4) = iVar6;
        *(int *)(lVar33 + uVar24 * 4) = iVar6;
        puVar44 = (ulong *)((long)puVar26 + 1);
        if (((int)uVar19 == 0) ||
           (*(int *)((long)puVar44 - (uVar19 & 0xffffffff)) != *(int *)puVar44)) {
          if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar31), *puVar27 == uVar13)) {
            puVar44 = puVar26 + 1;
            puVar22 = puVar27 + 1;
            puVar15 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar22 == *puVar44) {
                lVar17 = 0;
                puVar15 = puVar26 + 2;
                puVar22 = (ulong *)(lVar36 + 0x10 + uVar31);
                do {
                  if (puVar40 <= puVar15) goto LAB_1006bf798;
                  uVar21 = *puVar22;
                  uVar13 = *puVar15;
                  lVar17 = lVar17 + 8;
                  puVar15 = puVar15 + 1;
                  puVar22 = puVar22 + 1;
                } while (uVar21 == uVar13);
                uVar13 = uVar13 ^ uVar21;
                uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar44 ^ *puVar22;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 8;
            }
            else {
LAB_1006bf798:
              if (puVar15 < puVar41) {
                if ((int)*puVar22 == (int)*puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 4);
                  puVar22 = (ulong *)((long)puVar22 + 4);
                }
              }
              if (puVar15 < puVar42) {
                if (*(short *)puVar22 == *(short *)puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 2);
                  puVar22 = (ulong *)((long)puVar22 + 2);
                }
              }
              if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
              lVar17 = (long)puVar15 + (8 - (long)puVar44);
            }
            uVar13 = (long)puVar26 - (long)puVar27;
            if (param_4 < puVar26) {
              pcVar32 = (char *)(lVar23 + uVar31);
              puVar26 = (ulong *)((long)puVar26 + -1);
              do {
                if ((char)*puVar26 != *pcVar32) {
                  uVar21 = ((long)puVar26 + 1) - (long)param_4;
                  puVar27 = (ulong *)param_2[3];
                  puVar44 = (ulong *)((long)puVar26 + 1);
                  goto joined_r0x0001006bf938;
                }
                lVar17 = lVar17 + 1;
                puVar44 = (ulong *)((long)puVar26 + -1);
              } while ((pcVar3 < pcVar32) &&
                      (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar44, bVar1))
              ;
              goto LAB_1006bfa10;
            }
LAB_1006bfa28:
            uVar21 = (long)puVar26 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            puVar44 = puVar26;
joined_r0x0001006bf938:
            if (puVar37 < puVar44) goto LAB_1006bfb9c;
LAB_1006bfa3c:
            uVar16 = *param_4;
            puVar27[1] = param_4[1];
            *puVar27 = uVar16;
            lVar14 = param_2[3];
            if (uVar21 < 0x11) {
              param_2[3] = lVar14 + uVar21;
              piVar28 = (int *)param_2[1];
            }
            else {
              uVar16 = param_4[2];
              *(ulong *)(lVar14 + 0x18) = param_4[3];
              *(ulong *)(lVar14 + 0x10) = uVar16;
              uVar16 = param_4[4];
              *(ulong *)(lVar14 + 0x28) = param_4[5];
              *(ulong *)(lVar14 + 0x20) = uVar16;
              if (0x30 < (long)uVar21) {
                puVar26 = (ulong *)(lVar14 + 0x30);
                puVar27 = param_4 + 8;
                do {
                  uVar16 = puVar27[-2];
                  puVar26[1] = puVar27[-1];
                  *puVar26 = uVar16;
                  uVar16 = *puVar27;
                  puVar26[3] = puVar27[1];
                  puVar26[2] = uVar16;
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar26 < (ulong *)(lVar14 + uVar21));
              }
LAB_1006bff70:
              param_2[3] = param_2[3] + uVar21;
              piVar28 = (int *)param_2[1];
              if (0xffff < uVar21) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
              }
            }
            uVar16 = lVar17 - 3;
            *(short *)(piVar28 + 1) = (short)uVar21;
            *piVar28 = (int)uVar13 + 3;
            uVar21 = uVar19;
            if (0xffff < uVar16) goto LAB_1006bfd18;
            goto LAB_1006bfd30;
          }
          if ((uVar4 < uVar18) && (piVar28 = (int *)(lVar36 + uVar25), *piVar28 == (int)*puVar26)) {
            uVar21 = *puVar44;
            uVar13 = uVar21 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar20 = *(uint *)(lVar33 + uVar13 * 4);
            uVar16 = (ulong)uVar20;
            *(int *)(lVar33 + uVar13 * 4) = iVar6 + 1;
            if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar16), *puVar27 == uVar21)) {
              puVar22 = (ulong *)((long)puVar26 + 9);
              puVar15 = puVar27 + 1;
              puVar30 = puVar22;
              if (puVar22 < puVar40) {
                if (*puVar15 == *puVar22) {
                  lVar17 = 0;
                  puVar30 = (ulong *)((long)puVar26 + 0x11);
                  puVar15 = (ulong *)(lVar36 + 0x10 + uVar16);
                  do {
                    if (puVar40 <= puVar30) goto joined_r0x0001006bfaac;
                    uVar21 = *puVar15;
                    uVar13 = *puVar30;
                    lVar17 = lVar17 + 8;
                    puVar30 = puVar30 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar21 == uVar13);
                  uVar13 = uVar13 ^ uVar21;
                  uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                }
                else {
                  uVar21 = *puVar22 ^ *puVar15;
                  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                }
                lVar17 = uVar21 + 8;
              }
              else {
joined_r0x0001006bfaac:
                if (puVar30 < puVar41) {
                  if ((int)*puVar15 == (int)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar30 < puVar42) {
                  if ((short)*puVar15 == (short)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar30 < puVar2) && ((char)*puVar15 == (char)*puVar30)) {
                  puVar30 = (ulong *)((long)puVar30 + 1);
                }
                lVar17 = (long)puVar30 + (8 - (long)puVar22);
              }
              uVar13 = (long)puVar44 - (long)puVar27;
              if (param_4 < puVar44) {
                pcVar32 = (char *)(lVar23 + uVar16);
                do {
                  if ((char)*puVar26 != *pcVar32) {
                    puVar44 = (ulong *)((long)puVar26 + 1);
                    uVar21 = (long)puVar44 - (long)param_4;
                    puVar27 = (ulong *)param_2[3];
                    goto joined_r0x0001006bf938;
                  }
                  lVar17 = lVar17 + 1;
                  puVar27 = (ulong *)((long)puVar26 + -1);
                } while ((pcVar3 < pcVar32) &&
                        (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar27, bVar1
                        ));
LAB_1006bfb88:
                puVar44 = (ulong *)((long)puVar27 + 1);
              }
              uVar21 = (long)puVar44 - (long)param_4;
              puVar27 = (ulong *)param_2[3];
              goto joined_r0x0001006bf938;
            }
            puVar44 = (ulong *)((long)puVar26 + 4);
            puVar27 = (ulong *)(piVar28 + 1);
            puVar22 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar27 == *puVar44) {
                lVar17 = 0;
                puVar22 = (ulong *)((long)puVar26 + 0xc);
                puVar27 = (ulong *)(lVar36 + 0xc + uVar25);
                do {
                  if (puVar40 <= puVar22) goto LAB_1006bf838;
                  uVar21 = *puVar27;
                  uVar13 = *puVar22;
                  lVar17 = lVar17 + 8;
                  puVar22 = puVar22 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar21 == uVar13);
                uVar13 = uVar13 ^ uVar21;
                uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar44 ^ *puVar27;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 4;
            }
            else {
LAB_1006bf838:
              if (puVar22 < puVar41) {
                if ((int)*puVar27 == (int)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar22 < puVar42) {
                if (*(short *)puVar27 == *(short *)puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 1);
              }
              lVar17 = (long)puVar22 + (4 - (long)puVar44);
            }
            uVar13 = (long)puVar26 - (long)piVar28;
            if (puVar26 <= param_4) goto LAB_1006bfa28;
            pcVar32 = (char *)(lVar23 + uVar25);
            puVar27 = (ulong *)((long)puVar26 + -1);
            do {
              if ((char)*puVar27 != *pcVar32) goto LAB_1006bfb88;
              lVar17 = lVar17 + 1;
              puVar44 = (ulong *)((long)puVar27 + -1);
            } while ((pcVar3 < pcVar32) &&
                    (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar27, puVar27 = puVar44, bVar1));
LAB_1006bfa10:
            puVar44 = (ulong *)((long)puVar44 + 1);
            uVar21 = (long)puVar44 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            if (puVar44 <= puVar37) goto LAB_1006bfa3c;
LAB_1006bfb9c:
            puVar22 = puVar27;
            puVar26 = param_4;
            if (param_4 <= puVar37) {
              puVar22 = (ulong *)((long)puVar27 + ((long)puVar37 - (long)param_4));
              uVar16 = *param_4;
              puVar27[1] = param_4[1];
              *puVar27 = uVar16;
              uVar16 = param_4[2];
              puVar27[3] = param_4[3];
              puVar27[2] = uVar16;
              puVar26 = puVar37;
              if (0x20 < (long)puVar37 - (long)param_4) {
                puVar27 = puVar27 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar16 = puVar15[-2];
                  puVar27[1] = puVar15[-1];
                  *puVar27 = uVar16;
                  uVar16 = *puVar15;
                  puVar27[3] = puVar15[1];
                  puVar27[2] = uVar16;
                  puVar27 = puVar27 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar27 < puVar22);
              }
            }
            if (puVar26 < puVar44) {
              uVar16 = (long)puVar44 - (long)puVar26;
              if ((7 < uVar16) && (0x3f < (ulong)((long)puVar22 - (long)puVar26))) {
                if (uVar16 < 0x40) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = uVar16 & 0xffffffffffffffc0;
                  puVar27 = puVar22 + 4;
                  puVar15 = puVar26 + 4;
                  uVar24 = uVar25;
                  do {
                    uVar31 = puVar15[-4];
                    uVar46 = puVar15[-1];
                    uVar45 = puVar15[-2];
                    uVar48 = puVar15[1];
                    uVar47 = *puVar15;
                    uVar50 = puVar15[3];
                    uVar49 = puVar15[2];
                    puVar27[-3] = puVar15[-3];
                    puVar27[-4] = uVar31;
                    puVar27[-1] = uVar46;
                    puVar27[-2] = uVar45;
                    puVar27[1] = uVar48;
                    *puVar27 = uVar47;
                    puVar27[3] = uVar50;
                    puVar27[2] = uVar49;
                    uVar24 = uVar24 - 0x40;
                    puVar27 = puVar27 + 8;
                    puVar15 = puVar15 + 8;
                  } while (uVar24 != 0);
                  if (uVar16 == uVar25) goto LAB_1006bff70;
                  if ((uVar16 & 0x38) == 0) {
                    puVar26 = (ulong *)((long)puVar26 + uVar25);
                    puVar22 = (ulong *)((long)puVar22 + uVar25);
                    goto LAB_1006bff60;
                  }
                }
                uVar24 = uVar16 & 0xfffffffffffffff8;
                lVar14 = uVar25 - uVar24;
                puVar29 = (undefined8 *)((long)puVar22 + uVar25);
                puVar43 = (undefined8 *)((long)puVar26 + uVar25);
                do {
                  *puVar29 = *puVar43;
                  lVar14 = lVar14 + 8;
                  puVar29 = puVar29 + 1;
                  puVar43 = puVar43 + 1;
                } while (lVar14 != 0);
                puVar26 = (ulong *)((long)puVar26 + uVar24);
                puVar22 = (ulong *)((long)puVar22 + uVar24);
                if (uVar16 == uVar24) goto LAB_1006bff70;
              }
LAB_1006bff60:
              do {
                puVar27 = (ulong *)((long)puVar26 + 1);
                *(char *)puVar22 = (char)*puVar26;
                puVar26 = puVar27;
                puVar22 = (ulong *)((long)puVar22 + 1);
              } while (puVar27 != puVar44);
            }
            goto LAB_1006bff70;
          }
          puVar26 = (ulong *)((long)puVar26 + ((long)puVar26 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar27 = (ulong *)((long)puVar26 + 5);
          lVar17 = -(uVar19 & 0xffffffff);
          puVar22 = (ulong *)((long)puVar27 + lVar17);
          puVar15 = puVar27;
          if (puVar27 < puVar40) {
            if (*puVar22 == *puVar27) {
              lVar14 = 0;
              puVar15 = (ulong *)((long)puVar26 + 0xd);
              puVar22 = (ulong *)((long)puVar26 + 0xd + lVar17);
              do {
                if (puVar40 <= puVar15) goto LAB_1006bf58c;
                uVar13 = *puVar22;
                uVar16 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar15 = puVar15 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar13 == uVar16);
              uVar16 = uVar16 ^ uVar13;
              uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
              puVar26 = (ulong *)param_2[3];
            }
            else {
              uVar13 = *puVar27 ^ *puVar22;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              puVar26 = (ulong *)param_2[3];
            }
            uVar13 = (long)puVar44 - (long)param_4;
            if (puVar37 < puVar44) goto LAB_1006bf5e8;
LAB_1006bf6bc:
            uVar24 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar24;
            lVar17 = param_2[3];
            if (0x10 < uVar13) {
              uVar24 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar24;
              uVar24 = param_4[4];
              *(ulong *)(lVar17 + 0x28) = param_4[5];
              *(ulong *)(lVar17 + 0x20) = uVar24;
              if (0x30 < (long)uVar13) {
                puVar26 = (ulong *)(lVar17 + 0x30);
                puVar27 = param_4 + 8;
                do {
                  uVar24 = puVar27[-2];
                  puVar26[1] = puVar27[-1];
                  *puVar26 = uVar24;
                  uVar24 = *puVar27;
                  puVar26[3] = puVar27[1];
                  puVar26[2] = uVar24;
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar26 < (ulong *)(lVar17 + uVar13));
              }
              goto LAB_1006bfcd4;
            }
            param_2[3] = lVar17 + uVar13;
            piVar28 = (int *)param_2[1];
          }
          else {
LAB_1006bf58c:
            if (puVar15 < puVar41) {
              if ((int)*puVar22 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar15 < puVar42) {
              if (*(short *)puVar22 == *(short *)puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar16 = (long)puVar15 - (long)puVar27;
            uVar13 = (long)puVar44 - (long)param_4;
            puVar26 = (ulong *)param_2[3];
            if (puVar44 <= puVar37) goto LAB_1006bf6bc;
LAB_1006bf5e8:
            puVar22 = puVar26;
            puVar27 = param_4;
            if (param_4 <= puVar37) {
              puVar22 = (ulong *)((long)puVar26 + ((long)puVar37 - (long)param_4));
              uVar24 = *param_4;
              puVar26[1] = param_4[1];
              *puVar26 = uVar24;
              uVar24 = param_4[2];
              puVar26[3] = param_4[3];
              puVar26[2] = uVar24;
              puVar27 = puVar37;
              if (0x20 < (long)puVar37 - (long)param_4) {
                puVar26 = puVar26 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar24 = puVar15[-2];
                  puVar26[1] = puVar15[-1];
                  *puVar26 = uVar24;
                  uVar24 = *puVar15;
                  puVar26[3] = puVar15[1];
                  puVar26[2] = uVar24;
                  puVar26 = puVar26 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar26 < puVar22);
              }
            }
            if (puVar27 < puVar44) {
              uVar24 = (long)puVar44 - (long)puVar27;
              if ((7 < uVar24) && (0x3f < (ulong)((long)puVar22 - (long)puVar27))) {
                if (uVar24 < 0x40) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = uVar24 & 0xffffffffffffffc0;
                  puVar26 = puVar22 + 4;
                  puVar15 = puVar27 + 4;
                  uVar25 = uVar31;
                  do {
                    uVar45 = puVar15[-4];
                    uVar47 = puVar15[-1];
                    uVar46 = puVar15[-2];
                    uVar49 = puVar15[1];
                    uVar48 = *puVar15;
                    uVar51 = puVar15[3];
                    uVar50 = puVar15[2];
                    puVar26[-3] = puVar15[-3];
                    puVar26[-4] = uVar45;
                    puVar26[-1] = uVar47;
                    puVar26[-2] = uVar46;
                    puVar26[1] = uVar49;
                    *puVar26 = uVar48;
                    puVar26[3] = uVar51;
                    puVar26[2] = uVar50;
                    uVar25 = uVar25 - 0x40;
                    puVar26 = puVar26 + 8;
                    puVar15 = puVar15 + 8;
                  } while (uVar25 != 0);
                  if (uVar24 == uVar31) goto LAB_1006bfcd4;
                  if ((uVar24 & 0x38) == 0) {
                    puVar27 = (ulong *)((long)puVar27 + uVar31);
                    puVar22 = (ulong *)((long)puVar22 + uVar31);
                    goto LAB_1006bfcc4;
                  }
                }
                uVar25 = uVar24 & 0xfffffffffffffff8;
                lVar17 = uVar31 - uVar25;
                puVar29 = (undefined8 *)((long)puVar22 + uVar31);
                puVar43 = (undefined8 *)((long)puVar27 + uVar31);
                do {
                  *puVar29 = *puVar43;
                  lVar17 = lVar17 + 8;
                  puVar29 = puVar29 + 1;
                  puVar43 = puVar43 + 1;
                } while (lVar17 != 0);
                puVar27 = (ulong *)((long)puVar27 + uVar25);
                puVar22 = (ulong *)((long)puVar22 + uVar25);
                if (uVar24 == uVar25) goto LAB_1006bfcd4;
              }
LAB_1006bfcc4:
              do {
                puVar26 = (ulong *)((long)puVar27 + 1);
                *(char *)puVar22 = (char)*puVar27;
                puVar27 = puVar26;
                puVar22 = (ulong *)((long)puVar22 + 1);
              } while (puVar26 != puVar44);
            }
LAB_1006bfcd4:
            param_2[3] = param_2[3] + uVar13;
            piVar28 = (int *)param_2[1];
            if (0xffff < uVar13) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
            }
          }
          lVar17 = uVar16 + 4;
          uVar16 = uVar16 + 1;
          *(short *)(piVar28 + 1) = (short)uVar13;
          *piVar28 = 1;
          uVar13 = uVar19;
          if (uVar16 >> 0x10 != 0) {
LAB_1006bfd18:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
          }
LAB_1006bfd30:
          *(short *)((long)piVar28 + 6) = (short)uVar16;
          piVar28 = piVar28 + 2;
          param_2[1] = (long)piVar28;
          puVar26 = (ulong *)((long)puVar44 + lVar17);
          uVar19 = uVar13;
          param_4 = puVar26;
          if (puVar26 <= puVar38) {
            uVar20 = iVar6 + 2;
            lVar17 = *(long *)(lVar36 + (ulong)uVar20);
            *(uint *)(lVar33 + ((ulong)(lVar17 * -0x30e44323485a9b9d) >> (uVar12 & 0x3f)) * 4) =
                 uVar20;
            *(int *)(lVar33 + ((ulong)(*(long *)((long)puVar26 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 2U) - iVar35;
            *(uint *)(lVar34 + ((ulong)(lVar17 * -0x30e4432340650000) >> (uVar39 & 0x3f)) * 4) =
                 uVar20;
            *(int *)(lVar34 + ((ulong)(*(long *)((long)puVar26 - 1U) * -0x30e4432340650000) >>
                              (uVar39 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 1U) - iVar35;
            do {
              uVar16 = uVar13;
              uVar19 = uVar16;
              param_4 = puVar26;
              if (((int)uVar21 == 0) ||
                 ((int)*puVar26 != *(int *)((long)puVar26 - (uVar21 & 0xffffffff)))) break;
              puVar44 = (ulong *)((long)puVar26 + 4);
              lVar17 = -(uVar21 & 0xffffffff);
              puVar27 = (ulong *)((long)puVar44 + lVar17);
              puVar22 = puVar44;
              if (puVar44 < puVar40) {
                if (*puVar27 == *puVar44) {
                  lVar14 = 0;
                  puVar27 = (ulong *)((long)puVar26 + 0xc + lVar17);
                  puVar22 = (ulong *)((long)puVar26 + 0xc);
                  do {
                    if (puVar40 <= puVar22) goto LAB_1006bfe54;
                    uVar19 = *puVar27;
                    uVar13 = *puVar22;
                    lVar14 = lVar14 + 8;
                    puVar27 = puVar27 + 1;
                    puVar22 = puVar22 + 1;
                  } while (uVar19 == uVar13);
                  uVar13 = uVar13 ^ uVar19;
                  uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = lVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
                }
                else {
                  uVar19 = *puVar44 ^ *puVar27;
                  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
                }
              }
              else {
LAB_1006bfe54:
                if (puVar22 < puVar41) {
                  if ((int)*puVar27 == (int)*puVar22) {
                    puVar27 = (ulong *)((long)puVar27 + 4);
                    puVar22 = (ulong *)((long)puVar22 + 4);
                  }
                }
                if (puVar22 < puVar42) {
                  if (*(short *)puVar27 == *(short *)puVar22) {
                    puVar27 = (ulong *)((long)puVar27 + 2);
                    puVar22 = (ulong *)((long)puVar22 + 2);
                  }
                }
                if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                  puVar22 = (ulong *)((long)puVar22 + 1);
                }
                uVar19 = (long)puVar22 - (long)puVar44;
              }
              iVar6 = (int)puVar26 - iVar35;
              uVar13 = *puVar26;
              *(int *)(lVar34 + (uVar13 * -0x30e4432340650000 >> (uVar39 & 0x3f)) * 4) = iVar6;
              *(int *)(lVar33 + (uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
              if (puVar26 <= puVar37) {
                puVar44 = (ulong *)param_2[3];
                uVar13 = *puVar26;
                puVar44[1] = puVar26[1];
                *puVar44 = uVar13;
                piVar28 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar28 + 1) = 0;
              *piVar28 = 1;
              if (0xffff < uVar19 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
              }
              *(short *)((long)piVar28 + 6) = (short)(uVar19 + 1);
              piVar28 = piVar28 + 2;
              param_2[1] = (long)piVar28;
              puVar26 = (ulong *)((long)puVar26 + uVar19 + 4);
              uVar13 = uVar21;
              uVar19 = uVar21;
              uVar21 = uVar16;
              param_4 = puVar26;
            } while (puVar26 <= puVar38);
          }
        }
        uVar20 = (uint)uVar21;
        uVar18 = (uint)uVar19;
      } while (puVar26 < puVar38);
    }
  }
  else if (iVar6 == 7) {
    if (puVar26 < puVar38) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar39 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      puVar40 = (ulong *)((long)puVar2 - 7);
      puVar41 = (ulong *)((long)puVar2 - 3);
      puVar42 = (ulong *)((long)puVar2 - 1);
      puVar37 = puVar2 + -4;
      lVar23 = lVar36 + -1;
      do {
        uVar13 = *puVar26;
        uVar24 = uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
        uVar16 = uVar13 * -0x30e44323405a9d00 >> (uVar39 & 0x3f);
        iVar6 = (int)puVar26 - iVar35;
        uVar20 = *(uint *)(lVar33 + uVar24 * 4);
        uVar31 = (ulong)uVar20;
        uVar18 = *(uint *)(lVar34 + uVar16 * 4);
        uVar25 = (ulong)uVar18;
        *(int *)(lVar34 + uVar16 * 4) = iVar6;
        *(int *)(lVar33 + uVar24 * 4) = iVar6;
        puVar44 = (ulong *)((long)puVar26 + 1);
        if (((int)uVar19 == 0) ||
           (*(int *)((long)puVar44 - (uVar19 & 0xffffffff)) != *(int *)puVar44)) {
          if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar31), *puVar27 == uVar13)) {
            puVar44 = puVar26 + 1;
            puVar22 = puVar27 + 1;
            puVar15 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar22 == *puVar44) {
                lVar17 = 0;
                puVar15 = puVar26 + 2;
                puVar22 = (ulong *)(lVar36 + 0x10 + uVar31);
                do {
                  if (puVar40 <= puVar15) goto LAB_1006bead4;
                  uVar21 = *puVar22;
                  uVar13 = *puVar15;
                  lVar17 = lVar17 + 8;
                  puVar15 = puVar15 + 1;
                  puVar22 = puVar22 + 1;
                } while (uVar21 == uVar13);
                uVar13 = uVar13 ^ uVar21;
                uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar44 ^ *puVar22;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 8;
            }
            else {
LAB_1006bead4:
              if (puVar15 < puVar41) {
                if ((int)*puVar22 == (int)*puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 4);
                  puVar22 = (ulong *)((long)puVar22 + 4);
                }
              }
              if (puVar15 < puVar42) {
                if (*(short *)puVar22 == *(short *)puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 2);
                  puVar22 = (ulong *)((long)puVar22 + 2);
                }
              }
              if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
              lVar17 = (long)puVar15 + (8 - (long)puVar44);
            }
            uVar13 = (long)puVar26 - (long)puVar27;
            if (param_4 < puVar26) {
              pcVar32 = (char *)(lVar23 + uVar31);
              puVar26 = (ulong *)((long)puVar26 + -1);
              do {
                if ((char)*puVar26 != *pcVar32) {
                  uVar21 = ((long)puVar26 + 1) - (long)param_4;
                  puVar27 = (ulong *)param_2[3];
                  puVar44 = (ulong *)((long)puVar26 + 1);
                  goto joined_r0x0001006bec74;
                }
                lVar17 = lVar17 + 1;
                puVar44 = (ulong *)((long)puVar26 + -1);
              } while ((pcVar3 < pcVar32) &&
                      (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar44, bVar1))
              ;
              goto LAB_1006bed4c;
            }
LAB_1006bed64:
            uVar21 = (long)puVar26 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            puVar44 = puVar26;
joined_r0x0001006bec74:
            if (puVar37 < puVar44) goto LAB_1006beed8;
LAB_1006bed78:
            uVar16 = *param_4;
            puVar27[1] = param_4[1];
            *puVar27 = uVar16;
            lVar14 = param_2[3];
            if (uVar21 < 0x11) {
              param_2[3] = lVar14 + uVar21;
              piVar28 = (int *)param_2[1];
            }
            else {
              uVar16 = param_4[2];
              *(ulong *)(lVar14 + 0x18) = param_4[3];
              *(ulong *)(lVar14 + 0x10) = uVar16;
              uVar16 = param_4[4];
              *(ulong *)(lVar14 + 0x28) = param_4[5];
              *(ulong *)(lVar14 + 0x20) = uVar16;
              if (0x30 < (long)uVar21) {
                puVar26 = (ulong *)(lVar14 + 0x30);
                puVar27 = param_4 + 8;
                do {
                  uVar16 = puVar27[-2];
                  puVar26[1] = puVar27[-1];
                  *puVar26 = uVar16;
                  uVar16 = *puVar27;
                  puVar26[3] = puVar27[1];
                  puVar26[2] = uVar16;
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar26 < (ulong *)(lVar14 + uVar21));
              }
LAB_1006bf2ac:
              param_2[3] = param_2[3] + uVar21;
              piVar28 = (int *)param_2[1];
              if (0xffff < uVar21) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
              }
            }
            uVar16 = lVar17 - 3;
            *(short *)(piVar28 + 1) = (short)uVar21;
            *piVar28 = (int)uVar13 + 3;
            uVar21 = uVar19;
            if (0xffff < uVar16) goto LAB_1006bf054;
            goto LAB_1006bf06c;
          }
          if ((uVar4 < uVar18) && (piVar28 = (int *)(lVar36 + uVar25), *piVar28 == (int)*puVar26)) {
            uVar21 = *puVar44;
            uVar13 = uVar21 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar20 = *(uint *)(lVar33 + uVar13 * 4);
            uVar16 = (ulong)uVar20;
            *(int *)(lVar33 + uVar13 * 4) = iVar6 + 1;
            if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar16), *puVar27 == uVar21)) {
              puVar22 = (ulong *)((long)puVar26 + 9);
              puVar15 = puVar27 + 1;
              puVar30 = puVar22;
              if (puVar22 < puVar40) {
                if (*puVar15 == *puVar22) {
                  lVar17 = 0;
                  puVar30 = (ulong *)((long)puVar26 + 0x11);
                  puVar15 = (ulong *)(lVar36 + 0x10 + uVar16);
                  do {
                    if (puVar40 <= puVar30) goto joined_r0x0001006bede8;
                    uVar21 = *puVar15;
                    uVar13 = *puVar30;
                    lVar17 = lVar17 + 8;
                    puVar30 = puVar30 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar21 == uVar13);
                  uVar13 = uVar13 ^ uVar21;
                  uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                }
                else {
                  uVar21 = *puVar22 ^ *puVar15;
                  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                }
                lVar17 = uVar21 + 8;
              }
              else {
joined_r0x0001006bede8:
                if (puVar30 < puVar41) {
                  if ((int)*puVar15 == (int)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar30 < puVar42) {
                  if ((short)*puVar15 == (short)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar30 < puVar2) && ((char)*puVar15 == (char)*puVar30)) {
                  puVar30 = (ulong *)((long)puVar30 + 1);
                }
                lVar17 = (long)puVar30 + (8 - (long)puVar22);
              }
              uVar13 = (long)puVar44 - (long)puVar27;
              if (param_4 < puVar44) {
                pcVar32 = (char *)(lVar23 + uVar16);
                do {
                  if ((char)*puVar26 != *pcVar32) {
                    puVar44 = (ulong *)((long)puVar26 + 1);
                    uVar21 = (long)puVar44 - (long)param_4;
                    puVar27 = (ulong *)param_2[3];
                    goto joined_r0x0001006bec74;
                  }
                  lVar17 = lVar17 + 1;
                  puVar27 = (ulong *)((long)puVar26 + -1);
                } while ((pcVar3 < pcVar32) &&
                        (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar27, bVar1
                        ));
LAB_1006beec4:
                puVar44 = (ulong *)((long)puVar27 + 1);
              }
              uVar21 = (long)puVar44 - (long)param_4;
              puVar27 = (ulong *)param_2[3];
              goto joined_r0x0001006bec74;
            }
            puVar44 = (ulong *)((long)puVar26 + 4);
            puVar27 = (ulong *)(piVar28 + 1);
            puVar22 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar27 == *puVar44) {
                lVar17 = 0;
                puVar22 = (ulong *)((long)puVar26 + 0xc);
                puVar27 = (ulong *)(lVar36 + 0xc + uVar25);
                do {
                  if (puVar40 <= puVar22) goto LAB_1006beb74;
                  uVar21 = *puVar27;
                  uVar13 = *puVar22;
                  lVar17 = lVar17 + 8;
                  puVar22 = puVar22 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar21 == uVar13);
                uVar13 = uVar13 ^ uVar21;
                uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar44 ^ *puVar27;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 4;
            }
            else {
LAB_1006beb74:
              if (puVar22 < puVar41) {
                if ((int)*puVar27 == (int)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar22 < puVar42) {
                if (*(short *)puVar27 == *(short *)puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 1);
              }
              lVar17 = (long)puVar22 + (4 - (long)puVar44);
            }
            uVar13 = (long)puVar26 - (long)piVar28;
            if (puVar26 <= param_4) goto LAB_1006bed64;
            pcVar32 = (char *)(lVar23 + uVar25);
            puVar27 = (ulong *)((long)puVar26 + -1);
            do {
              if ((char)*puVar27 != *pcVar32) goto LAB_1006beec4;
              lVar17 = lVar17 + 1;
              puVar44 = (ulong *)((long)puVar27 + -1);
            } while ((pcVar3 < pcVar32) &&
                    (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar27, puVar27 = puVar44, bVar1));
LAB_1006bed4c:
            puVar44 = (ulong *)((long)puVar44 + 1);
            uVar21 = (long)puVar44 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            if (puVar44 <= puVar37) goto LAB_1006bed78;
LAB_1006beed8:
            puVar22 = puVar27;
            puVar26 = param_4;
            if (param_4 <= puVar37) {
              puVar22 = (ulong *)((long)puVar27 + ((long)puVar37 - (long)param_4));
              uVar16 = *param_4;
              puVar27[1] = param_4[1];
              *puVar27 = uVar16;
              uVar16 = param_4[2];
              puVar27[3] = param_4[3];
              puVar27[2] = uVar16;
              puVar26 = puVar37;
              if (0x20 < (long)puVar37 - (long)param_4) {
                puVar27 = puVar27 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar16 = puVar15[-2];
                  puVar27[1] = puVar15[-1];
                  *puVar27 = uVar16;
                  uVar16 = *puVar15;
                  puVar27[3] = puVar15[1];
                  puVar27[2] = uVar16;
                  puVar27 = puVar27 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar27 < puVar22);
              }
            }
            if (puVar26 < puVar44) {
              uVar16 = (long)puVar44 - (long)puVar26;
              if ((7 < uVar16) && (0x3f < (ulong)((long)puVar22 - (long)puVar26))) {
                if (uVar16 < 0x40) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = uVar16 & 0xffffffffffffffc0;
                  puVar27 = puVar22 + 4;
                  puVar15 = puVar26 + 4;
                  uVar24 = uVar25;
                  do {
                    uVar31 = puVar15[-4];
                    uVar46 = puVar15[-1];
                    uVar45 = puVar15[-2];
                    uVar48 = puVar15[1];
                    uVar47 = *puVar15;
                    uVar50 = puVar15[3];
                    uVar49 = puVar15[2];
                    puVar27[-3] = puVar15[-3];
                    puVar27[-4] = uVar31;
                    puVar27[-1] = uVar46;
                    puVar27[-2] = uVar45;
                    puVar27[1] = uVar48;
                    *puVar27 = uVar47;
                    puVar27[3] = uVar50;
                    puVar27[2] = uVar49;
                    uVar24 = uVar24 - 0x40;
                    puVar27 = puVar27 + 8;
                    puVar15 = puVar15 + 8;
                  } while (uVar24 != 0);
                  if (uVar16 == uVar25) goto LAB_1006bf2ac;
                  if ((uVar16 & 0x38) == 0) {
                    puVar26 = (ulong *)((long)puVar26 + uVar25);
                    puVar22 = (ulong *)((long)puVar22 + uVar25);
                    goto LAB_1006bf29c;
                  }
                }
                uVar24 = uVar16 & 0xfffffffffffffff8;
                lVar14 = uVar25 - uVar24;
                puVar29 = (undefined8 *)((long)puVar22 + uVar25);
                puVar43 = (undefined8 *)((long)puVar26 + uVar25);
                do {
                  *puVar29 = *puVar43;
                  lVar14 = lVar14 + 8;
                  puVar29 = puVar29 + 1;
                  puVar43 = puVar43 + 1;
                } while (lVar14 != 0);
                puVar26 = (ulong *)((long)puVar26 + uVar24);
                puVar22 = (ulong *)((long)puVar22 + uVar24);
                if (uVar16 == uVar24) goto LAB_1006bf2ac;
              }
LAB_1006bf29c:
              do {
                puVar27 = (ulong *)((long)puVar26 + 1);
                *(char *)puVar22 = (char)*puVar26;
                puVar26 = puVar27;
                puVar22 = (ulong *)((long)puVar22 + 1);
              } while (puVar27 != puVar44);
            }
            goto LAB_1006bf2ac;
          }
          puVar26 = (ulong *)((long)puVar26 + ((long)puVar26 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar27 = (ulong *)((long)puVar26 + 5);
          lVar17 = -(uVar19 & 0xffffffff);
          puVar22 = (ulong *)((long)puVar27 + lVar17);
          puVar15 = puVar27;
          if (puVar27 < puVar40) {
            if (*puVar22 == *puVar27) {
              lVar14 = 0;
              puVar15 = (ulong *)((long)puVar26 + 0xd);
              puVar22 = (ulong *)((long)puVar26 + 0xd + lVar17);
              do {
                if (puVar40 <= puVar15) goto LAB_1006be8c8;
                uVar13 = *puVar22;
                uVar16 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar15 = puVar15 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar13 == uVar16);
              uVar16 = uVar16 ^ uVar13;
              uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
              puVar26 = (ulong *)param_2[3];
            }
            else {
              uVar13 = *puVar27 ^ *puVar22;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              puVar26 = (ulong *)param_2[3];
            }
            uVar13 = (long)puVar44 - (long)param_4;
            if (puVar37 < puVar44) goto LAB_1006be924;
LAB_1006be9f8:
            uVar24 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar24;
            lVar17 = param_2[3];
            if (0x10 < uVar13) {
              uVar24 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar24;
              uVar24 = param_4[4];
              *(ulong *)(lVar17 + 0x28) = param_4[5];
              *(ulong *)(lVar17 + 0x20) = uVar24;
              if (0x30 < (long)uVar13) {
                puVar26 = (ulong *)(lVar17 + 0x30);
                puVar27 = param_4 + 8;
                do {
                  uVar24 = puVar27[-2];
                  puVar26[1] = puVar27[-1];
                  *puVar26 = uVar24;
                  uVar24 = *puVar27;
                  puVar26[3] = puVar27[1];
                  puVar26[2] = uVar24;
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar27 + 4;
                } while (puVar26 < (ulong *)(lVar17 + uVar13));
              }
              goto LAB_1006bf010;
            }
            param_2[3] = lVar17 + uVar13;
            piVar28 = (int *)param_2[1];
          }
          else {
LAB_1006be8c8:
            if (puVar15 < puVar41) {
              if ((int)*puVar22 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar15 < puVar42) {
              if (*(short *)puVar22 == *(short *)puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar16 = (long)puVar15 - (long)puVar27;
            uVar13 = (long)puVar44 - (long)param_4;
            puVar26 = (ulong *)param_2[3];
            if (puVar44 <= puVar37) goto LAB_1006be9f8;
LAB_1006be924:
            puVar22 = puVar26;
            puVar27 = param_4;
            if (param_4 <= puVar37) {
              puVar22 = (ulong *)((long)puVar26 + ((long)puVar37 - (long)param_4));
              uVar24 = *param_4;
              puVar26[1] = param_4[1];
              *puVar26 = uVar24;
              uVar24 = param_4[2];
              puVar26[3] = param_4[3];
              puVar26[2] = uVar24;
              puVar27 = puVar37;
              if (0x20 < (long)puVar37 - (long)param_4) {
                puVar26 = puVar26 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar24 = puVar15[-2];
                  puVar26[1] = puVar15[-1];
                  *puVar26 = uVar24;
                  uVar24 = *puVar15;
                  puVar26[3] = puVar15[1];
                  puVar26[2] = uVar24;
                  puVar26 = puVar26 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar26 < puVar22);
              }
            }
            if (puVar27 < puVar44) {
              uVar24 = (long)puVar44 - (long)puVar27;
              if ((7 < uVar24) && (0x3f < (ulong)((long)puVar22 - (long)puVar27))) {
                if (uVar24 < 0x40) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = uVar24 & 0xffffffffffffffc0;
                  puVar26 = puVar22 + 4;
                  puVar15 = puVar27 + 4;
                  uVar25 = uVar31;
                  do {
                    uVar45 = puVar15[-4];
                    uVar47 = puVar15[-1];
                    uVar46 = puVar15[-2];
                    uVar49 = puVar15[1];
                    uVar48 = *puVar15;
                    uVar51 = puVar15[3];
                    uVar50 = puVar15[2];
                    puVar26[-3] = puVar15[-3];
                    puVar26[-4] = uVar45;
                    puVar26[-1] = uVar47;
                    puVar26[-2] = uVar46;
                    puVar26[1] = uVar49;
                    *puVar26 = uVar48;
                    puVar26[3] = uVar51;
                    puVar26[2] = uVar50;
                    uVar25 = uVar25 - 0x40;
                    puVar26 = puVar26 + 8;
                    puVar15 = puVar15 + 8;
                  } while (uVar25 != 0);
                  if (uVar24 == uVar31) goto LAB_1006bf010;
                  if ((uVar24 & 0x38) == 0) {
                    puVar27 = (ulong *)((long)puVar27 + uVar31);
                    puVar22 = (ulong *)((long)puVar22 + uVar31);
                    goto LAB_1006bf000;
                  }
                }
                uVar25 = uVar24 & 0xfffffffffffffff8;
                lVar17 = uVar31 - uVar25;
                puVar29 = (undefined8 *)((long)puVar22 + uVar31);
                puVar43 = (undefined8 *)((long)puVar27 + uVar31);
                do {
                  *puVar29 = *puVar43;
                  lVar17 = lVar17 + 8;
                  puVar29 = puVar29 + 1;
                  puVar43 = puVar43 + 1;
                } while (lVar17 != 0);
                puVar27 = (ulong *)((long)puVar27 + uVar25);
                puVar22 = (ulong *)((long)puVar22 + uVar25);
                if (uVar24 == uVar25) goto LAB_1006bf010;
              }
LAB_1006bf000:
              do {
                puVar26 = (ulong *)((long)puVar27 + 1);
                *(char *)puVar22 = (char)*puVar27;
                puVar27 = puVar26;
                puVar22 = (ulong *)((long)puVar22 + 1);
              } while (puVar26 != puVar44);
            }
LAB_1006bf010:
            param_2[3] = param_2[3] + uVar13;
            piVar28 = (int *)param_2[1];
            if (0xffff < uVar13) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
            }
          }
          lVar17 = uVar16 + 4;
          uVar16 = uVar16 + 1;
          *(short *)(piVar28 + 1) = (short)uVar13;
          *piVar28 = 1;
          uVar13 = uVar19;
          if (uVar16 >> 0x10 != 0) {
LAB_1006bf054:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
          }
LAB_1006bf06c:
          *(short *)((long)piVar28 + 6) = (short)uVar16;
          piVar28 = piVar28 + 2;
          param_2[1] = (long)piVar28;
          puVar26 = (ulong *)((long)puVar44 + lVar17);
          uVar19 = uVar13;
          param_4 = puVar26;
          if (puVar26 <= puVar38) {
            uVar20 = iVar6 + 2;
            lVar17 = *(long *)(lVar36 + (ulong)uVar20);
            *(uint *)(lVar33 + ((ulong)(lVar17 * -0x30e44323485a9b9d) >> (uVar12 & 0x3f)) * 4) =
                 uVar20;
            *(int *)(lVar33 + ((ulong)(*(long *)((long)puVar26 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 2U) - iVar35;
            *(uint *)(lVar34 + ((ulong)(lVar17 * -0x30e44323405a9d00) >> (uVar39 & 0x3f)) * 4) =
                 uVar20;
            *(int *)(lVar34 + ((ulong)(*(long *)((long)puVar26 - 1U) * -0x30e44323405a9d00) >>
                              (uVar39 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 1U) - iVar35;
            do {
              uVar16 = uVar13;
              uVar19 = uVar16;
              param_4 = puVar26;
              if (((int)uVar21 == 0) ||
                 ((int)*puVar26 != *(int *)((long)puVar26 - (uVar21 & 0xffffffff)))) break;
              puVar44 = (ulong *)((long)puVar26 + 4);
              lVar17 = -(uVar21 & 0xffffffff);
              puVar27 = (ulong *)((long)puVar44 + lVar17);
              puVar22 = puVar44;
              if (puVar44 < puVar40) {
                if (*puVar27 == *puVar44) {
                  lVar14 = 0;
                  puVar27 = (ulong *)((long)puVar26 + 0xc + lVar17);
                  puVar22 = (ulong *)((long)puVar26 + 0xc);
                  do {
                    if (puVar40 <= puVar22) goto LAB_1006bf190;
                    uVar19 = *puVar27;
                    uVar13 = *puVar22;
                    lVar14 = lVar14 + 8;
                    puVar27 = puVar27 + 1;
                    puVar22 = puVar22 + 1;
                  } while (uVar19 == uVar13);
                  uVar13 = uVar13 ^ uVar19;
                  uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = lVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
                }
                else {
                  uVar19 = *puVar44 ^ *puVar27;
                  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
                }
              }
              else {
LAB_1006bf190:
                if (puVar22 < puVar41) {
                  if ((int)*puVar27 == (int)*puVar22) {
                    puVar27 = (ulong *)((long)puVar27 + 4);
                    puVar22 = (ulong *)((long)puVar22 + 4);
                  }
                }
                if (puVar22 < puVar42) {
                  if (*(short *)puVar27 == *(short *)puVar22) {
                    puVar27 = (ulong *)((long)puVar27 + 2);
                    puVar22 = (ulong *)((long)puVar22 + 2);
                  }
                }
                if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                  puVar22 = (ulong *)((long)puVar22 + 1);
                }
                uVar19 = (long)puVar22 - (long)puVar44;
              }
              iVar6 = (int)puVar26 - iVar35;
              uVar13 = *puVar26;
              *(int *)(lVar34 + (uVar13 * -0x30e44323405a9d00 >> (uVar39 & 0x3f)) * 4) = iVar6;
              *(int *)(lVar33 + (uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
              if (puVar26 <= puVar37) {
                puVar44 = (ulong *)param_2[3];
                uVar13 = *puVar26;
                puVar44[1] = puVar26[1];
                *puVar44 = uVar13;
                piVar28 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar28 + 1) = 0;
              *piVar28 = 1;
              if (0xffff < uVar19 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
              }
              *(short *)((long)piVar28 + 6) = (short)(uVar19 + 1);
              piVar28 = piVar28 + 2;
              param_2[1] = (long)piVar28;
              puVar26 = (ulong *)((long)puVar26 + uVar19 + 4);
              uVar13 = uVar21;
              uVar19 = uVar21;
              uVar21 = uVar16;
              param_4 = puVar26;
            } while (puVar26 <= puVar38);
          }
        }
        uVar20 = (uint)uVar21;
        uVar18 = (uint)uVar19;
      } while (puVar26 < puVar38);
    }
  }
  else if (puVar26 < puVar38) {
    uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    uVar11 = 0x20 - *(int *)(param_1 + 0xbc);
    puVar40 = (ulong *)((long)puVar2 - 7);
    puVar41 = (ulong *)((long)puVar2 - 3);
    puVar42 = (ulong *)((long)puVar2 - 1);
    puVar37 = puVar2 + -4;
    lVar23 = lVar36 + -1;
    do {
      uVar39 = *puVar26 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
      uVar8 = (uint)((int)*puVar26 * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
      iVar6 = (int)puVar26 - iVar35;
      uVar20 = *(uint *)(lVar33 + uVar39 * 4);
      uVar16 = (ulong)uVar20;
      uVar18 = *(uint *)(lVar34 + (ulong)uVar8 * 4);
      uVar13 = (ulong)uVar18;
      *(int *)(lVar34 + (ulong)uVar8 * 4) = iVar6;
      *(int *)(lVar33 + uVar39 * 4) = iVar6;
      puVar44 = (ulong *)((long)puVar26 + 1);
      if (((int)uVar19 == 0) || (*(int *)((long)puVar44 - (uVar19 & 0xffffffff)) != *(int *)puVar44)
         ) {
        if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar16), *puVar27 == *puVar26)) {
          puVar44 = puVar26 + 1;
          puVar22 = puVar27 + 1;
          puVar15 = puVar44;
          if (puVar44 < puVar40) {
            if (*puVar22 == *puVar44) {
              lVar17 = 0;
              puVar15 = puVar26 + 2;
              puVar22 = (ulong *)(lVar36 + 0x10 + uVar16);
              do {
                if (puVar40 <= puVar15) goto LAB_1006c1124;
                uVar21 = *puVar22;
                uVar39 = *puVar15;
                lVar17 = lVar17 + 8;
                puVar15 = puVar15 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar21 == uVar39);
              uVar39 = uVar39 ^ uVar21;
              uVar21 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            }
            else {
              uVar21 = *puVar44 ^ *puVar22;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
            }
            lVar17 = uVar21 + 8;
          }
          else {
LAB_1006c1124:
            if (puVar15 < puVar41) {
              if ((int)*puVar22 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar15 < puVar42) {
              if (*(short *)puVar22 == *(short *)puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            lVar17 = (long)puVar15 + (8 - (long)puVar44);
          }
          uVar39 = (long)puVar26 - (long)puVar27;
          if (param_4 < puVar26) {
            pcVar32 = (char *)(lVar23 + uVar16);
            puVar26 = (ulong *)((long)puVar26 + -1);
            do {
              if ((char)*puVar26 != *pcVar32) {
                uVar21 = ((long)puVar26 + 1) - (long)param_4;
                puVar27 = (ulong *)param_2[3];
                puVar44 = (ulong *)((long)puVar26 + 1);
                goto joined_r0x0001006c12c4;
              }
              lVar17 = lVar17 + 1;
              puVar44 = (ulong *)((long)puVar26 + -1);
            } while ((pcVar3 < pcVar32) &&
                    (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar44, bVar1));
            goto LAB_1006c139c;
          }
LAB_1006c13b4:
          uVar21 = (long)puVar26 - (long)param_4;
          puVar27 = (ulong *)param_2[3];
          puVar44 = puVar26;
joined_r0x0001006c12c4:
          if (puVar37 < puVar44) goto LAB_1006c1528;
LAB_1006c13c8:
          uVar13 = *param_4;
          puVar27[1] = param_4[1];
          *puVar27 = uVar13;
          lVar14 = param_2[3];
          if (uVar21 < 0x11) {
            param_2[3] = lVar14 + uVar21;
            piVar28 = (int *)param_2[1];
          }
          else {
            uVar13 = param_4[2];
            *(ulong *)(lVar14 + 0x18) = param_4[3];
            *(ulong *)(lVar14 + 0x10) = uVar13;
            uVar13 = param_4[4];
            *(ulong *)(lVar14 + 0x28) = param_4[5];
            *(ulong *)(lVar14 + 0x20) = uVar13;
            if (0x30 < (long)uVar21) {
              puVar26 = (ulong *)(lVar14 + 0x30);
              puVar27 = param_4 + 8;
              do {
                uVar13 = puVar27[-2];
                puVar26[1] = puVar27[-1];
                *puVar26 = uVar13;
                uVar13 = *puVar27;
                puVar26[3] = puVar27[1];
                puVar26[2] = uVar13;
                puVar26 = puVar26 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar26 < (ulong *)(lVar14 + uVar21));
            }
LAB_1006c18fc:
            param_2[3] = param_2[3] + uVar21;
            piVar28 = (int *)param_2[1];
            if (0xffff < uVar21) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
            }
          }
          uVar13 = lVar17 - 3;
          *(short *)(piVar28 + 1) = (short)uVar21;
          *piVar28 = (int)uVar39 + 3;
          uVar21 = uVar19;
          if (0xffff < uVar13) goto LAB_1006c16a0;
          goto LAB_1006c16b8;
        }
        if ((uVar4 < uVar18) && (piVar28 = (int *)(lVar36 + uVar13), *piVar28 == (int)*puVar26)) {
          uVar21 = *puVar44;
          uVar39 = uVar21 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
          uVar20 = *(uint *)(lVar33 + uVar39 * 4);
          uVar16 = (ulong)uVar20;
          *(int *)(lVar33 + uVar39 * 4) = iVar6 + 1;
          if ((uVar4 < uVar20) && (puVar27 = (ulong *)(lVar36 + uVar16), *puVar27 == uVar21)) {
            puVar22 = (ulong *)((long)puVar26 + 9);
            puVar15 = puVar27 + 1;
            puVar30 = puVar22;
            if (puVar22 < puVar40) {
              if (*puVar15 == *puVar22) {
                lVar17 = 0;
                puVar30 = (ulong *)((long)puVar26 + 0x11);
                puVar15 = (ulong *)(lVar36 + 0x10 + uVar16);
                do {
                  if (puVar40 <= puVar30) goto joined_r0x0001006c1438;
                  uVar21 = *puVar15;
                  uVar39 = *puVar30;
                  lVar17 = lVar17 + 8;
                  puVar30 = puVar30 + 1;
                  puVar15 = puVar15 + 1;
                } while (uVar21 == uVar39);
                uVar39 = uVar39 ^ uVar21;
                uVar21 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar22 ^ *puVar15;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
              lVar17 = uVar21 + 8;
            }
            else {
joined_r0x0001006c1438:
              if (puVar30 < puVar41) {
                if ((int)*puVar15 == (int)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 4);
                  puVar15 = (ulong *)((long)puVar15 + 4);
                }
              }
              if (puVar30 < puVar42) {
                if ((short)*puVar15 == (short)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 2);
                  puVar15 = (ulong *)((long)puVar15 + 2);
                }
              }
              if ((puVar30 < puVar2) && ((char)*puVar15 == (char)*puVar30)) {
                puVar30 = (ulong *)((long)puVar30 + 1);
              }
              lVar17 = (long)puVar30 + (8 - (long)puVar22);
            }
            uVar39 = (long)puVar44 - (long)puVar27;
            if (param_4 < puVar44) {
              pcVar32 = (char *)(lVar23 + uVar16);
              do {
                if ((char)*puVar26 != *pcVar32) {
                  puVar44 = (ulong *)((long)puVar26 + 1);
                  uVar21 = (long)puVar44 - (long)param_4;
                  puVar27 = (ulong *)param_2[3];
                  goto joined_r0x0001006c12c4;
                }
                lVar17 = lVar17 + 1;
                puVar27 = (ulong *)((long)puVar26 + -1);
              } while ((pcVar3 < pcVar32) &&
                      (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar26, puVar26 = puVar27, bVar1))
              ;
LAB_1006c1514:
              puVar44 = (ulong *)((long)puVar27 + 1);
            }
            uVar21 = (long)puVar44 - (long)param_4;
            puVar27 = (ulong *)param_2[3];
            goto joined_r0x0001006c12c4;
          }
          puVar44 = (ulong *)((long)puVar26 + 4);
          puVar27 = (ulong *)(piVar28 + 1);
          puVar22 = puVar44;
          if (puVar44 < puVar40) {
            if (*puVar27 == *puVar44) {
              lVar17 = 0;
              puVar22 = (ulong *)((long)puVar26 + 0xc);
              puVar27 = (ulong *)(lVar36 + 0xc + uVar13);
              do {
                if (puVar40 <= puVar22) goto LAB_1006c11c4;
                uVar21 = *puVar27;
                uVar39 = *puVar22;
                lVar17 = lVar17 + 8;
                puVar22 = puVar22 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar21 == uVar39);
              uVar39 = uVar39 ^ uVar21;
              uVar21 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = lVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            }
            else {
              uVar21 = *puVar44 ^ *puVar27;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
            }
            lVar17 = uVar21 + 4;
          }
          else {
LAB_1006c11c4:
            if (puVar22 < puVar41) {
              if ((int)*puVar27 == (int)*puVar22) {
                puVar22 = (ulong *)((long)puVar22 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
            }
            if (puVar22 < puVar42) {
              if (*(short *)puVar27 == *(short *)puVar22) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
            lVar17 = (long)puVar22 + (4 - (long)puVar44);
          }
          uVar39 = (long)puVar26 - (long)piVar28;
          if (puVar26 <= param_4) goto LAB_1006c13b4;
          pcVar32 = (char *)(lVar23 + uVar13);
          puVar27 = (ulong *)((long)puVar26 + -1);
          do {
            if ((char)*puVar27 != *pcVar32) goto LAB_1006c1514;
            lVar17 = lVar17 + 1;
            puVar44 = (ulong *)((long)puVar27 + -1);
          } while ((pcVar3 < pcVar32) &&
                  (pcVar32 = pcVar32 + -1, bVar1 = param_4 < puVar27, puVar27 = puVar44, bVar1));
LAB_1006c139c:
          puVar44 = (ulong *)((long)puVar44 + 1);
          uVar21 = (long)puVar44 - (long)param_4;
          puVar27 = (ulong *)param_2[3];
          if (puVar44 <= puVar37) goto LAB_1006c13c8;
LAB_1006c1528:
          puVar22 = puVar27;
          puVar26 = param_4;
          if (param_4 <= puVar37) {
            puVar22 = (ulong *)((long)puVar27 + ((long)puVar37 - (long)param_4));
            uVar13 = *param_4;
            puVar27[1] = param_4[1];
            *puVar27 = uVar13;
            uVar13 = param_4[2];
            puVar27[3] = param_4[3];
            puVar27[2] = uVar13;
            puVar26 = puVar37;
            if (0x20 < (long)puVar37 - (long)param_4) {
              puVar27 = puVar27 + 4;
              puVar15 = param_4 + 6;
              do {
                uVar13 = puVar15[-2];
                puVar27[1] = puVar15[-1];
                *puVar27 = uVar13;
                uVar13 = *puVar15;
                puVar27[3] = puVar15[1];
                puVar27[2] = uVar13;
                puVar27 = puVar27 + 4;
                puVar15 = puVar15 + 4;
              } while (puVar27 < puVar22);
            }
          }
          if (puVar26 < puVar44) {
            uVar13 = (long)puVar44 - (long)puVar26;
            if ((7 < uVar13) && (0x3f < (ulong)((long)puVar22 - (long)puVar26))) {
              if (uVar13 < 0x40) {
                uVar24 = 0;
              }
              else {
                uVar24 = uVar13 & 0xffffffffffffffc0;
                puVar27 = puVar22 + 4;
                puVar15 = puVar26 + 4;
                uVar16 = uVar24;
                do {
                  uVar25 = puVar15[-4];
                  uVar45 = puVar15[-1];
                  uVar31 = puVar15[-2];
                  uVar47 = puVar15[1];
                  uVar46 = *puVar15;
                  uVar49 = puVar15[3];
                  uVar48 = puVar15[2];
                  puVar27[-3] = puVar15[-3];
                  puVar27[-4] = uVar25;
                  puVar27[-1] = uVar45;
                  puVar27[-2] = uVar31;
                  puVar27[1] = uVar47;
                  *puVar27 = uVar46;
                  puVar27[3] = uVar49;
                  puVar27[2] = uVar48;
                  uVar16 = uVar16 - 0x40;
                  puVar27 = puVar27 + 8;
                  puVar15 = puVar15 + 8;
                } while (uVar16 != 0);
                if (uVar13 == uVar24) goto LAB_1006c18fc;
                if ((uVar13 & 0x38) == 0) {
                  puVar26 = (ulong *)((long)puVar26 + uVar24);
                  puVar22 = (ulong *)((long)puVar22 + uVar24);
                  goto LAB_1006c18ec;
                }
              }
              uVar16 = uVar13 & 0xfffffffffffffff8;
              lVar14 = uVar24 - uVar16;
              puVar29 = (undefined8 *)((long)puVar22 + uVar24);
              puVar43 = (undefined8 *)((long)puVar26 + uVar24);
              do {
                *puVar29 = *puVar43;
                lVar14 = lVar14 + 8;
                puVar29 = puVar29 + 1;
                puVar43 = puVar43 + 1;
              } while (lVar14 != 0);
              puVar26 = (ulong *)((long)puVar26 + uVar16);
              puVar22 = (ulong *)((long)puVar22 + uVar16);
              if (uVar13 == uVar16) goto LAB_1006c18fc;
            }
LAB_1006c18ec:
            do {
              puVar27 = (ulong *)((long)puVar26 + 1);
              *(char *)puVar22 = (char)*puVar26;
              puVar26 = puVar27;
              puVar22 = (ulong *)((long)puVar22 + 1);
            } while (puVar27 != puVar44);
          }
          goto LAB_1006c18fc;
        }
        puVar26 = (ulong *)((long)puVar26 + ((long)puVar26 - (long)param_4 >> 8) + 1);
      }
      else {
        puVar27 = (ulong *)((long)puVar26 + 5);
        lVar17 = -(uVar19 & 0xffffffff);
        puVar22 = (ulong *)((long)puVar27 + lVar17);
        puVar15 = puVar27;
        if (puVar27 < puVar40) {
          if (*puVar22 == *puVar27) {
            lVar14 = 0;
            puVar15 = (ulong *)((long)puVar26 + 0xd);
            puVar22 = (ulong *)((long)puVar26 + 0xd + lVar17);
            do {
              if (puVar40 <= puVar15) goto LAB_1006c0f18;
              uVar39 = *puVar22;
              uVar13 = *puVar15;
              lVar14 = lVar14 + 8;
              puVar15 = puVar15 + 1;
              puVar22 = puVar22 + 1;
            } while (uVar39 == uVar13);
            uVar13 = uVar13 ^ uVar39;
            uVar39 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar13 = lVar14 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
            puVar26 = (ulong *)param_2[3];
          }
          else {
            uVar39 = *puVar27 ^ *puVar22;
            uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar13 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
            puVar26 = (ulong *)param_2[3];
          }
          uVar39 = (long)puVar44 - (long)param_4;
          if (puVar37 < puVar44) goto LAB_1006c0f74;
LAB_1006c1048:
          uVar16 = *param_4;
          puVar26[1] = param_4[1];
          *puVar26 = uVar16;
          lVar17 = param_2[3];
          if (0x10 < uVar39) {
            uVar16 = param_4[2];
            *(ulong *)(lVar17 + 0x18) = param_4[3];
            *(ulong *)(lVar17 + 0x10) = uVar16;
            uVar16 = param_4[4];
            *(ulong *)(lVar17 + 0x28) = param_4[5];
            *(ulong *)(lVar17 + 0x20) = uVar16;
            if (0x30 < (long)uVar39) {
              puVar26 = (ulong *)(lVar17 + 0x30);
              puVar27 = param_4 + 8;
              do {
                uVar16 = puVar27[-2];
                puVar26[1] = puVar27[-1];
                *puVar26 = uVar16;
                uVar16 = *puVar27;
                puVar26[3] = puVar27[1];
                puVar26[2] = uVar16;
                puVar26 = puVar26 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar26 < (ulong *)(lVar17 + uVar39));
            }
            goto LAB_1006c165c;
          }
          param_2[3] = lVar17 + uVar39;
          piVar28 = (int *)param_2[1];
        }
        else {
LAB_1006c0f18:
          if (puVar15 < puVar41) {
            if ((int)*puVar22 == (int)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar22 = (ulong *)((long)puVar22 + 4);
            }
          }
          if (puVar15 < puVar42) {
            if (*(short *)puVar22 == *(short *)puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar22 = (ulong *)((long)puVar22 + 2);
            }
          }
          if ((puVar15 < puVar2) && ((char)*puVar22 == (char)*puVar15)) {
            puVar15 = (ulong *)((long)puVar15 + 1);
          }
          uVar13 = (long)puVar15 - (long)puVar27;
          uVar39 = (long)puVar44 - (long)param_4;
          puVar26 = (ulong *)param_2[3];
          if (puVar44 <= puVar37) goto LAB_1006c1048;
LAB_1006c0f74:
          puVar22 = puVar26;
          puVar27 = param_4;
          if (param_4 <= puVar37) {
            puVar22 = (ulong *)((long)puVar26 + ((long)puVar37 - (long)param_4));
            uVar16 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar16;
            uVar16 = param_4[2];
            puVar26[3] = param_4[3];
            puVar26[2] = uVar16;
            puVar27 = puVar37;
            if (0x20 < (long)puVar37 - (long)param_4) {
              puVar26 = puVar26 + 4;
              puVar15 = param_4 + 6;
              do {
                uVar16 = puVar15[-2];
                puVar26[1] = puVar15[-1];
                *puVar26 = uVar16;
                uVar16 = *puVar15;
                puVar26[3] = puVar15[1];
                puVar26[2] = uVar16;
                puVar26 = puVar26 + 4;
                puVar15 = puVar15 + 4;
              } while (puVar26 < puVar22);
            }
          }
          if (puVar27 < puVar44) {
            uVar16 = (long)puVar44 - (long)puVar27;
            if ((7 < uVar16) && (0x3f < (ulong)((long)puVar22 - (long)puVar27))) {
              if (uVar16 < 0x40) {
                uVar25 = 0;
              }
              else {
                uVar25 = uVar16 & 0xffffffffffffffc0;
                puVar26 = puVar22 + 4;
                puVar15 = puVar27 + 4;
                uVar24 = uVar25;
                do {
                  uVar31 = puVar15[-4];
                  uVar46 = puVar15[-1];
                  uVar45 = puVar15[-2];
                  uVar48 = puVar15[1];
                  uVar47 = *puVar15;
                  uVar50 = puVar15[3];
                  uVar49 = puVar15[2];
                  puVar26[-3] = puVar15[-3];
                  puVar26[-4] = uVar31;
                  puVar26[-1] = uVar46;
                  puVar26[-2] = uVar45;
                  puVar26[1] = uVar48;
                  *puVar26 = uVar47;
                  puVar26[3] = uVar50;
                  puVar26[2] = uVar49;
                  uVar24 = uVar24 - 0x40;
                  puVar26 = puVar26 + 8;
                  puVar15 = puVar15 + 8;
                } while (uVar24 != 0);
                if (uVar16 == uVar25) goto LAB_1006c165c;
                if ((uVar16 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar25);
                  puVar22 = (ulong *)((long)puVar22 + uVar25);
                  goto LAB_1006c164c;
                }
              }
              uVar24 = uVar16 & 0xfffffffffffffff8;
              lVar17 = uVar25 - uVar24;
              puVar29 = (undefined8 *)((long)puVar22 + uVar25);
              puVar43 = (undefined8 *)((long)puVar27 + uVar25);
              do {
                *puVar29 = *puVar43;
                lVar17 = lVar17 + 8;
                puVar29 = puVar29 + 1;
                puVar43 = puVar43 + 1;
              } while (lVar17 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar24);
              puVar22 = (ulong *)((long)puVar22 + uVar24);
              if (uVar16 == uVar24) goto LAB_1006c165c;
            }
LAB_1006c164c:
            do {
              puVar26 = (ulong *)((long)puVar27 + 1);
              *(char *)puVar22 = (char)*puVar27;
              puVar27 = puVar26;
              puVar22 = (ulong *)((long)puVar22 + 1);
            } while (puVar26 != puVar44);
          }
LAB_1006c165c:
          param_2[3] = param_2[3] + uVar39;
          piVar28 = (int *)param_2[1];
          if (0xffff < uVar39) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
          }
        }
        lVar17 = uVar13 + 4;
        uVar13 = uVar13 + 1;
        *(short *)(piVar28 + 1) = (short)uVar39;
        *piVar28 = 1;
        uVar39 = uVar19;
        if (uVar13 >> 0x10 != 0) {
LAB_1006c16a0:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
        }
LAB_1006c16b8:
        *(short *)((long)piVar28 + 6) = (short)uVar13;
        piVar28 = piVar28 + 2;
        param_2[1] = (long)piVar28;
        puVar26 = (ulong *)((long)puVar44 + lVar17);
        uVar19 = uVar39;
        param_4 = puVar26;
        if (puVar26 <= puVar38) {
          uVar20 = iVar6 + 2;
          *(uint *)(lVar33 + ((ulong)(*(long *)(lVar36 + (ulong)uVar20) * -0x30e44323485a9b9d) >>
                             (uVar12 & 0x3f)) * 4) = uVar20;
          *(int *)(lVar33 + ((ulong)(*(long *)((long)puVar26 - 2U) * -0x30e44323485a9b9d) >>
                            (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar26 - 2U) - iVar35;
          *(uint *)(lVar34 + (ulong)((uint)(*(int *)(lVar36 + (ulong)uVar20) * -0x61c8864f) >>
                                    (ulong)(uVar11 & 0x1f)) * 4) = uVar20;
          *(int *)(lVar34 + (ulong)((uint)(*(int *)((long)puVar26 - 1U) * -0x61c8864f) >>
                                   (ulong)(uVar11 & 0x1f)) * 4) =
               (int)(int *)((long)puVar26 - 1U) - iVar35;
          do {
            uVar13 = uVar39;
            uVar19 = uVar13;
            param_4 = puVar26;
            if ((int)uVar21 == 0) break;
            if ((int)*puVar26 != *(int *)((long)puVar26 - (uVar21 & 0xffffffff))) break;
            puVar44 = (ulong *)((long)puVar26 + 4);
            lVar17 = -(uVar21 & 0xffffffff);
            puVar27 = (ulong *)((long)puVar44 + lVar17);
            puVar22 = puVar44;
            if (puVar44 < puVar40) {
              if (*puVar27 == *puVar44) {
                lVar14 = 0;
                puVar22 = (ulong *)((long)puVar26 + 0xc);
                puVar27 = (ulong *)((long)puVar26 + 0xc + lVar17);
                do {
                  if (puVar40 <= puVar22) goto LAB_1006c17e4;
                  uVar19 = *puVar27;
                  uVar39 = *puVar22;
                  lVar14 = lVar14 + 8;
                  puVar22 = puVar22 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar19 == uVar39);
                uVar39 = uVar39 ^ uVar19;
                uVar19 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                uVar19 = lVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
              }
              else {
                uVar19 = *puVar44 ^ *puVar27;
                uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
              }
            }
            else {
LAB_1006c17e4:
              if (puVar22 < puVar41) {
                if ((int)*puVar27 == (int)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar22 < puVar42) {
                if (*(short *)puVar27 == *(short *)puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar22 < puVar2) && ((char)*puVar27 == (char)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 1);
              }
              uVar19 = (long)puVar22 - (long)puVar44;
            }
            iVar6 = (int)puVar26 - iVar35;
            *(int *)(lVar34 + (ulong)((uint)((int)*puVar26 * -0x61c8864f) >> (ulong)(uVar11 & 0x1f))
                              * 4) = iVar6;
            *(int *)(lVar33 + (*puVar26 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
            if (puVar26 <= puVar37) {
              puVar44 = (ulong *)param_2[3];
              uVar39 = *puVar26;
              puVar44[1] = puVar26[1];
              *puVar44 = uVar39;
              piVar28 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar28 + 1) = 0;
            *piVar28 = 1;
            if (0xffff < uVar19 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
            }
            *(short *)((long)piVar28 + 6) = (short)(uVar19 + 1);
            piVar28 = piVar28 + 2;
            param_2[1] = (long)piVar28;
            puVar26 = (ulong *)((long)puVar26 + uVar19 + 4);
            uVar39 = uVar21;
            uVar19 = uVar21;
            uVar21 = uVar13;
            param_4 = puVar26;
          } while (puVar26 <= puVar38);
        }
      }
      uVar20 = (uint)uVar21;
      uVar18 = (uint)uVar19;
    } while (puVar26 < puVar38);
  }
  if (uVar7 <= uVar10) {
    uVar7 = 0;
  }
  if (uVar5 <= uVar10) {
    uVar5 = uVar7;
  }
  uVar4 = uVar5;
  if (uVar18 != 0) {
    uVar4 = uVar18;
  }
  if (uVar20 != 0) {
    uVar5 = uVar20;
  }
  *param_3 = uVar4;
  param_3[1] = uVar5;
  return (long)puVar2 - (long)param_4;
}

