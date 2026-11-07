// rea decompile_all
// name: FUN_1006b24f4
// address: 0x1006b24f4
// body: available
// range: 0x1006b24f4-0x1006b28d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b24f4(ulong *param_1,ulong param_2,byte *param_3,ulong param_4,ushort *param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  byte *pbVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  
  if ((2 < param_4) && (8 < param_2)) {
    puVar16 = (ulong *)((long)param_1 + (param_2 - 8));
    uVar9 = *param_5;
    lVar18 = (long)(1 << (ulong)(uVar9 - 1 & 0x1f));
    if (uVar9 == 0) {
      lVar18 = 1;
    }
    iVar7 = *(int *)(param_5 + lVar18 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2 + 2);
    uVar23 = iVar7 + 0x8000;
    uVar21 = (ulong)param_5[(ulong)((uVar23 & 0xffff0000) - iVar7 >>
                                   ((ulong)(uVar23 >> 0x10) & 0x3f)) +
                            (long)*(int *)(param_5 +
                                          lVar18 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2) + 2];
    if ((param_4 & 1) == 0) {
      uVar20 = 0;
      uVar23 = 0;
      pbVar17 = param_3 + (param_4 - 2);
      iVar7 = *(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar17 * 4 + 2 + 2);
      uVar1 = iVar7 + 0x8000;
      uVar10 = param_5[(ulong)((uVar1 & 0xffff0000) - iVar7 >> ((ulong)(uVar1 >> 0x10) & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar17 * 4 + 2) + 2];
      puVar19 = param_1;
      uVar22 = uVar21;
    }
    else {
      pbVar17 = param_3 + (param_4 - 3);
      iVar8 = *(int *)(param_5 + lVar18 * 2 + (ulong)param_3[param_4 - 2] * 4 + 2 + 2);
      uVar1 = iVar8 + 0x8000;
      uVar22 = (ulong)param_5[(ulong)((uVar1 & 0xffff0000) - iVar8 >>
                                     ((ulong)(uVar1 >> 0x10) & 0x3f)) +
                              (long)*(int *)(param_5 +
                                            lVar18 * 2 + (ulong)param_3[param_4 - 2] * 4 + 2) + 2];
      uVar20 = *(uint *)(param_5 + lVar18 * 2 + (ulong)*pbVar17 * 4 + 2 + 2) + uVar21;
      uVar21 = *(uint *)((long)&PTR___mh_execute_header_10084e8c0 + (uVar20 >> 0x10) * 4) & uVar21;
      uVar10 = param_5[(ulong)(param_5[(ulong)((uVar23 & 0xffff0000) - iVar7 >>
                                              ((ulong)(uVar23 >> 0x10) & 0x3f)) +
                                       (long)*(int *)(param_5 +
                                                     lVar18 * 2 +
                                                     (ulong)param_3[param_4 - 1] * 4 + 2) + 2] >>
                              (uVar20 >> 0x10 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar17 * 4 + 2) + 2];
      *param_1 = uVar21;
      puVar5 = (ulong *)((long)param_1 + (uVar20 >> 0x13));
      puVar19 = puVar5;
      if ((param_6 == 0) && (puVar19 = puVar16, puVar5 <= puVar16)) {
        puVar19 = puVar5;
      }
      uVar23 = (uint)(uVar20 >> 0x10) & 7;
      uVar20 = uVar21 >> ((uVar20 >> 0x13 & 7) << 3);
    }
    uVar21 = (ulong)uVar10;
    if (((uint)param_4 >> 1 & 1) == 0) {
      uVar13 = *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-1] * 4 + 2 + 2) + uVar22;
      uVar14 = uVar13 >> 0x10;
      uVar15 = *(uint *)((long)&PTR___mh_execute_header_10084e8c0 + uVar14 * 4) & uVar22;
      uVar22 = (ulong)param_5[(uVar22 >> (uVar14 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-1] * 4 + 2) + 2]
      ;
      uVar14 = *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-2] * 4 + 2 + 2) + uVar21;
      uVar12 = uVar14 >> 0x10;
      uVar1 = uVar23 + (int)(uVar13 >> 0x10);
      uVar2 = uVar1 + (int)(uVar14 >> 0x10);
      uVar20 = uVar15 << uVar23 |
               (*(uint *)((long)&PTR___mh_execute_header_10084e8c0 + uVar12 * 4) & uVar21) <<
               ((ulong)uVar1 & 0x3f) | uVar20;
      uVar21 = (ulong)param_5[(ulong)(uVar10 >> (uVar12 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-2] * 4 + 2) + 2]
      ;
      uVar13 = (ulong)(uVar2 >> 3);
      *puVar19 = uVar20;
      puVar5 = (ulong *)((long)puVar19 + uVar13);
      puVar19 = puVar5;
      if ((param_6 == 0) && (puVar19 = puVar16, puVar5 <= puVar16)) {
        puVar19 = puVar5;
      }
      uVar20 = uVar20 >> ((uVar13 & 7) << 3);
      uVar23 = uVar2 & 7;
      pbVar17 = pbVar17 + -2;
    }
    while (param_3 < pbVar17) {
      uVar13 = uVar22 + *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-1] * 4 + 2 + 2);
      uVar12 = uVar13 >> 0x10;
      uVar10 = param_5[(uVar22 >> (uVar12 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-1] * 4 + 2) + 2];
      uVar14 = uVar21 + *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-2] * 4 + 2 + 2);
      uVar15 = uVar14 >> 0x10;
      uVar1 = uVar23 + (int)(uVar13 >> 0x10);
      uVar2 = uVar1 + (int)(uVar14 >> 0x10);
      uVar11 = param_5[(uVar21 >> (uVar15 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-2] * 4 + 2) + 2];
      uVar13 = (ulong)*(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-3] * 4 + 2 + 2) +
               (ulong)uVar10;
      uVar24 = uVar13 >> 0x10;
      uVar14 = (ulong)*(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-4] * 4 + 2 + 2) +
               (ulong)uVar11;
      uVar25 = uVar14 >> 0x10;
      uVar3 = uVar2 + (int)(uVar13 >> 0x10);
      uVar4 = uVar3 + (int)(uVar14 >> 0x10);
      uVar14 = (ulong)(uVar4 >> 3);
      puVar5 = (ulong *)((long)puVar19 + uVar14);
      uVar13 = uVar22 & *(uint *)((long)&PTR___mh_execute_header_10084e8c0 + uVar12 * 4);
      uVar22 = (ulong)param_5[(ulong)(uVar10 >> (uVar24 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-3] * 4 + 2) + 2]
      ;
      uVar20 = uVar13 << uVar23 | uVar20 |
               (uVar21 & *(uint *)((long)&PTR___mh_execute_header_10084e8c0 + uVar15 * 4)) <<
               ((ulong)uVar1 & 0x3f) |
               ((ulong)*(uint *)((long)&PTR___mh_execute_header_10084e8c0 + uVar24 * 4) &
               (ulong)uVar10) << ((ulong)uVar2 & 0x3f) |
               ((ulong)*(uint *)((long)&PTR___mh_execute_header_10084e8c0 + uVar25 * 4) &
               (ulong)uVar11) << ((ulong)uVar3 & 0x3f);
      uVar21 = (ulong)param_5[(ulong)(uVar11 >> (uVar25 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-4] * 4 + 2) + 2]
      ;
      puVar6 = puVar16;
      if (puVar5 <= puVar16 || param_6 != 0) {
        puVar6 = puVar5;
      }
      *puVar19 = uVar20;
      uVar23 = uVar4 & 7;
      uVar20 = uVar20 >> ((uVar14 & 7) << 3);
      pbVar17 = pbVar17 + -4;
      puVar19 = puVar6;
    }
    uVar13 = (ulong)*(uint *)((long)&PTR___mh_execute_header_10084e8c0 + (ulong)uVar9 * 4);
    uVar20 = (uVar22 & uVar13) << uVar23 | uVar20;
    uVar23 = uVar23 + uVar9;
    uVar22 = (ulong)(uVar23 >> 3);
    *puVar19 = uVar20;
    puVar19 = (ulong *)((long)puVar19 + uVar22);
    puVar5 = puVar16;
    if (puVar19 <= puVar16) {
      puVar5 = puVar19;
    }
    uVar23 = uVar23 & 7;
    uVar21 = (uVar21 & uVar13) << uVar23 | uVar20 >> ((uVar22 & 7) << 3);
    uVar23 = uVar23 + uVar9;
    uVar20 = (ulong)(uVar23 >> 3);
    *puVar5 = uVar21;
    puVar5 = (ulong *)((long)puVar5 + uVar20);
    puVar19 = puVar16;
    if (puVar5 <= puVar16) {
      puVar19 = puVar5;
    }
    uVar23 = uVar23 & 7;
    uVar1 = uVar23 + 1;
    *puVar19 = uVar21 >> ((uVar20 & 7) << 3) | 1L << uVar23;
    puVar19 = (ulong *)((long)puVar19 + (ulong)(uVar1 >> 3));
    puVar5 = puVar16;
    if (puVar19 <= puVar16) {
      puVar5 = puVar19;
    }
    if (puVar5 < puVar16) {
      lVar18 = (long)puVar5 - (long)param_1;
      if ((uVar1 & 7) != 0) {
        lVar18 = lVar18 + 1;
      }
      return lVar18;
    }
  }
  return 0;
}

