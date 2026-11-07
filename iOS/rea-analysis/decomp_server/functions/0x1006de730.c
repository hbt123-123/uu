// rea decompile_all
// name: FUN_1006de730
// address: 0x1006de730
// body: available
// range: 0x1006de730-0x1006df29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

byte * FUN_1006de730(long param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5,
                    int param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  byte *pbVar13;
  ulong *puVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  uint *puVar24;
  ulong *puVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  byte *pbVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  int iVar39;
  byte *pbVar40;
  int iVar41;
  int iVar42;
  byte *pbVar43;
  long lVar44;
  uint local_70;
  uint local_6c [3];
  
  lVar15 = *(long *)(param_1 + 0x30);
  if (param_5 < 7) {
    if (param_5 == 5) {
      lVar19 = *param_2;
      uVar21 = 0xbb000000;
      goto LAB_1006de7f0;
    }
    if (param_5 == 6) {
      lVar19 = *param_2;
      uVar21 = 0xbf9b0000;
      goto LAB_1006de7f0;
    }
LAB_1006de7b0:
    uVar21 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                    (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
  }
  else {
    if (param_5 == 7) {
      lVar19 = *param_2;
      uVar21 = 0xbfa56300;
    }
    else {
      if (param_5 != 8) goto LAB_1006de7b0;
      lVar19 = *param_2;
      uVar21 = 0xb7a56463;
    }
LAB_1006de7f0:
    uVar21 = lVar19 * (uVar21 | 0xcf1bbcdc00000000) >>
             ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
  }
  lVar19 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar10 = (int)param_2 - (int)lVar19;
  uVar4 = uVar10 - uVar6;
  if (uVar10 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  lVar31 = *(long *)(param_1 + 0x40);
  uVar9 = ~(-1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f));
  uVar6 = 0;
  if (uVar9 <= uVar10) {
    uVar6 = uVar10 - uVar9;
  }
  uVar37 = uVar6;
  if (uVar6 <= uVar4) {
    uVar37 = uVar4;
  }
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
  uVar5 = *(uint *)(lVar15 + uVar21 * 4);
  if (uVar37 < uVar5) {
    uVar35 = uVar7;
    uVar17 = 0;
    do {
      uVar28 = uVar5;
      puVar16 = (uint *)(lVar31 + (ulong)((uVar28 & uVar9) << 1) * 4);
      if (puVar16[1] != 1 || uVar35 < 2) {
        if (puVar16[1] == 1) {
          puVar16[0] = 0;
          puVar16[1] = 0;
        }
        uVar28 = uVar17;
        if (uVar17 == 0) goto LAB_1006dec78;
        break;
      }
      puVar16[1] = uVar17;
      uVar35 = uVar35 - 1;
      uVar17 = uVar28;
      uVar5 = *puVar16;
    } while (uVar37 < *puVar16);
    lVar44 = *(long *)(param_1 + 0x10);
    do {
      uVar17 = *(uint *)(lVar31 + 4 + (ulong)((uVar28 & uVar9) << 1) * 4);
      uVar8 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar5 = *(uint *)(param_1 + 0x18);
      pbVar33 = (byte *)(ulong)uVar5;
      lVar27 = lVar44;
      if (uVar5 <= uVar28) {
        lVar27 = lVar19;
      }
      puVar16 = (uint *)(lVar31 + (ulong)((uVar28 & (uVar8 ^ 0xffffffff)) << 1) * 4);
      puVar12 = puVar16 + 1;
      uVar34 = *puVar16;
      puVar14 = (ulong *)(pbVar33 + lVar44);
      if (uVar5 <= uVar28) {
        puVar14 = param_3;
      }
      uVar36 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar3 = uVar28 - uVar36;
      if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar36) {
        uVar3 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar35 != 0) && (uVar3 < uVar34)) {
        pbVar43 = (byte *)0x0;
        pbVar40 = (byte *)0x0;
        lVar1 = lVar27 + (ulong)uVar28;
        lVar27 = lVar27 + (ulong)uVar28 + 8;
        uVar36 = uVar35;
        do {
          pbVar38 = pbVar43;
          if (pbVar40 <= pbVar43) {
            pbVar38 = pbVar40;
          }
          uVar32 = (ulong)uVar34;
          lVar22 = lVar19;
          if (param_6 == 1) {
            if ((uVar28 < uVar5) || (pbVar33 <= pbVar38 + uVar32)) {
              lVar22 = lVar44;
              if (pbVar33 <= pbVar38 + uVar32) {
                lVar22 = lVar19;
              }
              goto LAB_1006deaac;
            }
            pbVar13 = pbVar38 + lVar1;
            FUN_1006c7460(pbVar13,pbVar38 + lVar44 + uVar32,puVar14,pbVar33 + lVar44,
                          pbVar33 + lVar19);
            pbVar13 = pbVar13 + (long)pbVar38;
            lVar2 = lVar44 + uVar32;
            if (pbVar33 <= pbVar13 + uVar32) {
              lVar2 = lVar19 + uVar32;
            }
          }
          else {
LAB_1006deaac:
            lVar2 = lVar22 + uVar32;
            puVar25 = (ulong *)(pbVar38 + lVar2);
            puVar20 = (ulong *)(pbVar38 + lVar1);
            puVar23 = puVar20;
            if (puVar20 < (ulong *)((long)puVar14 - 7U)) {
              if (*puVar25 == *puVar20) {
                lVar29 = 0;
                do {
                  if ((ulong *)((long)puVar14 - 7U) <= pbVar38 + lVar29 + lVar27) {
                    puVar25 = (ulong *)(pbVar38 + lVar22 + lVar29 + uVar32 + 8);
                    puVar23 = (ulong *)(pbVar38 + lVar29 + lVar27);
                    goto joined_r0x0001006deb34;
                  }
                  lVar11 = lVar29 + lVar22 + uVar32 + 8;
                  uVar30 = *(ulong *)(pbVar38 + lVar29 + lVar27);
                  lVar29 = lVar29 + 8;
                } while (*(ulong *)(pbVar38 + lVar11) == uVar30);
                uVar30 = uVar30 ^ *(ulong *)(pbVar38 + lVar11);
                uVar32 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                pbVar13 = pbVar38 + lVar29 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              }
              else {
                uVar32 = *puVar20 ^ *puVar25;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                pbVar13 = pbVar38 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006deb34:
              if (puVar23 < (ulong *)((long)puVar14 - 3U)) {
                if ((int)*puVar25 == (int)*puVar23) {
                  puVar23 = (ulong *)((long)puVar23 + 4);
                  puVar25 = (ulong *)((long)puVar25 + 4);
                }
              }
              if (puVar23 < (ulong *)((long)puVar14 - 1U)) {
                if ((short)*puVar25 == (short)*puVar23) {
                  puVar23 = (ulong *)((long)puVar23 + 2);
                  puVar25 = (ulong *)((long)puVar25 + 2);
                }
              }
              if ((puVar23 < puVar14) && ((byte)*puVar25 == (byte)*puVar23)) {
                puVar23 = (ulong *)((long)puVar23 + 1);
              }
              pbVar13 = (byte *)((long)puVar23 + ((long)pbVar38 - (long)puVar20));
            }
          }
          if ((ulong *)(pbVar13 + lVar1) == puVar14) break;
          puVar24 = (uint *)(lVar31 + (ulong)((uVar34 & ~uVar8) << 1) * 4);
          if (pbVar13[lVar2] < (byte)*(ulong *)(pbVar13 + lVar1)) {
            *puVar16 = uVar34;
            if (uVar34 <= uVar37) {
              puVar16 = local_6c;
              break;
            }
            puVar24 = puVar24 + 1;
            puVar16 = puVar24;
            pbVar43 = pbVar13;
          }
          else {
            *puVar12 = uVar34;
            puVar12 = puVar24;
            pbVar40 = pbVar13;
            if (uVar34 <= uVar37) {
              puVar12 = local_6c;
              break;
            }
          }
          if (uVar36 == 1) break;
          uVar36 = uVar36 - 1;
          uVar34 = *puVar24;
        } while (uVar3 < uVar34);
      }
      *puVar12 = 0;
      *puVar16 = 0;
      uVar35 = uVar35 + 1;
      uVar28 = uVar17;
    } while (uVar17 != 0);
  }
  else {
LAB_1006dec78:
    lVar44 = *(long *)(param_1 + 0x10);
  }
  pbVar33 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
  puVar16 = (uint *)(lVar31 + (ulong)((uVar9 & uVar10) << 1) * 4);
  puVar12 = puVar16 + 1;
  iVar42 = uVar10 + 9;
  uVar37 = *(uint *)(lVar15 + uVar21 * 4);
  *(uint *)(lVar15 + uVar21 * 4) = uVar10;
  iVar26 = uVar7 - 1;
  if (uVar4 < uVar37) {
    pbVar40 = (byte *)0x0;
    pbVar43 = (byte *)0x0;
    pbVar38 = (byte *)0x0;
    iVar41 = iVar42;
    do {
      pbVar13 = pbVar38;
      if (pbVar43 <= pbVar38) {
        pbVar13 = pbVar43;
      }
      uVar21 = (ulong)uVar37;
      puVar14 = (ulong *)((long)param_2 + (long)pbVar13);
      if ((param_6 == 1) && (pbVar13 + uVar21 < pbVar33)) {
        FUN_1006c7460(puVar14,pbVar13 + lVar44 + uVar21,param_3,pbVar33 + lVar44,pbVar33 + lVar19);
        pbVar13 = (byte *)((long)puVar14 + (long)pbVar13);
        lVar15 = lVar44 + uVar21;
        if (pbVar33 <= pbVar13 + uVar21) {
          lVar15 = lVar19 + uVar21;
        }
      }
      else {
        lVar15 = lVar19 + uVar21;
        puVar25 = (ulong *)(pbVar13 + lVar15);
        puVar20 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar25 == *puVar14) {
            lVar27 = 0;
            puVar20 = (ulong *)((long)(param_2 + 1) + (long)pbVar13);
            puVar25 = (ulong *)(pbVar13 + lVar19 + 8 + uVar21);
            do {
              if ((ulong *)((long)param_3 + -7) <= puVar20) goto LAB_1006deea0;
              uVar32 = *puVar25;
              uVar21 = *puVar20;
              lVar27 = lVar27 + 8;
              puVar20 = puVar20 + 1;
              puVar25 = puVar25 + 1;
            } while (uVar32 == uVar21);
            uVar21 = uVar21 ^ uVar32;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            pbVar13 = pbVar13 + lVar27 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            goto joined_r0x0001006defd4;
          }
          uVar21 = *puVar14 ^ *puVar25;
          uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
        }
        else {
LAB_1006deea0:
          if (puVar20 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar25 == (int)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 4);
              puVar25 = (ulong *)((long)puVar25 + 4);
            }
          }
          if (puVar20 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar25 == (short)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 2);
              puVar25 = (ulong *)((long)puVar25 + 2);
            }
          }
          if ((puVar20 < param_3) && ((byte)*puVar25 == (byte)*puVar20)) {
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          uVar21 = (long)puVar20 - (long)puVar14;
        }
        pbVar13 = pbVar13 + uVar21;
      }
joined_r0x0001006defd4:
      iVar42 = iVar41;
      iVar39 = iVar26;
      if (pbVar40 < pbVar13) {
        iVar42 = uVar37 + (int)pbVar13;
        if (pbVar13 <= (byte *)(ulong)(iVar41 - uVar37)) {
          iVar42 = iVar41;
        }
        if ((int)(((uint)LZCOUNT((uVar10 + 1) - uVar37) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)pbVar13 - (int)pbVar40) * 4) {
          *param_4 = (ulong)((uVar10 + 2) - uVar37);
          pbVar40 = pbVar13;
        }
        if ((ulong *)((long)param_2 + (long)pbVar13) == param_3) {
          iVar39 = 0;
          if (param_6 != 2) {
            iVar39 = iVar26;
          }
          break;
        }
      }
      puVar24 = (uint *)(lVar31 + (ulong)((uVar37 & uVar9) << 1) * 4);
      if (pbVar13[lVar15] < *(byte *)((long)param_2 + (long)pbVar13)) {
        *puVar16 = uVar37;
        if (uVar37 <= uVar6) {
          puVar16 = &local_70;
          break;
        }
        puVar24 = puVar24 + 1;
        pbVar38 = pbVar13;
        puVar16 = puVar24;
        if (iVar26 == 0) {
          iVar39 = -1;
          break;
        }
      }
      else {
        *puVar12 = uVar37;
        if (uVar37 <= uVar6) {
          puVar12 = &local_70;
          break;
        }
        pbVar43 = pbVar13;
        puVar12 = puVar24;
        if (iVar26 == 0) {
          iVar39 = -1;
          break;
        }
      }
      iVar26 = iVar26 + -1;
      uVar37 = *puVar24;
      iVar41 = iVar42;
      iVar39 = iVar26;
    } while (uVar4 < uVar37);
  }
  else {
    pbVar40 = (byte *)0x0;
    iVar39 = iVar26;
  }
  *puVar12 = 0;
  *puVar16 = 0;
  if ((param_6 != 2) || (iVar39 == 0)) goto LAB_1006df268;
  plVar18 = *(long **)(param_1 + 0xb0);
  if (param_5 < 7) {
    if (param_5 == 5) {
      lVar15 = *param_2;
      uVar21 = 0xbb000000;
      goto LAB_1006df0a4;
    }
    if (param_5 == 6) {
      lVar15 = *param_2;
      uVar21 = 0xbf9b0000;
      goto LAB_1006df0a4;
    }
LAB_1006df070:
    uVar21 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >> (ulong)(-(int)plVar18[0x18] & 0x1f));
  }
  else {
    if (param_5 == 7) {
      lVar15 = *param_2;
      uVar21 = 0xbfa56300;
    }
    else {
      if (param_5 != 8) goto LAB_1006df070;
      lVar15 = *param_2;
      uVar21 = 0xb7a56463;
    }
LAB_1006df0a4:
    uVar21 = lVar15 * (uVar21 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-(int)plVar18[0x18] & 0x3f);
  }
  lVar15 = *plVar18;
  lVar31 = plVar18[1];
  uVar6 = *(uint *)((long)plVar18 + 0x1c);
  uVar9 = ~(-1 << (ulong)(*(int *)((long)plVar18 + 0xbc) - 1U & 0x1f));
  uVar32 = lVar15 - lVar31;
  iVar26 = (int)uVar32;
  uVar4 = iVar26 - uVar9;
  if (iVar26 - uVar6 <= uVar9) {
    uVar4 = uVar6;
  }
  uVar37 = *(uint *)(plVar18[6] + uVar21 * 4);
  if (uVar6 < uVar37) {
    pbVar33 = (byte *)0x0;
    pbVar43 = (byte *)0x0;
    uVar5 = *(uint *)(param_1 + 0x18);
    lVar44 = plVar18[8];
    uVar7 = *(int *)(param_1 + 0x1c) - iVar26;
    do {
      iVar39 = iVar39 + -1;
      pbVar38 = pbVar43;
      if (pbVar33 <= pbVar43) {
        pbVar38 = pbVar33;
      }
      uVar21 = (ulong)uVar37;
      lVar27 = lVar31 + uVar21;
      pbVar13 = (byte *)((long)param_2 + (long)pbVar38);
      FUN_1006c7460(pbVar13,pbVar38 + lVar27,param_3,lVar15,lVar19 + (ulong)uVar5);
      pbVar13 = pbVar13 + (long)pbVar38;
      if ((byte *)(uVar32 & 0xffffffff) <= pbVar13 + uVar21) {
        lVar27 = lVar19 + (ulong)uVar7 + uVar21;
      }
      if (pbVar40 < pbVar13) {
        iVar26 = uVar37 + uVar7;
        if ((int)(((uint)LZCOUNT((uVar10 + 1) - iVar26) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)pbVar13 - (int)pbVar40) * 4) {
          *param_4 = (ulong)((uVar10 + 2) - iVar26);
          pbVar40 = pbVar13;
        }
        if ((ulong *)((long)param_2 + (long)pbVar13) == param_3) break;
      }
      puVar16 = (uint *)(lVar44 + (ulong)((uVar37 & uVar9) << 1) * 4);
      if (pbVar13[lVar27] < *(byte *)((long)param_2 + (long)pbVar13)) {
        if (uVar37 <= uVar4) break;
        puVar16 = puVar16 + 1;
        pbVar43 = pbVar13;
      }
      else {
        pbVar33 = pbVar13;
        if (uVar37 <= uVar4) break;
      }
      if ((iVar39 == 0) || (uVar37 = *puVar16, uVar37 <= uVar6)) break;
    } while( true );
  }
LAB_1006df268:
  *(int *)(param_1 + 0x24) = iVar42 + -8;
  return pbVar40;
}

