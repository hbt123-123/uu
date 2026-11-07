// rea decompile_all
// name: FUN_1006df578
// address: 0x1006df578
// body: available
// range: 0x1006df578-0x1006e05cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong FUN_1006df578(long param_1,long *param_2,long param_3,byte *param_4,ulong param_5)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint *puVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong *puVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  ulong *puVar31;
  long lVar32;
  undefined4 *puVar33;
  uint *puVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  uint uVar40;
  ulong *puVar41;
  int *piVar42;
  undefined4 *puVar43;
  ulong *puVar44;
  ulong uVar45;
  byte *pbVar46;
  long lVar47;
  long lVar48;
  ulong *puVar49;
  byte *pbVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  ulong *puVar55;
  ulong *puVar56;
  ulong uVar57;
  ulong uVar58;
  ulong *puVar59;
  ulong uVar60;
  ulong uVar61;
  long lVar62;
  ulong *puVar63;
  long lVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  byte *local_148;
  
  uVar25 = param_5 >> 0x14;
  if ((param_5 & 0xfffff) != 0) {
    uVar25 = uVar25 + 1;
  }
  if (uVar25 == 0) {
    return 0;
  }
  uVar20 = 0;
  uVar12 = 1 << (ulong)(*(uint *)(param_3 + 0x14) & 0x1f);
  uVar57 = 0;
  uVar60 = param_2[2];
  local_148 = param_4;
  do {
    if ((ulong)param_2[3] <= uVar60) {
      return 0;
    }
    puVar3 = (ulong *)(param_4 + uVar20 * 0x100000);
    puVar7 = (ulong *)(param_4 + param_5);
    if (0xfffff < param_5 + uVar20 * -0x100000) {
      puVar7 = puVar3 + 0x20000;
    }
    lVar62 = *(long *)(param_1 + 8);
    uVar22 = (int)puVar7 - (int)lVar62;
    if (0xe0000000 < uVar22) {
      uVar22 = *(uint *)(param_3 + 4);
      uVar30 = 1L << ((ulong)uVar22 & 0x3f);
      uVar40 = ((int)puVar3 - (int)lVar62) - uVar12;
      *(ulong *)(param_1 + 8) = lVar62 + (ulong)uVar40;
      *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar40;
      *(ulong *)(param_1 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) - uVar40,
                    (int)*(undefined8 *)(param_1 + 0x18) - uVar40);
      puVar33 = *(undefined4 **)(param_1 + 0x20);
      if (uVar22 < 3) {
        lVar38 = 0;
      }
      else {
        uVar53 = 4;
        if ((uVar30 & 3) != 0) {
          uVar53 = uVar30 & 3;
        }
        lVar38 = uVar30 - uVar53;
        lVar62 = lVar38;
        puVar43 = puVar33;
        do {
          auVar65._0_4_ = *puVar43;
          auVar65._4_4_ = puVar43[2];
          auVar65._8_4_ = puVar43[4];
          auVar65._12_4_ = puVar43[6];
          auVar66._4_4_ = uVar40;
          auVar66._0_4_ = uVar40;
          auVar66._8_4_ = uVar40;
          auVar66._12_4_ = uVar40;
          auVar66 = NEON_uqsub(auVar65,auVar66,4);
          *puVar43 = auVar66._0_4_;
          puVar43[2] = auVar66._4_4_;
          puVar43[4] = auVar66._8_4_;
          puVar43[6] = auVar66._12_4_;
          lVar62 = lVar62 + -4;
          puVar43 = puVar43 + 8;
        } while (lVar62 != 0);
      }
      lVar62 = uVar30 - lVar38;
      puVar34 = puVar33 + lVar38 * 2;
      do {
        uVar22 = 0;
        if (uVar40 <= *puVar34) {
          uVar22 = *puVar34 - uVar40;
        }
        *puVar34 = uVar22;
        lVar62 = lVar62 + -1;
        puVar34 = puVar34 + 2;
      } while (lVar62 != 0);
      lVar62 = *(long *)(param_1 + 8);
      uVar22 = (int)puVar7 - (int)lVar62;
    }
    uVar40 = *(uint *)(param_1 + 0x1c);
    uVar15 = uVar22 - uVar12;
    if (uVar22 < uVar12 || uVar15 == 0) {
      uVar22 = *(uint *)(param_1 + 0x18);
    }
    else {
      if (uVar40 < uVar15) {
        *(uint *)(param_1 + 0x1c) = uVar15;
        uVar40 = uVar15;
      }
      uVar22 = *(uint *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0x18) < uVar40) {
        *(uint *)(param_1 + 0x18) = uVar40;
        uVar22 = uVar40;
      }
    }
    lVar38 = *(long *)(param_1 + 0x30);
    uVar15 = *(uint *)(param_3 + 4);
    uVar8 = *(uint *)(param_3 + 8);
    uVar9 = *(uint *)(param_3 + 0xc);
    pbVar26 = (byte *)(ulong)uVar9;
    uVar10 = *(uint *)(param_3 + 0x10);
    if (uVar40 < uVar22) {
      lVar47 = *(long *)(param_1 + 0x10);
      uVar23 = uVar40;
    }
    else {
      lVar47 = 0;
      uVar23 = uVar22;
    }
    puVar2 = (ulong *)(lVar47 + (ulong)uVar23);
    if (uVar22 <= uVar40) {
      puVar2 = (ulong *)0x0;
    }
    uVar30 = (long)puVar7 - (long)puVar3;
    puVar4 = (ulong *)((long)puVar3 + uVar30);
    uVar54 = uVar9;
    if (uVar9 < 9) {
      uVar54 = 8;
    }
    puVar27 = (ulong *)((long)puVar4 - (ulong)uVar54);
    uVar53 = uVar30;
    if (puVar3 <= puVar27) {
      uVar53 = 0;
      uVar28 = (ulong)uVar22;
      puVar5 = (ulong *)(lVar62 + uVar28);
      uVar54 = 0x20 - (uVar15 - uVar8);
      uVar58 = (ulong)uVar54;
      uVar35 = (ulong)(0x40 - (uVar15 - uVar8));
      puVar55 = (ulong *)((long)puVar4 - 7);
      puVar49 = (ulong *)0x0;
      puVar56 = puVar3;
      puVar63 = puVar3;
      do {
        while( true ) {
          if (puVar56 == puVar3) {
            uVar53 = 0;
            pbVar39 = local_148;
            pbVar18 = pbVar26;
            if (uVar9 != 0) {
              do {
                uVar53 = (ulong)*pbVar39 + uVar53 * -0x30e44323485a9b9d + 10;
                pbVar18 = pbVar18 + -1;
                pbVar39 = pbVar39 + 1;
              } while (pbVar18 != (byte *)0x0);
            }
          }
          else {
            uVar53 = (ulong)*(byte *)((long)puVar49 + (long)pbVar26) +
                     (uVar53 - ((ulong)(byte)*puVar49 + 10) * lVar38) * -0x30e44323485a9b9d + 10;
          }
          uVar52 = (uint)uVar53;
          uVar24 = uVar52;
          if (uVar10 <= uVar54) {
            uVar24 = (uint)(uVar53 >> ((ulong)(uVar54 - uVar10) & 0x3f));
          }
          if ((uVar24 | -1 << (ulong)(uVar10 & 0x1f)) != 0xffffffff) break;
          uVar37 = 0;
          if (uVar15 != uVar8) {
            uVar37 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
          }
          uVar24 = *(uint *)(param_3 + 8);
          lVar36 = *(long *)(param_1 + 0x20);
          puVar6 = (uint *)(lVar36 + (uVar37 << ((ulong)uVar24 & 0x3f)) * 8);
          uVar21 = uVar53 >> (uVar58 & 0x3f);
          pbVar18 = (byte *)0x0;
          lVar48 = 0;
          puVar29 = (uint *)0x0;
          pbVar39 = (byte *)0x0;
          puVar34 = puVar6;
          if (uVar40 < uVar22) {
            do {
              if (puVar34[1] == (uint)uVar21) {
                uVar11 = *puVar34;
                uVar45 = (ulong)uVar11;
                if (uVar23 < uVar11) {
                  puVar49 = (ulong *)(lVar47 + uVar28);
                  lVar32 = lVar47;
                  if (uVar22 <= uVar11) {
                    puVar49 = puVar4;
                    lVar32 = lVar62;
                  }
                  puVar31 = (ulong *)(lVar32 + uVar45);
                  puVar44 = (ulong *)((long)puVar56 + ((long)puVar49 - (long)puVar31));
                  if (puVar7 <= puVar44) {
                    puVar44 = puVar4;
                  }
                  if (puVar56 < (ulong *)((long)puVar44 - 7U)) {
                    if (*puVar31 == *puVar56) {
                      lVar64 = 0;
                      puVar41 = (ulong *)(lVar32 + uVar45);
                      puVar59 = puVar56 + 1;
                      do {
                        puVar41 = puVar41 + 1;
                        if ((ulong *)((long)puVar44 - 7U) <= puVar59) {
                          if ((ulong *)((long)puVar44 - 3U) <= puVar59) goto LAB_1006dfa80;
                          goto LAB_1006dfa64;
                        }
                        uVar61 = *puVar59;
                        lVar64 = lVar64 + 8;
                        puVar59 = puVar59 + 1;
                      } while (*puVar41 == uVar61);
                      uVar61 = uVar61 ^ *puVar41;
                      uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar61 & 0x5555555555555555) << 1;
                      uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                               (uVar61 & 0x3333333333333333) << 2;
                      uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar61 & 0xffff0000ffff) << 0x10;
                      pbVar46 = (byte *)(lVar64 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20)
                                                  >> 3));
                    }
                    else {
                      uVar61 = *puVar56 ^ *puVar31;
                      uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar61 & 0x5555555555555555) << 1;
                      uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                               (uVar61 & 0x3333333333333333) << 2;
                      uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar61 & 0xffff0000ffff) << 0x10;
                      pbVar46 = (byte *)((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                    }
                  }
                  else {
                    puVar41 = puVar31;
                    puVar59 = puVar56;
                    if (puVar56 < (ulong *)((long)puVar44 - 3U)) {
LAB_1006dfa64:
                      if ((int)*puVar41 == (int)*puVar59) {
                        puVar41 = (ulong *)((long)puVar41 + 4);
                        puVar59 = (ulong *)((long)puVar59 + 4);
                      }
                    }
LAB_1006dfa80:
                    if (puVar59 < (ulong *)((long)puVar44 - 1U)) {
                      if ((short)*puVar41 == (short)*puVar59) {
                        puVar59 = (ulong *)((long)puVar59 + 2);
                        puVar41 = (ulong *)((long)puVar41 + 2);
                      }
                    }
                    if ((puVar59 < puVar44) && ((byte)*puVar41 == (byte)*puVar59)) {
                      puVar59 = (ulong *)((long)puVar59 + 1);
                    }
                    pbVar46 = (byte *)((long)puVar59 - (long)puVar56);
                  }
                  if ((ulong *)((long)puVar31 + (long)pbVar46) == puVar49) {
                    puVar49 = (ulong *)((long)puVar56 + (long)pbVar46);
                    puVar41 = puVar5;
                    puVar44 = puVar49;
                    if (puVar49 < puVar55) {
                      if (*puVar5 == *puVar49) {
                        lVar64 = 0;
                        puVar41 = (ulong *)(lVar62 + 8 + uVar28);
                        puVar44 = (ulong *)((long)(puVar56 + 1) + (long)pbVar46);
                        do {
                          if (puVar55 <= puVar44) goto joined_r0x0001006dfbb8;
                          uVar51 = *puVar41;
                          uVar61 = *puVar44;
                          lVar64 = lVar64 + 8;
                          puVar41 = puVar41 + 1;
                          puVar44 = puVar44 + 1;
                        } while (uVar51 == uVar61);
                        uVar61 = uVar61 ^ uVar51;
                        uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar61 & 0x5555555555555555) << 1;
                        uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                 (uVar61 & 0x3333333333333333) << 2;
                        uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar61 & 0xff00ff00ff00ff) << 8;
                        uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar61 & 0xffff0000ffff) << 0x10;
                        pbVar46 = pbVar46 + lVar64 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20
                                                                    ) >> 3);
                      }
                      else {
                        uVar61 = *puVar49 ^ *puVar5;
                        uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar61 & 0x5555555555555555) << 1;
                        uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                 (uVar61 & 0x3333333333333333) << 2;
                        uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar61 & 0xff00ff00ff00ff) << 8;
                        uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar61 & 0xffff0000ffff) << 0x10;
                        pbVar46 = pbVar46 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                      }
                    }
                    else {
joined_r0x0001006dfbb8:
                      if (puVar44 < (ulong *)((long)puVar4 - 3U)) {
                        if ((int)*puVar41 == (int)*puVar44) {
                          puVar41 = (ulong *)((long)puVar41 + 4);
                          puVar44 = (ulong *)((long)puVar44 + 4);
                        }
                      }
                      if (puVar44 < (ulong *)((long)puVar4 - 1U)) {
                        if ((short)*puVar41 == (short)*puVar44) {
                          puVar44 = (ulong *)((long)puVar44 + 2);
                          puVar41 = (ulong *)((long)puVar41 + 2);
                        }
                      }
                      if ((puVar44 < puVar7) && ((byte)*puVar41 == (byte)*puVar44)) {
                        puVar44 = (ulong *)((long)puVar44 + 1);
                      }
                      pbVar46 = (byte *)((long)puVar44 + ((long)pbVar46 - (long)puVar49));
                    }
                  }
                  if (pbVar26 <= pbVar46) {
                    lVar64 = 0;
                    puVar49 = puVar2;
                    if (uVar22 <= uVar11) {
                      puVar49 = puVar5;
                    }
                    pbVar50 = pbVar46;
                    if ((puVar63 < puVar56) && (puVar49 < puVar31)) {
                      lVar64 = 0;
                      puVar31 = (ulong *)(lVar32 + uVar45);
                      puVar44 = puVar56;
                      do {
                        puVar44 = (ulong *)((long)puVar44 + -1);
                        puVar31 = (ulong *)((long)puVar31 + -1);
                        if ((*(byte *)puVar44 != *(byte *)puVar31) ||
                           (lVar64 = lVar64 + 1, puVar44 <= puVar63)) break;
                      } while (puVar49 < puVar31);
                      pbVar50 = pbVar46 + lVar64;
                    }
                    if (pbVar39 < pbVar50) {
                      pbVar18 = pbVar46;
                      puVar29 = puVar34;
                      pbVar39 = pbVar50;
                      lVar48 = lVar64;
                    }
                  }
                }
              }
              iVar17 = (int)lVar48;
              puVar34 = puVar34 + 2;
            } while (puVar34 < puVar6 + (1L << ((ulong)uVar8 & 0x3f)) * 2);
          }
          else {
            do {
              if (puVar34[1] == (uint)uVar21) {
                uVar11 = *puVar34;
                uVar45 = (ulong)uVar11;
                if (uVar23 < uVar11) {
                  puVar49 = (ulong *)(lVar62 + uVar45);
                  puVar31 = puVar56;
                  if (puVar56 < puVar55) {
                    if (*puVar49 == *puVar56) {
                      lVar32 = 0;
                      puVar49 = (ulong *)(lVar62 + 8 + uVar45);
                      do {
                        puVar31 = puVar31 + 1;
                        if (puVar55 <= puVar31) goto joined_r0x0001006dfdd4;
                        uVar61 = *puVar49;
                        lVar32 = lVar32 + 8;
                        puVar49 = puVar49 + 1;
                      } while (uVar61 == *puVar31);
                      uVar61 = *puVar31 ^ uVar61;
                      uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar61 & 0x5555555555555555) << 1;
                      uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                               (uVar61 & 0x3333333333333333) << 2;
                      uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar61 & 0xffff0000ffff) << 0x10;
                      pbVar46 = (byte *)(lVar32 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20)
                                                  >> 3));
                    }
                    else {
                      uVar61 = *puVar56 ^ *puVar49;
                      uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar61 & 0x5555555555555555) << 1;
                      uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                               (uVar61 & 0x3333333333333333) << 2;
                      uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar61 & 0xffff0000ffff) << 0x10;
                      pbVar46 = (byte *)((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                    }
                  }
                  else {
joined_r0x0001006dfdd4:
                    if (puVar31 < (ulong *)((long)puVar4 - 3U)) {
                      if ((int)*puVar49 == (int)*puVar31) {
                        puVar49 = (ulong *)((long)puVar49 + 4);
                        puVar31 = (ulong *)((long)puVar31 + 4);
                      }
                    }
                    if (puVar31 < (ulong *)((long)puVar4 - 1U)) {
                      if ((short)*puVar49 == (short)*puVar31) {
                        puVar31 = (ulong *)((long)puVar31 + 2);
                        puVar49 = (ulong *)((long)puVar49 + 2);
                      }
                    }
                    if ((puVar31 < puVar7) && ((byte)*puVar49 == (byte)*puVar31)) {
                      puVar31 = (ulong *)((long)puVar31 + 1);
                    }
                    pbVar46 = (byte *)((long)puVar31 - (long)puVar56);
                  }
                  if (pbVar26 <= pbVar46) {
                    lVar32 = 0;
                    pbVar50 = pbVar46;
                    if ((puVar63 < puVar56) && (uVar22 < uVar11)) {
                      lVar32 = 0;
                      puVar31 = (ulong *)(lVar62 + -1 + uVar45);
                      puVar49 = puVar56;
                      do {
                        puVar49 = (ulong *)((long)puVar49 + -1);
                        if ((*(byte *)puVar49 != (byte)*puVar31) ||
                           (lVar32 = lVar32 + 1, puVar49 <= puVar63)) break;
                        bVar1 = puVar5 < puVar31;
                        puVar31 = (ulong *)((long)puVar31 + -1);
                      } while (bVar1);
                      pbVar50 = pbVar46 + lVar32;
                    }
                    if (pbVar39 < pbVar50) {
                      pbVar18 = pbVar46;
                      puVar29 = puVar34;
                      pbVar39 = pbVar50;
                      lVar48 = lVar32;
                    }
                  }
                }
              }
              iVar17 = (int)lVar48;
              puVar34 = puVar34 + 2;
            } while (puVar34 < puVar6 + (1L << ((ulong)uVar8 & 0x3f)) * 2);
          }
          uVar45 = (long)puVar56 - lVar62;
          if (puVar29 == (uint *)0x0) {
            uVar13 = *(uint *)(param_3 + 0x10);
            uVar14 = -1 << (ulong)(uVar13 & 0x1f);
            uVar11 = (uint)(uVar53 >> ((ulong)(uVar54 - uVar13) & 0x3f)) & (uVar14 ^ 0xffffffff);
            if (uVar54 < uVar13) {
              uVar11 = uVar52 & (uVar14 ^ 0xffffffff);
            }
            if ((uVar11 ^ uVar14) == 0xffffffff) {
              lVar48 = *(long *)(param_1 + 0x28);
              *(ulong *)(puVar6 + (ulong)*(byte *)(lVar48 + uVar37) * 2) =
                   uVar45 & 0xffffffff | uVar21 << 0x20;
              *(byte *)(lVar48 + uVar37) =
                   *(char *)(lVar48 + uVar37) + 1U & ((byte)(-1 << (ulong)(uVar24 & 0x1f)) ^ 0xff);
            }
            puVar31 = (ulong *)((long)puVar56 + 1);
          }
          else {
            lVar48 = param_2[2];
            if (lVar48 == param_2[3]) {
              return 0xffffffffffffffba;
            }
            piVar42 = (int *)(*param_2 + lVar48 * 0xc);
            uVar24 = *puVar29;
            piVar42[1] = ((int)puVar56 - iVar17) - (int)puVar63;
            piVar42[2] = (int)pbVar18 + iVar17;
            *piVar42 = (int)uVar45 - uVar24;
            param_2[2] = lVar48 + 1;
            uVar11 = *(uint *)(param_3 + 0x10);
            uVar13 = -1 << (ulong)(uVar11 & 0x1f);
            uVar24 = (uint)(uVar53 >> ((ulong)(uVar54 - uVar11) & 0x3f)) & (uVar13 ^ 0xffffffff);
            if (uVar54 < uVar11) {
              uVar24 = uVar52 & (uVar13 ^ 0xffffffff);
            }
            if ((uVar24 ^ uVar13) == 0xffffffff) {
              uVar24 = *(uint *)(param_3 + 8);
              lVar48 = *(long *)(param_1 + 0x28);
              *(ulong *)(lVar36 + (uVar37 << ((ulong)uVar24 & 0x3f)) * 8 +
                        (ulong)*(byte *)(lVar48 + uVar37) * 8) =
                   uVar45 & 0xffffffff | uVar21 << 0x20;
              *(byte *)(lVar48 + uVar37) =
                   *(char *)(lVar48 + uVar37) + 1U & ((byte)(-1 << (ulong)(uVar24 & 0x1f)) ^ 0xff);
            }
            if (puVar27 < (ulong *)((long)puVar56 + (long)pbVar18)) {
              puVar31 = (ulong *)((long)puVar56 + (long)pbVar18);
              puVar63 = puVar31;
            }
            else {
              puVar31 = (ulong *)((long)puVar56 + (long)pbVar18);
              if (1 < (long)pbVar18) {
                uVar52 = *(uint *)(param_3 + 0x10);
                uVar37 = (ulong)*(uint *)(param_3 + 8);
                uVar21 = (ulong)(*(int *)(param_3 + 0xc) - 1);
                uVar24 = 0;
                if (uVar52 <= uVar54) {
                  uVar24 = uVar54 - uVar52;
                }
                uVar61 = (ulong)uVar24;
                uVar24 = -1 << (ulong)(uVar52 & 0x1f);
                bVar16 = ~(byte)(-1 << (ulong)(*(uint *)(param_3 + 8) & 0x1f));
                uVar52 = (int)pbVar18 - 1;
                uVar45 = (ulong)uVar52 & 7;
                if ((uVar52 & 7) != 0) {
                  pbVar39 = (byte *)((1 - lVar62) + (long)puVar56);
                  do {
                    uVar53 = (ulong)*(byte *)((long)puVar56 + uVar21 + 1) +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)(byte)*puVar56 + 10)) *
                             -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar51 = 0;
                      if (uVar15 != uVar8) {
                        uVar51 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar48 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar51 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar48 + uVar51) * 8) =
                           (ulong)pbVar39 & 0xffffffff | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar48 + uVar51) = *(char *)(lVar48 + uVar51) + 1U & bVar16;
                    }
                    puVar56 = (ulong *)((long)puVar56 + 1);
                    pbVar39 = pbVar39 + 1;
                    uVar45 = uVar45 - 1;
                  } while (uVar45 != 0);
                }
                pbVar39 = (byte *)((long)puVar56 + 1);
                if ((byte *)0x6 < pbVar18 + -2) {
                  lVar48 = 0;
                  iVar17 = (int)pbVar39 - (int)lVar62;
                  do {
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)(byte)*puVar56 + 10)) *
                             -0x30e44323485a9b9d + 10;
                    iVar19 = (int)lVar48;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(uint)(iVar17 + iVar19) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    pbVar18 = pbVar39 + lVar48;
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 1] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)*pbVar18 + 10)) *
                             -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 1) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 2] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)pbVar18[1] + 10)) *
                             -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 2) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 3] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)pbVar18[2] + 10)) *
                             -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 3) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 4] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)pbVar39[lVar48 + 3] + 10)
                             ) * -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 4) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 5] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)pbVar39[lVar48 + 4] + 10)
                             ) * -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 5) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 6] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)pbVar39[lVar48 + 5] + 10)
                             ) * -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 6) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    uVar53 = (ulong)pbVar39[lVar48 + uVar21 + 7] +
                             (uVar53 - *(long *)(param_1 + 0x30) * ((ulong)pbVar39[lVar48 + 6] + 10)
                             ) * -0x30e44323485a9b9d + 10;
                    if ((uVar24 | (uint)(uVar53 >> (uVar61 & 0x3f))) == 0xffffffff) {
                      uVar45 = 0;
                      if (uVar15 != uVar8) {
                        uVar45 = uVar53 >> (uVar35 & 0x3f) & 0xffffffff;
                      }
                      lVar36 = *(long *)(param_1 + 0x28);
                      *(ulong *)(*(long *)(param_1 + 0x20) + (uVar45 << (uVar37 & 0x3f)) * 8 +
                                (ulong)*(byte *)(lVar36 + uVar45) * 8) =
                           (ulong)(iVar17 + iVar19 + 7) | (uVar53 >> (uVar58 & 0x3f)) << 0x20;
                      *(byte *)(lVar36 + uVar45) = *(char *)(lVar36 + uVar45) + 1U & bVar16;
                    }
                    puVar56 = (ulong *)(pbVar39 + lVar48 + 7);
                    lVar48 = lVar48 + 8;
                  } while ((ulong *)(pbVar39 + lVar48) != puVar31);
                }
              }
              puVar56 = (ulong *)((long)puVar31 + -1);
              puVar63 = puVar31;
            }
          }
          puVar49 = puVar56;
          puVar56 = puVar31;
          if (puVar27 < puVar31) goto LAB_1006e0540;
        }
        puVar31 = (ulong *)((long)puVar56 + 1);
        puVar49 = puVar56;
        puVar56 = puVar31;
      } while (puVar31 <= puVar27);
LAB_1006e0540:
      uVar53 = (long)puVar7 - (long)puVar63;
    }
    if (0xffffffffffffff88 < uVar53) {
      return uVar53;
    }
    uVar28 = param_2[2];
    if (uVar60 < uVar28) {
      lVar62 = *param_2 + uVar60 * 0xc;
      *(int *)(lVar62 + 4) = *(int *)(lVar62 + 4) + (int)uVar57;
    }
    else {
      uVar53 = uVar30 + uVar57;
    }
    uVar20 = uVar20 + 1;
    local_148 = local_148 + 0x100000;
    uVar57 = uVar53;
    uVar60 = uVar28;
    if (uVar20 == uVar25) {
      return 0;
    }
  } while( true );
}

