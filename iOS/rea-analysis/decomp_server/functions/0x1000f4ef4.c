// rea decompile_all
// name: FUN_1000f4ef4
// address: 0x1000f4ef4
// body: available
// range: 0x1000f4ef4-0x1000f544f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_1000f4ef4(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  dVar8 = *unaff_x20;
  dVar17 = unaff_x20[1];
  dVar16 = unaff_x20[2];
  dVar12 = unaff_x20[3];
  dVar14 = dVar8;
  _CGRectGetMinX(dVar8,dVar17,dVar16,dVar12);
  if (param_1 <= dVar14) {
    lVar5 = *(long *)((long)unaff_x20[4] + 0x10);
    if (lVar5 != 0) {
      dVar14 = unaff_x20[5];
      puVar6 = (undefined8 *)((long)unaff_x20[4] + 0x38);
      do {
        uVar19 = puVar6[-1];
        uVar18 = *puVar6;
        dVar10 = (double)puVar6[-3];
        uVar7 = puVar6[-2];
        dVar13 = dVar10;
        _CGRectGetMaxX(dVar10,uVar7,uVar19,uVar18);
        dVar15 = dVar8;
        _CGRectGetMinX(dVar8,dVar17,dVar16,dVar12);
        if (ABS(dVar13 - dVar15) <= dVar14) {
          dVar13 = dVar8;
          _CGRectGetMinY(dVar8,dVar17,dVar16,dVar12);
          dVar15 = dVar10;
          _CGRectGetMinY(dVar10,uVar7,uVar19,uVar18);
          if (dVar15 < dVar13) {
            dVar15 = dVar13;
          }
          dVar13 = dVar8;
          _CGRectGetMaxY(dVar8,dVar17,dVar16,dVar12);
          _CGRectGetMaxY(dVar10,uVar7,uVar19,uVar18);
          if (dVar13 <= dVar10) {
            dVar10 = dVar13;
          }
          bVar2 = false;
          bVar3 = true;
          if (dVar15 < dVar10) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar15) && !NAN(param_2)) {
              bVar2 = dVar15 == param_2;
              bVar3 = param_2 <= dVar15;
            }
          }
          bVar1 = true;
          bVar4 = false;
          if (!bVar3 || bVar2) {
            bVar1 = false;
            bVar4 = true;
            if (!NAN(dVar10) && !NAN(param_2)) {
              bVar1 = dVar10 < param_2;
              bVar4 = false;
            }
          }
          if (bVar1 == bVar4) goto LAB_1000f4f50;
        }
        puVar6 = puVar6 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    dVar14 = dVar8;
    _CGRectGetMinX(dVar8,dVar17,dVar16,dVar12);
    dVar14 = dVar14 + unaff_x20[6];
  }
  else {
LAB_1000f4f50:
    dVar13 = dVar8;
    _CGRectGetMaxX(dVar8,dVar17,dVar16,dVar12);
    dVar14 = param_1;
    if (dVar13 <= param_1) {
      lVar5 = *(long *)((long)unaff_x20[4] + 0x10);
      if (lVar5 != 0) {
        dVar13 = unaff_x20[5];
        puVar6 = (undefined8 *)((long)unaff_x20[4] + 0x38);
        do {
          uVar19 = puVar6[-1];
          uVar18 = *puVar6;
          dVar9 = (double)puVar6[-3];
          uVar7 = puVar6[-2];
          dVar15 = dVar9;
          _CGRectGetMinX(dVar9,uVar7,uVar19,uVar18);
          dVar10 = dVar8;
          _CGRectGetMaxX(dVar8,dVar17,dVar16,dVar12);
          if (ABS(dVar15 - dVar10) <= dVar13) {
            dVar15 = dVar8;
            _CGRectGetMinY(dVar8,dVar17,dVar16,dVar12);
            dVar10 = dVar9;
            _CGRectGetMinY(dVar9,uVar7,uVar19,uVar18);
            if (dVar10 < dVar15) {
              dVar10 = dVar15;
            }
            dVar15 = dVar8;
            _CGRectGetMaxY(dVar8,dVar17,dVar16,dVar12);
            _CGRectGetMaxY(dVar9,uVar7,uVar19,uVar18);
            if (dVar15 <= dVar9) {
              dVar9 = dVar15;
            }
            bVar2 = false;
            bVar3 = true;
            if (dVar10 < dVar9) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(dVar10) && !NAN(param_2)) {
                bVar2 = dVar10 == param_2;
                bVar3 = param_2 <= dVar10;
              }
            }
            bVar1 = true;
            bVar4 = false;
            if (!bVar3 || bVar2) {
              bVar1 = false;
              bVar4 = true;
              if (!NAN(dVar9) && !NAN(param_2)) {
                bVar1 = dVar9 < param_2;
                bVar4 = false;
              }
            }
            if (bVar1 == bVar4) goto LAB_1000f51a0;
          }
          puVar6 = puVar6 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      dVar14 = dVar8;
      _CGRectGetMaxX(dVar8,dVar17,dVar16,dVar12);
      dVar14 = dVar14 - unaff_x20[6];
    }
  }
LAB_1000f51a0:
  dVar13 = dVar8;
  _CGRectGetMinY(dVar8,dVar17,dVar16,dVar12);
  if (param_2 <= dVar13) {
    lVar5 = *(long *)((long)unaff_x20[4] + 0x10);
    if (lVar5 != 0) {
      dVar13 = unaff_x20[5];
      puVar6 = (undefined8 *)((long)unaff_x20[4] + 0x38);
      do {
        uVar19 = puVar6[-1];
        uVar18 = *puVar6;
        dVar9 = (double)puVar6[-3];
        uVar7 = puVar6[-2];
        dVar15 = dVar9;
        _CGRectGetMaxY(dVar9,uVar7,uVar19,uVar18);
        dVar10 = dVar8;
        _CGRectGetMinY(dVar8,dVar17,dVar16,dVar12);
        if (ABS(dVar15 - dVar10) <= dVar13) {
          dVar15 = dVar8;
          _CGRectGetMinX(dVar8,dVar17,dVar16,dVar12);
          dVar10 = dVar9;
          _CGRectGetMinX(dVar9,uVar7,uVar19,uVar18);
          if (dVar10 < dVar15) {
            dVar10 = dVar15;
          }
          dVar15 = dVar8;
          _CGRectGetMaxX(dVar8,dVar17,dVar16,dVar12);
          _CGRectGetMaxX(dVar9,uVar7,uVar19,uVar18);
          if (dVar15 <= dVar9) {
            dVar9 = dVar15;
          }
          bVar2 = false;
          bVar3 = true;
          if (dVar10 < dVar9) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar10) && !NAN(param_1)) {
              bVar2 = dVar10 == param_1;
              bVar3 = param_1 <= dVar10;
            }
          }
          bVar1 = true;
          bVar4 = false;
          if (!bVar3 || bVar2) {
            bVar1 = false;
            bVar4 = true;
            if (!NAN(dVar9) && !NAN(param_1)) {
              bVar1 = dVar9 < param_1;
              bVar4 = false;
            }
          }
          if (bVar1 == bVar4) goto LAB_1000f51c0;
        }
        puVar6 = puVar6 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    _CGRectGetMinY(dVar8,dVar17,dVar16,dVar12);
    dVar13 = dVar8;
  }
  else {
LAB_1000f51c0:
    dVar15 = dVar8;
    _CGRectGetMaxY(dVar8,dVar17,dVar16,dVar12);
    dVar13 = param_2;
    if (dVar15 <= param_2) {
      lVar5 = *(long *)((long)unaff_x20[4] + 0x10);
      if (lVar5 != 0) {
        dVar15 = unaff_x20[5];
        puVar6 = (undefined8 *)((long)unaff_x20[4] + 0x38);
        do {
          uVar19 = puVar6[-1];
          uVar7 = *puVar6;
          dVar11 = (double)puVar6[-3];
          uVar18 = puVar6[-2];
          dVar10 = dVar11;
          _CGRectGetMinY(dVar11,uVar18,uVar19);
          dVar9 = dVar8;
          _CGRectGetMaxY(dVar8,dVar17,dVar16,dVar12);
          if (ABS(dVar10 - dVar9) <= dVar15) {
            dVar10 = dVar8;
            _CGRectGetMinX(dVar8,dVar17,dVar16,dVar12);
            dVar9 = dVar11;
            _CGRectGetMinX(dVar11,uVar18,uVar19,uVar7);
            if (dVar9 < dVar10) {
              dVar9 = dVar10;
            }
            dVar10 = dVar8;
            _CGRectGetMaxX(dVar8,dVar17,dVar16,dVar12);
            _CGRectGetMaxX(dVar11,uVar18,uVar19,uVar7);
            if (dVar10 <= dVar11) {
              dVar11 = dVar10;
            }
            bVar2 = false;
            bVar3 = true;
            if (dVar9 < dVar11) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(dVar9) && !NAN(param_1)) {
                bVar2 = dVar9 == param_1;
                bVar3 = param_1 <= dVar9;
              }
            }
            bVar1 = true;
            bVar4 = false;
            if (!bVar3 || bVar2) {
              bVar1 = false;
              bVar4 = true;
              if (!NAN(dVar11) && !NAN(param_1)) {
                bVar1 = dVar11 < param_1;
                bVar4 = false;
              }
            }
            if (bVar1 == bVar4) goto LAB_1000f53fc;
          }
          puVar6 = puVar6 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      _CGRectGetMaxY(dVar8,dVar17,dVar16,dVar12);
      dVar13 = dVar8 - unaff_x20[6];
    }
  }
LAB_1000f53fc:
  dVar8 = 0.0;
  if (dVar14 != param_1 || dVar13 != param_2) {
    dVar8 = dVar14;
  }
  return dVar8;
}

