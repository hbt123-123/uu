// rea decompile_all
// name: FUN_1006d2148
// address: 0x1006d2148
// body: available
// range: 0x1006d2148-0x1006d2edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d2148(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar27 = puVar1 + -1;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18);
  puVar24 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar24 = (ulong *)((long)param_4 + 1);
  }
  uVar10 = (int)puVar24 - (int)uVar2;
  uVar38 = 0;
  if (uVar4 <= uVar10) {
    uVar38 = uVar4;
  }
  uVar28 = 0;
  if (uVar3 <= uVar10) {
    uVar28 = uVar3;
  }
  if (puVar27 <= puVar24) {
LAB_1006d2e98:
    if (uVar4 <= uVar10) {
      uVar4 = 0;
    }
    if (uVar3 <= uVar10) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3;
    if (uVar28 != 0) {
      uVar4 = uVar28;
    }
    if (uVar38 != 0) {
      uVar3 = uVar38;
    }
    *param_3 = uVar4;
    param_3[1] = uVar3;
    return (long)puVar1 - (long)param_4;
  }
  puVar12 = (ulong *)((long)puVar1 - 7);
  puVar13 = (ulong *)((long)puVar1 - 3);
  puVar14 = (ulong *)((long)puVar1 - 1);
  puVar15 = puVar1 + -4;
LAB_1006d21fc:
  if (uVar28 == 0) {
LAB_1006d227c:
    if (*(int *)(param_1 + 200) - 6U < 2) {
      lVar29 = *(long *)(param_1 + 0x40);
      uVar35 = *(uint *)(param_1 + 0xbc);
      uVar6 = 1 << (ulong)(uVar35 & 0x1f);
      lVar17 = *(long *)(param_1 + 8);
      uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar23 = (uint)((long)puVar24 - lVar17);
      uVar16 = uVar23 - uVar7;
      if (uVar23 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
        uVar16 = *(uint *)(param_1 + 0x1c);
      }
      uVar7 = 0;
      if (uVar6 <= uVar23) {
        uVar7 = uVar23 - uVar6;
      }
      uVar5 = *(uint *)(param_1 + 0xc4);
      lVar33 = *(long *)(param_1 + 0x30);
      uVar36 = (ulong)*(uint *)(param_1 + 0x24);
      uVar30 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      if (*(uint *)(param_1 + 0x24) < uVar23) {
        do {
          uVar18 = (ulong)(*(long *)(lVar17 + uVar36) * -0x30e4432340650000) >> (uVar30 & 0x3f);
          *(undefined4 *)(lVar29 + (ulong)((uint)uVar36 & ~(-1 << (ulong)(uVar35 & 0x1f))) * 4) =
               *(undefined4 *)(lVar33 + uVar18 * 4);
          *(uint *)(lVar33 + uVar18 * 4) = (uint)uVar36;
          uVar36 = uVar36 + 1;
        } while (((long)puVar24 - lVar17 & 0xffffffffU) != uVar36);
      }
      *(uint *)(param_1 + 0x24) = uVar23;
      uVar31 = *puVar24;
      uVar35 = *(uint *)(lVar33 + (uVar31 * -0x30e4432340650000 >> (uVar30 & 0x3f)) * 4);
      if (uVar16 < uVar35) {
        iVar22 = 1 << (ulong)(uVar5 & 0x1f);
        uVar18 = 3;
        uVar36 = 999999999;
        do {
          puVar32 = (ulong *)(lVar17 + (ulong)uVar35);
          if (*(char *)((long)puVar32 + uVar18) == *(char *)((long)puVar24 + uVar18)) {
            puVar19 = puVar24;
            if (puVar24 < puVar12) {
              if (*puVar32 == uVar31) {
                lVar33 = 0;
                puVar32 = (ulong *)(lVar17 + 8 + (ulong)uVar35);
                do {
                  puVar19 = puVar19 + 1;
                  if (puVar12 <= puVar19) goto LAB_1006d23d0;
                  uVar30 = *puVar32;
                  lVar33 = lVar33 + 8;
                  puVar32 = puVar32 + 1;
                } while (uVar30 == *puVar19);
                uVar30 = *puVar19 ^ uVar30;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                uVar30 = lVar33 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
              }
              else {
                uVar30 = *puVar32 ^ uVar31;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
              }
            }
            else {
LAB_1006d23d0:
              if (puVar19 < puVar13) {
                if ((int)*puVar32 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
              }
              if (puVar19 < puVar14) {
                if (*(short *)puVar32 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if ((puVar19 < puVar1) && ((char)*puVar32 == (char)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 1);
              }
              uVar30 = (long)puVar19 - (long)puVar24;
            }
            if ((uVar18 < uVar30) &&
               (uVar36 = (ulong)((uVar23 + 2) - uVar35), uVar18 = uVar30,
               (ulong *)((long)puVar24 + uVar30) == puVar1)) goto joined_r0x0001006d2b64;
          }
          if ((uVar35 <= uVar7) ||
             ((iVar22 = iVar22 + -1, iVar22 == 0 ||
              (uVar35 = *(uint *)(lVar29 + (ulong)(uVar35 & uVar6 - 1) * 4), uVar35 <= uVar16))))
          goto joined_r0x0001006d2b64;
        } while( true );
      }
    }
    else if (*(int *)(param_1 + 200) == 5) {
      lVar29 = *(long *)(param_1 + 0x40);
      uVar35 = *(uint *)(param_1 + 0xbc);
      uVar6 = 1 << (ulong)(uVar35 & 0x1f);
      lVar17 = *(long *)(param_1 + 8);
      uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar23 = (uint)((long)puVar24 - lVar17);
      uVar16 = uVar23 - uVar7;
      if (uVar23 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
        uVar16 = *(uint *)(param_1 + 0x1c);
      }
      uVar7 = 0;
      if (uVar6 <= uVar23) {
        uVar7 = uVar23 - uVar6;
      }
      uVar5 = *(uint *)(param_1 + 0xc4);
      lVar33 = *(long *)(param_1 + 0x30);
      uVar36 = (ulong)*(uint *)(param_1 + 0x24);
      uVar30 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      if (*(uint *)(param_1 + 0x24) < uVar23) {
        do {
          uVar18 = (ulong)(*(long *)(lVar17 + uVar36) * -0x30e4432345000000) >> (uVar30 & 0x3f);
          *(undefined4 *)(lVar29 + (ulong)((uint)uVar36 & ~(-1 << (ulong)(uVar35 & 0x1f))) * 4) =
               *(undefined4 *)(lVar33 + uVar18 * 4);
          *(uint *)(lVar33 + uVar18 * 4) = (uint)uVar36;
          uVar36 = uVar36 + 1;
        } while (((long)puVar24 - lVar17 & 0xffffffffU) != uVar36);
      }
      *(uint *)(param_1 + 0x24) = uVar23;
      uVar31 = *puVar24;
      uVar35 = *(uint *)(lVar33 + (uVar31 * -0x30e4432345000000 >> (uVar30 & 0x3f)) * 4);
      if (uVar16 < uVar35) {
        iVar22 = 1 << (ulong)(uVar5 & 0x1f);
        uVar18 = 3;
        uVar36 = 999999999;
        do {
          puVar32 = (ulong *)(lVar17 + (ulong)uVar35);
          if (*(char *)((long)puVar32 + uVar18) == *(char *)((long)puVar24 + uVar18)) {
            puVar19 = puVar24;
            if (puVar24 < puVar12) {
              if (*puVar32 == uVar31) {
                lVar33 = 0;
                puVar32 = (ulong *)(lVar17 + 8 + (ulong)uVar35);
                do {
                  puVar19 = puVar19 + 1;
                  if (puVar12 <= puVar19) goto LAB_1006d2604;
                  uVar30 = *puVar32;
                  lVar33 = lVar33 + 8;
                  puVar32 = puVar32 + 1;
                } while (uVar30 == *puVar19);
                uVar30 = *puVar19 ^ uVar30;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                uVar30 = lVar33 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
              }
              else {
                uVar30 = *puVar32 ^ uVar31;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
              }
            }
            else {
LAB_1006d2604:
              if (puVar19 < puVar13) {
                if ((int)*puVar32 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
              }
              if (puVar19 < puVar14) {
                if (*(short *)puVar32 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if ((puVar19 < puVar1) && ((char)*puVar32 == (char)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 1);
              }
              uVar30 = (long)puVar19 - (long)puVar24;
            }
            if ((uVar18 < uVar30) &&
               (uVar36 = (ulong)((uVar23 + 2) - uVar35), uVar18 = uVar30,
               (ulong *)((long)puVar24 + uVar30) == puVar1)) goto joined_r0x0001006d2b64;
          }
          if ((uVar35 <= uVar7) ||
             ((iVar22 = iVar22 + -1, iVar22 == 0 ||
              (uVar35 = *(uint *)(lVar29 + (ulong)(uVar35 & uVar6 - 1) * 4), uVar35 <= uVar16))))
          goto joined_r0x0001006d2b64;
        } while( true );
      }
    }
    else {
      lVar29 = *(long *)(param_1 + 0x40);
      uVar35 = *(uint *)(param_1 + 0xbc);
      uVar6 = 1 << (ulong)(uVar35 & 0x1f);
      lVar17 = *(long *)(param_1 + 8);
      uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar23 = (uint)((long)puVar24 - lVar17);
      uVar16 = uVar23 - uVar7;
      if (uVar23 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
        uVar16 = *(uint *)(param_1 + 0x1c);
      }
      uVar7 = 0;
      if (uVar6 <= uVar23) {
        uVar7 = uVar23 - uVar6;
      }
      uVar5 = *(uint *)(param_1 + 0xc4);
      lVar33 = *(long *)(param_1 + 0x30);
      uVar36 = (ulong)*(uint *)(param_1 + 0x24);
      uVar11 = 0x20 - *(int *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0x24) < uVar23) {
        do {
          uVar8 = (uint)(*(int *)(lVar17 + uVar36) * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
          *(undefined4 *)(lVar29 + (ulong)((uint)uVar36 & ~(-1 << (ulong)(uVar35 & 0x1f))) * 4) =
               *(undefined4 *)(lVar33 + (ulong)uVar8 * 4);
          *(uint *)(lVar33 + (ulong)uVar8 * 4) = (uint)uVar36;
          uVar36 = uVar36 + 1;
        } while (((long)puVar24 - lVar17 & 0xffffffffU) != uVar36);
      }
      *(uint *)(param_1 + 0x24) = uVar23;
      uVar35 = *(uint *)(lVar33 + (ulong)((uint)((int)*puVar24 * -0x61c8864f) >>
                                         (ulong)(uVar11 & 0x1f)) * 4);
      if (uVar16 < uVar35) {
        iVar22 = 1 << (ulong)(uVar5 & 0x1f);
        uVar30 = 3;
        uVar36 = 999999999;
        do {
          puVar32 = (ulong *)(lVar17 + (ulong)uVar35);
          if (*(char *)((long)puVar32 + uVar30) == *(char *)((long)puVar24 + uVar30)) {
            puVar19 = puVar24;
            if (puVar24 < puVar12) {
              if (*puVar32 == *puVar24) {
                lVar33 = 0;
                puVar32 = (ulong *)(lVar17 + 8 + (ulong)uVar35);
                do {
                  puVar19 = puVar19 + 1;
                  if (puVar12 <= puVar19) goto LAB_1006d28b4;
                  uVar18 = *puVar32;
                  lVar33 = lVar33 + 8;
                  puVar32 = puVar32 + 1;
                } while (uVar18 == *puVar19);
                uVar18 = *puVar19 ^ uVar18;
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = lVar33 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
              }
              else {
                uVar18 = *puVar24 ^ *puVar32;
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
              }
            }
            else {
LAB_1006d28b4:
              if (puVar19 < puVar13) {
                if ((int)*puVar32 == (int)*puVar19) {
                  puVar32 = (ulong *)((long)puVar32 + 4);
                  puVar19 = (ulong *)((long)puVar19 + 4);
                }
              }
              if (puVar19 < puVar14) {
                if (*(short *)puVar32 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if ((puVar19 < puVar1) && ((char)*puVar32 == (char)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 1);
              }
              uVar18 = (long)puVar19 - (long)puVar24;
            }
            if ((uVar30 < uVar18) &&
               (uVar36 = (ulong)((uVar23 + 2) - uVar35), uVar30 = uVar18,
               (ulong *)((long)puVar24 + uVar18) == puVar1)) goto joined_r0x0001006d2b64;
          }
          uVar18 = uVar30;
          if ((uVar35 <= uVar7) ||
             ((iVar22 = iVar22 + -1, iVar22 == 0 ||
              (uVar35 = *(uint *)(lVar29 + (ulong)(uVar35 & uVar6 - 1) * 4), uVar35 <= uVar16))))
          goto joined_r0x0001006d2b64;
        } while( true );
      }
    }
    goto LAB_1006d21d8;
  }
  puVar32 = (ulong *)((long)puVar24 + 1);
  if (*(int *)((long)puVar32 - (ulong)uVar28) != *(int *)puVar32) goto LAB_1006d227c;
  puVar19 = (ulong *)((long)puVar24 + 5);
  lVar29 = -(ulong)uVar28;
  puVar20 = (ulong *)((long)puVar19 + lVar29);
  puVar25 = puVar19;
  if (puVar19 < puVar12) {
    if (*puVar20 == *puVar19) {
      lVar17 = 0;
      puVar25 = (ulong *)((long)puVar24 + 0xd);
      puVar20 = (ulong *)((long)puVar24 + 0xd + lVar29);
      do {
        if (puVar12 <= puVar25) goto LAB_1006d26e4;
        uVar30 = *puVar20;
        uVar36 = *puVar25;
        lVar17 = lVar17 + 8;
        puVar25 = puVar25 + 1;
        puVar20 = puVar20 + 1;
      } while (uVar30 == uVar36);
      uVar36 = uVar36 ^ uVar30;
      uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
      uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
      uVar18 = lVar17 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
    }
    else {
      uVar36 = *puVar19 ^ *puVar20;
      uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
      uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
      uVar18 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
    }
  }
  else {
LAB_1006d26e4:
    if (puVar25 < puVar13) {
      if ((int)*puVar20 == (int)*puVar25) {
        puVar25 = (ulong *)((long)puVar25 + 4);
        puVar20 = (ulong *)((long)puVar20 + 4);
      }
    }
    if (puVar25 < puVar14) {
      if (*(short *)puVar20 == *(short *)puVar25) {
        puVar25 = (ulong *)((long)puVar25 + 2);
        puVar20 = (ulong *)((long)puVar20 + 2);
      }
    }
    if ((puVar25 < puVar1) && ((char)*puVar20 == (char)*puVar25)) {
      puVar25 = (ulong *)((long)puVar25 + 1);
    }
    uVar18 = (long)puVar25 - (long)puVar19;
  }
  uVar18 = uVar18 + 4;
  iVar22 = 1;
  puVar24 = puVar32;
  goto LAB_1006d29b4;
joined_r0x0001006d2b64:
  if (uVar18 < 4) {
LAB_1006d21d8:
    puVar24 = (ulong *)((long)puVar24 + ((long)puVar24 - (long)param_4 >> 8) + 1);
    goto LAB_1006d21f4;
  }
  if (uVar36 == 0) {
    iVar22 = 1;
  }
  else {
    if ((param_4 < puVar24) && (uVar2 < (long)puVar24 + (2 - uVar36))) {
      puVar32 = puVar24;
      do {
        puVar19 = (ulong *)((long)puVar32 + -1);
        puVar24 = puVar32;
        if ((*(char *)puVar19 != *(char *)((long)puVar32 + (1 - uVar36))) ||
           (uVar18 = uVar18 + 1, puVar24 = puVar19, puVar19 <= param_4)) break;
        uVar30 = (long)puVar32 + (1 - uVar36);
        puVar32 = puVar19;
      } while (uVar2 < uVar30);
    }
    iVar22 = (int)uVar36 + 1;
    uVar38 = uVar28;
    uVar28 = (int)uVar36 - 2;
  }
LAB_1006d29b4:
  uVar36 = (long)puVar24 - (long)param_4;
  puVar32 = (ulong *)param_2[3];
  uVar9 = (undefined2)uVar36;
  if (puVar15 < puVar24) {
    puVar19 = param_4;
    puVar20 = puVar32;
    if (param_4 <= puVar15) {
      puVar20 = (ulong *)((long)puVar32 + ((long)puVar15 - (long)param_4));
      uVar30 = *param_4;
      puVar32[1] = param_4[1];
      *puVar32 = uVar30;
      uVar30 = param_4[2];
      puVar32[3] = param_4[3];
      puVar32[2] = uVar30;
      puVar19 = puVar15;
      if (0x20 < (long)puVar15 - (long)param_4) {
        puVar32 = puVar32 + 4;
        puVar25 = param_4 + 6;
        do {
          uVar30 = puVar25[-2];
          puVar32[1] = puVar25[-1];
          *puVar32 = uVar30;
          uVar30 = *puVar25;
          puVar32[3] = puVar25[1];
          puVar32[2] = uVar30;
          puVar32 = puVar32 + 4;
          puVar25 = puVar25 + 4;
        } while (puVar32 < puVar20);
      }
    }
    if (puVar19 < puVar24) {
      uVar30 = (long)puVar24 - (long)puVar19;
      if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)puVar19))) {
        if (uVar30 < 0x40) {
          uVar34 = 0;
        }
        else {
          uVar34 = uVar30 & 0xffffffffffffffc0;
          puVar32 = puVar20 + 4;
          puVar25 = puVar19 + 4;
          uVar31 = uVar34;
          do {
            uVar39 = puVar25[-4];
            uVar41 = puVar25[-1];
            uVar40 = puVar25[-2];
            uVar43 = puVar25[1];
            uVar42 = *puVar25;
            uVar45 = puVar25[3];
            uVar44 = puVar25[2];
            puVar32[-3] = puVar25[-3];
            puVar32[-4] = uVar39;
            puVar32[-1] = uVar41;
            puVar32[-2] = uVar40;
            puVar32[1] = uVar43;
            *puVar32 = uVar42;
            puVar32[3] = uVar45;
            puVar32[2] = uVar44;
            uVar31 = uVar31 - 0x40;
            puVar32 = puVar32 + 8;
            puVar25 = puVar25 + 8;
          } while (uVar31 != 0);
          if (uVar30 == uVar34) goto LAB_1006d2c0c;
          if ((uVar30 & 0x38) == 0) {
            puVar19 = (ulong *)((long)puVar19 + uVar34);
            puVar20 = (ulong *)((long)puVar20 + uVar34);
            goto LAB_1006d2bfc;
          }
        }
        uVar31 = uVar30 & 0xfffffffffffffff8;
        lVar29 = uVar34 - uVar31;
        puVar26 = (undefined8 *)((long)puVar20 + uVar34);
        puVar37 = (undefined8 *)((long)puVar19 + uVar34);
        do {
          *puVar26 = *puVar37;
          lVar29 = lVar29 + 8;
          puVar26 = puVar26 + 1;
          puVar37 = puVar37 + 1;
        } while (lVar29 != 0);
        puVar20 = (ulong *)((long)puVar20 + uVar31);
        puVar19 = (ulong *)((long)puVar19 + uVar31);
        if (uVar30 == uVar31) goto LAB_1006d2c0c;
      }
LAB_1006d2bfc:
      do {
        puVar32 = (ulong *)((long)puVar19 + 1);
        *(char *)puVar20 = (char)*puVar19;
        puVar20 = (ulong *)((long)puVar20 + 1);
        puVar19 = puVar32;
      } while (puVar32 != puVar24);
    }
LAB_1006d2c0c:
    param_2[3] = param_2[3] + uVar36;
    piVar21 = (int *)param_2[1];
    if (uVar36 < 0x10000) {
      *(undefined2 *)(piVar21 + 1) = uVar9;
      *piVar21 = iVar22;
      goto joined_r0x0001006d2abc;
    }
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
    *(undefined2 *)(piVar21 + 1) = uVar9;
    *piVar21 = iVar22;
    if (uVar18 - 3 < 0x10000) goto LAB_1006d2c48;
LAB_1006d2e38:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
    *(short *)((long)piVar21 + 6) = (short)uVar18 + -3;
    piVar21 = piVar21 + 2;
    param_2[1] = (long)piVar21;
  }
  else {
    uVar30 = *param_4;
    puVar32[1] = param_4[1];
    *puVar32 = uVar30;
    lVar29 = param_2[3];
    if (0x10 < uVar36) {
      uVar30 = param_4[2];
      *(ulong *)(lVar29 + 0x18) = param_4[3];
      *(ulong *)(lVar29 + 0x10) = uVar30;
      uVar30 = param_4[4];
      *(ulong *)(lVar29 + 0x28) = param_4[5];
      *(ulong *)(lVar29 + 0x20) = uVar30;
      if (0x30 < (long)uVar36) {
        puVar32 = (ulong *)(lVar29 + 0x30);
        puVar19 = param_4 + 8;
        do {
          uVar30 = puVar19[-2];
          puVar32[1] = puVar19[-1];
          *puVar32 = uVar30;
          uVar30 = *puVar19;
          puVar32[3] = puVar19[1];
          puVar32[2] = uVar30;
          puVar32 = puVar32 + 4;
          puVar19 = puVar19 + 4;
        } while (puVar32 < (ulong *)(lVar29 + uVar36));
      }
      goto LAB_1006d2c0c;
    }
    param_2[3] = lVar29 + uVar36;
    piVar21 = (int *)param_2[1];
    *(undefined2 *)(piVar21 + 1) = uVar9;
    *piVar21 = iVar22;
joined_r0x0001006d2abc:
    if (0xffff < uVar18 - 3) goto LAB_1006d2e38;
LAB_1006d2c48:
    *(short *)((long)piVar21 + 6) = (short)uVar18 + -3;
    piVar21 = piVar21 + 2;
    param_2[1] = (long)piVar21;
  }
  if (uVar38 == 0) {
    param_4 = (ulong *)((long)puVar24 + uVar18);
    puVar24 = param_4;
  }
  else {
    param_4 = (ulong *)((long)puVar24 + uVar18);
    puVar24 = param_4;
    if (param_4 <= puVar27) {
      while (uVar16 = uVar28, uVar35 = uVar38, puVar24 = param_4, uVar28 = uVar16, uVar38 = uVar35,
            (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar35)) {
        puVar24 = (ulong *)((long)param_4 + 4);
        lVar29 = -(ulong)uVar35;
        puVar32 = (ulong *)((long)puVar24 + lVar29);
        puVar19 = puVar24;
        if (puVar24 < puVar12) {
          if (*puVar32 == *puVar24) {
            lVar17 = 0;
            puVar19 = (ulong *)((long)param_4 + 0xc);
            puVar32 = (ulong *)((long)param_4 + 0xc + lVar29);
            do {
              if (puVar12 <= puVar19) goto LAB_1006d2d04;
              uVar30 = *puVar32;
              uVar36 = *puVar19;
              lVar17 = lVar17 + 8;
              puVar19 = puVar19 + 1;
              puVar32 = puVar32 + 1;
            } while (uVar30 == uVar36);
            uVar36 = uVar36 ^ uVar30;
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            uVar36 = lVar17 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
          }
          else {
            uVar36 = *puVar24 ^ *puVar32;
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
          }
        }
        else {
LAB_1006d2d04:
          if (puVar19 < puVar13) {
            if ((int)*puVar32 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar32 = (ulong *)((long)puVar32 + 4);
            }
          }
          if (puVar19 < puVar14) {
            if (*(short *)puVar32 == *(short *)puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar32 = (ulong *)((long)puVar32 + 2);
            }
          }
          if ((puVar19 < puVar1) && ((char)*puVar32 == (char)*puVar19)) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
          uVar36 = (long)puVar19 - (long)puVar24;
        }
        if (param_4 <= puVar15) {
          puVar24 = (ulong *)param_2[3];
          uVar30 = *param_4;
          puVar24[1] = param_4[1];
          *puVar24 = uVar30;
          piVar21 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar21 + 1) = 0;
        *piVar21 = 1;
        uVar9 = (undefined2)(uVar36 + 1);
        if (uVar36 + 1 < 0x10000) {
          *(undefined2 *)((long)piVar21 + 6) = uVar9;
          param_2[1] = (long)(piVar21 + 2);
        }
        else {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
          *(undefined2 *)((long)piVar21 + 6) = uVar9;
          param_2[1] = (long)(piVar21 + 2);
        }
        param_4 = (ulong *)((long)param_4 + uVar36 + 4);
        puVar24 = param_4;
        uVar28 = uVar35;
        uVar38 = uVar16;
        if ((uVar16 == 0) || (piVar21 = piVar21 + 2, puVar27 < param_4)) break;
      }
    }
  }
LAB_1006d21f4:
  if (puVar27 <= puVar24) goto LAB_1006d2e98;
  goto LAB_1006d21fc;
}

