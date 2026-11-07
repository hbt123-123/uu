// rea decompile_all
// name: FUN_1006ddb48
// address: 0x1006ddb48
// body: available
// range: 0x1006ddb48-0x1006de54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int * FUN_1006ddb48(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  int *piVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  
  if (*(int *)(param_1 + 200) - 6U < 2) {
    lVar15 = *(long *)(param_1 + 0x40);
    uVar9 = *(uint *)(param_1 + 0xbc);
    uVar4 = 1 << (ulong)(uVar9 & 0x1f);
    lVar21 = *(long *)(param_1 + 8);
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar14 = (uint)((long)param_2 - lVar21);
    uVar17 = (ulong)*(uint *)(param_1 + 0x24);
    uVar1 = uVar14 - uVar5;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    uVar5 = 0;
    if (uVar4 <= uVar14) {
      uVar5 = uVar14 - uVar4;
    }
    iVar20 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
    lVar18 = *(long *)(param_1 + 0x30);
    uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar8 = (ulong)(*(long *)(lVar21 + uVar17) * -0x30e4432340650000) >> (uVar12 & 0x3f);
        *(undefined4 *)(lVar15 + (ulong)((uint)uVar17 & ~(-1 << (ulong)(uVar9 & 0x1f))) * 4) =
             *(undefined4 *)(lVar18 + uVar8 * 4);
        *(uint *)(lVar18 + uVar8 * 4) = (uint)uVar17;
        uVar17 = uVar17 + 1;
      } while (((long)param_2 - lVar21 & 0xffffffffU) != uVar17);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar17 = *param_2;
    uVar9 = *(uint *)(lVar18 + (uVar17 * -0x30e4432340650000 >> (uVar12 & 0x3f)) * 4);
    if (uVar1 < uVar9) {
      piVar19 = (int *)0x3;
      do {
        puVar11 = (ulong *)(lVar21 + (ulong)uVar9);
        if (*(char *)((long)puVar11 + (long)piVar19) == *(char *)((long)param_2 + (long)piVar19)) {
          puVar13 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar11 == *param_2) {
              lVar18 = 0;
              puVar11 = (ulong *)(lVar21 + 8 + (ulong)uVar9);
              do {
                puVar13 = puVar13 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar13) goto LAB_1006ddcdc;
                uVar12 = *puVar11;
                lVar18 = lVar18 + 8;
                puVar11 = puVar11 + 1;
              } while (uVar12 == *puVar13);
              uVar12 = *puVar13 ^ uVar12;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar18 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3));
            }
            else {
              uVar12 = *param_2 ^ *puVar11;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
          }
          else {
LAB_1006ddcdc:
            if (puVar13 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar11 == (int)*puVar13) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar11 = (ulong *)((long)puVar11 + 4);
              }
            }
            if (puVar13 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar11 == (short)*puVar13) {
                puVar11 = (ulong *)((long)puVar11 + 2);
                puVar13 = (ulong *)((long)puVar13 + 2);
              }
            }
            if ((puVar13 < param_3) && ((char)*puVar11 == (char)*puVar13)) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
            piVar10 = (int *)((long)puVar13 - (long)param_2);
          }
          if ((piVar19 < piVar10) &&
             (*param_4 = (ulong)((uVar14 + 2) - uVar9), piVar19 = piVar10,
             (ulong *)((long)param_2 + (long)piVar10) == param_3)) goto LAB_1006ddff8;
        }
        piVar10 = piVar19;
        if ((uVar9 <= uVar5) ||
           ((iVar20 = iVar20 + -1, iVar20 == 0 ||
            (uVar9 = *(uint *)(lVar15 + (ulong)(uVar9 & uVar4 - 1) * 4), piVar19 = piVar10,
            uVar9 <= uVar1)))) goto LAB_1006ddff8;
      } while( true );
    }
    piVar10 = (int *)0x3;
LAB_1006ddff8:
    puVar16 = *(undefined8 **)(param_1 + 0xb0);
    uVar9 = 1 << (ulong)(*(uint *)((long)puVar16 + 0xbc) & 0x1f);
    uVar3 = *puVar16;
    lVar15 = puVar16[1];
    uVar4 = (int)uVar3 - (int)lVar15;
    uVar1 = 0;
    if (uVar9 <= uVar4) {
      uVar1 = uVar4 - uVar9;
    }
    if (iVar20 != 0) {
      uVar5 = *(uint *)(puVar16 + 3);
      uVar22 = *(uint *)(puVar16[6] +
                        (uVar17 * -0x30e4432340650000 >>
                        ((ulong)(uint)-*(int *)(puVar16 + 0x18) & 0x3f)) * 4);
      if (uVar5 < uVar22) {
        lVar18 = puVar16[8];
        uVar17 = *param_2;
        while( true ) {
          iVar20 = iVar20 + -1;
          piVar19 = (int *)(lVar15 + (ulong)uVar22);
          if (*piVar19 == (int)uVar17) {
            piVar7 = (int *)((long)param_2 + 4);
            FUN_1006c7460((int *)((long)param_2 + 4),piVar19 + 1,param_3,uVar3,lVar21 + (ulong)uVar2
                         );
            piVar7 = piVar7 + 1;
            if ((piVar10 < piVar7) &&
               (*param_4 = (ulong)(((uVar14 - uVar2) + uVar4 + 2) - uVar22), piVar10 = piVar7,
               (ulong *)((long)param_2 + (long)piVar7) == param_3)) {
              return piVar7;
            }
          }
          if (uVar22 <= uVar1) {
            return piVar10;
          }
          if (iVar20 == 0) break;
          uVar22 = *(uint *)(lVar18 + (ulong)(uVar22 & uVar9 - 1) * 4);
          if (uVar22 <= uVar5) {
            return piVar10;
          }
        }
        return piVar10;
      }
    }
  }
  else if (*(int *)(param_1 + 200) == 5) {
    lVar15 = *(long *)(param_1 + 0x40);
    uVar9 = *(uint *)(param_1 + 0xbc);
    uVar4 = 1 << (ulong)(uVar9 & 0x1f);
    lVar21 = *(long *)(param_1 + 8);
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar14 = (uint)((long)param_2 - lVar21);
    uVar17 = (ulong)*(uint *)(param_1 + 0x24);
    uVar1 = uVar14 - uVar5;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    uVar5 = 0;
    if (uVar4 <= uVar14) {
      uVar5 = uVar14 - uVar4;
    }
    iVar20 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
    lVar18 = *(long *)(param_1 + 0x30);
    uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar8 = (ulong)(*(long *)(lVar21 + uVar17) * -0x30e4432345000000) >> (uVar12 & 0x3f);
        *(undefined4 *)(lVar15 + (ulong)((uint)uVar17 & ~(-1 << (ulong)(uVar9 & 0x1f))) * 4) =
             *(undefined4 *)(lVar18 + uVar8 * 4);
        *(uint *)(lVar18 + uVar8 * 4) = (uint)uVar17;
        uVar17 = uVar17 + 1;
      } while (((long)param_2 - lVar21 & 0xffffffffU) != uVar17);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar17 = *param_2;
    uVar9 = *(uint *)(lVar18 + (uVar17 * -0x30e4432345000000 >> (uVar12 & 0x3f)) * 4);
    if (uVar1 < uVar9) {
      piVar19 = (int *)0x3;
      do {
        puVar11 = (ulong *)(lVar21 + (ulong)uVar9);
        if (*(char *)((long)puVar11 + (long)piVar19) == *(char *)((long)param_2 + (long)piVar19)) {
          puVar13 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar11 == *param_2) {
              lVar18 = 0;
              puVar11 = (ulong *)(lVar21 + 8 + (ulong)uVar9);
              do {
                puVar13 = puVar13 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar13) goto LAB_1006ddf18;
                uVar12 = *puVar11;
                lVar18 = lVar18 + 8;
                puVar11 = puVar11 + 1;
              } while (uVar12 == *puVar13);
              uVar12 = *puVar13 ^ uVar12;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar18 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3));
            }
            else {
              uVar12 = *param_2 ^ *puVar11;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
          }
          else {
LAB_1006ddf18:
            if (puVar13 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar11 == (int)*puVar13) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar11 = (ulong *)((long)puVar11 + 4);
              }
            }
            if (puVar13 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar11 == (short)*puVar13) {
                puVar11 = (ulong *)((long)puVar11 + 2);
                puVar13 = (ulong *)((long)puVar13 + 2);
              }
            }
            if ((puVar13 < param_3) && ((char)*puVar11 == (char)*puVar13)) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
            piVar10 = (int *)((long)puVar13 - (long)param_2);
          }
          if ((piVar19 < piVar10) &&
             (*param_4 = (ulong)((uVar14 + 2) - uVar9), piVar19 = piVar10,
             (ulong *)((long)param_2 + (long)piVar10) == param_3)) goto LAB_1006de328;
        }
        piVar10 = piVar19;
        if ((uVar9 <= uVar5) ||
           ((iVar20 = iVar20 + -1, iVar20 == 0 ||
            (uVar9 = *(uint *)(lVar15 + (ulong)(uVar9 & uVar4 - 1) * 4), piVar19 = piVar10,
            uVar9 <= uVar1)))) goto LAB_1006de328;
      } while( true );
    }
    piVar10 = (int *)0x3;
LAB_1006de328:
    puVar16 = *(undefined8 **)(param_1 + 0xb0);
    uVar9 = 1 << (ulong)(*(uint *)((long)puVar16 + 0xbc) & 0x1f);
    uVar3 = *puVar16;
    lVar15 = puVar16[1];
    uVar4 = (int)uVar3 - (int)lVar15;
    uVar1 = 0;
    if (uVar9 <= uVar4) {
      uVar1 = uVar4 - uVar9;
    }
    if (iVar20 != 0) {
      uVar5 = *(uint *)(puVar16 + 3);
      uVar22 = *(uint *)(puVar16[6] +
                        (uVar17 * -0x30e4432345000000 >>
                        ((ulong)(uint)-*(int *)(puVar16 + 0x18) & 0x3f)) * 4);
      if (uVar5 < uVar22) {
        lVar18 = puVar16[8];
        uVar17 = *param_2;
        while( true ) {
          iVar20 = iVar20 + -1;
          piVar19 = (int *)(lVar15 + (ulong)uVar22);
          if (*piVar19 == (int)uVar17) {
            piVar7 = (int *)((long)param_2 + 4);
            FUN_1006c7460((int *)((long)param_2 + 4),piVar19 + 1,param_3,uVar3,lVar21 + (ulong)uVar2
                         );
            piVar7 = piVar7 + 1;
            if ((piVar10 < piVar7) &&
               (*param_4 = (ulong)(((uVar14 - uVar2) + uVar4 + 2) - uVar22), piVar10 = piVar7,
               (ulong *)((long)param_2 + (long)piVar7) == param_3)) {
              return piVar7;
            }
          }
          if (uVar22 <= uVar1) {
            return piVar10;
          }
          if (iVar20 == 0) break;
          uVar22 = *(uint *)(lVar18 + (ulong)(uVar22 & uVar9 - 1) * 4);
          if (uVar22 <= uVar5) {
            return piVar10;
          }
        }
        return piVar10;
      }
    }
  }
  else {
    lVar15 = *(long *)(param_1 + 0x40);
    uVar9 = *(uint *)(param_1 + 0xbc);
    uVar4 = 1 << (ulong)(uVar9 & 0x1f);
    lVar21 = *(long *)(param_1 + 8);
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar14 = (uint)((long)param_2 - lVar21);
    uVar17 = (ulong)*(uint *)(param_1 + 0x24);
    uVar1 = uVar14 - uVar5;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    uVar5 = 0;
    if (uVar4 <= uVar14) {
      uVar5 = uVar14 - uVar4;
    }
    iVar20 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
    lVar18 = *(long *)(param_1 + 0x30);
    uVar22 = 0x20 - *(int *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar6 = (uint)(*(int *)(lVar21 + uVar17) * -0x61c8864f) >> (ulong)(uVar22 & 0x1f);
        *(undefined4 *)(lVar15 + (ulong)((uint)uVar17 & ~(-1 << (ulong)(uVar9 & 0x1f))) * 4) =
             *(undefined4 *)(lVar18 + (ulong)uVar6 * 4);
        *(uint *)(lVar18 + (ulong)uVar6 * 4) = (uint)uVar17;
        uVar17 = uVar17 + 1;
      } while (((long)param_2 - lVar21 & 0xffffffffU) != uVar17);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar17 = *param_2;
    uVar6 = (int)uVar17 * -0x61c8864f;
    uVar9 = *(uint *)(lVar18 + (ulong)(uVar6 >> (ulong)(uVar22 & 0x1f)) * 4);
    if (uVar1 < uVar9) {
      piVar19 = (int *)0x3;
      do {
        puVar11 = (ulong *)(lVar21 + (ulong)uVar9);
        if (*(char *)((long)puVar11 + (long)piVar19) == *(char *)((long)param_2 + (long)piVar19)) {
          puVar13 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar11 == *param_2) {
              lVar18 = 0;
              puVar11 = (ulong *)(lVar21 + 8 + (ulong)uVar9);
              do {
                puVar13 = puVar13 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar13) goto LAB_1006de248;
                uVar12 = *puVar11;
                lVar18 = lVar18 + 8;
                puVar11 = puVar11 + 1;
              } while (uVar12 == *puVar13);
              uVar12 = *puVar13 ^ uVar12;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar18 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3));
            }
            else {
              uVar12 = *param_2 ^ *puVar11;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
          }
          else {
LAB_1006de248:
            if (puVar13 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar11 == (int)*puVar13) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar11 = (ulong *)((long)puVar11 + 4);
              }
            }
            if (puVar13 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar11 == (short)*puVar13) {
                puVar11 = (ulong *)((long)puVar11 + 2);
                puVar13 = (ulong *)((long)puVar13 + 2);
              }
            }
            if ((puVar13 < param_3) && ((char)*puVar11 == (char)*puVar13)) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
            piVar10 = (int *)((long)puVar13 - (long)param_2);
          }
          if ((piVar19 < piVar10) &&
             (*param_4 = (ulong)((uVar14 + 2) - uVar9), piVar19 = piVar10,
             (ulong *)((long)param_2 + (long)piVar10) == param_3)) goto LAB_1006de424;
        }
        piVar10 = piVar19;
        if ((uVar9 <= uVar5) ||
           ((iVar20 = iVar20 + -1, iVar20 == 0 ||
            (uVar9 = *(uint *)(lVar15 + (ulong)(uVar9 & uVar4 - 1) * 4), piVar19 = piVar10,
            uVar9 <= uVar1)))) goto LAB_1006de424;
      } while( true );
    }
    piVar10 = (int *)0x3;
LAB_1006de424:
    puVar16 = *(undefined8 **)(param_1 + 0xb0);
    uVar9 = 1 << (ulong)(*(uint *)((long)puVar16 + 0xbc) & 0x1f);
    uVar3 = *puVar16;
    lVar15 = puVar16[1];
    uVar4 = (int)uVar3 - (int)lVar15;
    uVar1 = 0;
    if (uVar9 <= uVar4) {
      uVar1 = uVar4 - uVar9;
    }
    if (iVar20 != 0) {
      uVar5 = *(uint *)(puVar16 + 3);
      uVar22 = *(uint *)(puVar16[6] +
                        (ulong)(uVar6 >> (ulong)(-*(int *)(puVar16 + 0x18) & 0x1f)) * 4);
      if (uVar5 < uVar22) {
        lVar18 = puVar16[8];
        while( true ) {
          iVar20 = iVar20 + -1;
          piVar19 = (int *)(lVar15 + (ulong)uVar22);
          if (*piVar19 == (int)uVar17) {
            piVar7 = (int *)((long)param_2 + 4);
            FUN_1006c7460(piVar7,piVar19 + 1,param_3,uVar3,lVar21 + (ulong)uVar2);
            piVar7 = piVar7 + 1;
            if ((piVar10 < piVar7) &&
               (*param_4 = (ulong)(((uVar14 - uVar2) + uVar4 + 2) - uVar22), piVar10 = piVar7,
               (ulong *)((long)param_2 + (long)piVar7) == param_3)) {
              return piVar7;
            }
          }
          if (uVar22 <= uVar1) {
            return piVar10;
          }
          if (iVar20 == 0) break;
          uVar22 = *(uint *)(lVar18 + (ulong)(uVar22 & uVar9 - 1) * 4);
          if (uVar22 <= uVar5) {
            return piVar10;
          }
        }
        return piVar10;
      }
    }
  }
  return piVar10;
}

