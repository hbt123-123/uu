// rea decompile_all
// name: FUN_1006d9504
// address: 0x1006d9504
// body: available
// range: 0x1006d9504-0x1006dcb33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d9504(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  uint uVar31;
  ulong *puVar32;
  ulong *puVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong uVar37;
  long lVar38;
  ulong *puVar39;
  undefined8 *puVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  uint uVar45;
  uint uVar46;
  int *piVar47;
  int *piVar48;
  ulong *puVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  uint local_e8;
  ulong *local_e0;
  ulong local_c0;
  ulong *local_78;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar22 = puVar1 + -1;
  lVar18 = *(long *)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar19 = (ulong)uVar7;
  uVar46 = *param_3;
  local_e8 = param_3[1];
  puVar2 = (ulong *)(lVar18 + uVar19);
  local_78 = param_4;
  if (puVar2 == param_4) {
    local_78 = (ulong *)((long)param_4 + 1);
  }
  if (local_78 < puVar22) {
    lVar23 = *(long *)(param_1 + 0x10);
    puVar3 = (ulong *)(lVar23 + uVar19);
    uVar8 = *(uint *)(param_1 + 0x1c);
    iVar12 = uVar7 - 1;
    puVar24 = (ulong *)((long)puVar1 - 7);
    puVar29 = (ulong *)((long)puVar1 - 3);
    puVar25 = (ulong *)((long)puVar1 - 1);
    puVar26 = puVar1 + -4;
    do {
      iVar15 = (int)local_78 - (int)lVar18;
      uVar31 = (iVar15 - uVar46) + 1;
      lVar38 = lVar23;
      if (uVar7 <= uVar31) {
        lVar38 = lVar18;
      }
      if ((uVar8 < uVar31 && 2 < iVar12 - uVar31) &&
         (*(int *)((long)local_78 + 1U) == *(int *)(lVar38 + (ulong)uVar31))) {
        puVar28 = puVar3;
        if (uVar7 <= uVar31) {
          puVar28 = puVar1;
        }
        lVar44 = (long)local_78 + 5;
        FUN_1006c7460(lVar44,(int *)(lVar38 + (ulong)uVar31) + 1,puVar1,puVar28,puVar2);
        local_e0 = (ulong *)(lVar44 + 4);
      }
      else {
        local_e0 = (ulong *)0x0;
      }
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar27 = *(long *)(param_1 + 0x40);
        uVar45 = *(uint *)(param_1 + 0xbc);
        uVar9 = 1 << (ulong)(uVar45 & 0x1f);
        lVar38 = *(long *)(param_1 + 8);
        lVar44 = *(long *)(param_1 + 0x10);
        uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar5 = *(uint *)(param_1 + 0x18);
        uVar35 = (ulong)uVar5;
        uVar17 = (uint)((long)local_78 - lVar38);
        uVar37 = (ulong)*(uint *)(param_1 + 0x24);
        uVar31 = uVar17 - uVar10;
        if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
          uVar31 = *(uint *)(param_1 + 0x1c);
        }
        uVar10 = 0;
        if (uVar9 <= uVar17) {
          uVar10 = uVar17 - uVar9;
        }
        uVar6 = *(uint *)(param_1 + 0xc4);
        lVar41 = *(long *)(param_1 + 0x30);
        uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
        if (*(uint *)(param_1 + 0x24) < uVar17) {
          do {
            uVar20 = (ulong)(*(long *)(lVar38 + uVar37) * -0x30e4432340650000) >> (uVar16 & 0x3f);
            *(undefined4 *)(lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                 *(undefined4 *)(lVar41 + uVar20 * 4);
            *(uint *)(lVar41 + uVar20 * 4) = (uint)uVar37;
            uVar37 = uVar37 + 1;
          } while (((long)local_78 - lVar38 & 0xffffffffU) != uVar37);
        }
        *(uint *)(param_1 + 0x24) = uVar17;
        uVar37 = *local_78;
        uVar45 = *(uint *)(lVar41 + (uVar37 * -0x30e4432340650000 >> (uVar16 & 0x3f)) * 4);
        if (uVar31 < uVar45) {
          iVar14 = 1 << (ulong)(uVar6 & 0x1f);
          puVar28 = (ulong *)((long)local_78 + 4);
          piVar47 = (int *)0x3;
          local_c0 = 999999999;
          do {
            uVar16 = (ulong)uVar45;
            if (uVar45 < uVar5) {
              if (*(int *)(lVar44 + uVar16) == (int)*local_78) {
                puVar33 = (ulong *)((int *)(lVar44 + uVar16) + 1);
                puVar30 = (ulong *)((long)puVar28 + ((lVar44 + uVar35) - (long)puVar33));
                if (puVar1 <= puVar30) {
                  puVar30 = puVar1;
                }
                puVar32 = puVar28;
                puVar36 = puVar33;
                if (puVar28 < (ulong *)((long)puVar30 - 7U)) {
                  if (*puVar33 == *puVar28) {
                    lVar41 = 0;
                    puVar32 = (ulong *)((long)local_78 + 0xc);
                    puVar36 = (ulong *)(lVar44 + 0xc + uVar16);
                    do {
                      if ((ulong *)((long)puVar30 - 7U) <= puVar32) goto LAB_1006d9940;
                      uVar20 = *puVar36;
                      uVar16 = *puVar32;
                      lVar41 = lVar41 + 8;
                      puVar32 = puVar32 + 1;
                      puVar36 = puVar36 + 1;
                    } while (uVar20 == uVar16);
                    uVar16 = uVar16 ^ uVar20;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = lVar41 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
                  }
                  else {
                    uVar16 = *puVar28 ^ *puVar33;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006d9940:
                  if (puVar32 < (ulong *)((long)puVar30 - 3U)) {
                    if ((int)*puVar36 == (int)*puVar32) {
                      puVar32 = (ulong *)((long)puVar32 + 4);
                      puVar36 = (ulong *)((long)puVar36 + 4);
                    }
                    if (puVar32 < (ulong *)((long)puVar30 - 1U)) {
LAB_1006d99b4:
                      if ((short)*puVar36 == (short)*puVar32) {
                        puVar32 = (ulong *)((long)puVar32 + 2);
                        puVar36 = (ulong *)((long)puVar36 + 2);
                      }
                    }
                  }
                  else if (puVar32 < (ulong *)((long)puVar30 - 1U)) goto LAB_1006d99b4;
                  if ((puVar32 < puVar30) && ((char)*puVar36 == (char)*puVar32)) {
                    puVar32 = (ulong *)((long)puVar32 + 1);
                  }
                  uVar16 = (long)puVar32 - (long)puVar28;
                }
                if ((long)puVar33 + uVar16 == lVar44 + uVar35) {
                  puVar33 = (ulong *)((long)puVar28 + uVar16);
                  puVar30 = puVar33;
                  puVar32 = (ulong *)(lVar38 + uVar35);
                  if (puVar33 < puVar24) {
                    uVar20 = *(ulong *)(lVar38 + uVar35);
                    if (uVar20 == *puVar33) {
                      lVar41 = 0;
                      puVar30 = (ulong *)((long)local_78 + 0xc + uVar16);
                      puVar32 = (ulong *)(lVar38 + 8 + uVar35);
                      do {
                        if (puVar24 <= puVar30) goto LAB_1006d9b40;
                        uVar42 = *puVar32;
                        uVar20 = *puVar30;
                        lVar41 = lVar41 + 8;
                        puVar30 = puVar30 + 1;
                        puVar32 = puVar32 + 1;
                      } while (uVar42 == uVar20);
                      uVar20 = uVar20 ^ uVar42;
                      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar20 & 0x5555555555555555) << 1;
                      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                               (uVar20 & 0x3333333333333333) << 2;
                      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar20 & 0xffff0000ffff) << 0x10;
                      uVar16 = lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) +
                               uVar16;
                      goto joined_r0x0001006d9b10;
                    }
                    uVar20 = *puVar33 ^ uVar20;
                    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1
                    ;
                    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2
                    ;
                    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar20 & 0xffff0000ffff) << 0x10;
                    piVar48 = (int *)(((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) +
                                      uVar16 + 4);
                  }
                  else {
LAB_1006d9b40:
                    if (puVar30 < puVar29) {
                      if ((int)*puVar32 == (int)*puVar30) {
                        puVar30 = (ulong *)((long)puVar30 + 4);
                        puVar32 = (ulong *)((long)puVar32 + 4);
                      }
                    }
                    if (puVar30 < puVar25) {
                      if (*(short *)puVar32 == *(short *)puVar30) {
                        puVar30 = (ulong *)((long)puVar30 + 2);
                        puVar32 = (ulong *)((long)puVar32 + 2);
                      }
                    }
                    if ((puVar30 < puVar1) && ((char)*puVar32 == (char)*puVar30)) {
                      puVar30 = (ulong *)((long)puVar30 + 1);
                    }
                    piVar48 = (int *)((long)puVar30 + (uVar16 - (long)puVar33) + 4);
                  }
                }
                else {
joined_r0x0001006d9b10:
                  piVar48 = (int *)(uVar16 + 4);
                }
joined_r0x0001006d9a44:
                if ((piVar47 < piVar48) &&
                   (local_c0 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
                   (ulong *)((long)local_78 + (long)piVar48) == puVar1)) goto LAB_1006da210;
              }
            }
            else {
              puVar33 = (ulong *)(lVar38 + uVar16);
              if (*(char *)((long)puVar33 + (long)piVar47) ==
                  *(char *)((long)local_78 + (long)piVar47)) {
                puVar30 = local_78;
                if (local_78 < puVar24) {
                  if (*puVar33 == uVar37) {
                    lVar41 = 0;
                    puVar33 = (ulong *)(lVar38 + 8 + uVar16);
                    do {
                      puVar30 = puVar30 + 1;
                      if (puVar24 <= puVar30) goto LAB_1006d99e0;
                      uVar16 = *puVar33;
                      lVar41 = lVar41 + 8;
                      puVar33 = puVar33 + 1;
                    } while (uVar16 == *puVar30);
                    uVar16 = *puVar30 ^ uVar16;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3
                                               ));
                  }
                  else {
                    uVar16 = *puVar33 ^ uVar37;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    piVar48 = (int *)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
                  }
                }
                else {
LAB_1006d99e0:
                  if (puVar30 < puVar29) {
                    if ((int)*puVar33 == (int)*puVar30) {
                      puVar33 = (ulong *)((long)puVar33 + 4);
                      puVar30 = (ulong *)((long)puVar30 + 4);
                    }
                  }
                  if (puVar30 < puVar25) {
                    if (*(short *)puVar33 == *(short *)puVar30) {
                      puVar33 = (ulong *)((long)puVar33 + 2);
                      puVar30 = (ulong *)((long)puVar30 + 2);
                    }
                  }
                  if ((puVar30 < puVar1) && ((char)*puVar33 == (char)*puVar30)) {
                    puVar30 = (ulong *)((long)puVar30 + 1);
                  }
                  piVar48 = (int *)((long)puVar30 - (long)local_78);
                }
                goto joined_r0x0001006d9a44;
              }
            }
            if ((uVar45 <= uVar10) ||
               ((iVar14 = iVar14 + -1, iVar14 == 0 ||
                (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4), uVar45 <= uVar31))))
            goto LAB_1006da210;
          } while( true );
        }
LAB_1006da1e4:
        local_c0 = 999999999;
        piVar47 = (int *)0x3;
        puVar28 = (ulong *)(int *)0x3;
        if ((int *)0x2 < local_e0) {
          puVar28 = local_e0;
        }
joined_r0x0001006dc5e0:
        if (puVar28 < (int *)0x4) goto LAB_1006d95ec;
LAB_1006da224:
        puVar33 = local_78;
        if (piVar47 <= local_e0) {
          local_c0 = 0;
          puVar33 = (ulong *)((long)local_78 + 1U);
        }
        local_e0 = puVar33;
        if (local_78 < puVar22) {
LAB_1006da268:
          puVar33 = (ulong *)((long)local_78 + 1);
          iVar14 = iVar15 + 1;
          if (local_c0 == 0) {
LAB_1006da348:
            iVar21 = *(int *)(param_1 + 200);
            if (1 < iVar21 - 6U) goto LAB_1006da8ac;
LAB_1006da360:
            lVar27 = *(long *)(param_1 + 0x40);
            uVar45 = *(uint *)(param_1 + 0xbc);
            uVar9 = 1 << (ulong)(uVar45 & 0x1f);
            lVar38 = *(long *)(param_1 + 8);
            lVar44 = *(long *)(param_1 + 0x10);
            uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar5 = *(uint *)(param_1 + 0x18);
            uVar35 = (ulong)uVar5;
            uVar17 = (uint)((long)puVar33 - lVar38);
            uVar37 = (ulong)*(uint *)(param_1 + 0x24);
            uVar31 = uVar17 - uVar10;
            if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
              uVar31 = *(uint *)(param_1 + 0x1c);
            }
            uVar10 = 0;
            if (uVar9 <= uVar17) {
              uVar10 = uVar17 - uVar9;
            }
            uVar6 = *(uint *)(param_1 + 0xc4);
            lVar41 = *(long *)(param_1 + 0x30);
            uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
            if (*(uint *)(param_1 + 0x24) < uVar17) {
              do {
                uVar20 = (ulong)(*(long *)(lVar38 + uVar37) * -0x30e4432340650000) >>
                         (uVar16 & 0x3f);
                *(undefined4 *)
                 (lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                     *(undefined4 *)(lVar41 + uVar20 * 4);
                *(uint *)(lVar41 + uVar20 * 4) = (uint)uVar37;
                uVar37 = uVar37 + 1;
              } while (((long)puVar33 - lVar38 & 0xffffffffU) != uVar37);
            }
            *(uint *)(param_1 + 0x24) = uVar17;
            uVar37 = *puVar33;
            uVar45 = *(uint *)(lVar41 + (uVar37 * -0x30e4432340650000 >> (uVar16 & 0x3f)) * 4);
            if (uVar31 < uVar45) {
              iVar21 = 1 << (ulong)(uVar6 & 0x1f);
              puVar30 = (ulong *)((long)local_78 + 5);
              uVar16 = 999999999;
              piVar47 = (int *)0x3;
              do {
                uVar20 = (ulong)uVar45;
                if (uVar45 < uVar5) {
                  if (*(int *)(lVar44 + uVar20) == *(int *)puVar33) {
                    puVar32 = (ulong *)((int *)(lVar44 + uVar20) + 1);
                    puVar36 = (ulong *)((long)puVar30 + ((lVar44 + uVar35) - (long)puVar32));
                    if (puVar1 <= puVar36) {
                      puVar36 = puVar1;
                    }
                    if (puVar30 < (ulong *)((long)puVar36 - 7U)) {
                      if (*puVar32 == *puVar30) {
                        lVar41 = 0;
                        puVar39 = (ulong *)((long)local_78 + 0xd);
                        puVar49 = (ulong *)(lVar44 + 0xc + uVar20);
                        do {
                          if ((ulong *)((long)puVar36 - 7U) <= puVar39) {
                            if (puVar39 < (ulong *)((long)puVar36 - 3U)) goto LAB_1006da598;
                            goto LAB_1006da5b4;
                          }
                          uVar42 = *puVar49;
                          uVar20 = *puVar39;
                          lVar41 = lVar41 + 8;
                          puVar39 = puVar39 + 1;
                          puVar49 = puVar49 + 1;
                        } while (uVar42 == uVar20);
                        uVar20 = uVar20 ^ uVar42;
                        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar20 & 0x5555555555555555) << 1;
                        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                 (uVar20 & 0x3333333333333333) << 2;
                        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar20 & 0xff00ff00ff00ff) << 8;
                        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar20 & 0xffff0000ffff) << 0x10;
                        uVar20 = lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                      }
                      else {
                        uVar20 = *puVar30 ^ *puVar32;
                        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar20 & 0x5555555555555555) << 1;
                        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                 (uVar20 & 0x3333333333333333) << 2;
                        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar20 & 0xff00ff00ff00ff) << 8;
                        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar20 & 0xffff0000ffff) << 0x10;
                        uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
                      }
                    }
                    else {
                      puVar39 = puVar30;
                      puVar49 = puVar32;
                      if (puVar30 < (ulong *)((long)puVar36 - 3U)) {
LAB_1006da598:
                        if ((int)*puVar49 == (int)*puVar39) {
                          puVar39 = (ulong *)((long)puVar39 + 4);
                          puVar49 = (ulong *)((long)puVar49 + 4);
                        }
                      }
LAB_1006da5b4:
                      if (puVar39 < (ulong *)((long)puVar36 - 1U)) {
                        if ((short)*puVar49 == (short)*puVar39) {
                          puVar39 = (ulong *)((long)puVar39 + 2);
                          puVar49 = (ulong *)((long)puVar49 + 2);
                        }
                      }
                      if ((puVar39 < puVar36) && ((char)*puVar49 == (char)*puVar39)) {
                        puVar39 = (ulong *)((long)puVar39 + 1);
                      }
                      uVar20 = (long)puVar39 - (long)puVar30;
                    }
                    if ((long)puVar32 + uVar20 == lVar44 + uVar35) {
                      puVar32 = (ulong *)((long)puVar30 + uVar20);
                      puVar36 = puVar32;
                      puVar39 = (ulong *)(lVar38 + uVar35);
                      if (puVar32 < puVar24) {
                        uVar42 = *(ulong *)(lVar38 + uVar35);
                        if (uVar42 == *puVar32) {
                          lVar41 = 0;
                          puVar36 = (ulong *)((long)local_78 + 0xd + uVar20);
                          puVar39 = (ulong *)(lVar38 + 8 + uVar35);
                          do {
                            if (puVar24 <= puVar36) goto LAB_1006da75c;
                            uVar43 = *puVar39;
                            uVar42 = *puVar36;
                            lVar41 = lVar41 + 8;
                            puVar36 = puVar36 + 1;
                            puVar39 = puVar39 + 1;
                          } while (uVar43 == uVar42);
                          uVar42 = uVar42 ^ uVar43;
                          uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar42 & 0x5555555555555555) << 1;
                          uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                   (uVar42 & 0x3333333333333333) << 2;
                          uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar42 & 0xff00ff00ff00ff) << 8;
                          uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar42 & 0xffff0000ffff) << 0x10;
                          piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20
                                                                    ) >> 3) + uVar20 + 4);
                        }
                        else {
                          uVar42 = *puVar32 ^ uVar42;
                          uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar42 & 0x5555555555555555) << 1;
                          uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                   (uVar42 & 0x3333333333333333) << 2;
                          uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar42 & 0xff00ff00ff00ff) << 8;
                          uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar42 & 0xffff0000ffff) << 0x10;
                          piVar48 = (int *)(((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3) +
                                            uVar20 + 4);
                        }
                      }
                      else {
LAB_1006da75c:
                        if (puVar36 < puVar29) {
                          if ((int)*puVar39 == (int)*puVar36) {
                            puVar36 = (ulong *)((long)puVar36 + 4);
                            puVar39 = (ulong *)((long)puVar39 + 4);
                          }
                        }
                        if (puVar36 < puVar25) {
                          if (*(short *)puVar39 == *(short *)puVar36) {
                            puVar36 = (ulong *)((long)puVar36 + 2);
                            puVar39 = (ulong *)((long)puVar39 + 2);
                          }
                        }
                        if ((puVar36 < puVar1) && ((char)*puVar39 == (char)*puVar36)) {
                          puVar36 = (ulong *)((long)puVar36 + 1);
                        }
                        piVar48 = (int *)((long)puVar36 + (uVar20 - (long)puVar32) + 4);
                      }
                    }
                    else {
                      piVar48 = (int *)(uVar20 + 4);
                    }
joined_r0x0001006da69c:
                    if ((piVar47 < piVar48) &&
                       (uVar16 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
                       (ulong *)((long)puVar33 + (long)piVar48) == puVar1)) goto LAB_1006db2f0;
                  }
                }
                else {
                  puVar32 = (ulong *)(lVar38 + uVar20);
                  if (*(char *)((long)puVar32 + (long)piVar47) ==
                      *(char *)((long)puVar33 + (long)piVar47)) {
                    puVar36 = puVar33;
                    if (puVar33 < puVar24) {
                      if (*puVar32 == uVar37) {
                        lVar41 = 0;
                        puVar32 = (ulong *)(lVar38 + 8 + uVar20);
                        puVar36 = (ulong *)((long)local_78 + 9);
                        do {
                          if (puVar24 <= puVar36) goto joined_r0x0001006da624;
                          uVar20 = *puVar32;
                          uVar42 = *puVar36;
                          lVar41 = lVar41 + 8;
                          puVar32 = puVar32 + 1;
                          puVar36 = puVar36 + 1;
                        } while (uVar20 == uVar42);
                        uVar42 = uVar42 ^ uVar20;
                        uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar42 & 0x5555555555555555) << 1;
                        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                 (uVar20 & 0x3333333333333333) << 2;
                        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar20 & 0xff00ff00ff00ff) << 8;
                        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar20 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20)
                                                   >> 3));
                      }
                      else {
                        uVar20 = *puVar32 ^ uVar37;
                        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar20 & 0x5555555555555555) << 1;
                        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                 (uVar20 & 0x3333333333333333) << 2;
                        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar20 & 0xff00ff00ff00ff) << 8;
                        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar20 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                      }
                    }
                    else {
joined_r0x0001006da624:
                      if (puVar36 < puVar29) {
                        if ((int)*puVar32 == (int)*puVar36) {
                          puVar32 = (ulong *)((long)puVar32 + 4);
                          puVar36 = (ulong *)((long)puVar36 + 4);
                        }
                      }
                      if (puVar36 < puVar25) {
                        if ((short)*puVar32 == (short)*puVar36) {
                          puVar32 = (ulong *)((long)puVar32 + 2);
                          puVar36 = (ulong *)((long)puVar36 + 2);
                        }
                      }
                      if ((puVar36 < puVar1) && ((char)*puVar32 == (char)*puVar36)) {
                        puVar36 = (ulong *)((long)puVar36 + 1);
                      }
                      piVar48 = (int *)((long)puVar36 - (long)puVar33);
                    }
                    goto joined_r0x0001006da69c;
                  }
                }
                piVar48 = piVar47;
                if ((uVar45 <= uVar10) ||
                   ((iVar21 = iVar21 + -1, iVar21 == 0 ||
                    (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4), piVar47 = piVar48
                    , uVar45 <= uVar31)))) goto LAB_1006db2f0;
              } while( true );
            }
          }
          else {
            uVar31 = iVar14 - uVar46;
            lVar38 = lVar23;
            if (uVar7 <= uVar31) {
              lVar38 = lVar18;
            }
            if (((uVar31 <= uVar8) || (iVar12 - uVar31 < 3)) ||
               (*(int *)puVar33 != *(int *)(lVar38 + (ulong)uVar31))) goto LAB_1006da348;
            puVar30 = puVar3;
            if (uVar7 <= uVar31) {
              puVar30 = puVar1;
            }
            uVar37 = (long)local_78 + 5;
            FUN_1006c7460(uVar37,(int *)(lVar38 + (ulong)uVar31) + 1,puVar1,puVar30,puVar2);
            if (uVar37 < 0xfffffffffffffffc) {
              if ((int)((int)puVar28 * 3 + ((uint)LZCOUNT((int)local_c0 + 1) ^ 0xffffffe0) + 2) <
                  (int)(int *)(uVar37 + 4) * 3) {
                local_c0 = 0;
                puVar28 = (ulong *)(uVar37 + 4);
                local_e0 = puVar33;
              }
              goto LAB_1006da348;
            }
            iVar21 = *(int *)(param_1 + 200);
            if (iVar21 - 6U < 2) goto LAB_1006da360;
LAB_1006da8ac:
            if (iVar21 == 5) {
              lVar27 = *(long *)(param_1 + 0x40);
              uVar45 = *(uint *)(param_1 + 0xbc);
              uVar9 = 1 << (ulong)(uVar45 & 0x1f);
              lVar38 = *(long *)(param_1 + 8);
              lVar44 = *(long *)(param_1 + 0x10);
              uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
              uVar5 = *(uint *)(param_1 + 0x18);
              uVar35 = (ulong)uVar5;
              uVar17 = (uint)((long)puVar33 - lVar38);
              uVar37 = (ulong)*(uint *)(param_1 + 0x24);
              uVar31 = uVar17 - uVar10;
              if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
                uVar31 = *(uint *)(param_1 + 0x1c);
              }
              uVar10 = 0;
              if (uVar9 <= uVar17) {
                uVar10 = uVar17 - uVar9;
              }
              uVar6 = *(uint *)(param_1 + 0xc4);
              lVar41 = *(long *)(param_1 + 0x30);
              uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
              if (*(uint *)(param_1 + 0x24) < uVar17) {
                do {
                  uVar20 = (ulong)(*(long *)(lVar38 + uVar37) * -0x30e4432345000000) >>
                           (uVar16 & 0x3f);
                  *(undefined4 *)
                   (lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                       *(undefined4 *)(lVar41 + uVar20 * 4);
                  *(uint *)(lVar41 + uVar20 * 4) = (uint)uVar37;
                  uVar37 = uVar37 + 1;
                } while (((long)puVar33 - lVar38 & 0xffffffffU) != uVar37);
              }
              *(uint *)(param_1 + 0x24) = uVar17;
              uVar37 = *puVar33;
              uVar45 = *(uint *)(lVar41 + (uVar37 * -0x30e4432345000000 >> (uVar16 & 0x3f)) * 4);
              if (uVar31 < uVar45) {
                iVar21 = 1 << (ulong)(uVar6 & 0x1f);
                puVar30 = (ulong *)((long)local_78 + 5);
                uVar16 = 999999999;
                piVar47 = (int *)0x3;
                do {
                  uVar20 = (ulong)uVar45;
                  if (uVar45 < uVar5) {
                    if (*(int *)(lVar44 + uVar20) == *(int *)puVar33) {
                      puVar32 = (ulong *)((int *)(lVar44 + uVar20) + 1);
                      puVar36 = (ulong *)((long)puVar30 + ((lVar44 + uVar35) - (long)puVar32));
                      if (puVar1 <= puVar36) {
                        puVar36 = puVar1;
                      }
                      if (puVar30 < (ulong *)((long)puVar36 - 7U)) {
                        if (*puVar32 == *puVar30) {
                          lVar41 = 0;
                          puVar39 = (ulong *)((long)local_78 + 0xd);
                          puVar49 = (ulong *)(lVar44 + 0xc + uVar20);
                          do {
                            if ((ulong *)((long)puVar36 - 7U) <= puVar39) {
                              if (puVar39 < (ulong *)((long)puVar36 - 3U)) goto LAB_1006daaf4;
                              goto LAB_1006dab10;
                            }
                            uVar42 = *puVar49;
                            uVar20 = *puVar39;
                            lVar41 = lVar41 + 8;
                            puVar39 = puVar39 + 1;
                            puVar49 = puVar49 + 1;
                          } while (uVar42 == uVar20);
                          uVar20 = uVar20 ^ uVar42;
                          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar20 & 0x5555555555555555) << 1;
                          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                   (uVar20 & 0x3333333333333333) << 2;
                          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar20 & 0xff00ff00ff00ff) << 8;
                          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar20 & 0xffff0000ffff) << 0x10;
                          uVar20 = lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                        }
                        else {
                          uVar20 = *puVar30 ^ *puVar32;
                          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar20 & 0x5555555555555555) << 1;
                          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                   (uVar20 & 0x3333333333333333) << 2;
                          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar20 & 0xff00ff00ff00ff) << 8;
                          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar20 & 0xffff0000ffff) << 0x10;
                          uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
                        }
                      }
                      else {
                        puVar39 = puVar30;
                        puVar49 = puVar32;
                        if (puVar30 < (ulong *)((long)puVar36 - 3U)) {
LAB_1006daaf4:
                          if ((int)*puVar49 == (int)*puVar39) {
                            puVar39 = (ulong *)((long)puVar39 + 4);
                            puVar49 = (ulong *)((long)puVar49 + 4);
                          }
                        }
LAB_1006dab10:
                        if (puVar39 < (ulong *)((long)puVar36 - 1U)) {
                          if ((short)*puVar49 == (short)*puVar39) {
                            puVar39 = (ulong *)((long)puVar39 + 2);
                            puVar49 = (ulong *)((long)puVar49 + 2);
                          }
                        }
                        if ((puVar39 < puVar36) && ((char)*puVar49 == (char)*puVar39)) {
                          puVar39 = (ulong *)((long)puVar39 + 1);
                        }
                        uVar20 = (long)puVar39 - (long)puVar30;
                      }
                      if ((long)puVar32 + uVar20 == lVar44 + uVar35) {
                        puVar32 = (ulong *)((long)puVar30 + uVar20);
                        puVar36 = puVar32;
                        puVar39 = (ulong *)(lVar38 + uVar35);
                        if (puVar32 < puVar24) {
                          uVar42 = *(ulong *)(lVar38 + uVar35);
                          if (uVar42 == *puVar32) {
                            lVar41 = 0;
                            puVar36 = (ulong *)((long)local_78 + 0xd + uVar20);
                            puVar39 = (ulong *)(lVar38 + 8 + uVar35);
                            do {
                              if (puVar24 <= puVar36) goto LAB_1006dacb8;
                              uVar43 = *puVar39;
                              uVar42 = *puVar36;
                              lVar41 = lVar41 + 8;
                              puVar36 = puVar36 + 1;
                              puVar39 = puVar39 + 1;
                            } while (uVar43 == uVar42);
                            uVar42 = uVar42 ^ uVar43;
                            uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar42 & 0x5555555555555555) << 1;
                            uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                     (uVar42 & 0x3333333333333333) << 2;
                            uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar42 & 0xff00ff00ff00ff) << 8;
                            uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar42 & 0xffff0000ffff) << 0x10;
                            piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar42 >> 0x20 |
                                                                       uVar42 << 0x20) >> 3) +
                                              uVar20 + 4);
                          }
                          else {
                            uVar42 = *puVar32 ^ uVar42;
                            uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar42 & 0x5555555555555555) << 1;
                            uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                     (uVar42 & 0x3333333333333333) << 2;
                            uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar42 & 0xff00ff00ff00ff) << 8;
                            uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar42 & 0xffff0000ffff) << 0x10;
                            piVar48 = (int *)(((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3)
                                              + uVar20 + 4);
                          }
                        }
                        else {
LAB_1006dacb8:
                          if (puVar36 < puVar29) {
                            if ((int)*puVar39 == (int)*puVar36) {
                              puVar36 = (ulong *)((long)puVar36 + 4);
                              puVar39 = (ulong *)((long)puVar39 + 4);
                            }
                          }
                          if (puVar36 < puVar25) {
                            if (*(short *)puVar39 == *(short *)puVar36) {
                              puVar36 = (ulong *)((long)puVar36 + 2);
                              puVar39 = (ulong *)((long)puVar39 + 2);
                            }
                          }
                          if ((puVar36 < puVar1) && ((char)*puVar39 == (char)*puVar36)) {
                            puVar36 = (ulong *)((long)puVar36 + 1);
                          }
                          piVar48 = (int *)((long)puVar36 + (uVar20 - (long)puVar32) + 4);
                        }
                      }
                      else {
                        piVar48 = (int *)(uVar20 + 4);
                      }
joined_r0x0001006dabf8:
                      if ((piVar47 < piVar48) &&
                         (uVar16 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
                         (ulong *)((long)puVar33 + (long)piVar48) == puVar1)) goto LAB_1006db2f0;
                    }
                  }
                  else {
                    puVar32 = (ulong *)(lVar38 + uVar20);
                    if (*(char *)((long)puVar32 + (long)piVar47) ==
                        *(char *)((long)puVar33 + (long)piVar47)) {
                      puVar36 = puVar33;
                      if (puVar33 < puVar24) {
                        if (*puVar32 == uVar37) {
                          lVar41 = 0;
                          puVar32 = (ulong *)(lVar38 + 8 + uVar20);
                          puVar36 = (ulong *)((long)local_78 + 9);
                          do {
                            if (puVar24 <= puVar36) goto joined_r0x0001006dab80;
                            uVar20 = *puVar32;
                            uVar42 = *puVar36;
                            lVar41 = lVar41 + 8;
                            puVar32 = puVar32 + 1;
                            puVar36 = puVar36 + 1;
                          } while (uVar20 == uVar42);
                          uVar42 = uVar42 ^ uVar20;
                          uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar42 & 0x5555555555555555) << 1;
                          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                   (uVar20 & 0x3333333333333333) << 2;
                          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar20 & 0xff00ff00ff00ff) << 8;
                          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar20 & 0xffff0000ffff) << 0x10;
                          piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20
                                                                    ) >> 3));
                        }
                        else {
                          uVar20 = *puVar32 ^ uVar37;
                          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar20 & 0x5555555555555555) << 1;
                          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                   (uVar20 & 0x3333333333333333) << 2;
                          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar20 & 0xff00ff00ff00ff) << 8;
                          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar20 & 0xffff0000ffff) << 0x10;
                          piVar48 = (int *)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                        }
                      }
                      else {
joined_r0x0001006dab80:
                        if (puVar36 < puVar29) {
                          if ((int)*puVar32 == (int)*puVar36) {
                            puVar32 = (ulong *)((long)puVar32 + 4);
                            puVar36 = (ulong *)((long)puVar36 + 4);
                          }
                        }
                        if (puVar36 < puVar25) {
                          if ((short)*puVar32 == (short)*puVar36) {
                            puVar32 = (ulong *)((long)puVar32 + 2);
                            puVar36 = (ulong *)((long)puVar36 + 2);
                          }
                        }
                        if ((puVar36 < puVar1) && ((char)*puVar32 == (char)*puVar36)) {
                          puVar36 = (ulong *)((long)puVar36 + 1);
                        }
                        piVar48 = (int *)((long)puVar36 - (long)puVar33);
                      }
                      goto joined_r0x0001006dabf8;
                    }
                  }
                  piVar48 = piVar47;
                  if ((uVar45 <= uVar10) ||
                     ((iVar21 = iVar21 + -1, iVar21 == 0 ||
                      (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4),
                      piVar47 = piVar48, uVar45 <= uVar31)))) goto LAB_1006db2f0;
                } while( true );
              }
            }
            else {
              lVar27 = *(long *)(param_1 + 0x40);
              uVar45 = *(uint *)(param_1 + 0xbc);
              uVar9 = 1 << (ulong)(uVar45 & 0x1f);
              lVar38 = *(long *)(param_1 + 8);
              lVar44 = *(long *)(param_1 + 0x10);
              uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
              uVar5 = *(uint *)(param_1 + 0x18);
              uVar35 = (ulong)uVar5;
              uVar17 = (uint)((long)puVar33 - lVar38);
              uVar37 = (ulong)*(uint *)(param_1 + 0x24);
              uVar31 = uVar17 - uVar10;
              if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
                uVar31 = *(uint *)(param_1 + 0x1c);
              }
              uVar10 = 0;
              if (uVar9 <= uVar17) {
                uVar10 = uVar17 - uVar9;
              }
              uVar6 = *(uint *)(param_1 + 0xc4);
              lVar41 = *(long *)(param_1 + 0x30);
              uVar13 = 0x20 - *(int *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0x24) < uVar17) {
                do {
                  uVar11 = (uint)(*(int *)(lVar38 + uVar37) * -0x61c8864f) >> (ulong)(uVar13 & 0x1f)
                  ;
                  *(undefined4 *)
                   (lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                       *(undefined4 *)(lVar41 + (ulong)uVar11 * 4);
                  *(uint *)(lVar41 + (ulong)uVar11 * 4) = (uint)uVar37;
                  uVar37 = uVar37 + 1;
                } while (((long)puVar33 - lVar38 & 0xffffffffU) != uVar37);
              }
              *(uint *)(param_1 + 0x24) = uVar17;
              uVar45 = *(uint *)(lVar41 + (ulong)((uint)(*(int *)puVar33 * -0x61c8864f) >>
                                                 (ulong)(uVar13 & 0x1f)) * 4);
              if (uVar31 < uVar45) {
                iVar21 = 1 << (ulong)(uVar6 & 0x1f);
                puVar30 = (ulong *)((long)local_78 + 5);
                uVar16 = 999999999;
                piVar47 = (int *)0x3;
                do {
                  uVar37 = (ulong)uVar45;
                  if (uVar45 < uVar5) {
                    if (*(int *)(lVar44 + uVar37) == *(int *)puVar33) {
                      puVar32 = (ulong *)((int *)(lVar44 + uVar37) + 1);
                      puVar36 = (ulong *)((long)puVar30 + ((lVar44 + uVar35) - (long)puVar32));
                      if (puVar1 <= puVar36) {
                        puVar36 = puVar1;
                      }
                      if (puVar30 < (ulong *)((long)puVar36 - 7U)) {
                        if (*puVar32 == *puVar30) {
                          lVar41 = 0;
                          puVar39 = (ulong *)((long)local_78 + 0xd);
                          puVar49 = (ulong *)(lVar44 + 0xc + uVar37);
                          do {
                            if ((ulong *)((long)puVar36 - 7U) <= puVar39) {
                              if (puVar39 < (ulong *)((long)puVar36 - 3U)) goto LAB_1006db00c;
                              goto LAB_1006db028;
                            }
                            uVar20 = *puVar49;
                            uVar37 = *puVar39;
                            lVar41 = lVar41 + 8;
                            puVar39 = puVar39 + 1;
                            puVar49 = puVar49 + 1;
                          } while (uVar20 == uVar37);
                          uVar37 = uVar37 ^ uVar20;
                          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar37 & 0x5555555555555555) << 1;
                          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 |
                                   (uVar37 & 0x3333333333333333) << 2;
                          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar37 & 0xff00ff00ff00ff) << 8;
                          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar37 & 0xffff0000ffff) << 0x10;
                          uVar37 = lVar41 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
                        }
                        else {
                          uVar37 = *puVar30 ^ *puVar32;
                          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar37 & 0x5555555555555555) << 1;
                          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 |
                                   (uVar37 & 0x3333333333333333) << 2;
                          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar37 & 0xff00ff00ff00ff) << 8;
                          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar37 & 0xffff0000ffff) << 0x10;
                          uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
                        }
                      }
                      else {
                        puVar39 = puVar30;
                        puVar49 = puVar32;
                        if (puVar30 < (ulong *)((long)puVar36 - 3U)) {
LAB_1006db00c:
                          if ((int)*puVar49 == (int)*puVar39) {
                            puVar39 = (ulong *)((long)puVar39 + 4);
                            puVar49 = (ulong *)((long)puVar49 + 4);
                          }
                        }
LAB_1006db028:
                        if (puVar39 < (ulong *)((long)puVar36 - 1U)) {
                          if ((short)*puVar49 == (short)*puVar39) {
                            puVar39 = (ulong *)((long)puVar39 + 2);
                            puVar49 = (ulong *)((long)puVar49 + 2);
                          }
                        }
                        if ((puVar39 < puVar36) && ((char)*puVar49 == (char)*puVar39)) {
                          puVar39 = (ulong *)((long)puVar39 + 1);
                        }
                        uVar37 = (long)puVar39 - (long)puVar30;
                      }
                      if ((long)puVar32 + uVar37 == lVar44 + uVar35) {
                        puVar32 = (ulong *)((long)puVar30 + uVar37);
                        puVar36 = puVar32;
                        puVar39 = (ulong *)(lVar38 + uVar35);
                        if (puVar32 < puVar24) {
                          uVar20 = *(ulong *)(lVar38 + uVar35);
                          if (uVar20 == *puVar32) {
                            lVar41 = 0;
                            puVar36 = (ulong *)((long)local_78 + 0xd + uVar37);
                            puVar39 = (ulong *)(lVar38 + 8 + uVar35);
                            do {
                              if (puVar24 <= puVar36) goto LAB_1006db1d0;
                              uVar42 = *puVar39;
                              uVar20 = *puVar36;
                              lVar41 = lVar41 + 8;
                              puVar36 = puVar36 + 1;
                              puVar39 = puVar39 + 1;
                            } while (uVar42 == uVar20);
                            uVar20 = uVar20 ^ uVar42;
                            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar20 & 0x5555555555555555) << 1;
                            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                     (uVar20 & 0x3333333333333333) << 2;
                            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar20 & 0xff00ff00ff00ff) << 8;
                            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar20 & 0xffff0000ffff) << 0x10;
                            piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 |
                                                                       uVar20 << 0x20) >> 3) +
                                              uVar37 + 4);
                          }
                          else {
                            uVar20 = *puVar32 ^ uVar20;
                            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar20 & 0x5555555555555555) << 1;
                            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 |
                                     (uVar20 & 0x3333333333333333) << 2;
                            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar20 & 0xff00ff00ff00ff) << 8;
                            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar20 & 0xffff0000ffff) << 0x10;
                            piVar48 = (int *)(((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3)
                                              + uVar37 + 4);
                          }
                        }
                        else {
LAB_1006db1d0:
                          if (puVar36 < puVar29) {
                            if ((int)*puVar39 == (int)*puVar36) {
                              puVar36 = (ulong *)((long)puVar36 + 4);
                              puVar39 = (ulong *)((long)puVar39 + 4);
                            }
                          }
                          if (puVar36 < puVar25) {
                            if (*(short *)puVar39 == *(short *)puVar36) {
                              puVar36 = (ulong *)((long)puVar36 + 2);
                              puVar39 = (ulong *)((long)puVar39 + 2);
                            }
                          }
                          if ((puVar36 < puVar1) && ((char)*puVar39 == (char)*puVar36)) {
                            puVar36 = (ulong *)((long)puVar36 + 1);
                          }
                          piVar48 = (int *)((long)puVar36 + (uVar37 - (long)puVar32) + 4);
                        }
                      }
                      else {
                        piVar48 = (int *)(uVar37 + 4);
                      }
joined_r0x0001006db110:
                      if ((piVar47 < piVar48) &&
                         (uVar16 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
                         (ulong *)((long)puVar33 + (long)piVar48) == puVar1)) goto LAB_1006db2f0;
                    }
                  }
                  else {
                    puVar32 = (ulong *)(lVar38 + uVar37);
                    if (*(char *)((long)puVar32 + (long)piVar47) ==
                        *(char *)((long)puVar33 + (long)piVar47)) {
                      puVar36 = puVar33;
                      if (puVar33 < puVar24) {
                        if (*puVar32 == *puVar33) {
                          lVar41 = 0;
                          puVar32 = (ulong *)(lVar38 + 8 + uVar37);
                          puVar36 = (ulong *)((long)local_78 + 9);
                          do {
                            if (puVar24 <= puVar36) goto joined_r0x0001006db098;
                            uVar37 = *puVar32;
                            uVar20 = *puVar36;
                            lVar41 = lVar41 + 8;
                            puVar32 = puVar32 + 1;
                            puVar36 = puVar36 + 1;
                          } while (uVar37 == uVar20);
                          uVar20 = uVar20 ^ uVar37;
                          uVar37 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar20 & 0x5555555555555555) << 1;
                          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 |
                                   (uVar37 & 0x3333333333333333) << 2;
                          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar37 & 0xff00ff00ff00ff) << 8;
                          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar37 & 0xffff0000ffff) << 0x10;
                          piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20
                                                                    ) >> 3));
                        }
                        else {
                          uVar37 = *puVar33 ^ *puVar32;
                          uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar37 & 0x5555555555555555) << 1;
                          uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 |
                                   (uVar37 & 0x3333333333333333) << 2;
                          uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar37 & 0xff00ff00ff00ff) << 8;
                          uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar37 & 0xffff0000ffff) << 0x10;
                          piVar48 = (int *)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
                        }
                      }
                      else {
joined_r0x0001006db098:
                        if (puVar36 < puVar29) {
                          if ((int)*puVar32 == (int)*puVar36) {
                            puVar32 = (ulong *)((long)puVar32 + 4);
                            puVar36 = (ulong *)((long)puVar36 + 4);
                          }
                        }
                        if (puVar36 < puVar25) {
                          if ((short)*puVar32 == (short)*puVar36) {
                            puVar32 = (ulong *)((long)puVar32 + 2);
                            puVar36 = (ulong *)((long)puVar36 + 2);
                          }
                        }
                        if ((puVar36 < puVar1) && ((char)*puVar32 == (char)*puVar36)) {
                          puVar36 = (ulong *)((long)puVar36 + 1);
                        }
                        piVar48 = (int *)((long)puVar36 - (long)puVar33);
                      }
                      goto joined_r0x0001006db110;
                    }
                  }
                  piVar48 = piVar47;
                  if ((uVar45 <= uVar10) ||
                     ((iVar21 = iVar21 + -1, iVar21 == 0 ||
                      (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4),
                      piVar47 = piVar48, uVar45 <= uVar31)))) goto LAB_1006db2f0;
                } while( true );
              }
            }
          }
          goto LAB_1006db344;
        }
LAB_1006dc4a0:
        if (local_c0 == 0) {
          iVar15 = 1;
          uVar37 = (long)local_e0 - (long)param_4;
          puVar33 = (ulong *)param_2[3];
          uVar31 = uVar46;
          if (puVar26 < local_e0) goto LAB_1006dc610;
LAB_1006dc55c:
          uVar35 = *param_4;
          puVar33[1] = param_4[1];
          *puVar33 = uVar35;
          lVar38 = param_2[3];
          if (0x10 < uVar37) {
            uVar35 = param_4[2];
            *(ulong *)(lVar38 + 0x18) = param_4[3];
            *(ulong *)(lVar38 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar38 + 0x28) = param_4[5];
            *(ulong *)(lVar38 + 0x20) = uVar35;
            if (0x30 < (long)uVar37) {
              puVar33 = (ulong *)(lVar38 + 0x30);
              puVar30 = param_4 + 8;
              do {
                uVar35 = puVar30[-2];
                puVar33[1] = puVar30[-1];
                *puVar33 = uVar35;
                uVar35 = *puVar30;
                puVar33[3] = puVar30[1];
                puVar33[2] = uVar35;
                puVar33 = puVar33 + 4;
                puVar30 = puVar30 + 4;
              } while (puVar33 < (ulong *)(lVar38 + uVar37));
            }
            goto LAB_1006dc72c;
          }
          param_2[3] = lVar38 + uVar37;
          piVar47 = (int *)param_2[1];
        }
        else {
          uVar37 = (long)local_e0 + (2 - (local_c0 + lVar18));
          puVar33 = (ulong *)(lVar23 + (ulong)uVar8);
          lVar38 = lVar23;
          if (uVar7 <= (uint)uVar37) {
            puVar33 = puVar2;
            lVar38 = lVar18;
          }
          if ((param_4 < local_e0) &&
             (uVar37 = uVar37 & 0xffffffff, puVar33 < (ulong *)(lVar38 + uVar37))) {
            puVar30 = (ulong *)(lVar38 + uVar37);
            do {
              puVar32 = (ulong *)((long)local_e0 + -1);
              puVar30 = (ulong *)((long)puVar30 + -1);
              if ((*(char *)puVar32 != *(char *)puVar30) ||
                 (puVar28 = (ulong *)((long)puVar28 + 1), local_e0 = puVar32, puVar32 <= param_4))
              break;
            } while (puVar33 < puVar30);
          }
          uVar31 = (int)local_c0 - 2;
          iVar15 = (int)local_c0 + 1;
          uVar37 = (long)local_e0 - (long)param_4;
          puVar33 = (ulong *)param_2[3];
          local_e8 = uVar46;
          if (local_e0 <= puVar26) goto LAB_1006dc55c;
LAB_1006dc610:
          puVar32 = puVar33;
          puVar30 = param_4;
          if (param_4 <= puVar26) {
            puVar32 = (ulong *)((long)puVar33 + ((long)puVar26 - (long)param_4));
            uVar35 = *param_4;
            puVar33[1] = param_4[1];
            *puVar33 = uVar35;
            uVar35 = param_4[2];
            puVar33[3] = param_4[3];
            puVar33[2] = uVar35;
            puVar30 = puVar26;
            if (0x20 < (long)puVar26 - (long)param_4) {
              puVar33 = puVar33 + 4;
              puVar36 = param_4 + 6;
              do {
                uVar35 = puVar36[-2];
                puVar33[1] = puVar36[-1];
                *puVar33 = uVar35;
                uVar35 = *puVar36;
                puVar33[3] = puVar36[1];
                puVar33[2] = uVar35;
                puVar33 = puVar33 + 4;
                puVar36 = puVar36 + 4;
              } while (puVar33 < puVar32);
            }
          }
          if (puVar30 < local_e0) {
            uVar35 = (long)local_e0 - (long)puVar30;
            if ((7 < uVar35) && (0x3f < (ulong)((long)puVar32 - (long)puVar30))) {
              if (uVar35 < 0x40) {
                uVar20 = 0;
              }
              else {
                uVar20 = uVar35 & 0xffffffffffffffc0;
                puVar33 = puVar32 + 4;
                puVar36 = puVar30 + 4;
                uVar16 = uVar20;
                do {
                  uVar42 = puVar36[-4];
                  uVar50 = puVar36[-1];
                  uVar43 = puVar36[-2];
                  uVar52 = puVar36[1];
                  uVar51 = *puVar36;
                  uVar54 = puVar36[3];
                  uVar53 = puVar36[2];
                  puVar33[-3] = puVar36[-3];
                  puVar33[-4] = uVar42;
                  puVar33[-1] = uVar50;
                  puVar33[-2] = uVar43;
                  puVar33[1] = uVar52;
                  *puVar33 = uVar51;
                  puVar33[3] = uVar54;
                  puVar33[2] = uVar53;
                  uVar16 = uVar16 - 0x40;
                  puVar33 = puVar33 + 8;
                  puVar36 = puVar36 + 8;
                } while (uVar16 != 0);
                if (uVar35 == uVar20) goto LAB_1006dc72c;
                if ((uVar35 & 0x38) == 0) {
                  puVar30 = (ulong *)((long)puVar30 + uVar20);
                  puVar32 = (ulong *)((long)puVar32 + uVar20);
                  goto LAB_1006dc71c;
                }
              }
              uVar16 = uVar35 & 0xfffffffffffffff8;
              lVar38 = uVar20 - uVar16;
              puVar34 = (undefined8 *)((long)puVar32 + uVar20);
              puVar40 = (undefined8 *)((long)puVar30 + uVar20);
              do {
                *puVar34 = *puVar40;
                lVar38 = lVar38 + 8;
                puVar34 = puVar34 + 1;
                puVar40 = puVar40 + 1;
              } while (lVar38 != 0);
              puVar32 = (ulong *)((long)puVar32 + uVar16);
              puVar30 = (ulong *)((long)puVar30 + uVar16);
              if (uVar35 == uVar16) goto LAB_1006dc72c;
            }
LAB_1006dc71c:
            do {
              puVar33 = (ulong *)((long)puVar30 + 1);
              *(char *)puVar32 = (char)*puVar30;
              puVar32 = (ulong *)((long)puVar32 + 1);
              puVar30 = puVar33;
            } while (puVar33 != local_e0);
          }
LAB_1006dc72c:
          param_2[3] = param_2[3] + uVar37;
          piVar47 = (int *)param_2[1];
          if (0xffff < uVar37) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar47 - *param_2) >> 3);
          }
        }
        *(short *)(piVar47 + 1) = (short)uVar37;
        *piVar47 = iVar15;
        if (0xffff < (long)puVar28 - 3U) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar47 - *param_2) >> 3);
        }
        *(short *)((long)piVar47 + 6) = (short)((long)puVar28 - 3U);
        piVar47 = piVar47 + 2;
        param_2[1] = (long)piVar47;
        for (param_4 = (ulong *)((long)local_e0 + (long)puVar28); uVar46 = uVar31,
            local_78 = param_4, param_4 <= puVar22; param_4 = (ulong *)((long)param_4 + uVar37 + 4))
        {
          uVar37 = (long)param_4 - (lVar18 + (ulong)local_e8);
          uVar31 = (uint)uVar37;
          lVar38 = lVar23;
          if (uVar7 <= uVar31) {
            lVar38 = lVar18;
          }
          if (uVar31 <= uVar8 || iVar12 - uVar31 < 3) break;
          uVar37 = uVar37 & 0xffffffff;
          piVar48 = (int *)(lVar38 + uVar37);
          if ((int)*param_4 != *piVar48) break;
          puVar28 = puVar3;
          if (uVar7 <= uVar31) {
            puVar28 = puVar1;
          }
          puVar33 = (ulong *)((long)param_4 + 4);
          puVar30 = (ulong *)(piVar48 + 1);
          puVar32 = (ulong *)((long)puVar33 + ((long)puVar28 - (long)puVar30));
          if (puVar1 <= puVar32) {
            puVar32 = puVar1;
          }
          puVar36 = puVar33;
          puVar39 = puVar30;
          if (puVar33 < (ulong *)((long)puVar32 - 7U)) {
            if (*puVar30 == *puVar33) {
              lVar44 = 0;
              puVar36 = (ulong *)((long)param_4 + 0xc);
              puVar39 = (ulong *)(lVar38 + uVar37 + 0xc);
              do {
                if ((ulong *)((long)puVar32 - 7U) <= puVar36) goto LAB_1006dc8bc;
                uVar37 = *puVar39;
                uVar35 = *puVar36;
                lVar44 = lVar44 + 8;
                puVar36 = puVar36 + 1;
                puVar39 = puVar39 + 1;
              } while (uVar37 == uVar35);
              uVar35 = uVar35 ^ uVar37;
              uVar37 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
              uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
              uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
              uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
              uVar37 = lVar44 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
            }
            else {
              uVar37 = *puVar33 ^ *puVar30;
              uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
              uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
              uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
              uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
              uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
            }
            if ((ulong *)((long)puVar30 + uVar37) == puVar28) goto LAB_1006dc98c;
joined_r0x0001006dc920:
            if (param_4 <= puVar26) goto LAB_1006dca68;
LAB_1006dc924:
            *(undefined2 *)(piVar47 + 1) = 0;
            *piVar47 = 1;
          }
          else {
LAB_1006dc8bc:
            if (puVar36 < (ulong *)((long)puVar32 - 3U)) {
              if ((int)*puVar39 == (int)*puVar36) {
                puVar36 = (ulong *)((long)puVar36 + 4);
                puVar39 = (ulong *)((long)puVar39 + 4);
              }
              if (puVar36 < (ulong *)((long)puVar32 - 1U)) {
LAB_1006dc948:
                if ((short)*puVar39 == (short)*puVar36) {
                  puVar36 = (ulong *)((long)puVar36 + 2);
                  puVar39 = (ulong *)((long)puVar39 + 2);
                }
              }
            }
            else if (puVar36 < (ulong *)((long)puVar32 - 1U)) goto LAB_1006dc948;
            if ((puVar36 < puVar32) && ((char)*puVar39 == (char)*puVar36)) {
              puVar36 = (ulong *)((long)puVar36 + 1);
            }
            uVar37 = (long)puVar36 - (long)puVar33;
            if ((ulong *)((long)puVar30 + uVar37) != puVar28) goto joined_r0x0001006dc920;
LAB_1006dc98c:
            puVar33 = (ulong *)((long)puVar33 + uVar37);
            puVar30 = puVar33;
            puVar28 = puVar2;
            if (puVar33 < puVar24) {
              if (*puVar2 == *puVar33) {
                lVar38 = 0;
                puVar30 = (ulong *)((long)param_4 + uVar37 + 0xc);
                puVar28 = (ulong *)(uVar19 + lVar18);
                do {
                  puVar28 = puVar28 + 1;
                  if (puVar24 <= puVar30) goto LAB_1006dca08;
                  uVar35 = *puVar30;
                  lVar38 = lVar38 + 8;
                  puVar30 = puVar30 + 1;
                } while (*puVar28 == uVar35);
                uVar35 = uVar35 ^ *puVar28;
                uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
                uVar37 = lVar38 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3) + uVar37;
              }
              else {
                uVar35 = *puVar33 ^ *puVar2;
                uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
                uVar37 = ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3) + uVar37;
              }
              goto joined_r0x0001006dc920;
            }
LAB_1006dca08:
            if (puVar30 < puVar29) {
              if ((int)*puVar28 == (int)*puVar30) {
                puVar30 = (ulong *)((long)puVar30 + 4);
                puVar28 = (ulong *)((long)puVar28 + 4);
              }
            }
            if (puVar30 < puVar25) {
              if (*(short *)puVar28 == *(short *)puVar30) {
                puVar30 = (ulong *)((long)puVar30 + 2);
                puVar28 = (ulong *)((long)puVar28 + 2);
              }
            }
            if ((puVar30 < puVar1) && ((char)*puVar28 == (char)*puVar30)) {
              puVar30 = (ulong *)((long)puVar30 + 1);
            }
            uVar37 = (long)puVar30 + (uVar37 - (long)puVar33);
            if (puVar26 < param_4) goto LAB_1006dc924;
LAB_1006dca68:
            puVar28 = (ulong *)param_2[3];
            uVar35 = *param_4;
            puVar28[1] = param_4[1];
            *puVar28 = uVar35;
            piVar47 = (int *)param_2[1];
            *(undefined2 *)(piVar47 + 1) = 0;
            *piVar47 = 1;
          }
          if (0xffff < uVar37 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar47 - *param_2) >> 3);
          }
          *(short *)((long)piVar47 + 6) = (short)(uVar37 + 1);
          piVar47 = piVar47 + 2;
          param_2[1] = (long)piVar47;
          uVar31 = local_e8;
          local_e8 = uVar46;
        }
      }
      else {
        if (*(int *)(param_1 + 200) != 5) {
          lVar27 = *(long *)(param_1 + 0x40);
          uVar45 = *(uint *)(param_1 + 0xbc);
          uVar9 = 1 << (ulong)(uVar45 & 0x1f);
          lVar38 = *(long *)(param_1 + 8);
          lVar44 = *(long *)(param_1 + 0x10);
          uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar5 = *(uint *)(param_1 + 0x18);
          uVar17 = (uint)((long)local_78 - lVar38);
          uVar37 = (ulong)*(uint *)(param_1 + 0x24);
          uVar31 = uVar17 - uVar10;
          if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
            uVar31 = *(uint *)(param_1 + 0x1c);
          }
          uVar10 = 0;
          if (uVar9 <= uVar17) {
            uVar10 = uVar17 - uVar9;
          }
          uVar6 = *(uint *)(param_1 + 0xc4);
          lVar41 = *(long *)(param_1 + 0x30);
          uVar13 = 0x20 - *(int *)(param_1 + 0xc0);
          if (*(uint *)(param_1 + 0x24) < uVar17) {
            do {
              uVar11 = (uint)(*(int *)(lVar38 + uVar37) * -0x61c8864f) >> (ulong)(uVar13 & 0x1f);
              *(undefined4 *)(lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4)
                   = *(undefined4 *)(lVar41 + (ulong)uVar11 * 4);
              *(uint *)(lVar41 + (ulong)uVar11 * 4) = (uint)uVar37;
              uVar37 = uVar37 + 1;
            } while (((long)local_78 - lVar38 & 0xffffffffU) != uVar37);
          }
          *(uint *)(param_1 + 0x24) = uVar17;
          uVar37 = *local_78;
          uVar45 = *(uint *)(lVar41 + (ulong)((uint)((int)uVar37 * -0x61c8864f) >>
                                             (ulong)(uVar13 & 0x1f)) * 4);
          if (uVar31 < uVar45) {
            iVar14 = 1 << (ulong)(uVar6 & 0x1f);
            piVar47 = (int *)0x3;
            local_c0 = 999999999;
            do {
              uVar35 = (ulong)uVar45;
              if (uVar45 < uVar5) {
                piVar4 = (int *)(lVar44 + uVar35);
                if (*piVar4 == (int)uVar37) {
                  piVar48 = (int *)((long)local_78 + 4);
                  FUN_1006c7460(piVar48,piVar4 + 1,puVar1,lVar44 + (ulong)uVar5,
                                lVar38 + (ulong)uVar5);
                  piVar48 = piVar48 + 1;
joined_r0x0001006da148:
                  if ((piVar47 < piVar48) &&
                     (local_c0 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
                     (ulong *)((long)local_78 + (long)piVar48) == puVar1)) goto LAB_1006da210;
                }
              }
              else {
                puVar28 = (ulong *)(lVar38 + uVar35);
                if (*(char *)((long)puVar28 + (long)piVar47) ==
                    *(char *)((long)local_78 + (long)piVar47)) {
                  puVar33 = local_78;
                  if (local_78 < puVar24) {
                    if (*puVar28 == *local_78) {
                      lVar41 = 0;
                      puVar28 = (ulong *)(lVar38 + 8 + uVar35);
                      do {
                        puVar33 = puVar33 + 1;
                        if (puVar24 <= puVar33) goto LAB_1006da0ec;
                        uVar35 = *puVar28;
                        lVar41 = lVar41 + 8;
                        puVar28 = puVar28 + 1;
                      } while (uVar35 == *puVar33);
                      uVar35 = *puVar33 ^ uVar35;
                      uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar35 & 0x5555555555555555) << 1;
                      uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 |
                               (uVar35 & 0x3333333333333333) << 2;
                      uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar35 & 0xffff0000ffff) << 0x10;
                      piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >>
                                                 3));
                    }
                    else {
                      uVar35 = *local_78 ^ *puVar28;
                      uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar35 & 0x5555555555555555) << 1;
                      uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 |
                               (uVar35 & 0x3333333333333333) << 2;
                      uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar35 & 0xffff0000ffff) << 0x10;
                      piVar48 = (int *)((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
                    }
                  }
                  else {
LAB_1006da0ec:
                    if (puVar33 < puVar29) {
                      if ((int)*puVar28 == (int)*puVar33) {
                        puVar28 = (ulong *)((long)puVar28 + 4);
                        puVar33 = (ulong *)((long)puVar33 + 4);
                      }
                    }
                    if (puVar33 < puVar25) {
                      if (*(short *)puVar28 == *(short *)puVar33) {
                        puVar28 = (ulong *)((long)puVar28 + 2);
                        puVar33 = (ulong *)((long)puVar33 + 2);
                      }
                    }
                    if ((puVar33 < puVar1) && ((char)*puVar28 == (char)*puVar33)) {
                      puVar33 = (ulong *)((long)puVar33 + 1);
                    }
                    piVar48 = (int *)((long)puVar33 - (long)local_78);
                  }
                  goto joined_r0x0001006da148;
                }
              }
              if ((uVar45 <= uVar10) ||
                 ((iVar14 = iVar14 + -1, iVar14 == 0 ||
                  (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4), uVar45 <= uVar31)))
                 ) goto LAB_1006da210;
            } while( true );
          }
          goto LAB_1006da1e4;
        }
        lVar27 = *(long *)(param_1 + 0x40);
        uVar45 = *(uint *)(param_1 + 0xbc);
        uVar9 = 1 << (ulong)(uVar45 & 0x1f);
        lVar38 = *(long *)(param_1 + 8);
        lVar44 = *(long *)(param_1 + 0x10);
        uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar5 = *(uint *)(param_1 + 0x18);
        uVar17 = (uint)((long)local_78 - lVar38);
        uVar37 = (ulong)*(uint *)(param_1 + 0x24);
        uVar31 = uVar17 - uVar10;
        if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
          uVar31 = *(uint *)(param_1 + 0x1c);
        }
        uVar10 = 0;
        if (uVar9 <= uVar17) {
          uVar10 = uVar17 - uVar9;
        }
        uVar6 = *(uint *)(param_1 + 0xc4);
        lVar41 = *(long *)(param_1 + 0x30);
        uVar35 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
        if (*(uint *)(param_1 + 0x24) < uVar17) {
          do {
            uVar16 = (ulong)(*(long *)(lVar38 + uVar37) * -0x30e4432345000000) >> (uVar35 & 0x3f);
            *(undefined4 *)(lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                 *(undefined4 *)(lVar41 + uVar16 * 4);
            *(uint *)(lVar41 + uVar16 * 4) = (uint)uVar37;
            uVar37 = uVar37 + 1;
          } while (((long)local_78 - lVar38 & 0xffffffffU) != uVar37);
        }
        *(uint *)(param_1 + 0x24) = uVar17;
        uVar37 = *local_78;
        uVar45 = *(uint *)(lVar41 + (uVar37 * -0x30e4432345000000 >> (uVar35 & 0x3f)) * 4);
        if (uVar45 <= uVar31) goto LAB_1006da1e4;
        iVar14 = 1 << (ulong)(uVar6 & 0x1f);
        piVar47 = (int *)0x3;
        local_c0 = 999999999;
        do {
          uVar35 = (ulong)uVar45;
          if (uVar45 < uVar5) {
            piVar4 = (int *)(lVar44 + uVar35);
            if (*piVar4 == (int)*local_78) {
              piVar48 = (int *)((long)local_78 + 4);
              FUN_1006c7460(piVar48,piVar4 + 1,puVar1,lVar44 + (ulong)uVar5,lVar38 + (ulong)uVar5);
              piVar48 = piVar48 + 1;
joined_r0x0001006d9e84:
              if ((piVar47 < piVar48) &&
                 (local_c0 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
                 (ulong *)((long)local_78 + (long)piVar48) == puVar1)) break;
            }
          }
          else {
            puVar28 = (ulong *)(lVar38 + uVar35);
            if (*(char *)((long)puVar28 + (long)piVar47) ==
                *(char *)((long)local_78 + (long)piVar47)) {
              puVar33 = local_78;
              if (local_78 < puVar24) {
                if (*puVar28 == uVar37) {
                  lVar41 = 0;
                  puVar28 = (ulong *)(lVar38 + 8 + uVar35);
                  do {
                    puVar33 = puVar33 + 1;
                    if (puVar24 <= puVar33) goto LAB_1006d9e28;
                    uVar35 = *puVar28;
                    lVar41 = lVar41 + 8;
                    puVar28 = puVar28 + 1;
                  } while (uVar35 == *puVar33);
                  uVar35 = *puVar33 ^ uVar35;
                  uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                  uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                  uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                  uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10
                  ;
                  piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3))
                  ;
                }
                else {
                  uVar35 = *puVar28 ^ uVar37;
                  uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                  uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                  uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                  uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10
                  ;
                  piVar48 = (int *)((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
                }
              }
              else {
LAB_1006d9e28:
                if (puVar33 < puVar29) {
                  if ((int)*puVar28 == (int)*puVar33) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar33 = (ulong *)((long)puVar33 + 4);
                  }
                }
                if (puVar33 < puVar25) {
                  if (*(short *)puVar28 == *(short *)puVar33) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar33 = (ulong *)((long)puVar33 + 2);
                  }
                }
                if ((puVar33 < puVar1) && ((char)*puVar28 == (char)*puVar33)) {
                  puVar33 = (ulong *)((long)puVar33 + 1);
                }
                piVar48 = (int *)((long)puVar33 - (long)local_78);
              }
              goto joined_r0x0001006d9e84;
            }
          }
          if ((uVar45 <= uVar10) || (iVar14 = iVar14 + -1, iVar14 == 0)) {
            puVar28 = (ulong *)piVar47;
            if (piVar47 <= local_e0) {
              puVar28 = local_e0;
            }
            goto joined_r0x0001006dc5e0;
          }
          uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4);
        } while (uVar31 < uVar45);
LAB_1006da210:
        puVar28 = (ulong *)piVar47;
        if (piVar47 <= local_e0) {
          puVar28 = local_e0;
        }
        if ((int *)0x3 < puVar28) goto LAB_1006da224;
LAB_1006d95ec:
        local_78 = (ulong *)((long)local_78 + ((long)local_78 - (long)param_4 >> 8) + 1);
      }
    } while (local_78 < puVar22);
  }
  *param_3 = uVar46;
  param_3[1] = local_e8;
  return (long)puVar1 - (long)param_4;
LAB_1006db2f0:
  if (((int *)0x3 < piVar48) &&
     ((int)(((uint)LZCOUNT((int)local_c0 + 1) ^ 0xffffffe0) + (int)puVar28 * 4 + 5) <
      (int)((int)piVar48 * 4 - ((uint)LZCOUNT((int)uVar16 + 1) ^ 0x1f)))) goto LAB_1006dc450;
LAB_1006db344:
  if (puVar22 <= puVar33) goto LAB_1006dc4a0;
  puVar33 = (ulong *)((long)local_78 + 2);
  iVar14 = iVar15 + 2;
  if (local_c0 != 0) {
    uVar31 = iVar14 - uVar46;
    lVar38 = lVar23;
    if (uVar7 <= uVar31) {
      lVar38 = lVar18;
    }
    if (((uVar8 < uVar31) && (2 < iVar12 - uVar31)) &&
       (*(int *)puVar33 == *(int *)(lVar38 + (ulong)uVar31))) {
      puVar30 = puVar3;
      if (uVar7 <= uVar31) {
        puVar30 = puVar1;
      }
      uVar37 = (long)local_78 + 6;
      FUN_1006c7460(uVar37,(int *)(lVar38 + (ulong)uVar31) + 1,puVar1,puVar30,puVar2);
      if (0xfffffffffffffffb < uVar37) {
        iVar15 = *(int *)(param_1 + 200);
        goto joined_r0x0001006db444;
      }
      if ((int)(((uint)LZCOUNT((int)local_c0 + 1) ^ 0xffffffe0) + (int)puVar28 * 4 + 2) <
          (int)(int *)(uVar37 + 4) * 4) {
        local_c0 = 0;
        iVar15 = *(int *)(param_1 + 200);
        local_e0 = puVar33;
        puVar28 = (ulong *)(uVar37 + 4);
        goto joined_r0x0001006db444;
      }
    }
  }
  iVar15 = *(int *)(param_1 + 200);
joined_r0x0001006db444:
  if (iVar15 - 6U < 2) {
    lVar27 = *(long *)(param_1 + 0x40);
    uVar45 = *(uint *)(param_1 + 0xbc);
    uVar9 = 1 << (ulong)(uVar45 & 0x1f);
    lVar38 = *(long *)(param_1 + 8);
    lVar44 = *(long *)(param_1 + 0x10);
    uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar35 = (ulong)uVar5;
    uVar17 = (uint)((long)puVar33 - lVar38);
    uVar37 = (ulong)*(uint *)(param_1 + 0x24);
    uVar31 = uVar17 - uVar10;
    if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
      uVar31 = *(uint *)(param_1 + 0x1c);
    }
    uVar10 = 0;
    if (uVar9 <= uVar17) {
      uVar10 = uVar17 - uVar9;
    }
    uVar6 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar17) {
      do {
        uVar20 = (ulong)(*(long *)(lVar38 + uVar37) * -0x30e4432340650000) >> (uVar16 & 0x3f);
        *(undefined4 *)(lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + uVar20 * 4);
        *(uint *)(lVar41 + uVar20 * 4) = (uint)uVar37;
        uVar37 = uVar37 + 1;
      } while (((long)puVar33 - lVar38 & 0xffffffffU) != uVar37);
    }
    *(uint *)(param_1 + 0x24) = uVar17;
    uVar37 = *puVar33;
    uVar45 = *(uint *)(lVar41 + (uVar37 * -0x30e4432340650000 >> (uVar16 & 0x3f)) * 4);
    if (uVar31 < uVar45) {
      iVar15 = 1 << (ulong)(uVar6 & 0x1f);
      puVar30 = (ulong *)((long)local_78 + 6);
      piVar48 = (int *)0x3;
      uVar16 = 999999999;
      do {
        uVar20 = (ulong)uVar45;
        if (uVar45 < uVar5) {
          if (*(int *)(lVar44 + uVar20) == *(int *)puVar33) {
            puVar32 = (ulong *)((int *)(lVar44 + uVar20) + 1);
            puVar36 = (ulong *)((long)puVar30 + ((lVar44 + uVar35) - (long)puVar32));
            if (puVar1 <= puVar36) {
              puVar36 = puVar1;
            }
            if (puVar30 < (ulong *)((long)puVar36 - 7U)) {
              if (*puVar32 == *puVar30) {
                lVar41 = 0;
                puVar39 = (ulong *)(lVar44 + 0xc + uVar20);
                puVar49 = (ulong *)((long)local_78 + 0xe);
                do {
                  if ((ulong *)((long)puVar36 - 7U) <= puVar49) {
                    if (puVar49 < (ulong *)((long)puVar36 - 3U)) goto LAB_1006db6a4;
                    goto LAB_1006db6c0;
                  }
                  uVar20 = *puVar39;
                  uVar42 = *puVar49;
                  lVar41 = lVar41 + 8;
                  puVar39 = puVar39 + 1;
                  puVar49 = puVar49 + 1;
                } while (uVar20 == uVar42);
                uVar42 = uVar42 ^ uVar20;
                uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
              else {
                uVar20 = *puVar30 ^ *puVar32;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
              }
            }
            else {
              puVar39 = puVar32;
              puVar49 = puVar30;
              if (puVar30 < (ulong *)((long)puVar36 - 3U)) {
LAB_1006db6a4:
                if ((int)*puVar39 == (int)*puVar49) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar49 = (ulong *)((long)puVar49 + 4);
                }
              }
LAB_1006db6c0:
              if (puVar49 < (ulong *)((long)puVar36 - 1U)) {
                if ((short)*puVar39 == (short)*puVar49) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar49 = (ulong *)((long)puVar49 + 2);
                }
              }
              if ((puVar49 < puVar36) && ((char)*puVar39 == (char)*puVar49)) {
                puVar49 = (ulong *)((long)puVar49 + 1);
              }
              uVar20 = (long)puVar49 - (long)puVar30;
            }
            if ((long)puVar32 + uVar20 == lVar44 + uVar35) {
              puVar32 = (ulong *)((long)puVar30 + uVar20);
              puVar36 = (ulong *)(lVar38 + uVar35);
              puVar39 = puVar32;
              if (puVar32 < puVar24) {
                uVar42 = *(ulong *)(lVar38 + uVar35);
                if (uVar42 == *puVar32) {
                  lVar41 = 0;
                  puVar36 = (ulong *)(lVar38 + 8 + uVar35);
                  puVar39 = (ulong *)((long)local_78 + 0xe + uVar20);
                  do {
                    if (puVar24 <= puVar39) goto LAB_1006db868;
                    uVar42 = *puVar36;
                    uVar43 = *puVar39;
                    lVar41 = lVar41 + 8;
                    puVar36 = puVar36 + 1;
                    puVar39 = puVar39 + 1;
                  } while (uVar42 == uVar43);
                  uVar43 = uVar43 ^ uVar42;
                  uVar42 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10
                  ;
                  piVar47 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3)
                                    + uVar20 + 4);
                }
                else {
                  uVar42 = *puVar32 ^ uVar42;
                  uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10
                  ;
                  piVar47 = (int *)(((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3) + uVar20
                                   + 4);
                }
              }
              else {
LAB_1006db868:
                if (puVar39 < puVar29) {
                  if ((int)*puVar36 == (int)*puVar39) {
                    puVar36 = (ulong *)((long)puVar36 + 4);
                    puVar39 = (ulong *)((long)puVar39 + 4);
                  }
                }
                if (puVar39 < puVar25) {
                  if (*(short *)puVar36 == *(short *)puVar39) {
                    puVar36 = (ulong *)((long)puVar36 + 2);
                    puVar39 = (ulong *)((long)puVar39 + 2);
                  }
                }
                if ((puVar39 < puVar1) && ((char)*puVar36 == (char)*puVar39)) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
                piVar47 = (int *)((long)puVar39 + (uVar20 - (long)puVar32) + 4);
              }
            }
            else {
              piVar47 = (int *)(uVar20 + 4);
            }
joined_r0x0001006db7a8:
            if ((piVar48 < piVar47) &&
               (uVar16 = (ulong)((uVar17 + 2) - uVar45), piVar48 = piVar47,
               (ulong *)((long)puVar33 + (long)piVar47) == puVar1)) goto joined_r0x0001006dc400;
          }
        }
        else {
          puVar32 = (ulong *)(lVar38 + uVar20);
          if (*(char *)((long)puVar32 + (long)piVar48) == *(char *)((long)puVar33 + (long)piVar48))
          {
            puVar36 = puVar33;
            if (puVar33 < puVar24) {
              if (*puVar32 == uVar37) {
                lVar41 = 0;
                puVar32 = (ulong *)(lVar38 + 8 + uVar20);
                puVar36 = (ulong *)((long)local_78 + 10);
                do {
                  if (puVar24 <= puVar36) goto joined_r0x0001006db730;
                  uVar20 = *puVar32;
                  uVar42 = *puVar36;
                  lVar41 = lVar41 + 8;
                  puVar32 = puVar32 + 1;
                  puVar36 = puVar36 + 1;
                } while (uVar20 == uVar42);
                uVar42 = uVar42 ^ uVar20;
                uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                piVar47 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
              }
              else {
                uVar20 = *puVar32 ^ uVar37;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                piVar47 = (int *)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006db730:
              if (puVar36 < puVar29) {
                if ((int)*puVar32 == (int)*puVar36) {
                  puVar32 = (ulong *)((long)puVar32 + 4);
                  puVar36 = (ulong *)((long)puVar36 + 4);
                }
              }
              if (puVar36 < puVar25) {
                if ((short)*puVar32 == (short)*puVar36) {
                  puVar32 = (ulong *)((long)puVar32 + 2);
                  puVar36 = (ulong *)((long)puVar36 + 2);
                }
              }
              if ((puVar36 < puVar1) && ((char)*puVar32 == (char)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 1);
              }
              piVar47 = (int *)((long)puVar36 - (long)puVar33);
            }
            goto joined_r0x0001006db7a8;
          }
        }
        if ((uVar45 <= uVar10) ||
           ((iVar15 = iVar15 + -1, iVar15 == 0 ||
            (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4), uVar45 <= uVar31))))
        goto joined_r0x0001006dc400;
      } while( true );
    }
  }
  else if (iVar15 == 5) {
    lVar27 = *(long *)(param_1 + 0x40);
    uVar45 = *(uint *)(param_1 + 0xbc);
    uVar9 = 1 << (ulong)(uVar45 & 0x1f);
    lVar38 = *(long *)(param_1 + 8);
    lVar44 = *(long *)(param_1 + 0x10);
    uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar35 = (ulong)uVar5;
    uVar17 = (uint)((long)puVar33 - lVar38);
    uVar37 = (ulong)*(uint *)(param_1 + 0x24);
    uVar31 = uVar17 - uVar10;
    if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
      uVar31 = *(uint *)(param_1 + 0x1c);
    }
    uVar10 = 0;
    if (uVar9 <= uVar17) {
      uVar10 = uVar17 - uVar9;
    }
    uVar6 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar17) {
      do {
        uVar20 = (ulong)(*(long *)(lVar38 + uVar37) * -0x30e4432345000000) >> (uVar16 & 0x3f);
        *(undefined4 *)(lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + uVar20 * 4);
        *(uint *)(lVar41 + uVar20 * 4) = (uint)uVar37;
        uVar37 = uVar37 + 1;
      } while (((long)puVar33 - lVar38 & 0xffffffffU) != uVar37);
    }
    *(uint *)(param_1 + 0x24) = uVar17;
    uVar37 = *puVar33;
    uVar45 = *(uint *)(lVar41 + (uVar37 * -0x30e4432345000000 >> (uVar16 & 0x3f)) * 4);
    if (uVar31 < uVar45) {
      iVar15 = 1 << (ulong)(uVar6 & 0x1f);
      puVar30 = (ulong *)((long)local_78 + 6);
      piVar48 = (int *)0x3;
      uVar16 = 999999999;
      do {
        uVar20 = (ulong)uVar45;
        if (uVar45 < uVar5) {
          if (*(int *)(lVar44 + uVar20) == *(int *)puVar33) {
            puVar32 = (ulong *)((int *)(lVar44 + uVar20) + 1);
            puVar36 = (ulong *)((long)puVar30 + ((lVar44 + uVar35) - (long)puVar32));
            if (puVar1 <= puVar36) {
              puVar36 = puVar1;
            }
            if (puVar30 < (ulong *)((long)puVar36 - 7U)) {
              if (*puVar32 == *puVar30) {
                lVar41 = 0;
                puVar39 = (ulong *)(lVar44 + 0xc + uVar20);
                puVar49 = (ulong *)((long)local_78 + 0xe);
                do {
                  if ((ulong *)((long)puVar36 - 7U) <= puVar49) {
                    if (puVar49 < (ulong *)((long)puVar36 - 3U)) goto LAB_1006dbbf8;
                    goto LAB_1006dbc14;
                  }
                  uVar20 = *puVar39;
                  uVar42 = *puVar49;
                  lVar41 = lVar41 + 8;
                  puVar39 = puVar39 + 1;
                  puVar49 = puVar49 + 1;
                } while (uVar20 == uVar42);
                uVar42 = uVar42 ^ uVar20;
                uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
              else {
                uVar20 = *puVar30 ^ *puVar32;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
              }
            }
            else {
              puVar39 = puVar32;
              puVar49 = puVar30;
              if (puVar30 < (ulong *)((long)puVar36 - 3U)) {
LAB_1006dbbf8:
                if ((int)*puVar39 == (int)*puVar49) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar49 = (ulong *)((long)puVar49 + 4);
                }
              }
LAB_1006dbc14:
              if (puVar49 < (ulong *)((long)puVar36 - 1U)) {
                if ((short)*puVar39 == (short)*puVar49) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar49 = (ulong *)((long)puVar49 + 2);
                }
              }
              if ((puVar49 < puVar36) && ((char)*puVar39 == (char)*puVar49)) {
                puVar49 = (ulong *)((long)puVar49 + 1);
              }
              uVar20 = (long)puVar49 - (long)puVar30;
            }
            if ((long)puVar32 + uVar20 == lVar44 + uVar35) {
              puVar32 = (ulong *)((long)puVar30 + uVar20);
              puVar36 = (ulong *)(lVar38 + uVar35);
              puVar39 = puVar32;
              if (puVar32 < puVar24) {
                uVar42 = *(ulong *)(lVar38 + uVar35);
                if (uVar42 == *puVar32) {
                  lVar41 = 0;
                  puVar36 = (ulong *)(lVar38 + 8 + uVar35);
                  puVar39 = (ulong *)((long)local_78 + 0xe + uVar20);
                  do {
                    if (puVar24 <= puVar39) goto LAB_1006dbdbc;
                    uVar42 = *puVar36;
                    uVar43 = *puVar39;
                    lVar41 = lVar41 + 8;
                    puVar36 = puVar36 + 1;
                    puVar39 = puVar39 + 1;
                  } while (uVar42 == uVar43);
                  uVar43 = uVar43 ^ uVar42;
                  uVar42 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10
                  ;
                  piVar47 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3)
                                    + uVar20 + 4);
                }
                else {
                  uVar42 = *puVar32 ^ uVar42;
                  uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10
                  ;
                  piVar47 = (int *)(((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3) + uVar20
                                   + 4);
                }
              }
              else {
LAB_1006dbdbc:
                if (puVar39 < puVar29) {
                  if ((int)*puVar36 == (int)*puVar39) {
                    puVar36 = (ulong *)((long)puVar36 + 4);
                    puVar39 = (ulong *)((long)puVar39 + 4);
                  }
                }
                if (puVar39 < puVar25) {
                  if (*(short *)puVar36 == *(short *)puVar39) {
                    puVar36 = (ulong *)((long)puVar36 + 2);
                    puVar39 = (ulong *)((long)puVar39 + 2);
                  }
                }
                if ((puVar39 < puVar1) && ((char)*puVar36 == (char)*puVar39)) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
                piVar47 = (int *)((long)puVar39 + (uVar20 - (long)puVar32) + 4);
              }
            }
            else {
              piVar47 = (int *)(uVar20 + 4);
            }
joined_r0x0001006dbcfc:
            if ((piVar48 < piVar47) &&
               (uVar16 = (ulong)((uVar17 + 2) - uVar45), piVar48 = piVar47,
               (ulong *)((long)puVar33 + (long)piVar47) == puVar1)) goto joined_r0x0001006dc400;
          }
        }
        else {
          puVar32 = (ulong *)(lVar38 + uVar20);
          if (*(char *)((long)puVar32 + (long)piVar48) == *(char *)((long)puVar33 + (long)piVar48))
          {
            puVar36 = puVar33;
            if (puVar33 < puVar24) {
              if (*puVar32 == uVar37) {
                lVar41 = 0;
                puVar32 = (ulong *)(lVar38 + 8 + uVar20);
                puVar36 = (ulong *)((long)local_78 + 10);
                do {
                  if (puVar24 <= puVar36) goto joined_r0x0001006dbc84;
                  uVar20 = *puVar32;
                  uVar42 = *puVar36;
                  lVar41 = lVar41 + 8;
                  puVar32 = puVar32 + 1;
                  puVar36 = puVar36 + 1;
                } while (uVar20 == uVar42);
                uVar42 = uVar42 ^ uVar20;
                uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                piVar47 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
              }
              else {
                uVar20 = *puVar32 ^ uVar37;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                piVar47 = (int *)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006dbc84:
              if (puVar36 < puVar29) {
                if ((int)*puVar32 == (int)*puVar36) {
                  puVar32 = (ulong *)((long)puVar32 + 4);
                  puVar36 = (ulong *)((long)puVar36 + 4);
                }
              }
              if (puVar36 < puVar25) {
                if ((short)*puVar32 == (short)*puVar36) {
                  puVar32 = (ulong *)((long)puVar32 + 2);
                  puVar36 = (ulong *)((long)puVar36 + 2);
                }
              }
              if ((puVar36 < puVar1) && ((char)*puVar32 == (char)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 1);
              }
              piVar47 = (int *)((long)puVar36 - (long)puVar33);
            }
            goto joined_r0x0001006dbcfc;
          }
        }
        if ((uVar45 <= uVar10) ||
           ((iVar15 = iVar15 + -1, iVar15 == 0 ||
            (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4), uVar45 <= uVar31))))
        goto joined_r0x0001006dc400;
      } while( true );
    }
  }
  else {
    lVar27 = *(long *)(param_1 + 0x40);
    uVar45 = *(uint *)(param_1 + 0xbc);
    uVar9 = 1 << (ulong)(uVar45 & 0x1f);
    lVar38 = *(long *)(param_1 + 8);
    lVar44 = *(long *)(param_1 + 0x10);
    uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar35 = (ulong)uVar5;
    uVar17 = (uint)((long)puVar33 - lVar38);
    uVar37 = (ulong)*(uint *)(param_1 + 0x24);
    uVar31 = uVar17 - uVar10;
    if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
      uVar31 = *(uint *)(param_1 + 0x1c);
    }
    uVar10 = 0;
    if (uVar9 <= uVar17) {
      uVar10 = uVar17 - uVar9;
    }
    uVar6 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar13 = 0x20 - *(int *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x24) < uVar17) {
      do {
        uVar11 = (uint)(*(int *)(lVar38 + uVar37) * -0x61c8864f) >> (ulong)(uVar13 & 0x1f);
        *(undefined4 *)(lVar27 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + (ulong)uVar11 * 4);
        *(uint *)(lVar41 + (ulong)uVar11 * 4) = (uint)uVar37;
        uVar37 = uVar37 + 1;
      } while (((long)puVar33 - lVar38 & 0xffffffffU) != uVar37);
    }
    *(uint *)(param_1 + 0x24) = uVar17;
    uVar45 = *(uint *)(lVar41 + (ulong)((uint)(*(int *)puVar33 * -0x61c8864f) >>
                                       (ulong)(uVar13 & 0x1f)) * 4);
    if (uVar31 < uVar45) {
      iVar15 = 1 << (ulong)(uVar6 & 0x1f);
      puVar30 = (ulong *)((long)local_78 + 6);
      piVar47 = (int *)0x3;
      uVar16 = 999999999;
      do {
        uVar37 = (ulong)uVar45;
        if (uVar45 < uVar5) {
          if (*(int *)(lVar44 + uVar37) == *(int *)puVar33) {
            puVar32 = (ulong *)((int *)(lVar44 + uVar37) + 1);
            puVar36 = (ulong *)((long)puVar30 + ((lVar44 + uVar35) - (long)puVar32));
            if (puVar1 <= puVar36) {
              puVar36 = puVar1;
            }
            if (puVar30 < (ulong *)((long)puVar36 - 7U)) {
              if (*puVar32 == *puVar30) {
                lVar41 = 0;
                puVar39 = (ulong *)(lVar44 + 0xc + uVar37);
                puVar49 = (ulong *)((long)local_78 + 0xe);
                do {
                  if ((ulong *)((long)puVar36 - 7U) <= puVar49) {
                    if (puVar49 < (ulong *)((long)puVar36 - 3U)) goto LAB_1006dc110;
                    goto LAB_1006dc12c;
                  }
                  uVar37 = *puVar39;
                  uVar20 = *puVar49;
                  lVar41 = lVar41 + 8;
                  puVar39 = puVar39 + 1;
                  puVar49 = puVar49 + 1;
                } while (uVar37 == uVar20);
                uVar20 = uVar20 ^ uVar37;
                uVar37 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
                uVar37 = lVar41 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
              }
              else {
                uVar37 = *puVar30 ^ *puVar32;
                uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
                uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
              }
            }
            else {
              puVar39 = puVar32;
              puVar49 = puVar30;
              if (puVar30 < (ulong *)((long)puVar36 - 3U)) {
LAB_1006dc110:
                if ((int)*puVar39 == (int)*puVar49) {
                  puVar39 = (ulong *)((long)puVar39 + 4);
                  puVar49 = (ulong *)((long)puVar49 + 4);
                }
              }
LAB_1006dc12c:
              if (puVar49 < (ulong *)((long)puVar36 - 1U)) {
                if ((short)*puVar39 == (short)*puVar49) {
                  puVar39 = (ulong *)((long)puVar39 + 2);
                  puVar49 = (ulong *)((long)puVar49 + 2);
                }
              }
              if ((puVar49 < puVar36) && ((char)*puVar39 == (char)*puVar49)) {
                puVar49 = (ulong *)((long)puVar49 + 1);
              }
              uVar37 = (long)puVar49 - (long)puVar30;
            }
            if ((long)puVar32 + uVar37 == lVar44 + uVar35) {
              puVar32 = (ulong *)((long)puVar30 + uVar37);
              puVar36 = (ulong *)(lVar38 + uVar35);
              puVar39 = puVar32;
              if (puVar32 < puVar24) {
                uVar20 = *(ulong *)(lVar38 + uVar35);
                if (uVar20 == *puVar32) {
                  lVar41 = 0;
                  puVar36 = (ulong *)(lVar38 + 8 + uVar35);
                  puVar39 = (ulong *)((long)local_78 + 0xe + uVar37);
                  do {
                    if (puVar24 <= puVar39) goto LAB_1006dc2d4;
                    uVar20 = *puVar36;
                    uVar42 = *puVar39;
                    lVar41 = lVar41 + 8;
                    puVar36 = puVar36 + 1;
                    puVar39 = puVar39 + 1;
                  } while (uVar20 == uVar42);
                  uVar42 = uVar42 ^ uVar20;
                  uVar20 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3)
                                    + uVar37 + 4);
                }
                else {
                  uVar20 = *puVar32 ^ uVar20;
                  uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  piVar48 = (int *)(((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) + uVar37
                                   + 4);
                }
              }
              else {
LAB_1006dc2d4:
                if (puVar39 < puVar29) {
                  if ((int)*puVar36 == (int)*puVar39) {
                    puVar36 = (ulong *)((long)puVar36 + 4);
                    puVar39 = (ulong *)((long)puVar39 + 4);
                  }
                }
                if (puVar39 < puVar25) {
                  if (*(short *)puVar36 == *(short *)puVar39) {
                    puVar36 = (ulong *)((long)puVar36 + 2);
                    puVar39 = (ulong *)((long)puVar39 + 2);
                  }
                }
                if ((puVar39 < puVar1) && ((char)*puVar36 == (char)*puVar39)) {
                  puVar39 = (ulong *)((long)puVar39 + 1);
                }
                piVar48 = (int *)((long)puVar39 + (uVar37 - (long)puVar32) + 4);
              }
            }
            else {
              piVar48 = (int *)(uVar37 + 4);
            }
joined_r0x0001006dc214:
            if ((piVar47 < piVar48) &&
               (uVar16 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar48,
               (ulong *)((long)puVar33 + (long)piVar48) == puVar1)) goto joined_r0x0001006dc400;
          }
        }
        else {
          puVar32 = (ulong *)(lVar38 + uVar37);
          if (*(char *)((long)puVar32 + (long)piVar47) == *(char *)((long)puVar33 + (long)piVar47))
          {
            puVar36 = puVar33;
            if (puVar33 < puVar24) {
              if (*puVar32 == *puVar33) {
                lVar41 = 0;
                puVar32 = (ulong *)(lVar38 + 8 + uVar37);
                puVar36 = (ulong *)((long)local_78 + 10);
                do {
                  if (puVar24 <= puVar36) goto joined_r0x0001006dc19c;
                  uVar37 = *puVar32;
                  uVar20 = *puVar36;
                  lVar41 = lVar41 + 8;
                  puVar32 = puVar32 + 1;
                  puVar36 = puVar36 + 1;
                } while (uVar37 == uVar20);
                uVar20 = uVar20 ^ uVar37;
                uVar37 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
                piVar48 = (int *)(lVar41 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3));
              }
              else {
                uVar37 = *puVar33 ^ *puVar32;
                uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
                piVar48 = (int *)((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006dc19c:
              if (puVar36 < puVar29) {
                if ((int)*puVar32 == (int)*puVar36) {
                  puVar32 = (ulong *)((long)puVar32 + 4);
                  puVar36 = (ulong *)((long)puVar36 + 4);
                }
              }
              if (puVar36 < puVar25) {
                if ((short)*puVar32 == (short)*puVar36) {
                  puVar32 = (ulong *)((long)puVar32 + 2);
                  puVar36 = (ulong *)((long)puVar36 + 2);
                }
              }
              if ((puVar36 < puVar1) && ((char)*puVar32 == (char)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 1);
              }
              piVar48 = (int *)((long)puVar36 - (long)puVar33);
            }
            goto joined_r0x0001006dc214;
          }
        }
        piVar48 = piVar47;
        if ((uVar45 <= uVar10) ||
           ((iVar15 = iVar15 + -1, iVar15 == 0 ||
            (uVar45 = *(uint *)(lVar27 + (ulong)(uVar45 & uVar9 - 1) * 4), uVar45 <= uVar31))))
        goto joined_r0x0001006dc400;
      } while( true );
    }
  }
  goto LAB_1006dc4a0;
joined_r0x0001006dc400:
  if ((piVar48 < (int *)0x4) ||
     ((int)((int)piVar48 * 4 - ((uint)LZCOUNT((int)uVar16 + 1) ^ 0x1f)) <=
      (int)(((uint)LZCOUNT((int)local_c0 + 1) ^ 0xffffffe0) + (int)puVar28 * 4 + 8)))
  goto LAB_1006dc4a0;
LAB_1006dc450:
  puVar28 = (ulong *)piVar48;
  local_c0 = uVar16;
  local_e0 = puVar33;
  local_78 = puVar33;
  iVar15 = iVar14;
  if (puVar22 <= puVar33) goto LAB_1006dc4a0;
  goto LAB_1006da268;
}

