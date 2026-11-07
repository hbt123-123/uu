// rea decompile_all
// name: FUN_1000f56f8
// address: 0x1000f56f8
// body: available
// range: 0x1000f56f8-0x1000f5987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000f56f8(double param_1,double param_2,ulong param_3)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  lVar8 = *(long *)(param_3 + 0x10);
  if (lVar8 == 0) {
    lVar7 = 0;
    uVar6 = 1;
  }
  else {
    lVar7 = 0;
    puVar9 = (undefined8 *)(param_3 + 0x38);
    uVar5 = param_3;
    do {
      _CGRectContainsPoint(puVar9[-3],puVar9[-2],puVar9[-1],*puVar9,param_1,param_2);
      if ((uVar5 & 1) != 0) goto LAB_1000f594c;
      lVar7 = lVar7 + 1;
      puVar9 = puVar9 + 4;
    } while (lVar8 != lVar7);
    if (lVar8 == 0) {
      uVar6 = 1;
      lVar7 = 0;
    }
    else {
      if (lVar8 == 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar9 = (undefined8 *)(param_3 + 0x58);
        lVar11 = 0x7fffffffffffffff;
        lVar12 = 1;
        lVar10 = 0;
        do {
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f5984);
            (*pcVar4)();
          }
          dVar21 = (double)puVar9[-3];
          uVar22 = puVar9[-2];
          uVar23 = puVar9[-1];
          uVar6 = *puVar9;
          dVar13 = dVar21;
          _CGRectGetMinX(dVar21,uVar22,uVar23,uVar6);
          dVar15 = dVar21;
          _CGRectGetMaxX(dVar21,uVar22,uVar23,uVar6);
          dVar14 = dVar21;
          _CGRectGetMinY(dVar21,uVar22,uVar23,uVar6);
          _CGRectGetMaxY(dVar21,uVar22,uVar23,uVar6);
          if (lVar8 <= lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f5988);
            (*pcVar4)();
          }
          dVar14 = dVar14 - param_2;
          dVar21 = param_2 - dVar21;
          dVar17 = dVar21;
          if (dVar21 < 0.0) {
            dVar17 = 0.0;
          }
          if (dVar21 < dVar14) {
            dVar21 = dVar14;
          }
          if (0.0 < dVar14) {
            dVar17 = dVar21;
          }
          dVar13 = dVar13 - param_1;
          dVar15 = param_1 - dVar15;
          dVar14 = dVar15;
          if (dVar15 < 0.0) {
            dVar14 = 0.0;
          }
          if (dVar15 < dVar13) {
            dVar15 = dVar13;
          }
          if (0.0 < dVar13) {
            dVar14 = dVar15;
          }
          pdVar1 = (double *)(param_3 + 0x20 + lVar10 * 0x20);
          dVar21 = *pdVar1;
          dVar18 = pdVar1[1];
          dVar19 = pdVar1[2];
          dVar20 = pdVar1[3];
          dVar13 = dVar21;
          _CGRectGetMinX(dVar21,dVar18,dVar19,dVar20);
          dVar13 = dVar13 - param_1;
          dVar15 = dVar21;
          _CGRectGetMaxX(dVar21,dVar18,dVar19,dVar20);
          dVar15 = param_1 - dVar15;
          dVar16 = dVar15;
          if (dVar15 < 0.0) {
            dVar16 = 0.0;
          }
          if (dVar15 < dVar13) {
            dVar15 = dVar13;
          }
          if (0.0 < dVar13) {
            dVar16 = dVar15;
          }
          dVar13 = dVar21;
          _CGRectGetMinY(dVar21,dVar18,dVar19,dVar20);
          dVar13 = dVar13 - param_2;
          _CGRectGetMaxY(dVar21,dVar18,dVar19,dVar20);
          dVar21 = param_2 - dVar21;
          dVar15 = dVar21;
          if (dVar21 < 0.0) {
            dVar15 = 0.0;
          }
          if (dVar21 < dVar13) {
            dVar21 = dVar13;
          }
          if (0.0 < dVar13) {
            dVar15 = dVar21;
          }
          lVar2 = lVar12;
          lVar3 = lVar12;
          if (dVar16 * dVar16 + dVar15 * dVar15 <= dVar14 * dVar14 + dVar17 * dVar17) {
            lVar2 = lVar10;
            lVar3 = lVar7;
          }
          lVar7 = lVar3;
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + -1;
          puVar9 = puVar9 + 4;
          lVar10 = lVar2;
        } while (lVar8 != lVar12);
      }
LAB_1000f594c:
      uVar6 = 0;
    }
  }
  auVar24._8_8_ = uVar6;
  auVar24._0_8_ = lVar7;
  return auVar24;
}

