// rea decompile_all
// name: FUN_1006c199c
// address: 0x1006c199c
// body: available
// range: 0x1006c199c-0x1006c5673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006c199c(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong *puVar17;
  int *piVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong *puVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong *puVar37;
  int *piVar38;
  ulong *puVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  ulong *puVar48;
  int iVar49;
  int iVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  
  iVar9 = *(int *)(param_1 + 200);
  lVar30 = *(long *)(param_1 + 0x30);
  lVar19 = *(long *)(param_1 + 0x40);
  lVar51 = *(long *)(param_1 + 8);
  puVar3 = (ulong *)((long)param_4 + param_5);
  iVar50 = (int)lVar51;
  iVar49 = (int)puVar3 - iVar50;
  uVar11 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar6 = iVar49 - uVar11;
  if (iVar49 - *(uint *)(param_1 + 0x18) <= uVar11) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  puVar20 = puVar3 + -1;
  iVar49 = *param_3;
  iVar47 = param_3[1];
  puVar21 = *(ulong **)(param_1 + 0xb0);
  uVar34 = puVar21[6];
  uVar31 = puVar21[8];
  uVar10 = (uint)puVar21[3];
  puVar7 = (ulong *)*puVar21;
  uVar8 = puVar21[1];
  piVar4 = (int *)(uVar8 + uVar10);
  uVar11 = uVar6 + ((int)uVar8 - (int)puVar7);
  piVar5 = (int *)(lVar51 + (ulong)uVar6);
  puVar25 = param_4;
  if ((int)puVar7 + ((int)param_4 - (int)piVar5) == (int)piVar4) {
    puVar25 = (ulong *)((long)param_4 + 1);
  }
  if (iVar9 == 5) {
    if (puVar25 < puVar20) {
      uVar32 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      iVar9 = *(int *)((long)puVar21 + 0xbc);
      uVar22 = (ulong)(0x40 - (int)puVar21[0x18]);
      puVar23 = (ulong *)((long)puVar3 - 7);
      puVar28 = (ulong *)((long)puVar3 - 3);
      puVar24 = (ulong *)((long)puVar3 - 1);
      puVar21 = puVar3 + -4;
LAB_1006c3900:
      uVar35 = *puVar25;
      uVar41 = uVar35 * -0x30e44323485a9b9d >> (uVar32 & 0x3f);
      uVar42 = uVar35 * -0x30e4432345000000 >> (uVar27 & 0x3f);
      iVar44 = (int)puVar25;
      iVar16 = iVar44 - iVar50;
      uVar46 = *(uint *)(lVar30 + uVar41 * 4);
      uVar33 = (ulong)uVar46;
      uVar45 = *(uint *)(lVar19 + uVar42 * 4);
      iVar2 = iVar16 + 1;
      uVar14 = iVar2 - iVar49;
      piVar38 = (int *)(uVar8 + (uVar14 - uVar11));
      if (uVar6 <= uVar14) {
        piVar38 = (int *)(lVar51 + (ulong)uVar14);
      }
      *(int *)(lVar19 + uVar42 * 4) = iVar16;
      *(int *)(lVar30 + uVar41 * 4) = iVar16;
      if ((uVar14 - uVar6 < 0xfffffffd) &&
         (puVar48 = (ulong *)((long)puVar25 + 1), *piVar38 == *(int *)puVar48)) {
        puVar17 = puVar7;
        if (uVar6 <= uVar14) {
          puVar17 = puVar3;
        }
        lVar29 = (long)puVar25 + 5;
        FUN_1006c7460(lVar29,piVar38 + 1,puVar3,puVar17,piVar5);
        uVar33 = (long)puVar48 - (long)param_4;
        puVar25 = (ulong *)param_2[3];
        if (puVar21 < puVar48) {
          puVar17 = param_4;
          puVar37 = puVar25;
          if (param_4 <= puVar21) {
            puVar37 = (ulong *)((long)puVar25 + ((long)puVar21 - (long)param_4));
            uVar35 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar35;
            uVar35 = param_4[2];
            puVar25[3] = param_4[3];
            puVar25[2] = uVar35;
            puVar17 = puVar21;
            if (0x20 < (long)puVar21 - (long)param_4) {
              puVar25 = puVar25 + 4;
              puVar36 = param_4 + 6;
              do {
                uVar35 = puVar36[-2];
                puVar25[1] = puVar36[-1];
                *puVar25 = uVar35;
                uVar35 = *puVar36;
                puVar25[3] = puVar36[1];
                puVar25[2] = uVar35;
                puVar25 = puVar25 + 4;
                puVar36 = puVar36 + 4;
              } while (puVar25 < puVar37);
            }
          }
          if (puVar17 < puVar48) {
            uVar35 = (long)puVar48 - (long)puVar17;
            if ((7 < uVar35) && (0x3f < (ulong)((long)puVar37 - (long)puVar17))) {
              if (uVar35 < 0x40) {
                uVar42 = 0;
              }
              else {
                uVar42 = uVar35 & 0xffffffffffffffc0;
                puVar25 = puVar37 + 4;
                puVar36 = puVar17 + 4;
                uVar41 = uVar42;
                do {
                  uVar52 = puVar36[-4];
                  uVar54 = puVar36[-1];
                  uVar53 = puVar36[-2];
                  uVar56 = puVar36[1];
                  uVar55 = *puVar36;
                  uVar58 = puVar36[3];
                  uVar57 = puVar36[2];
                  puVar25[-3] = puVar36[-3];
                  puVar25[-4] = uVar52;
                  puVar25[-1] = uVar54;
                  puVar25[-2] = uVar53;
                  puVar25[1] = uVar56;
                  *puVar25 = uVar55;
                  puVar25[3] = uVar58;
                  puVar25[2] = uVar57;
                  uVar41 = uVar41 - 0x40;
                  puVar25 = puVar25 + 8;
                  puVar36 = puVar36 + 8;
                } while (uVar41 != 0);
                if (uVar35 == uVar42) goto LAB_1006c4714;
                if ((uVar35 & 0x38) == 0) {
                  puVar17 = (ulong *)((long)puVar17 + uVar42);
                  puVar37 = (ulong *)((long)puVar37 + uVar42);
                  goto LAB_1006c4704;
                }
              }
              uVar41 = uVar35 & 0xfffffffffffffff8;
              lVar40 = uVar42 - uVar41;
              puVar26 = (undefined8 *)((long)puVar37 + uVar42);
              puVar43 = (undefined8 *)((long)puVar17 + uVar42);
              do {
                *puVar26 = *puVar43;
                lVar40 = lVar40 + 8;
                puVar26 = puVar26 + 1;
                puVar43 = puVar43 + 1;
              } while (lVar40 != 0);
              puVar37 = (ulong *)((long)puVar37 + uVar41);
              puVar17 = (ulong *)((long)puVar17 + uVar41);
              if (uVar35 == uVar41) goto LAB_1006c4714;
            }
LAB_1006c4704:
            do {
              puVar25 = (ulong *)((long)puVar17 + 1);
              *(char *)puVar37 = (char)*puVar17;
              puVar37 = (ulong *)((long)puVar37 + 1);
              puVar17 = puVar25;
            } while (puVar25 != puVar48);
          }
LAB_1006c4714:
          param_2[3] = param_2[3] + uVar33;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar33) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar35 = *param_4;
          puVar25[1] = param_4[1];
          *puVar25 = uVar35;
          lVar40 = param_2[3];
          if (0x10 < uVar33) {
            uVar35 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar40 + 0x28) = param_4[5];
            *(ulong *)(lVar40 + 0x20) = uVar35;
            if (0x30 < (long)uVar33) {
              puVar25 = (ulong *)(lVar40 + 0x30);
              puVar17 = param_4 + 8;
              do {
                uVar35 = puVar17[-2];
                puVar25[1] = puVar17[-1];
                *puVar25 = uVar35;
                uVar35 = *puVar17;
                puVar25[3] = puVar17[1];
                puVar25[2] = uVar35;
                puVar25 = puVar25 + 4;
                puVar17 = puVar17 + 4;
              } while (puVar25 < (ulong *)(lVar40 + uVar33));
            }
            goto LAB_1006c4714;
          }
          param_2[3] = lVar40 + uVar33;
          piVar38 = (int *)param_2[1];
        }
        puVar17 = (ulong *)(lVar29 + 4);
        uVar35 = lVar29 + 1;
        *(short *)(piVar38 + 1) = (short)uVar33;
        *piVar38 = 1;
        iVar44 = iVar49;
        if (uVar35 >> 0x10 != 0) goto LAB_1006c452c;
        goto LAB_1006c4544;
      }
      if (uVar46 <= uVar6) {
        uVar46 = *(uint *)(uVar34 + (uVar35 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
        if ((uVar46 <= uVar10) || (puVar48 = (ulong *)(uVar8 + uVar46), *puVar48 != uVar35))
        goto LAB_1006c3b2c;
        puVar17 = puVar25 + 1;
        FUN_1006c7460(puVar17,puVar48 + 1,puVar3,puVar7,piVar5);
        puVar17 = puVar17 + 1;
        iVar44 = (iVar16 - uVar11) - uVar46;
        if (param_4 < puVar25) {
          piVar38 = (int *)((uVar8 - 1) + (ulong)uVar46);
          puVar25 = (ulong *)((long)puVar25 + -1);
          do {
            if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c4408;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar48 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) &&
                  (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                  puVar25 = puVar48, bVar1));
          goto LAB_1006c4374;
        }
LAB_1006c3f40:
        uVar33 = (long)puVar25 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        puVar48 = puVar25;
        goto joined_r0x0001006c3f58;
      }
      puVar48 = (ulong *)(lVar51 + uVar33);
      if (*puVar48 == uVar35) {
        puVar37 = puVar25 + 1;
        puVar36 = puVar48 + 1;
        puVar17 = puVar37;
        if (puVar37 < puVar23) {
          if (*puVar36 == *puVar37) {
            lVar29 = 0;
            puVar17 = puVar25 + 2;
            puVar36 = (ulong *)(lVar51 + 0x10 + uVar33);
            do {
              if (puVar23 <= puVar17) goto LAB_1006c3cc8;
              uVar41 = *puVar36;
              uVar35 = *puVar17;
              lVar29 = lVar29 + 8;
              puVar17 = puVar17 + 1;
              puVar36 = puVar36 + 1;
            } while (uVar41 == uVar35);
            uVar35 = uVar35 ^ uVar41;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = lVar29 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar37 ^ *puVar36;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          }
          puVar17 = (ulong *)(uVar35 + 8);
        }
        else {
LAB_1006c3cc8:
          if (puVar17 < puVar28) {
            if ((int)*puVar36 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar36 = (ulong *)((long)puVar36 + 4);
            }
          }
          if (puVar17 < puVar24) {
            if ((short)*puVar36 == (short)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar36 = (ulong *)((long)puVar36 + 2);
            }
          }
          if ((puVar17 < puVar3) && ((char)*puVar36 == (char)*puVar17)) {
            puVar17 = (ulong *)((long)puVar17 + 1);
          }
          puVar17 = (ulong *)((long)puVar17 + (8 - (long)puVar37));
        }
        iVar44 = iVar44 - (int)puVar48;
        if (puVar25 <= param_4) goto LAB_1006c438c;
        piVar38 = (int *)(lVar51 + -1 + uVar33);
        puVar37 = (ulong *)((long)puVar25 + -1);
        do {
          if ((char)*puVar37 != (char)*piVar38) goto LAB_1006c447c;
          puVar17 = (ulong *)((long)puVar17 + 1);
          puVar48 = (ulong *)((long)puVar37 + -1);
        } while ((piVar5 < piVar38) &&
                (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar37, puVar37 = puVar48
                , bVar1));
        goto LAB_1006c4374;
      }
LAB_1006c3b2c:
      if (uVar6 < uVar45) {
        piVar38 = (int *)(lVar51 + (ulong)uVar45);
        if (*piVar38 != (int)*puVar25) goto LAB_1006c3c50;
LAB_1006c3b88:
        puVar48 = (ulong *)((long)puVar25 + 1);
        uVar33 = *puVar48;
        uVar41 = uVar33 * -0x30e44323485a9b9d >> (uVar32 & 0x3f);
        uVar46 = *(uint *)(lVar30 + uVar41 * 4);
        uVar35 = (ulong)uVar46;
        *(int *)(lVar30 + uVar41 * 4) = iVar2;
        if (uVar6 < uVar46) {
          puVar17 = (ulong *)(lVar51 + uVar35);
          if (*puVar17 == uVar33) {
            puVar37 = (ulong *)((long)puVar25 + 9);
            puVar36 = puVar17 + 1;
            puVar39 = puVar37;
            if (puVar37 < puVar23) {
              if (*puVar36 == *puVar37) {
                lVar29 = 0;
                puVar39 = (ulong *)((long)puVar25 + 0x11);
                puVar36 = (ulong *)(lVar51 + 0x10 + uVar35);
                do {
                  if (puVar23 <= puVar39) goto LAB_1006c40fc;
                  uVar41 = *puVar36;
                  uVar33 = *puVar39;
                  lVar29 = lVar29 + 8;
                  puVar39 = puVar39 + 1;
                  puVar36 = puVar36 + 1;
                } while (uVar41 == uVar33);
                uVar33 = uVar33 ^ uVar41;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar29 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar37 ^ *puVar36;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
            }
            else {
LAB_1006c40fc:
              if (puVar39 < puVar28) {
                if ((int)*puVar36 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar36 = (ulong *)((long)puVar36 + 4);
                }
              }
              if (puVar39 < puVar24) {
                if ((short)*puVar36 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar36 = (ulong *)((long)puVar36 + 2);
                }
              }
              if ((puVar39 < puVar3) && ((char)*puVar36 == (char)*puVar39)) {
                puVar39 = (ulong *)((long)puVar39 + 1);
              }
              uVar33 = (long)puVar39 - (long)puVar37;
            }
            iVar44 = (int)puVar48 - (int)puVar17;
            puVar17 = (ulong *)(uVar33 + 8);
            if (param_4 < puVar48) {
              piVar38 = (int *)(lVar51 + -1 + uVar35);
              do {
                if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c4494;
                puVar17 = (ulong *)((long)puVar17 + 1);
                puVar37 = (ulong *)((long)puVar25 + -1);
              } while ((piVar5 < piVar38) &&
                      (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                      puVar25 = puVar37, bVar1));
LAB_1006c447c:
              uVar33 = ((long)puVar37 + 1) - (long)param_4;
              puVar36 = (ulong *)param_2[3];
              puVar48 = (ulong *)((long)puVar37 + 1);
            }
            else {
              uVar33 = (long)puVar48 - (long)param_4;
              puVar36 = (ulong *)param_2[3];
            }
            goto joined_r0x0001006c3f58;
          }
LAB_1006c3e18:
          puVar17 = (ulong *)((long)puVar25 + 4);
          puVar48 = (ulong *)(piVar38 + 1);
          if (uVar45 < uVar6) {
            FUN_1006c7460(puVar17,puVar48,puVar3,puVar7,piVar5);
            puVar17 = (ulong *)((long)puVar17 + 4);
            iVar44 = iVar16 - uVar45;
            if (piVar38 <= piVar4) goto LAB_1006c3f40;
            if (puVar25 <= param_4) goto LAB_1006c438c;
            puVar25 = (ulong *)((long)puVar25 + -1);
            do {
              piVar38 = (int *)((long)piVar38 + -1);
              if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c4408;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar48 = (ulong *)((long)puVar25 + -1);
            } while ((piVar4 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
          }
          else {
            puVar37 = puVar17;
            if (puVar17 < puVar23) {
              if (*puVar48 == *puVar17) {
                lVar29 = 0;
                puVar48 = (ulong *)(piVar38 + 3);
                puVar37 = (ulong *)((long)puVar25 + 0xc);
                do {
                  if (puVar23 <= puVar37) goto LAB_1006c4050;
                  uVar35 = *puVar48;
                  uVar33 = *puVar37;
                  lVar29 = lVar29 + 8;
                  puVar48 = puVar48 + 1;
                  puVar37 = puVar37 + 1;
                } while (uVar35 == uVar33);
                uVar33 = uVar33 ^ uVar35;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar29 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar17 ^ *puVar48;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              puVar17 = (ulong *)(uVar33 + 4);
            }
            else {
LAB_1006c4050:
              if (puVar37 < puVar28) {
                if ((int)*puVar48 == (int)*puVar37) {
                  puVar48 = (ulong *)((long)puVar48 + 4);
                  puVar37 = (ulong *)((long)puVar37 + 4);
                }
              }
              if (puVar37 < puVar24) {
                if ((short)*puVar48 == (short)*puVar37) {
                  puVar48 = (ulong *)((long)puVar48 + 2);
                  puVar37 = (ulong *)((long)puVar37 + 2);
                }
              }
              if ((puVar37 < puVar3) && ((char)*puVar48 == (char)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
              puVar17 = (ulong *)((long)puVar37 + (4 - (long)puVar17));
            }
            iVar44 = iVar44 - (int)piVar38;
            if ((piVar38 <= piVar5) || (puVar25 <= param_4)) {
LAB_1006c438c:
              uVar33 = (long)puVar25 - (long)param_4;
              puVar36 = (ulong *)param_2[3];
              puVar48 = puVar25;
              goto joined_r0x0001006c3f58;
            }
            puVar25 = (ulong *)((long)puVar25 + -1);
            do {
              piVar38 = (int *)((long)piVar38 + -1);
              if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c4408;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar48 = (ulong *)((long)puVar25 + -1);
            } while ((piVar5 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
          }
LAB_1006c4374:
          puVar48 = (ulong *)((long)puVar48 + 1);
          uVar33 = (long)puVar48 - (long)param_4;
          puVar36 = (ulong *)param_2[3];
          goto joined_r0x0001006c4384;
        }
        uVar46 = *(uint *)(uVar34 + (uVar33 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
        if ((uVar46 <= uVar10) || (puVar17 = (ulong *)(uVar8 + uVar46), *puVar17 != uVar33))
        goto LAB_1006c3e18;
        lVar29 = (long)puVar25 + 9;
        FUN_1006c7460(lVar29,puVar17 + 1,puVar3,puVar7,piVar5);
        puVar17 = (ulong *)(lVar29 + 8);
        iVar44 = (iVar2 - uVar11) - uVar46;
        if (param_4 < puVar48) {
          piVar38 = (int *)((uVar8 - 1) + (ulong)uVar46);
          do {
            if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c4494;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar37 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) &&
                  (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                  puVar25 = puVar37, bVar1));
          goto LAB_1006c447c;
        }
        uVar33 = (long)puVar48 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        goto joined_r0x0001006c3f58;
      }
      uVar45 = *(uint *)(uVar31 + (uVar35 * -0x30e4432345000000 >> ((ulong)(0x40 - iVar9) & 0x3f)) *
                                  4);
      if ((uVar10 < uVar45) && (piVar38 = (int *)(uVar8 + uVar45), *piVar38 == (int)*puVar25)) {
        uVar45 = uVar45 + uVar11;
        goto LAB_1006c3b88;
      }
LAB_1006c3c50:
      puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
      goto LAB_1006c38f4;
    }
  }
  else if (iVar9 == 6) {
    if (puVar25 < puVar20) {
      uVar32 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      iVar9 = *(int *)((long)puVar21 + 0xbc);
      uVar22 = (ulong)(0x40 - (int)puVar21[0x18]);
      puVar23 = (ulong *)((long)puVar3 - 7);
      puVar28 = (ulong *)((long)puVar3 - 3);
      puVar24 = (ulong *)((long)puVar3 - 1);
      puVar21 = puVar3 + -4;
LAB_1006c2a0c:
      uVar35 = *puVar25;
      uVar41 = uVar35 * -0x30e44323485a9b9d >> (uVar32 & 0x3f);
      uVar42 = uVar35 * -0x30e4432340650000 >> (uVar27 & 0x3f);
      iVar44 = (int)puVar25;
      iVar16 = iVar44 - iVar50;
      uVar46 = *(uint *)(lVar30 + uVar41 * 4);
      uVar33 = (ulong)uVar46;
      uVar45 = *(uint *)(lVar19 + uVar42 * 4);
      iVar2 = iVar16 + 1;
      uVar14 = iVar2 - iVar49;
      piVar38 = (int *)(uVar8 + (uVar14 - uVar11));
      if (uVar6 <= uVar14) {
        piVar38 = (int *)(lVar51 + (ulong)uVar14);
      }
      *(int *)(lVar19 + uVar42 * 4) = iVar16;
      *(int *)(lVar30 + uVar41 * 4) = iVar16;
      if ((uVar14 - uVar6 < 0xfffffffd) &&
         (puVar48 = (ulong *)((long)puVar25 + 1), *piVar38 == *(int *)puVar48)) {
        puVar17 = puVar7;
        if (uVar6 <= uVar14) {
          puVar17 = puVar3;
        }
        lVar29 = (long)puVar25 + 5;
        FUN_1006c7460(lVar29,piVar38 + 1,puVar3,puVar17,piVar5);
        uVar33 = (long)puVar48 - (long)param_4;
        puVar25 = (ulong *)param_2[3];
        if (puVar21 < puVar48) {
          puVar17 = param_4;
          puVar37 = puVar25;
          if (param_4 <= puVar21) {
            puVar37 = (ulong *)((long)puVar25 + ((long)puVar21 - (long)param_4));
            uVar35 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar35;
            uVar35 = param_4[2];
            puVar25[3] = param_4[3];
            puVar25[2] = uVar35;
            puVar17 = puVar21;
            if (0x20 < (long)puVar21 - (long)param_4) {
              puVar25 = puVar25 + 4;
              puVar36 = param_4 + 6;
              do {
                uVar35 = puVar36[-2];
                puVar25[1] = puVar36[-1];
                *puVar25 = uVar35;
                uVar35 = *puVar36;
                puVar25[3] = puVar36[1];
                puVar25[2] = uVar35;
                puVar25 = puVar25 + 4;
                puVar36 = puVar36 + 4;
              } while (puVar25 < puVar37);
            }
          }
          if (puVar17 < puVar48) {
            uVar35 = (long)puVar48 - (long)puVar17;
            if ((7 < uVar35) && (0x3f < (ulong)((long)puVar37 - (long)puVar17))) {
              if (uVar35 < 0x40) {
                uVar42 = 0;
              }
              else {
                uVar42 = uVar35 & 0xffffffffffffffc0;
                puVar25 = puVar37 + 4;
                puVar36 = puVar17 + 4;
                uVar41 = uVar42;
                do {
                  uVar52 = puVar36[-4];
                  uVar54 = puVar36[-1];
                  uVar53 = puVar36[-2];
                  uVar56 = puVar36[1];
                  uVar55 = *puVar36;
                  uVar58 = puVar36[3];
                  uVar57 = puVar36[2];
                  puVar25[-3] = puVar36[-3];
                  puVar25[-4] = uVar52;
                  puVar25[-1] = uVar54;
                  puVar25[-2] = uVar53;
                  puVar25[1] = uVar56;
                  *puVar25 = uVar55;
                  puVar25[3] = uVar58;
                  puVar25[2] = uVar57;
                  uVar41 = uVar41 - 0x40;
                  puVar25 = puVar25 + 8;
                  puVar36 = puVar36 + 8;
                } while (uVar41 != 0);
                if (uVar35 == uVar42) goto LAB_1006c3820;
                if ((uVar35 & 0x38) == 0) {
                  puVar17 = (ulong *)((long)puVar17 + uVar42);
                  puVar37 = (ulong *)((long)puVar37 + uVar42);
                  goto LAB_1006c3810;
                }
              }
              uVar41 = uVar35 & 0xfffffffffffffff8;
              lVar40 = uVar42 - uVar41;
              puVar26 = (undefined8 *)((long)puVar37 + uVar42);
              puVar43 = (undefined8 *)((long)puVar17 + uVar42);
              do {
                *puVar26 = *puVar43;
                lVar40 = lVar40 + 8;
                puVar26 = puVar26 + 1;
                puVar43 = puVar43 + 1;
              } while (lVar40 != 0);
              puVar37 = (ulong *)((long)puVar37 + uVar41);
              puVar17 = (ulong *)((long)puVar17 + uVar41);
              if (uVar35 == uVar41) goto LAB_1006c3820;
            }
LAB_1006c3810:
            do {
              puVar25 = (ulong *)((long)puVar17 + 1);
              *(char *)puVar37 = (char)*puVar17;
              puVar37 = (ulong *)((long)puVar37 + 1);
              puVar17 = puVar25;
            } while (puVar25 != puVar48);
          }
LAB_1006c3820:
          param_2[3] = param_2[3] + uVar33;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar33) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar35 = *param_4;
          puVar25[1] = param_4[1];
          *puVar25 = uVar35;
          lVar40 = param_2[3];
          if (0x10 < uVar33) {
            uVar35 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar40 + 0x28) = param_4[5];
            *(ulong *)(lVar40 + 0x20) = uVar35;
            if (0x30 < (long)uVar33) {
              puVar25 = (ulong *)(lVar40 + 0x30);
              puVar17 = param_4 + 8;
              do {
                uVar35 = puVar17[-2];
                puVar25[1] = puVar17[-1];
                *puVar25 = uVar35;
                uVar35 = *puVar17;
                puVar25[3] = puVar17[1];
                puVar25[2] = uVar35;
                puVar25 = puVar25 + 4;
                puVar17 = puVar17 + 4;
              } while (puVar25 < (ulong *)(lVar40 + uVar33));
            }
            goto LAB_1006c3820;
          }
          param_2[3] = lVar40 + uVar33;
          piVar38 = (int *)param_2[1];
        }
        puVar17 = (ulong *)(lVar29 + 4);
        uVar35 = lVar29 + 1;
        *(short *)(piVar38 + 1) = (short)uVar33;
        *piVar38 = 1;
        iVar44 = iVar49;
        if (uVar35 >> 0x10 != 0) goto LAB_1006c3638;
        goto LAB_1006c3650;
      }
      if (uVar46 <= uVar6) {
        uVar46 = *(uint *)(uVar34 + (uVar35 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
        if ((uVar46 <= uVar10) || (puVar48 = (ulong *)(uVar8 + uVar46), *puVar48 != uVar35))
        goto LAB_1006c2c38;
        puVar17 = puVar25 + 1;
        FUN_1006c7460(puVar17,puVar48 + 1,puVar3,puVar7,piVar5);
        puVar17 = puVar17 + 1;
        iVar44 = (iVar16 - uVar11) - uVar46;
        if (param_4 < puVar25) {
          piVar38 = (int *)((uVar8 - 1) + (ulong)uVar46);
          puVar25 = (ulong *)((long)puVar25 + -1);
          do {
            if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c3514;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar48 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) &&
                  (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                  puVar25 = puVar48, bVar1));
          goto LAB_1006c3480;
        }
LAB_1006c304c:
        uVar33 = (long)puVar25 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        puVar48 = puVar25;
        goto joined_r0x0001006c3064;
      }
      puVar48 = (ulong *)(lVar51 + uVar33);
      if (*puVar48 == uVar35) {
        puVar37 = puVar25 + 1;
        puVar36 = puVar48 + 1;
        puVar17 = puVar37;
        if (puVar37 < puVar23) {
          if (*puVar36 == *puVar37) {
            lVar29 = 0;
            puVar17 = puVar25 + 2;
            puVar36 = (ulong *)(lVar51 + 0x10 + uVar33);
            do {
              if (puVar23 <= puVar17) goto LAB_1006c2dd4;
              uVar41 = *puVar36;
              uVar35 = *puVar17;
              lVar29 = lVar29 + 8;
              puVar17 = puVar17 + 1;
              puVar36 = puVar36 + 1;
            } while (uVar41 == uVar35);
            uVar35 = uVar35 ^ uVar41;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = lVar29 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar37 ^ *puVar36;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          }
          puVar17 = (ulong *)(uVar35 + 8);
        }
        else {
LAB_1006c2dd4:
          if (puVar17 < puVar28) {
            if ((int)*puVar36 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar36 = (ulong *)((long)puVar36 + 4);
            }
          }
          if (puVar17 < puVar24) {
            if ((short)*puVar36 == (short)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar36 = (ulong *)((long)puVar36 + 2);
            }
          }
          if ((puVar17 < puVar3) && ((char)*puVar36 == (char)*puVar17)) {
            puVar17 = (ulong *)((long)puVar17 + 1);
          }
          puVar17 = (ulong *)((long)puVar17 + (8 - (long)puVar37));
        }
        iVar44 = iVar44 - (int)puVar48;
        if (puVar25 <= param_4) goto LAB_1006c3498;
        piVar38 = (int *)(lVar51 + -1 + uVar33);
        puVar37 = (ulong *)((long)puVar25 + -1);
        do {
          if ((char)*puVar37 != (char)*piVar38) goto LAB_1006c3588;
          puVar17 = (ulong *)((long)puVar17 + 1);
          puVar48 = (ulong *)((long)puVar37 + -1);
        } while ((piVar5 < piVar38) &&
                (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar37, puVar37 = puVar48
                , bVar1));
        goto LAB_1006c3480;
      }
LAB_1006c2c38:
      if (uVar6 < uVar45) {
        piVar38 = (int *)(lVar51 + (ulong)uVar45);
        if (*piVar38 != (int)*puVar25) goto LAB_1006c2d5c;
LAB_1006c2c94:
        puVar48 = (ulong *)((long)puVar25 + 1);
        uVar33 = *puVar48;
        uVar41 = uVar33 * -0x30e44323485a9b9d >> (uVar32 & 0x3f);
        uVar46 = *(uint *)(lVar30 + uVar41 * 4);
        uVar35 = (ulong)uVar46;
        *(int *)(lVar30 + uVar41 * 4) = iVar2;
        if (uVar6 < uVar46) {
          puVar17 = (ulong *)(lVar51 + uVar35);
          if (*puVar17 == uVar33) {
            puVar37 = (ulong *)((long)puVar25 + 9);
            puVar36 = puVar17 + 1;
            puVar39 = puVar37;
            if (puVar37 < puVar23) {
              if (*puVar36 == *puVar37) {
                lVar29 = 0;
                puVar39 = (ulong *)((long)puVar25 + 0x11);
                puVar36 = (ulong *)(lVar51 + 0x10 + uVar35);
                do {
                  if (puVar23 <= puVar39) goto LAB_1006c3208;
                  uVar41 = *puVar36;
                  uVar33 = *puVar39;
                  lVar29 = lVar29 + 8;
                  puVar39 = puVar39 + 1;
                  puVar36 = puVar36 + 1;
                } while (uVar41 == uVar33);
                uVar33 = uVar33 ^ uVar41;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar29 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar37 ^ *puVar36;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
            }
            else {
LAB_1006c3208:
              if (puVar39 < puVar28) {
                if ((int)*puVar36 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar36 = (ulong *)((long)puVar36 + 4);
                }
              }
              if (puVar39 < puVar24) {
                if ((short)*puVar36 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar36 = (ulong *)((long)puVar36 + 2);
                }
              }
              if ((puVar39 < puVar3) && ((char)*puVar36 == (char)*puVar39)) {
                puVar39 = (ulong *)((long)puVar39 + 1);
              }
              uVar33 = (long)puVar39 - (long)puVar37;
            }
            iVar44 = (int)puVar48 - (int)puVar17;
            puVar17 = (ulong *)(uVar33 + 8);
            if (param_4 < puVar48) {
              piVar38 = (int *)(lVar51 + -1 + uVar35);
              do {
                if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c35a0;
                puVar17 = (ulong *)((long)puVar17 + 1);
                puVar37 = (ulong *)((long)puVar25 + -1);
              } while ((piVar5 < piVar38) &&
                      (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                      puVar25 = puVar37, bVar1));
LAB_1006c3588:
              uVar33 = ((long)puVar37 + 1) - (long)param_4;
              puVar36 = (ulong *)param_2[3];
              puVar48 = (ulong *)((long)puVar37 + 1);
            }
            else {
              uVar33 = (long)puVar48 - (long)param_4;
              puVar36 = (ulong *)param_2[3];
            }
            goto joined_r0x0001006c3064;
          }
LAB_1006c2f24:
          puVar17 = (ulong *)((long)puVar25 + 4);
          puVar48 = (ulong *)(piVar38 + 1);
          if (uVar45 < uVar6) {
            FUN_1006c7460(puVar17,puVar48,puVar3,puVar7,piVar5);
            puVar17 = (ulong *)((long)puVar17 + 4);
            iVar44 = iVar16 - uVar45;
            if (piVar38 <= piVar4) goto LAB_1006c304c;
            if (puVar25 <= param_4) goto LAB_1006c3498;
            puVar25 = (ulong *)((long)puVar25 + -1);
            do {
              piVar38 = (int *)((long)piVar38 + -1);
              if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c3514;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar48 = (ulong *)((long)puVar25 + -1);
            } while ((piVar4 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
          }
          else {
            puVar37 = puVar17;
            if (puVar17 < puVar23) {
              if (*puVar48 == *puVar17) {
                lVar29 = 0;
                puVar48 = (ulong *)(piVar38 + 3);
                puVar37 = (ulong *)((long)puVar25 + 0xc);
                do {
                  if (puVar23 <= puVar37) goto LAB_1006c315c;
                  uVar35 = *puVar48;
                  uVar33 = *puVar37;
                  lVar29 = lVar29 + 8;
                  puVar48 = puVar48 + 1;
                  puVar37 = puVar37 + 1;
                } while (uVar35 == uVar33);
                uVar33 = uVar33 ^ uVar35;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar29 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar17 ^ *puVar48;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              puVar17 = (ulong *)(uVar33 + 4);
            }
            else {
LAB_1006c315c:
              if (puVar37 < puVar28) {
                if ((int)*puVar48 == (int)*puVar37) {
                  puVar48 = (ulong *)((long)puVar48 + 4);
                  puVar37 = (ulong *)((long)puVar37 + 4);
                }
              }
              if (puVar37 < puVar24) {
                if ((short)*puVar48 == (short)*puVar37) {
                  puVar48 = (ulong *)((long)puVar48 + 2);
                  puVar37 = (ulong *)((long)puVar37 + 2);
                }
              }
              if ((puVar37 < puVar3) && ((char)*puVar48 == (char)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
              puVar17 = (ulong *)((long)puVar37 + (4 - (long)puVar17));
            }
            iVar44 = iVar44 - (int)piVar38;
            if ((piVar38 <= piVar5) || (puVar25 <= param_4)) {
LAB_1006c3498:
              uVar33 = (long)puVar25 - (long)param_4;
              puVar36 = (ulong *)param_2[3];
              puVar48 = puVar25;
              goto joined_r0x0001006c3064;
            }
            puVar25 = (ulong *)((long)puVar25 + -1);
            do {
              piVar38 = (int *)((long)piVar38 + -1);
              if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c3514;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar48 = (ulong *)((long)puVar25 + -1);
            } while ((piVar5 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
          }
LAB_1006c3480:
          puVar48 = (ulong *)((long)puVar48 + 1);
          uVar33 = (long)puVar48 - (long)param_4;
          puVar36 = (ulong *)param_2[3];
          goto joined_r0x0001006c3490;
        }
        uVar46 = *(uint *)(uVar34 + (uVar33 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
        if ((uVar46 <= uVar10) || (puVar17 = (ulong *)(uVar8 + uVar46), *puVar17 != uVar33))
        goto LAB_1006c2f24;
        lVar29 = (long)puVar25 + 9;
        FUN_1006c7460(lVar29,puVar17 + 1,puVar3,puVar7,piVar5);
        puVar17 = (ulong *)(lVar29 + 8);
        iVar44 = (iVar2 - uVar11) - uVar46;
        if (param_4 < puVar48) {
          piVar38 = (int *)((uVar8 - 1) + (ulong)uVar46);
          do {
            if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c35a0;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar37 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) &&
                  (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                  puVar25 = puVar37, bVar1));
          goto LAB_1006c3588;
        }
        uVar33 = (long)puVar48 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        goto joined_r0x0001006c3064;
      }
      uVar45 = *(uint *)(uVar31 + (uVar35 * -0x30e4432340650000 >> ((ulong)(0x40 - iVar9) & 0x3f)) *
                                  4);
      if ((uVar10 < uVar45) && (piVar38 = (int *)(uVar8 + uVar45), *piVar38 == (int)*puVar25)) {
        uVar45 = uVar45 + uVar11;
        goto LAB_1006c2c94;
      }
LAB_1006c2d5c:
      puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
      goto LAB_1006c2a00;
    }
  }
  else if (iVar9 == 7) {
    if (puVar25 < puVar20) {
      uVar32 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      iVar9 = *(int *)((long)puVar21 + 0xbc);
      uVar22 = (ulong)(0x40 - (int)puVar21[0x18]);
      puVar23 = (ulong *)((long)puVar3 - 7);
      puVar28 = (ulong *)((long)puVar3 - 3);
      puVar24 = (ulong *)((long)puVar3 - 1);
      puVar21 = puVar3 + -4;
LAB_1006c1b0c:
      uVar35 = *puVar25;
      uVar41 = uVar35 * -0x30e44323485a9b9d >> (uVar32 & 0x3f);
      uVar42 = uVar35 * -0x30e44323405a9d00 >> (uVar27 & 0x3f);
      iVar44 = (int)puVar25;
      iVar16 = iVar44 - iVar50;
      uVar46 = *(uint *)(lVar30 + uVar41 * 4);
      uVar33 = (ulong)uVar46;
      uVar45 = *(uint *)(lVar19 + uVar42 * 4);
      iVar2 = iVar16 + 1;
      uVar14 = iVar2 - iVar49;
      piVar38 = (int *)(uVar8 + (uVar14 - uVar11));
      if (uVar6 <= uVar14) {
        piVar38 = (int *)(lVar51 + (ulong)uVar14);
      }
      *(int *)(lVar19 + uVar42 * 4) = iVar16;
      *(int *)(lVar30 + uVar41 * 4) = iVar16;
      if ((uVar14 - uVar6 < 0xfffffffd) &&
         (puVar48 = (ulong *)((long)puVar25 + 1), *piVar38 == *(int *)puVar48)) {
        puVar17 = puVar7;
        if (uVar6 <= uVar14) {
          puVar17 = puVar3;
        }
        lVar29 = (long)puVar25 + 5;
        FUN_1006c7460(lVar29,piVar38 + 1,puVar3,puVar17,piVar5);
        uVar33 = (long)puVar48 - (long)param_4;
        puVar25 = (ulong *)param_2[3];
        if (puVar21 < puVar48) {
          puVar17 = param_4;
          puVar37 = puVar25;
          if (param_4 <= puVar21) {
            puVar37 = (ulong *)((long)puVar25 + ((long)puVar21 - (long)param_4));
            uVar35 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar35;
            uVar35 = param_4[2];
            puVar25[3] = param_4[3];
            puVar25[2] = uVar35;
            puVar17 = puVar21;
            if (0x20 < (long)puVar21 - (long)param_4) {
              puVar25 = puVar25 + 4;
              puVar36 = param_4 + 6;
              do {
                uVar35 = puVar36[-2];
                puVar25[1] = puVar36[-1];
                *puVar25 = uVar35;
                uVar35 = *puVar36;
                puVar25[3] = puVar36[1];
                puVar25[2] = uVar35;
                puVar25 = puVar25 + 4;
                puVar36 = puVar36 + 4;
              } while (puVar25 < puVar37);
            }
          }
          if (puVar17 < puVar48) {
            uVar35 = (long)puVar48 - (long)puVar17;
            if ((7 < uVar35) && (0x3f < (ulong)((long)puVar37 - (long)puVar17))) {
              if (uVar35 < 0x40) {
                uVar42 = 0;
              }
              else {
                uVar42 = uVar35 & 0xffffffffffffffc0;
                puVar25 = puVar37 + 4;
                puVar36 = puVar17 + 4;
                uVar41 = uVar42;
                do {
                  uVar52 = puVar36[-4];
                  uVar54 = puVar36[-1];
                  uVar53 = puVar36[-2];
                  uVar56 = puVar36[1];
                  uVar55 = *puVar36;
                  uVar58 = puVar36[3];
                  uVar57 = puVar36[2];
                  puVar25[-3] = puVar36[-3];
                  puVar25[-4] = uVar52;
                  puVar25[-1] = uVar54;
                  puVar25[-2] = uVar53;
                  puVar25[1] = uVar56;
                  *puVar25 = uVar55;
                  puVar25[3] = uVar58;
                  puVar25[2] = uVar57;
                  uVar41 = uVar41 - 0x40;
                  puVar25 = puVar25 + 8;
                  puVar36 = puVar36 + 8;
                } while (uVar41 != 0);
                if (uVar35 == uVar42) goto LAB_1006c292c;
                if ((uVar35 & 0x38) == 0) {
                  puVar17 = (ulong *)((long)puVar17 + uVar42);
                  puVar37 = (ulong *)((long)puVar37 + uVar42);
                  goto LAB_1006c291c;
                }
              }
              uVar41 = uVar35 & 0xfffffffffffffff8;
              lVar40 = uVar42 - uVar41;
              puVar26 = (undefined8 *)((long)puVar37 + uVar42);
              puVar43 = (undefined8 *)((long)puVar17 + uVar42);
              do {
                *puVar26 = *puVar43;
                lVar40 = lVar40 + 8;
                puVar26 = puVar26 + 1;
                puVar43 = puVar43 + 1;
              } while (lVar40 != 0);
              puVar37 = (ulong *)((long)puVar37 + uVar41);
              puVar17 = (ulong *)((long)puVar17 + uVar41);
              if (uVar35 == uVar41) goto LAB_1006c292c;
            }
LAB_1006c291c:
            do {
              puVar25 = (ulong *)((long)puVar17 + 1);
              *(char *)puVar37 = (char)*puVar17;
              puVar37 = (ulong *)((long)puVar37 + 1);
              puVar17 = puVar25;
            } while (puVar25 != puVar48);
          }
LAB_1006c292c:
          param_2[3] = param_2[3] + uVar33;
          piVar38 = (int *)param_2[1];
          if (0xffff < uVar33) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
          }
        }
        else {
          uVar35 = *param_4;
          puVar25[1] = param_4[1];
          *puVar25 = uVar35;
          lVar40 = param_2[3];
          if (0x10 < uVar33) {
            uVar35 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar40 + 0x28) = param_4[5];
            *(ulong *)(lVar40 + 0x20) = uVar35;
            if (0x30 < (long)uVar33) {
              puVar25 = (ulong *)(lVar40 + 0x30);
              puVar17 = param_4 + 8;
              do {
                uVar35 = puVar17[-2];
                puVar25[1] = puVar17[-1];
                *puVar25 = uVar35;
                uVar35 = *puVar17;
                puVar25[3] = puVar17[1];
                puVar25[2] = uVar35;
                puVar25 = puVar25 + 4;
                puVar17 = puVar17 + 4;
              } while (puVar25 < (ulong *)(lVar40 + uVar33));
            }
            goto LAB_1006c292c;
          }
          param_2[3] = lVar40 + uVar33;
          piVar38 = (int *)param_2[1];
        }
        puVar17 = (ulong *)(lVar29 + 4);
        uVar35 = lVar29 + 1;
        *(short *)(piVar38 + 1) = (short)uVar33;
        *piVar38 = 1;
        iVar44 = iVar49;
        if (uVar35 >> 0x10 != 0) goto LAB_1006c273c;
        goto LAB_1006c2754;
      }
      if (uVar46 <= uVar6) {
        uVar46 = *(uint *)(uVar34 + (uVar35 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
        if ((uVar46 <= uVar10) || (puVar48 = (ulong *)(uVar8 + uVar46), *puVar48 != uVar35))
        goto LAB_1006c1d3c;
        puVar17 = puVar25 + 1;
        FUN_1006c7460(puVar17,puVar48 + 1,puVar3,puVar7,piVar5);
        puVar17 = puVar17 + 1;
        iVar44 = (iVar16 - uVar11) - uVar46;
        if (param_4 < puVar25) {
          piVar38 = (int *)((uVar8 - 1) + (ulong)uVar46);
          puVar25 = (ulong *)((long)puVar25 + -1);
          do {
            if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c2618;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar48 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) &&
                  (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                  puVar25 = puVar48, bVar1));
          goto LAB_1006c2584;
        }
LAB_1006c2150:
        uVar33 = (long)puVar25 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        puVar48 = puVar25;
        goto joined_r0x0001006c2168;
      }
      puVar48 = (ulong *)(lVar51 + uVar33);
      if (*puVar48 == uVar35) {
        puVar37 = puVar25 + 1;
        puVar36 = puVar48 + 1;
        puVar17 = puVar37;
        if (puVar37 < puVar23) {
          if (*puVar36 == *puVar37) {
            lVar29 = 0;
            puVar17 = puVar25 + 2;
            puVar36 = (ulong *)(lVar51 + 0x10 + uVar33);
            do {
              if (puVar23 <= puVar17) goto LAB_1006c1ed8;
              uVar41 = *puVar36;
              uVar35 = *puVar17;
              lVar29 = lVar29 + 8;
              puVar17 = puVar17 + 1;
              puVar36 = puVar36 + 1;
            } while (uVar41 == uVar35);
            uVar35 = uVar35 ^ uVar41;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = lVar29 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar37 ^ *puVar36;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          }
          puVar17 = (ulong *)(uVar35 + 8);
        }
        else {
LAB_1006c1ed8:
          if (puVar17 < puVar28) {
            if ((int)*puVar36 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar36 = (ulong *)((long)puVar36 + 4);
            }
          }
          if (puVar17 < puVar24) {
            if ((short)*puVar36 == (short)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar36 = (ulong *)((long)puVar36 + 2);
            }
          }
          if ((puVar17 < puVar3) && ((char)*puVar36 == (char)*puVar17)) {
            puVar17 = (ulong *)((long)puVar17 + 1);
          }
          puVar17 = (ulong *)((long)puVar17 + (8 - (long)puVar37));
        }
        iVar44 = iVar44 - (int)puVar48;
        if (puVar25 <= param_4) goto LAB_1006c259c;
        piVar38 = (int *)(lVar51 + -1 + uVar33);
        puVar37 = (ulong *)((long)puVar25 + -1);
        do {
          if ((char)*puVar37 != (char)*piVar38) goto LAB_1006c268c;
          puVar17 = (ulong *)((long)puVar17 + 1);
          puVar48 = (ulong *)((long)puVar37 + -1);
        } while ((piVar5 < piVar38) &&
                (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar37, puVar37 = puVar48
                , bVar1));
        goto LAB_1006c2584;
      }
LAB_1006c1d3c:
      if (uVar6 < uVar45) {
        piVar38 = (int *)(lVar51 + (ulong)uVar45);
        if (*piVar38 != (int)*puVar25) goto LAB_1006c1e60;
LAB_1006c1d98:
        puVar48 = (ulong *)((long)puVar25 + 1);
        uVar33 = *puVar48;
        uVar41 = uVar33 * -0x30e44323485a9b9d >> (uVar32 & 0x3f);
        uVar46 = *(uint *)(lVar30 + uVar41 * 4);
        uVar35 = (ulong)uVar46;
        *(int *)(lVar30 + uVar41 * 4) = iVar2;
        if (uVar6 < uVar46) {
          puVar17 = (ulong *)(lVar51 + uVar35);
          if (*puVar17 == uVar33) {
            puVar37 = (ulong *)((long)puVar25 + 9);
            puVar36 = puVar17 + 1;
            puVar39 = puVar37;
            if (puVar37 < puVar23) {
              if (*puVar36 == *puVar37) {
                lVar29 = 0;
                puVar39 = (ulong *)((long)puVar25 + 0x11);
                puVar36 = (ulong *)(lVar51 + 0x10 + uVar35);
                do {
                  if (puVar23 <= puVar39) goto LAB_1006c230c;
                  uVar41 = *puVar36;
                  uVar33 = *puVar39;
                  lVar29 = lVar29 + 8;
                  puVar39 = puVar39 + 1;
                  puVar36 = puVar36 + 1;
                } while (uVar41 == uVar33);
                uVar33 = uVar33 ^ uVar41;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar29 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar37 ^ *puVar36;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
            }
            else {
LAB_1006c230c:
              if (puVar39 < puVar28) {
                if ((int)*puVar36 == (int)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar36 = (ulong *)((long)puVar36 + 4);
                }
              }
              if (puVar39 < puVar24) {
                if ((short)*puVar36 == (short)*puVar39) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar36 = (ulong *)((long)puVar36 + 2);
                }
              }
              if ((puVar39 < puVar3) && ((char)*puVar36 == (char)*puVar39)) {
                puVar39 = (ulong *)((long)puVar39 + 1);
              }
              uVar33 = (long)puVar39 - (long)puVar37;
            }
            iVar44 = (int)puVar48 - (int)puVar17;
            puVar17 = (ulong *)(uVar33 + 8);
            if (param_4 < puVar48) {
              piVar38 = (int *)(lVar51 + -1 + uVar35);
              do {
                if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c26a4;
                puVar17 = (ulong *)((long)puVar17 + 1);
                puVar37 = (ulong *)((long)puVar25 + -1);
              } while ((piVar5 < piVar38) &&
                      (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                      puVar25 = puVar37, bVar1));
LAB_1006c268c:
              uVar33 = ((long)puVar37 + 1) - (long)param_4;
              puVar36 = (ulong *)param_2[3];
              puVar48 = (ulong *)((long)puVar37 + 1);
            }
            else {
              uVar33 = (long)puVar48 - (long)param_4;
              puVar36 = (ulong *)param_2[3];
            }
            goto joined_r0x0001006c2168;
          }
LAB_1006c2028:
          puVar17 = (ulong *)((long)puVar25 + 4);
          puVar48 = (ulong *)(piVar38 + 1);
          if (uVar45 < uVar6) {
            FUN_1006c7460(puVar17,puVar48,puVar3,puVar7,piVar5);
            puVar17 = (ulong *)((long)puVar17 + 4);
            iVar44 = iVar16 - uVar45;
            if (piVar38 <= piVar4) goto LAB_1006c2150;
            if (puVar25 <= param_4) goto LAB_1006c259c;
            puVar25 = (ulong *)((long)puVar25 + -1);
            do {
              piVar38 = (int *)((long)piVar38 + -1);
              if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c2618;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar48 = (ulong *)((long)puVar25 + -1);
            } while ((piVar4 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
          }
          else {
            puVar37 = puVar17;
            if (puVar17 < puVar23) {
              if (*puVar48 == *puVar17) {
                lVar29 = 0;
                puVar48 = (ulong *)(piVar38 + 3);
                puVar37 = (ulong *)((long)puVar25 + 0xc);
                do {
                  if (puVar23 <= puVar37) goto LAB_1006c2260;
                  uVar35 = *puVar48;
                  uVar33 = *puVar37;
                  lVar29 = lVar29 + 8;
                  puVar48 = puVar48 + 1;
                  puVar37 = puVar37 + 1;
                } while (uVar35 == uVar33);
                uVar33 = uVar33 ^ uVar35;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar29 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar17 ^ *puVar48;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              puVar17 = (ulong *)(uVar33 + 4);
            }
            else {
LAB_1006c2260:
              if (puVar37 < puVar28) {
                if ((int)*puVar48 == (int)*puVar37) {
                  puVar48 = (ulong *)((long)puVar48 + 4);
                  puVar37 = (ulong *)((long)puVar37 + 4);
                }
              }
              if (puVar37 < puVar24) {
                if ((short)*puVar48 == (short)*puVar37) {
                  puVar48 = (ulong *)((long)puVar48 + 2);
                  puVar37 = (ulong *)((long)puVar37 + 2);
                }
              }
              if ((puVar37 < puVar3) && ((char)*puVar48 == (char)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
              puVar17 = (ulong *)((long)puVar37 + (4 - (long)puVar17));
            }
            iVar44 = iVar44 - (int)piVar38;
            if ((piVar38 <= piVar5) || (puVar25 <= param_4)) {
LAB_1006c259c:
              uVar33 = (long)puVar25 - (long)param_4;
              puVar36 = (ulong *)param_2[3];
              puVar48 = puVar25;
              goto joined_r0x0001006c2168;
            }
            puVar25 = (ulong *)((long)puVar25 + -1);
            do {
              piVar38 = (int *)((long)piVar38 + -1);
              if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c2618;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar48 = (ulong *)((long)puVar25 + -1);
            } while ((piVar5 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
          }
LAB_1006c2584:
          puVar48 = (ulong *)((long)puVar48 + 1);
          uVar33 = (long)puVar48 - (long)param_4;
          puVar36 = (ulong *)param_2[3];
          goto joined_r0x0001006c2594;
        }
        uVar46 = *(uint *)(uVar34 + (uVar33 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
        if ((uVar46 <= uVar10) || (puVar17 = (ulong *)(uVar8 + uVar46), *puVar17 != uVar33))
        goto LAB_1006c2028;
        lVar29 = (long)puVar25 + 9;
        FUN_1006c7460(lVar29,puVar17 + 1,puVar3,puVar7,piVar5);
        puVar17 = (ulong *)(lVar29 + 8);
        iVar44 = (iVar2 - uVar11) - uVar46;
        if (param_4 < puVar48) {
          piVar38 = (int *)((uVar8 - 1) + (ulong)uVar46);
          do {
            if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c26a4;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar37 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) &&
                  (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                  puVar25 = puVar37, bVar1));
          goto LAB_1006c268c;
        }
        uVar33 = (long)puVar48 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        goto joined_r0x0001006c2168;
      }
      uVar45 = *(uint *)(uVar31 + (uVar35 * -0x30e44323405a9d00 >> ((ulong)(0x40 - iVar9) & 0x3f)) *
                                  4);
      if ((uVar10 < uVar45) && (piVar38 = (int *)(uVar8 + uVar45), *piVar38 == (int)*puVar25)) {
        uVar45 = uVar45 + uVar11;
        goto LAB_1006c1d98;
      }
LAB_1006c1e60:
      puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
      goto LAB_1006c1b00;
    }
  }
  else if (puVar25 < puVar20) {
    uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    uVar45 = 0x20 - *(int *)(param_1 + 0xbc);
    iVar9 = *(int *)((long)puVar21 + 0xbc);
    uVar22 = (ulong)(0x40 - (int)puVar21[0x18]);
    puVar23 = (ulong *)((long)puVar3 - 7);
    puVar28 = (ulong *)((long)puVar3 - 3);
    puVar24 = (ulong *)((long)puVar3 - 1);
    puVar21 = puVar3 + -4;
LAB_1006c47f8:
    uVar32 = *puVar25 * -0x30e44323485a9b9d;
    uVar35 = uVar32 >> (uVar27 & 0x3f);
    uVar13 = (int)*puVar25 * -0x61c8864f;
    uVar12 = uVar13 >> (ulong)(uVar45 & 0x1f);
    iVar44 = (int)puVar25;
    iVar16 = iVar44 - iVar50;
    uVar14 = *(uint *)(lVar30 + uVar35 * 4);
    uVar33 = (ulong)uVar14;
    uVar46 = *(uint *)(lVar19 + (ulong)uVar12 * 4);
    iVar2 = iVar16 + 1;
    uVar15 = iVar2 - iVar49;
    piVar38 = (int *)(uVar8 + (uVar15 - uVar11));
    if (uVar6 <= uVar15) {
      piVar38 = (int *)(lVar51 + (ulong)uVar15);
    }
    *(int *)(lVar19 + (ulong)uVar12 * 4) = iVar16;
    *(int *)(lVar30 + uVar35 * 4) = iVar16;
    if ((uVar15 - uVar6 < 0xfffffffd) &&
       (puVar48 = (ulong *)((long)puVar25 + 1), *piVar38 == *(int *)puVar48)) {
      puVar17 = puVar7;
      if (uVar6 <= uVar15) {
        puVar17 = puVar3;
      }
      lVar29 = (long)puVar25 + 5;
      FUN_1006c7460(lVar29,piVar38 + 1,puVar3,puVar17,piVar5);
      uVar32 = (long)puVar48 - (long)param_4;
      puVar25 = (ulong *)param_2[3];
      if (puVar21 < puVar48) {
        puVar17 = param_4;
        puVar37 = puVar25;
        if (param_4 <= puVar21) {
          puVar37 = (ulong *)((long)puVar25 + ((long)puVar21 - (long)param_4));
          uVar33 = *param_4;
          puVar25[1] = param_4[1];
          *puVar25 = uVar33;
          uVar33 = param_4[2];
          puVar25[3] = param_4[3];
          puVar25[2] = uVar33;
          puVar17 = puVar21;
          if (0x20 < (long)puVar21 - (long)param_4) {
            puVar25 = puVar25 + 4;
            puVar36 = param_4 + 6;
            do {
              uVar33 = puVar36[-2];
              puVar25[1] = puVar36[-1];
              *puVar25 = uVar33;
              uVar33 = *puVar36;
              puVar25[3] = puVar36[1];
              puVar25[2] = uVar33;
              puVar25 = puVar25 + 4;
              puVar36 = puVar36 + 4;
            } while (puVar25 < puVar37);
          }
        }
        if (puVar17 < puVar48) {
          uVar33 = (long)puVar48 - (long)puVar17;
          if ((7 < uVar33) && (0x3f < (ulong)((long)puVar37 - (long)puVar17))) {
            if (uVar33 < 0x40) {
              uVar41 = 0;
            }
            else {
              uVar41 = uVar33 & 0xffffffffffffffc0;
              puVar25 = puVar37 + 4;
              puVar36 = puVar17 + 4;
              uVar35 = uVar41;
              do {
                uVar42 = puVar36[-4];
                uVar53 = puVar36[-1];
                uVar52 = puVar36[-2];
                uVar55 = puVar36[1];
                uVar54 = *puVar36;
                uVar57 = puVar36[3];
                uVar56 = puVar36[2];
                puVar25[-3] = puVar36[-3];
                puVar25[-4] = uVar42;
                puVar25[-1] = uVar53;
                puVar25[-2] = uVar52;
                puVar25[1] = uVar55;
                *puVar25 = uVar54;
                puVar25[3] = uVar57;
                puVar25[2] = uVar56;
                uVar35 = uVar35 - 0x40;
                puVar25 = puVar25 + 8;
                puVar36 = puVar36 + 8;
              } while (uVar35 != 0);
              if (uVar33 == uVar41) goto LAB_1006c5600;
              if ((uVar33 & 0x38) == 0) {
                puVar17 = (ulong *)((long)puVar17 + uVar41);
                puVar37 = (ulong *)((long)puVar37 + uVar41);
                goto LAB_1006c55f0;
              }
            }
            uVar35 = uVar33 & 0xfffffffffffffff8;
            lVar40 = uVar41 - uVar35;
            puVar26 = (undefined8 *)((long)puVar37 + uVar41);
            puVar43 = (undefined8 *)((long)puVar17 + uVar41);
            do {
              *puVar26 = *puVar43;
              lVar40 = lVar40 + 8;
              puVar26 = puVar26 + 1;
              puVar43 = puVar43 + 1;
            } while (lVar40 != 0);
            puVar37 = (ulong *)((long)puVar37 + uVar35);
            puVar17 = (ulong *)((long)puVar17 + uVar35);
            if (uVar33 == uVar35) goto LAB_1006c5600;
          }
LAB_1006c55f0:
          do {
            puVar25 = (ulong *)((long)puVar17 + 1);
            *(char *)puVar37 = (char)*puVar17;
            puVar37 = (ulong *)((long)puVar37 + 1);
            puVar17 = puVar25;
          } while (puVar25 != puVar48);
        }
LAB_1006c5600:
        param_2[3] = param_2[3] + uVar32;
        piVar38 = (int *)param_2[1];
        if (0xffff < uVar32) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
        }
      }
      else {
        uVar33 = *param_4;
        puVar25[1] = param_4[1];
        *puVar25 = uVar33;
        lVar40 = param_2[3];
        if (0x10 < uVar32) {
          uVar33 = param_4[2];
          *(ulong *)(lVar40 + 0x18) = param_4[3];
          *(ulong *)(lVar40 + 0x10) = uVar33;
          uVar33 = param_4[4];
          *(ulong *)(lVar40 + 0x28) = param_4[5];
          *(ulong *)(lVar40 + 0x20) = uVar33;
          if (0x30 < (long)uVar32) {
            puVar25 = (ulong *)(lVar40 + 0x30);
            puVar17 = param_4 + 8;
            do {
              uVar33 = puVar17[-2];
              puVar25[1] = puVar17[-1];
              *puVar25 = uVar33;
              uVar33 = *puVar17;
              puVar25[3] = puVar17[1];
              puVar25[2] = uVar33;
              puVar25 = puVar25 + 4;
              puVar17 = puVar17 + 4;
            } while (puVar25 < (ulong *)(lVar40 + uVar32));
          }
          goto LAB_1006c5600;
        }
        param_2[3] = lVar40 + uVar32;
        piVar38 = (int *)param_2[1];
      }
      puVar17 = (ulong *)(lVar29 + 4);
      uVar33 = lVar29 + 1;
      *(short *)(piVar38 + 1) = (short)uVar32;
      *piVar38 = 1;
      iVar44 = iVar49;
      if (uVar33 >> 0x10 != 0) goto LAB_1006c5414;
      goto LAB_1006c542c;
    }
    if (uVar14 <= uVar6) {
      uVar14 = *(uint *)(uVar34 + (uVar32 >> (uVar22 & 0x3f)) * 4);
      if ((uVar14 <= uVar10) || (puVar48 = (ulong *)(uVar8 + uVar14), *puVar48 != *puVar25))
      goto LAB_1006c4a30;
      puVar17 = puVar25 + 1;
      FUN_1006c7460(puVar17,puVar48 + 1,puVar3,puVar7,piVar5);
      puVar17 = puVar17 + 1;
      iVar44 = (iVar16 - uVar11) - uVar14;
      if (param_4 < puVar25) {
        piVar38 = (int *)((uVar8 - 1) + (ulong)uVar14);
        puVar25 = (ulong *)((long)puVar25 + -1);
        do {
          if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c52f0;
          puVar17 = (ulong *)((long)puVar17 + 1);
          puVar48 = (ulong *)((long)puVar25 + -1);
        } while ((piVar4 < piVar38) &&
                (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25, puVar25 = puVar48
                , bVar1));
        goto LAB_1006c525c;
      }
LAB_1006c4e3c:
      uVar32 = (long)puVar25 - (long)param_4;
      puVar36 = (ulong *)param_2[3];
      puVar48 = puVar25;
      goto joined_r0x0001006c4e54;
    }
    puVar48 = (ulong *)(lVar51 + uVar33);
    if (*puVar48 == *puVar25) {
      puVar37 = puVar25 + 1;
      puVar36 = puVar48 + 1;
      puVar17 = puVar37;
      if (puVar37 < puVar23) {
        if (*puVar36 == *puVar37) {
          lVar29 = 0;
          puVar17 = puVar25 + 2;
          puVar36 = (ulong *)(lVar51 + 0x10 + uVar33);
          do {
            if (puVar23 <= puVar17) goto LAB_1006c4bc4;
            uVar35 = *puVar36;
            uVar32 = *puVar17;
            lVar29 = lVar29 + 8;
            puVar17 = puVar17 + 1;
            puVar36 = puVar36 + 1;
          } while (uVar35 == uVar32);
          uVar32 = uVar32 ^ uVar35;
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = lVar29 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
        }
        else {
          uVar32 = *puVar37 ^ *puVar36;
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
        }
        puVar17 = (ulong *)(uVar32 + 8);
      }
      else {
LAB_1006c4bc4:
        if (puVar17 < puVar28) {
          if ((int)*puVar36 == (int)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 4);
            puVar36 = (ulong *)((long)puVar36 + 4);
          }
        }
        if (puVar17 < puVar24) {
          if ((short)*puVar36 == (short)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 2);
            puVar36 = (ulong *)((long)puVar36 + 2);
          }
        }
        if ((puVar17 < puVar3) && ((char)*puVar36 == (char)*puVar17)) {
          puVar17 = (ulong *)((long)puVar17 + 1);
        }
        puVar17 = (ulong *)((long)puVar17 + (8 - (long)puVar37));
      }
      iVar44 = iVar44 - (int)puVar48;
      if (puVar25 <= param_4) goto LAB_1006c5274;
      piVar38 = (int *)(lVar51 + -1 + uVar33);
      puVar37 = (ulong *)((long)puVar25 + -1);
      do {
        if ((char)*puVar37 != (char)*piVar38) goto LAB_1006c5364;
        puVar17 = (ulong *)((long)puVar17 + 1);
        puVar48 = (ulong *)((long)puVar37 + -1);
      } while ((piVar5 < piVar38) &&
              (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar37, puVar37 = puVar48,
              bVar1));
      goto LAB_1006c525c;
    }
LAB_1006c4a30:
    if (uVar46 <= uVar6) {
      uVar46 = *(uint *)(uVar31 + (ulong)(uVar13 >> (ulong)(0x20U - iVar9 & 0x1f)) * 4);
      if ((uVar46 <= uVar10) || (piVar38 = (int *)(uVar8 + uVar46), *piVar38 != (int)*puVar25))
      goto LAB_1006c4b4c;
      uVar46 = uVar46 + uVar11;
LAB_1006c4a84:
      puVar48 = (ulong *)((long)puVar25 + 1);
      uVar32 = *puVar48;
      uVar35 = uVar32 * -0x30e44323485a9b9d >> (uVar27 & 0x3f);
      uVar14 = *(uint *)(lVar30 + uVar35 * 4);
      uVar33 = (ulong)uVar14;
      *(int *)(lVar30 + uVar35 * 4) = iVar2;
      if (uVar6 < uVar14) {
        puVar17 = (ulong *)(lVar51 + uVar33);
        if (*puVar17 == uVar32) {
          puVar37 = (ulong *)((long)puVar25 + 9);
          puVar36 = puVar17 + 1;
          puVar39 = puVar37;
          if (puVar37 < puVar23) {
            if (*puVar36 == *puVar37) {
              lVar29 = 0;
              puVar39 = (ulong *)((long)puVar25 + 0x11);
              puVar36 = (ulong *)(lVar51 + 0x10 + uVar33);
              do {
                if (puVar23 <= puVar39) goto LAB_1006c4fe0;
                uVar35 = *puVar36;
                uVar32 = *puVar39;
                lVar29 = lVar29 + 8;
                puVar39 = puVar39 + 1;
                puVar36 = puVar36 + 1;
              } while (uVar35 == uVar32);
              uVar32 = uVar32 ^ uVar35;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar32 = lVar29 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            }
            else {
              uVar32 = *puVar37 ^ *puVar36;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
            }
          }
          else {
LAB_1006c4fe0:
            if (puVar39 < puVar28) {
              if ((int)*puVar36 == (int)*puVar39) {
                puVar39 = (ulong *)((long)puVar39 + 4);
                puVar36 = (ulong *)((long)puVar36 + 4);
              }
            }
            if (puVar39 < puVar24) {
              if ((short)*puVar36 == (short)*puVar39) {
                puVar39 = (ulong *)((long)puVar39 + 2);
                puVar36 = (ulong *)((long)puVar36 + 2);
              }
            }
            if ((puVar39 < puVar3) && ((char)*puVar36 == (char)*puVar39)) {
              puVar39 = (ulong *)((long)puVar39 + 1);
            }
            uVar32 = (long)puVar39 - (long)puVar37;
          }
          iVar44 = (int)puVar48 - (int)puVar17;
          puVar17 = (ulong *)(uVar32 + 8);
          if (param_4 < puVar48) {
            piVar38 = (int *)(lVar51 + -1 + uVar33);
            do {
              if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c537c;
              puVar17 = (ulong *)((long)puVar17 + 1);
              puVar37 = (ulong *)((long)puVar25 + -1);
            } while ((piVar5 < piVar38) &&
                    (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25,
                    puVar25 = puVar37, bVar1));
LAB_1006c5364:
            uVar32 = ((long)puVar37 + 1) - (long)param_4;
            puVar36 = (ulong *)param_2[3];
            puVar48 = (ulong *)((long)puVar37 + 1);
          }
          else {
            uVar32 = (long)puVar48 - (long)param_4;
            puVar36 = (ulong *)param_2[3];
          }
          goto joined_r0x0001006c4e54;
        }
LAB_1006c4d14:
        puVar17 = (ulong *)((long)puVar25 + 4);
        puVar48 = (ulong *)(piVar38 + 1);
        if (uVar46 < uVar6) {
          FUN_1006c7460(puVar17,puVar48,puVar3,puVar7,piVar5);
          puVar17 = (ulong *)((long)puVar17 + 4);
          iVar44 = iVar16 - uVar46;
          if (piVar38 <= piVar4) goto LAB_1006c4e3c;
          if (puVar25 <= param_4) goto LAB_1006c5274;
          puVar25 = (ulong *)((long)puVar25 + -1);
          do {
            piVar38 = (int *)((long)piVar38 + -1);
            if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c52f0;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar48 = (ulong *)((long)puVar25 + -1);
          } while ((piVar4 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
        }
        else {
          puVar37 = puVar17;
          if (puVar17 < puVar23) {
            if (*puVar48 == *puVar17) {
              lVar29 = 0;
              puVar48 = (ulong *)(piVar38 + 3);
              puVar37 = (ulong *)((long)puVar25 + 0xc);
              do {
                if (puVar23 <= puVar37) goto LAB_1006c4f30;
                uVar33 = *puVar48;
                uVar32 = *puVar37;
                lVar29 = lVar29 + 8;
                puVar48 = puVar48 + 1;
                puVar37 = puVar37 + 1;
              } while (uVar33 == uVar32);
              uVar32 = uVar32 ^ uVar33;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar32 = lVar29 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            }
            else {
              uVar32 = *puVar17 ^ *puVar48;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
            }
            puVar17 = (ulong *)(uVar32 + 4);
          }
          else {
LAB_1006c4f30:
            if (puVar37 < puVar28) {
              if ((int)*puVar48 == (int)*puVar37) {
                puVar48 = (ulong *)((long)puVar48 + 4);
                puVar37 = (ulong *)((long)puVar37 + 4);
              }
            }
            if (puVar37 < puVar24) {
              if ((short)*puVar48 == (short)*puVar37) {
                puVar48 = (ulong *)((long)puVar48 + 2);
                puVar37 = (ulong *)((long)puVar37 + 2);
              }
            }
            if ((puVar37 < puVar3) && ((char)*puVar48 == (char)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 1);
            }
            puVar17 = (ulong *)((long)puVar37 + (4 - (long)puVar17));
          }
          iVar44 = iVar44 - (int)piVar38;
          if ((piVar38 <= piVar5) || (puVar25 <= param_4)) {
LAB_1006c5274:
            uVar32 = (long)puVar25 - (long)param_4;
            puVar36 = (ulong *)param_2[3];
            puVar48 = puVar25;
            goto joined_r0x0001006c4e54;
          }
          puVar25 = (ulong *)((long)puVar25 + -1);
          do {
            piVar38 = (int *)((long)piVar38 + -1);
            if ((char)*puVar25 != *(char *)piVar38) goto LAB_1006c52f0;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar48 = (ulong *)((long)puVar25 + -1);
          } while ((piVar5 < piVar38) && (bVar1 = param_4 < puVar25, puVar25 = puVar48, bVar1));
        }
LAB_1006c525c:
        puVar48 = (ulong *)((long)puVar48 + 1);
        uVar32 = (long)puVar48 - (long)param_4;
        puVar36 = (ulong *)param_2[3];
        goto joined_r0x0001006c526c;
      }
      uVar14 = *(uint *)(uVar34 + (uVar32 * -0x30e44323485a9b9d >> (uVar22 & 0x3f)) * 4);
      if ((uVar14 <= uVar10) || (puVar17 = (ulong *)(uVar8 + uVar14), *puVar17 != uVar32))
      goto LAB_1006c4d14;
      lVar29 = (long)puVar25 + 9;
      FUN_1006c7460(lVar29,puVar17 + 1,puVar3,puVar7,piVar5);
      puVar17 = (ulong *)(lVar29 + 8);
      iVar44 = (iVar2 - uVar11) - uVar14;
      if (param_4 < puVar48) {
        piVar38 = (int *)((uVar8 - 1) + (ulong)uVar14);
        do {
          if ((char)*puVar25 != (char)*piVar38) goto LAB_1006c537c;
          puVar17 = (ulong *)((long)puVar17 + 1);
          puVar37 = (ulong *)((long)puVar25 + -1);
        } while ((piVar4 < piVar38) &&
                (piVar38 = (int *)((long)piVar38 + -1), bVar1 = param_4 < puVar25, puVar25 = puVar37
                , bVar1));
        goto LAB_1006c5364;
      }
      uVar32 = (long)puVar48 - (long)param_4;
      puVar36 = (ulong *)param_2[3];
      goto joined_r0x0001006c4e54;
    }
    piVar38 = (int *)(lVar51 + (ulong)uVar46);
    if (*piVar38 == (int)*puVar25) goto LAB_1006c4a84;
LAB_1006c4b4c:
    puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
    goto LAB_1006c47ec;
  }
LAB_1006c564c:
  *param_3 = iVar49;
  param_3[1] = iVar47;
  return (long)puVar3 - (long)param_4;
LAB_1006c4408:
  uVar33 = ((long)puVar25 + 1) - (long)param_4;
  puVar36 = (ulong *)param_2[3];
  puVar48 = (ulong *)((long)puVar25 + 1);
joined_r0x0001006c3f58:
  if (puVar21 < puVar48) goto LAB_1006c4170;
LAB_1006c43a0:
  uVar35 = *param_4;
  puVar36[1] = param_4[1];
  *puVar36 = uVar35;
  lVar29 = param_2[3];
  if (uVar33 < 0x11) {
    param_2[3] = lVar29 + uVar33;
    piVar38 = (int *)param_2[1];
    goto LAB_1006c450c;
  }
  uVar35 = param_4[2];
  *(ulong *)(lVar29 + 0x18) = param_4[3];
  *(ulong *)(lVar29 + 0x10) = uVar35;
  uVar35 = param_4[4];
  *(ulong *)(lVar29 + 0x28) = param_4[5];
  *(ulong *)(lVar29 + 0x20) = uVar35;
  if (0x30 < (long)uVar33) {
    puVar25 = (ulong *)(lVar29 + 0x30);
    puVar37 = param_4 + 8;
    do {
      uVar35 = puVar37[-2];
      puVar25[1] = puVar37[-1];
      *puVar25 = uVar35;
      uVar35 = *puVar37;
      puVar25[3] = puVar37[1];
      puVar25[2] = uVar35;
      puVar25 = puVar25 + 4;
      puVar37 = puVar37 + 4;
    } while (puVar25 < (ulong *)(lVar29 + uVar33));
  }
LAB_1006c44e4:
  param_2[3] = param_2[3] + uVar33;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar33) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_1006c450c:
  uVar35 = (long)puVar17 - 3;
  *(short *)(piVar38 + 1) = (short)uVar33;
  *piVar38 = iVar44 + 3;
  iVar47 = iVar49;
  iVar49 = iVar44;
  if (0xffff < uVar35) {
LAB_1006c452c:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
    iVar49 = iVar44;
  }
LAB_1006c4544:
  *(short *)((long)piVar38 + 6) = (short)uVar35;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  puVar25 = (ulong *)((long)puVar48 + (long)puVar17);
  param_4 = puVar25;
  if (puVar25 <= puVar20) {
    uVar45 = iVar16 + 2;
    lVar29 = *(long *)(lVar51 + (ulong)uVar45);
    *(uint *)(lVar30 + ((ulong)(lVar29 * -0x30e44323485a9b9d) >> (uVar32 & 0x3f)) * 4) = uVar45;
    *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar25 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar32 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 2U) - iVar50;
    *(uint *)(lVar19 + ((ulong)(lVar29 * -0x30e4432345000000) >> (uVar27 & 0x3f)) * 4) = uVar45;
    *(int *)(lVar19 + ((ulong)(*(long *)((long)puVar25 - 1U) * -0x30e4432345000000) >>
                      (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 1U) - iVar50;
    do {
      iVar16 = iVar49;
      iVar2 = (int)puVar25 - iVar50;
      uVar45 = iVar2 - iVar47;
      lVar29 = uVar8 - uVar11;
      if (uVar6 <= uVar45) {
        lVar29 = lVar51;
      }
      param_4 = puVar25;
      iVar49 = iVar16;
      if ((0xfffffffc < uVar45 - uVar6) || (*(int *)(lVar29 + (ulong)uVar45) != (int)*puVar25))
      break;
      puVar48 = puVar7;
      if (uVar6 <= uVar45) {
        puVar48 = puVar3;
      }
      piVar18 = (int *)((long)puVar25 + 4);
      FUN_1006c7460(piVar18,(int *)(lVar29 + (ulong)uVar45) + 1,puVar3,puVar48,piVar5);
      if (puVar25 <= puVar21) {
        puVar48 = (ulong *)param_2[3];
        uVar33 = *puVar25;
        puVar48[1] = puVar25[1];
        *puVar48 = uVar33;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < (long)piVar18 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)((long)piVar18 + 1U);
      piVar38 = piVar38 + 2;
      uVar33 = *puVar25;
      *(int *)(lVar19 + (uVar33 * -0x30e4432345000000 >> (uVar27 & 0x3f)) * 4) = iVar2;
      *(int *)(lVar30 + (uVar33 * -0x30e44323485a9b9d >> (uVar32 & 0x3f)) * 4) = iVar2;
      param_2[1] = (long)piVar38;
      puVar25 = (ulong *)((long)puVar25 + (long)(piVar18 + 1));
      param_4 = puVar25;
      iVar49 = iVar47;
      iVar47 = iVar16;
    } while (puVar25 <= puVar20);
  }
LAB_1006c38f4:
  if (puVar20 <= puVar25) goto LAB_1006c564c;
  goto LAB_1006c3900;
LAB_1006c4494:
  puVar48 = (ulong *)((long)puVar25 + 1);
  uVar33 = (long)puVar48 - (long)param_4;
  puVar36 = (ulong *)param_2[3];
joined_r0x0001006c4384:
  if (puVar48 <= puVar21) goto LAB_1006c43a0;
LAB_1006c4170:
  puVar37 = puVar36;
  puVar25 = param_4;
  if (param_4 <= puVar21) {
    puVar37 = (ulong *)((long)puVar36 + ((long)puVar21 - (long)param_4));
    uVar35 = *param_4;
    puVar36[1] = param_4[1];
    *puVar36 = uVar35;
    uVar35 = param_4[2];
    puVar36[3] = param_4[3];
    puVar36[2] = uVar35;
    puVar25 = puVar21;
    if (0x20 < (long)puVar21 - (long)param_4) {
      puVar36 = puVar36 + 4;
      puVar39 = param_4 + 6;
      do {
        uVar35 = puVar39[-2];
        puVar36[1] = puVar39[-1];
        *puVar36 = uVar35;
        uVar35 = *puVar39;
        puVar36[3] = puVar39[1];
        puVar36[2] = uVar35;
        puVar36 = puVar36 + 4;
        puVar39 = puVar39 + 4;
      } while (puVar36 < puVar37);
    }
  }
  if (puVar25 < puVar48) {
    uVar35 = (long)puVar48 - (long)puVar25;
    if ((7 < uVar35) && (0x3f < (ulong)((long)puVar37 - (long)puVar25))) {
      if (uVar35 < 0x40) {
        uVar42 = 0;
      }
      else {
        uVar42 = uVar35 & 0xffffffffffffffc0;
        puVar36 = puVar37 + 4;
        puVar39 = puVar25 + 4;
        uVar41 = uVar42;
        do {
          uVar52 = puVar39[-4];
          uVar54 = puVar39[-1];
          uVar53 = puVar39[-2];
          uVar56 = puVar39[1];
          uVar55 = *puVar39;
          uVar58 = puVar39[3];
          uVar57 = puVar39[2];
          puVar36[-3] = puVar39[-3];
          puVar36[-4] = uVar52;
          puVar36[-1] = uVar54;
          puVar36[-2] = uVar53;
          puVar36[1] = uVar56;
          *puVar36 = uVar55;
          puVar36[3] = uVar58;
          puVar36[2] = uVar57;
          uVar41 = uVar41 - 0x40;
          puVar36 = puVar36 + 8;
          puVar39 = puVar39 + 8;
        } while (uVar41 != 0);
        if (uVar35 == uVar42) goto LAB_1006c44e4;
        if ((uVar35 & 0x38) == 0) {
          puVar25 = (ulong *)((long)puVar25 + uVar42);
          puVar37 = (ulong *)((long)puVar37 + uVar42);
          goto LAB_1006c44d4;
        }
      }
      uVar41 = uVar35 & 0xfffffffffffffff8;
      lVar29 = uVar42 - uVar41;
      puVar26 = (undefined8 *)((long)puVar37 + uVar42);
      puVar43 = (undefined8 *)((long)puVar25 + uVar42);
      do {
        *puVar26 = *puVar43;
        lVar29 = lVar29 + 8;
        puVar26 = puVar26 + 1;
        puVar43 = puVar43 + 1;
      } while (lVar29 != 0);
      puVar37 = (ulong *)((long)puVar37 + uVar41);
      puVar25 = (ulong *)((long)puVar25 + uVar41);
      if (uVar35 == uVar41) goto LAB_1006c44e4;
    }
LAB_1006c44d4:
    do {
      puVar36 = (ulong *)((long)puVar25 + 1);
      *(char *)puVar37 = (char)*puVar25;
      puVar37 = (ulong *)((long)puVar37 + 1);
      puVar25 = puVar36;
    } while (puVar36 != puVar48);
  }
  goto LAB_1006c44e4;
LAB_1006c3514:
  uVar33 = ((long)puVar25 + 1) - (long)param_4;
  puVar36 = (ulong *)param_2[3];
  puVar48 = (ulong *)((long)puVar25 + 1);
joined_r0x0001006c3064:
  if (puVar21 < puVar48) goto LAB_1006c327c;
LAB_1006c34ac:
  uVar35 = *param_4;
  puVar36[1] = param_4[1];
  *puVar36 = uVar35;
  lVar29 = param_2[3];
  if (uVar33 < 0x11) {
    param_2[3] = lVar29 + uVar33;
    piVar38 = (int *)param_2[1];
    goto LAB_1006c3618;
  }
  uVar35 = param_4[2];
  *(ulong *)(lVar29 + 0x18) = param_4[3];
  *(ulong *)(lVar29 + 0x10) = uVar35;
  uVar35 = param_4[4];
  *(ulong *)(lVar29 + 0x28) = param_4[5];
  *(ulong *)(lVar29 + 0x20) = uVar35;
  if (0x30 < (long)uVar33) {
    puVar25 = (ulong *)(lVar29 + 0x30);
    puVar37 = param_4 + 8;
    do {
      uVar35 = puVar37[-2];
      puVar25[1] = puVar37[-1];
      *puVar25 = uVar35;
      uVar35 = *puVar37;
      puVar25[3] = puVar37[1];
      puVar25[2] = uVar35;
      puVar25 = puVar25 + 4;
      puVar37 = puVar37 + 4;
    } while (puVar25 < (ulong *)(lVar29 + uVar33));
  }
LAB_1006c35f0:
  param_2[3] = param_2[3] + uVar33;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar33) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_1006c3618:
  uVar35 = (long)puVar17 - 3;
  *(short *)(piVar38 + 1) = (short)uVar33;
  *piVar38 = iVar44 + 3;
  iVar47 = iVar49;
  iVar49 = iVar44;
  if (0xffff < uVar35) {
LAB_1006c3638:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
    iVar49 = iVar44;
  }
LAB_1006c3650:
  *(short *)((long)piVar38 + 6) = (short)uVar35;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  puVar25 = (ulong *)((long)puVar48 + (long)puVar17);
  param_4 = puVar25;
  if (puVar25 <= puVar20) {
    uVar45 = iVar16 + 2;
    lVar29 = *(long *)(lVar51 + (ulong)uVar45);
    *(uint *)(lVar30 + ((ulong)(lVar29 * -0x30e44323485a9b9d) >> (uVar32 & 0x3f)) * 4) = uVar45;
    *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar25 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar32 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 2U) - iVar50;
    *(uint *)(lVar19 + ((ulong)(lVar29 * -0x30e4432340650000) >> (uVar27 & 0x3f)) * 4) = uVar45;
    *(int *)(lVar19 + ((ulong)(*(long *)((long)puVar25 - 1U) * -0x30e4432340650000) >>
                      (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 1U) - iVar50;
    do {
      iVar16 = iVar49;
      iVar2 = (int)puVar25 - iVar50;
      uVar45 = iVar2 - iVar47;
      lVar29 = uVar8 - uVar11;
      if (uVar6 <= uVar45) {
        lVar29 = lVar51;
      }
      param_4 = puVar25;
      iVar49 = iVar16;
      if ((0xfffffffc < uVar45 - uVar6) || (*(int *)(lVar29 + (ulong)uVar45) != (int)*puVar25))
      break;
      puVar48 = puVar7;
      if (uVar6 <= uVar45) {
        puVar48 = puVar3;
      }
      piVar18 = (int *)((long)puVar25 + 4);
      FUN_1006c7460(piVar18,(int *)(lVar29 + (ulong)uVar45) + 1,puVar3,puVar48,piVar5);
      if (puVar25 <= puVar21) {
        puVar48 = (ulong *)param_2[3];
        uVar33 = *puVar25;
        puVar48[1] = puVar25[1];
        *puVar48 = uVar33;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < (long)piVar18 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)((long)piVar18 + 1U);
      piVar38 = piVar38 + 2;
      uVar33 = *puVar25;
      *(int *)(lVar19 + (uVar33 * -0x30e4432340650000 >> (uVar27 & 0x3f)) * 4) = iVar2;
      *(int *)(lVar30 + (uVar33 * -0x30e44323485a9b9d >> (uVar32 & 0x3f)) * 4) = iVar2;
      param_2[1] = (long)piVar38;
      puVar25 = (ulong *)((long)puVar25 + (long)(piVar18 + 1));
      param_4 = puVar25;
      iVar49 = iVar47;
      iVar47 = iVar16;
    } while (puVar25 <= puVar20);
  }
LAB_1006c2a00:
  if (puVar20 <= puVar25) goto LAB_1006c564c;
  goto LAB_1006c2a0c;
LAB_1006c35a0:
  puVar48 = (ulong *)((long)puVar25 + 1);
  uVar33 = (long)puVar48 - (long)param_4;
  puVar36 = (ulong *)param_2[3];
joined_r0x0001006c3490:
  if (puVar48 <= puVar21) goto LAB_1006c34ac;
LAB_1006c327c:
  puVar37 = puVar36;
  puVar25 = param_4;
  if (param_4 <= puVar21) {
    puVar37 = (ulong *)((long)puVar36 + ((long)puVar21 - (long)param_4));
    uVar35 = *param_4;
    puVar36[1] = param_4[1];
    *puVar36 = uVar35;
    uVar35 = param_4[2];
    puVar36[3] = param_4[3];
    puVar36[2] = uVar35;
    puVar25 = puVar21;
    if (0x20 < (long)puVar21 - (long)param_4) {
      puVar36 = puVar36 + 4;
      puVar39 = param_4 + 6;
      do {
        uVar35 = puVar39[-2];
        puVar36[1] = puVar39[-1];
        *puVar36 = uVar35;
        uVar35 = *puVar39;
        puVar36[3] = puVar39[1];
        puVar36[2] = uVar35;
        puVar36 = puVar36 + 4;
        puVar39 = puVar39 + 4;
      } while (puVar36 < puVar37);
    }
  }
  if (puVar25 < puVar48) {
    uVar35 = (long)puVar48 - (long)puVar25;
    if ((7 < uVar35) && (0x3f < (ulong)((long)puVar37 - (long)puVar25))) {
      if (uVar35 < 0x40) {
        uVar42 = 0;
      }
      else {
        uVar42 = uVar35 & 0xffffffffffffffc0;
        puVar36 = puVar37 + 4;
        puVar39 = puVar25 + 4;
        uVar41 = uVar42;
        do {
          uVar52 = puVar39[-4];
          uVar54 = puVar39[-1];
          uVar53 = puVar39[-2];
          uVar56 = puVar39[1];
          uVar55 = *puVar39;
          uVar58 = puVar39[3];
          uVar57 = puVar39[2];
          puVar36[-3] = puVar39[-3];
          puVar36[-4] = uVar52;
          puVar36[-1] = uVar54;
          puVar36[-2] = uVar53;
          puVar36[1] = uVar56;
          *puVar36 = uVar55;
          puVar36[3] = uVar58;
          puVar36[2] = uVar57;
          uVar41 = uVar41 - 0x40;
          puVar36 = puVar36 + 8;
          puVar39 = puVar39 + 8;
        } while (uVar41 != 0);
        if (uVar35 == uVar42) goto LAB_1006c35f0;
        if ((uVar35 & 0x38) == 0) {
          puVar25 = (ulong *)((long)puVar25 + uVar42);
          puVar37 = (ulong *)((long)puVar37 + uVar42);
          goto LAB_1006c35e0;
        }
      }
      uVar41 = uVar35 & 0xfffffffffffffff8;
      lVar29 = uVar42 - uVar41;
      puVar26 = (undefined8 *)((long)puVar37 + uVar42);
      puVar43 = (undefined8 *)((long)puVar25 + uVar42);
      do {
        *puVar26 = *puVar43;
        lVar29 = lVar29 + 8;
        puVar26 = puVar26 + 1;
        puVar43 = puVar43 + 1;
      } while (lVar29 != 0);
      puVar37 = (ulong *)((long)puVar37 + uVar41);
      puVar25 = (ulong *)((long)puVar25 + uVar41);
      if (uVar35 == uVar41) goto LAB_1006c35f0;
    }
LAB_1006c35e0:
    do {
      puVar36 = (ulong *)((long)puVar25 + 1);
      *(char *)puVar37 = (char)*puVar25;
      puVar37 = (ulong *)((long)puVar37 + 1);
      puVar25 = puVar36;
    } while (puVar36 != puVar48);
  }
  goto LAB_1006c35f0;
LAB_1006c52f0:
  uVar32 = ((long)puVar25 + 1) - (long)param_4;
  puVar36 = (ulong *)param_2[3];
  puVar48 = (ulong *)((long)puVar25 + 1);
joined_r0x0001006c4e54:
  if (puVar21 < puVar48) goto LAB_1006c5054;
LAB_1006c5288:
  uVar33 = *param_4;
  puVar36[1] = param_4[1];
  *puVar36 = uVar33;
  lVar29 = param_2[3];
  if (uVar32 < 0x11) {
    param_2[3] = lVar29 + uVar32;
    piVar38 = (int *)param_2[1];
    goto LAB_1006c53f4;
  }
  uVar33 = param_4[2];
  *(ulong *)(lVar29 + 0x18) = param_4[3];
  *(ulong *)(lVar29 + 0x10) = uVar33;
  uVar33 = param_4[4];
  *(ulong *)(lVar29 + 0x28) = param_4[5];
  *(ulong *)(lVar29 + 0x20) = uVar33;
  if (0x30 < (long)uVar32) {
    puVar25 = (ulong *)(lVar29 + 0x30);
    puVar37 = param_4 + 8;
    do {
      uVar33 = puVar37[-2];
      puVar25[1] = puVar37[-1];
      *puVar25 = uVar33;
      uVar33 = *puVar37;
      puVar25[3] = puVar37[1];
      puVar25[2] = uVar33;
      puVar25 = puVar25 + 4;
      puVar37 = puVar37 + 4;
    } while (puVar25 < (ulong *)(lVar29 + uVar32));
  }
LAB_1006c53cc:
  param_2[3] = param_2[3] + uVar32;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar32) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_1006c53f4:
  uVar33 = (long)puVar17 - 3;
  *(short *)(piVar38 + 1) = (short)uVar32;
  *piVar38 = iVar44 + 3;
  iVar47 = iVar49;
  iVar49 = iVar44;
  if (0xffff < uVar33) {
LAB_1006c5414:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
    iVar49 = iVar44;
  }
LAB_1006c542c:
  *(short *)((long)piVar38 + 6) = (short)uVar33;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  puVar25 = (ulong *)((long)puVar48 + (long)puVar17);
  param_4 = puVar25;
  if (puVar25 <= puVar20) {
    uVar46 = iVar16 + 2;
    *(uint *)(lVar30 + ((ulong)(*(long *)(lVar51 + (ulong)uVar46) * -0x30e44323485a9b9d) >>
                       (uVar27 & 0x3f)) * 4) = uVar46;
    *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar25 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 2U) - iVar50;
    *(uint *)(lVar19 + (ulong)((uint)(*(int *)(lVar51 + (ulong)uVar46) * -0x61c8864f) >>
                              (ulong)(uVar45 & 0x1f)) * 4) = uVar46;
    *(int *)(lVar19 + (ulong)((uint)(*(int *)((long)puVar25 - 1U) * -0x61c8864f) >>
                             (ulong)(uVar45 & 0x1f)) * 4) =
         (int)(int *)((long)puVar25 - 1U) - iVar50;
    iVar2 = iVar47;
    do {
      iVar16 = iVar49;
      iVar47 = iVar2;
      iVar2 = (int)puVar25 - iVar50;
      uVar46 = iVar2 - iVar47;
      lVar29 = uVar8 - uVar11;
      if (uVar6 <= uVar46) {
        lVar29 = lVar51;
      }
      param_4 = puVar25;
      iVar49 = iVar16;
      if ((0xfffffffc < uVar46 - uVar6) || (*(int *)(lVar29 + (ulong)uVar46) != (int)*puVar25))
      break;
      puVar48 = puVar7;
      if (uVar6 <= uVar46) {
        puVar48 = puVar3;
      }
      piVar18 = (int *)((long)puVar25 + 4);
      FUN_1006c7460(piVar18,(int *)(lVar29 + (ulong)uVar46) + 1,puVar3,puVar48,piVar5);
      if (puVar25 <= puVar21) {
        puVar48 = (ulong *)param_2[3];
        uVar32 = *puVar25;
        puVar48[1] = puVar25[1];
        *puVar48 = uVar32;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < (long)piVar18 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)((long)piVar18 + 1U);
      *(int *)(lVar19 + (ulong)((uint)((int)*puVar25 * -0x61c8864f) >> (ulong)(uVar45 & 0x1f)) * 4)
           = iVar2;
      piVar38 = piVar38 + 2;
      *(int *)(lVar30 + (*puVar25 * -0x30e44323485a9b9d >> (uVar27 & 0x3f)) * 4) = iVar2;
      param_2[1] = (long)piVar38;
      puVar25 = (ulong *)((long)puVar25 + (long)(piVar18 + 1));
      param_4 = puVar25;
      iVar2 = iVar16;
      iVar49 = iVar47;
      iVar47 = iVar16;
    } while (puVar25 <= puVar20);
  }
LAB_1006c47ec:
  if (puVar20 <= puVar25) goto LAB_1006c564c;
  goto LAB_1006c47f8;
LAB_1006c537c:
  puVar48 = (ulong *)((long)puVar25 + 1);
  uVar32 = (long)puVar48 - (long)param_4;
  puVar36 = (ulong *)param_2[3];
joined_r0x0001006c526c:
  if (puVar48 <= puVar21) goto LAB_1006c5288;
LAB_1006c5054:
  puVar37 = puVar36;
  puVar25 = param_4;
  if (param_4 <= puVar21) {
    puVar37 = (ulong *)((long)puVar36 + ((long)puVar21 - (long)param_4));
    uVar33 = *param_4;
    puVar36[1] = param_4[1];
    *puVar36 = uVar33;
    uVar33 = param_4[2];
    puVar36[3] = param_4[3];
    puVar36[2] = uVar33;
    puVar25 = puVar21;
    if (0x20 < (long)puVar21 - (long)param_4) {
      puVar36 = puVar36 + 4;
      puVar39 = param_4 + 6;
      do {
        uVar33 = puVar39[-2];
        puVar36[1] = puVar39[-1];
        *puVar36 = uVar33;
        uVar33 = *puVar39;
        puVar36[3] = puVar39[1];
        puVar36[2] = uVar33;
        puVar36 = puVar36 + 4;
        puVar39 = puVar39 + 4;
      } while (puVar36 < puVar37);
    }
  }
  if (puVar25 < puVar48) {
    uVar33 = (long)puVar48 - (long)puVar25;
    if ((7 < uVar33) && (0x3f < (ulong)((long)puVar37 - (long)puVar25))) {
      if (uVar33 < 0x40) {
        uVar41 = 0;
      }
      else {
        uVar41 = uVar33 & 0xffffffffffffffc0;
        puVar36 = puVar37 + 4;
        puVar39 = puVar25 + 4;
        uVar35 = uVar41;
        do {
          uVar42 = puVar39[-4];
          uVar53 = puVar39[-1];
          uVar52 = puVar39[-2];
          uVar55 = puVar39[1];
          uVar54 = *puVar39;
          uVar57 = puVar39[3];
          uVar56 = puVar39[2];
          puVar36[-3] = puVar39[-3];
          puVar36[-4] = uVar42;
          puVar36[-1] = uVar53;
          puVar36[-2] = uVar52;
          puVar36[1] = uVar55;
          *puVar36 = uVar54;
          puVar36[3] = uVar57;
          puVar36[2] = uVar56;
          uVar35 = uVar35 - 0x40;
          puVar36 = puVar36 + 8;
          puVar39 = puVar39 + 8;
        } while (uVar35 != 0);
        if (uVar33 == uVar41) goto LAB_1006c53cc;
        if ((uVar33 & 0x38) == 0) {
          puVar25 = (ulong *)((long)puVar25 + uVar41);
          puVar37 = (ulong *)((long)puVar37 + uVar41);
          goto LAB_1006c53bc;
        }
      }
      uVar35 = uVar33 & 0xfffffffffffffff8;
      lVar29 = uVar41 - uVar35;
      puVar26 = (undefined8 *)((long)puVar37 + uVar41);
      puVar43 = (undefined8 *)((long)puVar25 + uVar41);
      do {
        *puVar26 = *puVar43;
        lVar29 = lVar29 + 8;
        puVar26 = puVar26 + 1;
        puVar43 = puVar43 + 1;
      } while (lVar29 != 0);
      puVar37 = (ulong *)((long)puVar37 + uVar35);
      puVar25 = (ulong *)((long)puVar25 + uVar35);
      if (uVar33 == uVar35) goto LAB_1006c53cc;
    }
LAB_1006c53bc:
    do {
      puVar36 = (ulong *)((long)puVar25 + 1);
      *(char *)puVar37 = (char)*puVar25;
      puVar37 = (ulong *)((long)puVar37 + 1);
      puVar25 = puVar36;
    } while (puVar36 != puVar48);
  }
  goto LAB_1006c53cc;
LAB_1006c2618:
  uVar33 = ((long)puVar25 + 1) - (long)param_4;
  puVar36 = (ulong *)param_2[3];
  puVar48 = (ulong *)((long)puVar25 + 1);
joined_r0x0001006c2168:
  if (puVar21 < puVar48) goto LAB_1006c2380;
LAB_1006c25b0:
  uVar35 = *param_4;
  puVar36[1] = param_4[1];
  *puVar36 = uVar35;
  lVar29 = param_2[3];
  if (uVar33 < 0x11) {
    param_2[3] = lVar29 + uVar33;
    piVar38 = (int *)param_2[1];
    goto LAB_1006c271c;
  }
  uVar35 = param_4[2];
  *(ulong *)(lVar29 + 0x18) = param_4[3];
  *(ulong *)(lVar29 + 0x10) = uVar35;
  uVar35 = param_4[4];
  *(ulong *)(lVar29 + 0x28) = param_4[5];
  *(ulong *)(lVar29 + 0x20) = uVar35;
  if (0x30 < (long)uVar33) {
    puVar25 = (ulong *)(lVar29 + 0x30);
    puVar37 = param_4 + 8;
    do {
      uVar35 = puVar37[-2];
      puVar25[1] = puVar37[-1];
      *puVar25 = uVar35;
      uVar35 = *puVar37;
      puVar25[3] = puVar37[1];
      puVar25[2] = uVar35;
      puVar25 = puVar25 + 4;
      puVar37 = puVar37 + 4;
    } while (puVar25 < (ulong *)(lVar29 + uVar33));
  }
LAB_1006c26f4:
  param_2[3] = param_2[3] + uVar33;
  piVar38 = (int *)param_2[1];
  if (0xffff < uVar33) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_1006c271c:
  uVar35 = (long)puVar17 - 3;
  *(short *)(piVar38 + 1) = (short)uVar33;
  *piVar38 = iVar44 + 3;
  iVar47 = iVar49;
  if (0xffff < uVar35) {
LAB_1006c273c:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
  }
LAB_1006c2754:
  *(short *)((long)piVar38 + 6) = (short)uVar35;
  piVar38 = piVar38 + 2;
  param_2[1] = (long)piVar38;
  puVar25 = (ulong *)((long)puVar48 + (long)puVar17);
  param_4 = puVar25;
  iVar49 = iVar44;
  if (puVar25 <= puVar20) {
    uVar45 = iVar16 + 2;
    lVar29 = *(long *)(lVar51 + (ulong)uVar45);
    *(uint *)(lVar30 + ((ulong)(lVar29 * -0x30e44323485a9b9d) >> (uVar32 & 0x3f)) * 4) = uVar45;
    *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar25 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar32 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 2U) - iVar50;
    *(uint *)(lVar19 + ((ulong)(lVar29 * -0x30e44323405a9d00) >> (uVar27 & 0x3f)) * 4) = uVar45;
    *(int *)(lVar19 + ((ulong)(*(long *)((long)puVar25 - 1U) * -0x30e44323405a9d00) >>
                      (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar25 - 1U) - iVar50;
    do {
      iVar49 = iVar44;
      iVar44 = iVar47;
      iVar2 = (int)puVar25 - iVar50;
      uVar45 = iVar2 - iVar44;
      lVar29 = uVar8 - uVar11;
      if (uVar6 <= uVar45) {
        lVar29 = lVar51;
      }
      param_4 = puVar25;
      iVar47 = iVar44;
      if ((0xfffffffc < uVar45 - uVar6) || (*(int *)(lVar29 + (ulong)uVar45) != (int)*puVar25))
      break;
      puVar48 = puVar7;
      if (uVar6 <= uVar45) {
        puVar48 = puVar3;
      }
      piVar18 = (int *)((long)puVar25 + 4);
      FUN_1006c7460(piVar18,(int *)(lVar29 + (ulong)uVar45) + 1,puVar3,puVar48,piVar5);
      if (puVar25 <= puVar21) {
        puVar48 = (ulong *)param_2[3];
        uVar33 = *puVar25;
        puVar48[1] = puVar25[1];
        *puVar48 = uVar33;
        piVar38 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar38 + 1) = 0;
      *piVar38 = 1;
      if (0xffff < (long)piVar18 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar38 - *param_2) >> 3);
      }
      *(short *)((long)piVar38 + 6) = (short)((long)piVar18 + 1U);
      piVar38 = piVar38 + 2;
      uVar33 = *puVar25;
      *(int *)(lVar19 + (uVar33 * -0x30e44323405a9d00 >> (uVar27 & 0x3f)) * 4) = iVar2;
      *(int *)(lVar30 + (uVar33 * -0x30e44323485a9b9d >> (uVar32 & 0x3f)) * 4) = iVar2;
      param_2[1] = (long)piVar38;
      puVar25 = (ulong *)((long)puVar25 + (long)(piVar18 + 1));
      param_4 = puVar25;
      iVar47 = iVar49;
      iVar49 = iVar44;
    } while (puVar25 <= puVar20);
  }
LAB_1006c1b00:
  if (puVar20 <= puVar25) goto LAB_1006c564c;
  goto LAB_1006c1b0c;
LAB_1006c26a4:
  puVar48 = (ulong *)((long)puVar25 + 1);
  uVar33 = (long)puVar48 - (long)param_4;
  puVar36 = (ulong *)param_2[3];
joined_r0x0001006c2594:
  if (puVar48 <= puVar21) goto LAB_1006c25b0;
LAB_1006c2380:
  puVar37 = puVar36;
  puVar25 = param_4;
  if (param_4 <= puVar21) {
    puVar37 = (ulong *)((long)puVar36 + ((long)puVar21 - (long)param_4));
    uVar35 = *param_4;
    puVar36[1] = param_4[1];
    *puVar36 = uVar35;
    uVar35 = param_4[2];
    puVar36[3] = param_4[3];
    puVar36[2] = uVar35;
    puVar25 = puVar21;
    if (0x20 < (long)puVar21 - (long)param_4) {
      puVar36 = puVar36 + 4;
      puVar39 = param_4 + 6;
      do {
        uVar35 = puVar39[-2];
        puVar36[1] = puVar39[-1];
        *puVar36 = uVar35;
        uVar35 = *puVar39;
        puVar36[3] = puVar39[1];
        puVar36[2] = uVar35;
        puVar36 = puVar36 + 4;
        puVar39 = puVar39 + 4;
      } while (puVar36 < puVar37);
    }
  }
  if (puVar25 < puVar48) {
    uVar35 = (long)puVar48 - (long)puVar25;
    if ((7 < uVar35) && (0x3f < (ulong)((long)puVar37 - (long)puVar25))) {
      if (uVar35 < 0x40) {
        uVar42 = 0;
      }
      else {
        uVar42 = uVar35 & 0xffffffffffffffc0;
        puVar36 = puVar37 + 4;
        puVar39 = puVar25 + 4;
        uVar41 = uVar42;
        do {
          uVar52 = puVar39[-4];
          uVar54 = puVar39[-1];
          uVar53 = puVar39[-2];
          uVar56 = puVar39[1];
          uVar55 = *puVar39;
          uVar58 = puVar39[3];
          uVar57 = puVar39[2];
          puVar36[-3] = puVar39[-3];
          puVar36[-4] = uVar52;
          puVar36[-1] = uVar54;
          puVar36[-2] = uVar53;
          puVar36[1] = uVar56;
          *puVar36 = uVar55;
          puVar36[3] = uVar58;
          puVar36[2] = uVar57;
          uVar41 = uVar41 - 0x40;
          puVar36 = puVar36 + 8;
          puVar39 = puVar39 + 8;
        } while (uVar41 != 0);
        if (uVar35 == uVar42) goto LAB_1006c26f4;
        if ((uVar35 & 0x38) == 0) {
          puVar25 = (ulong *)((long)puVar25 + uVar42);
          puVar37 = (ulong *)((long)puVar37 + uVar42);
          goto LAB_1006c26e4;
        }
      }
      uVar41 = uVar35 & 0xfffffffffffffff8;
      lVar29 = uVar42 - uVar41;
      puVar26 = (undefined8 *)((long)puVar37 + uVar42);
      puVar43 = (undefined8 *)((long)puVar25 + uVar42);
      do {
        *puVar26 = *puVar43;
        lVar29 = lVar29 + 8;
        puVar26 = puVar26 + 1;
        puVar43 = puVar43 + 1;
      } while (lVar29 != 0);
      puVar37 = (ulong *)((long)puVar37 + uVar41);
      puVar25 = (ulong *)((long)puVar25 + uVar41);
      if (uVar35 == uVar41) goto LAB_1006c26f4;
    }
LAB_1006c26e4:
    do {
      puVar36 = (ulong *)((long)puVar25 + 1);
      *(char *)puVar37 = (char)*puVar25;
      puVar37 = (ulong *)((long)puVar37 + 1);
      puVar25 = puVar36;
    } while (puVar36 != puVar48);
  }
  goto LAB_1006c26f4;
}

