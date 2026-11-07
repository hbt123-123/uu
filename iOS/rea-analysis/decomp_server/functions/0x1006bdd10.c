// rea decompile_all
// name: FUN_1006bdd10
// address: 0x1006bdd10
// body: available
// range: 0x1006bdd10-0x1006be25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006bdd10(ulong *param_1,ulong param_2,ushort *param_3,long param_4,ushort *param_5,
                  long param_6,ushort *param_7,long param_8,long param_9,ulong param_10,int param_11
                  )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  
  if (param_2 < 9) {
    return -0x46;
  }
  lVar18 = param_10 - 1;
  uVar9 = (uint)*param_3;
  lVar5 = (long)(1 << (ulong)(uVar9 - 1 & 0x1f));
  if (*param_3 == 0) {
    lVar5 = 1;
  }
  iVar1 = *(int *)(param_3 + lVar5 * 2 + (ulong)*(byte *)(param_4 + lVar18) * 4 + 2 + 2);
  uVar10 = iVar1 + 0x8000;
  uVar15 = (ulong)param_3[(ulong)((uVar10 & 0xffff0000) - iVar1 >> ((ulong)(uVar10 >> 0x10) & 0x3f))
                          + (long)*(int *)(param_3 +
                                          lVar5 * 2 + (ulong)*(byte *)(param_4 + lVar18) * 4 + 2) +
                            2];
  bVar4 = *(byte *)(param_6 + lVar18);
  uVar20 = (ulong)bVar4;
  uVar10 = (uint)*param_5;
  lVar13 = (long)(1 << (ulong)(uVar10 - 1 & 0x1f));
  if (*param_5 == 0) {
    lVar13 = 1;
  }
  iVar1 = *(int *)(param_5 + lVar13 * 2 + uVar20 * 4 + 2 + 2);
  uVar12 = iVar1 + 0x8000;
  uVar16 = (ulong)param_5[(ulong)((uVar12 & 0xffff0000) - iVar1 >> ((ulong)(uVar12 >> 0x10) & 0x3f))
                          + (long)*(int *)(param_5 + lVar13 * 2 + uVar20 * 4 + 2) + 2];
  puVar6 = (ulong *)((long)param_1 + (param_2 - 8));
  uVar12 = (uint)*param_7;
  lVar7 = (long)(1 << (ulong)(uVar12 - 1 & 0x1f));
  if (*param_7 == 0) {
    lVar7 = 1;
  }
  iVar1 = *(int *)(param_7 + lVar7 * 2 + (ulong)*(byte *)(param_8 + lVar18) * 4 + 2 + 2);
  uVar22 = iVar1 + 0x8000;
  uVar17 = (ulong)param_7[(ulong)((uVar22 & 0xffff0000) - iVar1 >> ((ulong)(uVar22 >> 0x10) & 0x3f))
                          + (long)*(int *)(param_7 +
                                          lVar7 * 2 + (ulong)*(byte *)(param_8 + lVar18) * 4 + 2) +
                            2];
  puVar24 = (uint *)(param_9 + lVar18 * 8);
  uVar22 = *(uint *)(&DAT_10084fb80 + (ulong)*(byte *)(param_8 + lVar18) * 4);
  uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 +
                            (ulong)*(uint *)(&DAT_10084fc10 + (ulong)*(byte *)(param_4 + lVar18) * 4
                                            ) * 4) & (uint)*(ushort *)((long)puVar24 + 6)) <<
           ((ulong)uVar22 & 0x3f) |
           (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar22 * 4) &
                  (uint)(ushort)puVar24[1]);
  uVar22 = *(uint *)(&DAT_10084fc10 + (ulong)*(byte *)(param_4 + lVar18) * 4) + uVar22;
  uVar25 = (ulong)uVar22;
  puVar8 = param_1;
  if (param_11 == 0) {
    uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + uVar20 * 4) & *puVar24) <<
             (uVar25 & 0x3f) | uVar23;
    uVar22 = uVar22 + bVar4;
  }
  else {
    if (bVar4 < 0x38) {
      uVar28 = 0;
      uVar27 = *puVar24;
    }
    else {
      uVar27 = *puVar24;
      uVar28 = bVar4 - 0x38;
      if (uVar28 != 0) {
        uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar28 * 4) &
                        uVar27) << (uVar25 & 0x3f) | uVar23;
        uVar20 = (ulong)(uVar22 + uVar28 >> 3);
        *param_1 = uVar23;
        puVar21 = (ulong *)((long)param_1 + uVar20);
        puVar8 = puVar6;
        if (puVar21 <= puVar6) {
          puVar8 = puVar21;
        }
        uVar25 = (ulong)(uVar22 + uVar28 & 7);
        uVar23 = uVar23 >> ((uVar20 & 7) << 3);
        uVar20 = 0x38;
      }
    }
    uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + uVar20 * 4) &
                    uVar27 >> (ulong)(uVar28 & 0x1f)) << (uVar25 & 0x3f) | uVar23;
    uVar22 = (int)uVar25 + (int)uVar20;
  }
  *puVar8 = uVar23;
  puVar8 = (ulong *)((long)puVar8 + (ulong)(uVar22 >> 3));
  puVar21 = puVar6;
  if (puVar8 <= puVar6) {
    puVar21 = puVar8;
  }
  uVar23 = uVar23 >> (((ulong)(uVar22 >> 3) & 7) << 3);
  uVar22 = uVar22 & 7;
  uVar20 = param_10 - 2;
  if (1 < param_10) {
    puVar24 = (uint *)(param_9 + param_10 * 8 + -0x10);
    do {
      bVar4 = *(byte *)(param_6 + uVar20);
      uVar26 = (ulong)bVar4;
      uVar25 = uVar16 + *(uint *)(param_5 + lVar13 * 2 + uVar26 * 4 + 2 + 2);
      uVar29 = uVar25 >> 0x10;
      uVar14 = uVar16 & *(uint *)((long)&PTR___mh_execute_header_10084fce4 + uVar29 * 4);
      uVar16 = (ulong)param_5[(uVar16 >> (uVar29 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar13 * 2 + uVar26 * 4 + 2) + 2];
      uVar29 = uVar15 + *(uint *)(param_3 + lVar5 * 2 + (ulong)*(byte *)(param_4 + uVar20) * 4 + 2 +
                                 2);
      uVar11 = uVar29 >> 0x10;
      uVar19 = uVar15 & *(uint *)((long)&PTR___mh_execute_header_10084fce4 + uVar11 * 4);
      uVar27 = uVar22 + (int)(uVar25 >> 0x10);
      uVar28 = uVar27 + (int)(uVar29 >> 0x10);
      uVar2 = *(uint *)(&DAT_10084fb80 + (ulong)*(byte *)(param_8 + uVar20) * 4);
      uVar3 = *(uint *)(&DAT_10084fc10 + (ulong)*(byte *)(param_4 + uVar20) * 4);
      uVar15 = (ulong)param_3[(uVar15 >> (uVar11 & 0x3f)) +
                              (long)*(int *)(param_3 +
                                            lVar5 * 2 + (ulong)*(byte *)(param_4 + uVar20) * 4 + 2)
                              + 2];
      uVar25 = uVar17 + *(uint *)(param_7 + lVar7 * 2 + (ulong)*(byte *)(param_8 + uVar20) * 4 + 2 +
                                 2);
      uVar29 = uVar25 >> 0x10;
      uVar23 = uVar14 << uVar22 | uVar23 |
               uVar19 << ((ulong)uVar27 & 0x3f) |
               (uVar17 & *(uint *)((long)&PTR___mh_execute_header_10084fce4 + uVar29 * 4)) <<
               ((ulong)uVar28 & 0x3f);
      uVar28 = uVar28 + (int)(uVar25 >> 0x10);
      uVar17 = (ulong)param_7[(uVar17 >> (uVar29 & 0x3f)) +
                              (long)*(int *)(param_7 +
                                            lVar7 * 2 + (ulong)*(byte *)(param_8 + uVar20) * 4 + 2)
                              + 2];
      uVar22 = uVar2 + bVar4 + uVar3;
      if (0x1e < uVar22) {
        uVar27 = uVar28 >> 3;
        *puVar21 = uVar23;
        puVar8 = (ulong *)((long)puVar21 + (ulong)uVar27);
        puVar21 = puVar6;
        if (puVar8 <= puVar6) {
          puVar21 = puVar8;
        }
        uVar28 = uVar28 & 7;
        uVar23 = uVar23 >> (((ulong)uVar27 & 7) << 3);
      }
      uVar27 = uVar28 + uVar2 + uVar3;
      uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar2 * 4) &
                      (uint)(ushort)puVar24[1]) << ((ulong)uVar28 & 0x3f) |
               (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar3 * 4) &
                      (uint)*(ushort *)((long)puVar24 + 6)) << ((ulong)(uVar28 + uVar2) & 0x3f) |
               uVar23;
      if (0x38 < uVar22) {
        uVar22 = uVar27 >> 3;
        *puVar21 = uVar23;
        puVar8 = (ulong *)((long)puVar21 + (ulong)uVar22);
        puVar21 = puVar6;
        if (puVar8 <= puVar6) {
          puVar21 = puVar8;
        }
        uVar27 = uVar27 & 7;
        uVar23 = uVar23 >> (((ulong)uVar22 & 7) << 3);
      }
      uVar25 = (ulong)uVar27;
      if (param_11 == 0) {
        uVar22 = *puVar24;
      }
      else if (bVar4 < 0x38) {
        uVar22 = *puVar24;
      }
      else {
        uVar22 = *puVar24;
        uVar28 = bVar4 - 0x38;
        if (uVar28 != 0) {
          uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar28 * 4) &
                          uVar22) << (uVar25 & 0x3f) | uVar23;
          uVar29 = (ulong)(uVar27 + uVar28 >> 3);
          *puVar21 = uVar23;
          puVar8 = (ulong *)((long)puVar21 + uVar29);
          puVar21 = puVar6;
          if (puVar8 <= puVar6) {
            puVar21 = puVar8;
          }
          uVar25 = (ulong)(uVar27 + uVar28 & 7);
          uVar23 = uVar23 >> ((uVar29 & 7) << 3);
          uVar26 = 0x38;
        }
        uVar22 = uVar22 >> (ulong)(uVar28 & 0x1f);
      }
      uVar23 = (ulong)(*(uint *)((long)&PTR___mh_execute_header_10084fce4 + uVar26 * 4) & uVar22) <<
               (uVar25 & 0x3f) | uVar23;
      uVar22 = (int)uVar25 + (int)uVar26;
      uVar25 = (ulong)(uVar22 >> 3);
      *puVar21 = uVar23;
      puVar8 = (ulong *)((long)puVar21 + uVar25);
      puVar21 = puVar6;
      if (puVar8 <= puVar6) {
        puVar21 = puVar8;
      }
      uVar23 = uVar23 >> ((uVar25 & 7) << 3);
      uVar20 = uVar20 - 1;
      uVar22 = uVar22 & 7;
      puVar24 = puVar24 + -2;
    } while (uVar20 < param_10);
  }
  uVar23 = (uVar15 & *(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar9 * 4)) <<
           uVar22 | uVar23;
  uVar15 = (ulong)(uVar22 + uVar9 >> 3);
  *puVar21 = uVar23;
  puVar21 = (ulong *)((long)puVar21 + uVar15);
  puVar8 = puVar6;
  if (puVar21 <= puVar6) {
    puVar8 = puVar21;
  }
  uVar9 = uVar22 + uVar9 & 7;
  uVar15 = (uVar16 & *(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar10 * 4)) <<
           uVar9 | uVar23 >> ((uVar15 & 7) << 3);
  uVar9 = uVar9 + uVar10;
  uVar20 = (ulong)(uVar9 >> 3);
  *puVar8 = uVar15;
  puVar8 = (ulong *)((long)puVar8 + uVar20);
  puVar21 = puVar6;
  if (puVar8 <= puVar6) {
    puVar21 = puVar8;
  }
  uVar9 = uVar9 & 7;
  uVar15 = (uVar17 & *(uint *)((long)&PTR___mh_execute_header_10084fce4 + (ulong)uVar12 * 4)) <<
           uVar9 | uVar15 >> ((uVar20 & 7) << 3);
  uVar9 = uVar9 + uVar12;
  uVar20 = (ulong)(uVar9 >> 3);
  *puVar21 = uVar15;
  puVar21 = (ulong *)((long)puVar21 + uVar20);
  puVar8 = puVar6;
  if (puVar21 <= puVar6) {
    puVar8 = puVar21;
  }
  uVar9 = uVar9 & 7;
  uVar10 = uVar9 + 1;
  *puVar8 = uVar15 >> ((uVar20 & 7) << 3) | 1L << uVar9;
  puVar8 = (ulong *)((long)puVar8 + (ulong)(uVar10 >> 3));
  puVar21 = puVar6;
  if (puVar8 <= puVar6) {
    puVar21 = puVar8;
  }
  if (puVar21 < puVar6) {
    if ((uVar10 & 7) != 0) {
      puVar21 = (ulong *)((long)puVar21 + 1);
    }
    if ((long)puVar21 - (long)param_1 != 0) {
      return (long)puVar21 - (long)param_1;
    }
  }
  return -0x46;
}

