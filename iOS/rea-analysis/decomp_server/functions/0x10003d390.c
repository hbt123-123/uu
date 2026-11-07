// rea decompile_all
// name: FUN_10003d390
// address: 0x10003d390
// body: available
// range: 0x10003d390-0x10003d6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10003d390(double param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar10 = ((long)param_3 - (long)param_2) / 0x30;
  lVar5 = ((long)param_4 - (long)param_3) / 0x30;
  if (lVar10 < lVar5) {
    if ((param_5 != param_2) || (param_2 + lVar10 * 0xc <= param_5)) {
      _memmove(param_5,param_2,lVar10 * 0x30);
    }
    piVar8 = param_5 + lVar10 * 0xc;
    piVar12 = param_2;
    if (0x2f < (long)param_3 - (long)param_2) {
      do {
        if (param_4 <= param_3) break;
        iVar1 = param_3[3];
        iVar3 = param_3[4];
        iVar2 = param_5[3];
        iVar4 = param_5[4];
        if ((long)iVar3 * (long)iVar1 - (long)iVar4 * (long)iVar2 == 0) {
          if (iVar1 != iVar2) {
            if (iVar1 <= iVar2) goto LAB_10003d434;
            goto LAB_10003d4e8;
          }
          if (iVar3 != iVar4) {
            if (iVar3 <= iVar4) goto LAB_10003d434;
            goto LAB_10003d4e8;
          }
          if (ABS(*(double *)(param_3 + 6) - param_1) != ABS(*(double *)(param_5 + 6) - param_1)) {
            if (ABS(*(double *)(param_5 + 6) - param_1) <= ABS(*(double *)(param_3 + 6) - param_1))
            goto LAB_10003d434;
            goto LAB_10003d4e8;
          }
          if (*param_3 < *param_5) goto LAB_10003d4e8;
LAB_10003d434:
          piVar11 = param_3;
          piVar9 = param_5 + 0xc;
          piVar7 = param_5;
        }
        else {
          if ((long)iVar3 * (long)iVar1 <= (long)iVar4 * (long)iVar2) goto LAB_10003d434;
LAB_10003d4e8:
          piVar11 = param_3 + 0xc;
          piVar9 = param_5;
          piVar7 = param_3;
        }
        param_5 = piVar9;
        param_3 = piVar11;
        if (piVar12 != piVar7) {
          uVar14 = *(undefined8 *)(piVar7 + 2);
          uVar13 = *(undefined8 *)piVar7;
          uVar15 = *(undefined8 *)(piVar7 + 4);
          uVar17 = *(undefined8 *)(piVar7 + 10);
          uVar16 = *(undefined8 *)(piVar7 + 8);
          *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(piVar7 + 6);
          *(undefined8 *)(piVar12 + 4) = uVar15;
          *(undefined8 *)(piVar12 + 10) = uVar17;
          *(undefined8 *)(piVar12 + 8) = uVar16;
          *(undefined8 *)(piVar12 + 2) = uVar14;
          *(undefined8 *)piVar12 = uVar13;
        }
        piVar12 = piVar12 + 0xc;
      } while (param_5 < piVar8);
    }
  }
  else {
    if ((param_5 != param_3) || (param_3 + lVar5 * 0xc <= param_5)) {
      _memmove(param_5,param_3,lVar5 * 0x30);
    }
    piVar7 = param_5 + lVar5 * 0xc;
    piVar8 = piVar7;
    piVar12 = param_3;
    if ((0x2f < (long)param_4 - (long)param_3) && (param_2 < param_3)) {
LAB_10003d540:
      piVar9 = param_3 + -0xc;
      piVar11 = param_4;
      do {
        piVar8 = piVar7 + -0xc;
        iVar1 = piVar7[-9];
        iVar3 = piVar7[-8];
        iVar2 = param_3[-9];
        iVar4 = param_3[-8];
        if ((long)iVar3 * (long)iVar1 - (long)iVar4 * (long)iVar2 == 0) {
          if (iVar1 == iVar2) {
            if (iVar3 == iVar4) {
              if (ABS(*(double *)(piVar7 + -6) - param_1) ==
                  ABS(*(double *)(param_3 + -6) - param_1)) {
                if (*piVar8 < param_3[-0xc]) goto LAB_10003d608;
              }
              else if (ABS(*(double *)(piVar7 + -6) - param_1) <
                       ABS(*(double *)(param_3 + -6) - param_1)) goto LAB_10003d608;
            }
            else if (iVar4 < iVar3) goto LAB_10003d608;
          }
          else if (iVar2 < iVar1) goto LAB_10003d608;
        }
        else if ((long)iVar4 * (long)iVar2 < (long)iVar3 * (long)iVar1) goto LAB_10003d608;
        if (piVar7 != piVar11) {
          uVar14 = *(undefined8 *)(piVar7 + -10);
          uVar13 = *(undefined8 *)piVar8;
          uVar15 = *(undefined8 *)(piVar7 + -8);
          uVar17 = *(undefined8 *)(piVar7 + -2);
          uVar16 = *(undefined8 *)(piVar7 + -4);
          *(undefined8 *)(piVar11 + -6) = *(undefined8 *)(piVar7 + -6);
          *(undefined8 *)(piVar11 + -8) = uVar15;
          *(undefined8 *)(piVar11 + -2) = uVar17;
          *(undefined8 *)(piVar11 + -4) = uVar16;
          *(undefined8 *)(piVar11 + -10) = uVar14;
          *(undefined8 *)(piVar11 + -0xc) = uVar13;
        }
        piVar7 = piVar8;
        piVar11 = piVar11 + -0xc;
        piVar12 = param_3;
        if (piVar8 <= param_5) break;
      } while( true );
    }
  }
LAB_10003d640:
  lVar10 = (long)piVar8 - (long)param_5;
  sVar6 = (((ulong)(lVar10 / 6 + (lVar10 >> 0x3f)) >> 3) - (lVar10 >> 0x3f)) * 0x30;
  if ((piVar12 != param_5) || ((int *)((long)piVar8 + (sVar6 - lVar10)) <= piVar12)) {
    _memmove(piVar12,param_5,sVar6);
  }
  return 1;
LAB_10003d608:
  param_4 = piVar11 + -0xc;
  if (piVar11 != param_3) {
    uVar14 = *(undefined8 *)(param_3 + -10);
    uVar13 = *(undefined8 *)piVar9;
    uVar15 = *(undefined8 *)(param_3 + -8);
    uVar17 = *(undefined8 *)(param_3 + -2);
    uVar16 = *(undefined8 *)(param_3 + -4);
    *(undefined8 *)(piVar11 + -6) = *(undefined8 *)(param_3 + -6);
    *(undefined8 *)(piVar11 + -8) = uVar15;
    *(undefined8 *)(piVar11 + -2) = uVar17;
    *(undefined8 *)(piVar11 + -4) = uVar16;
    *(undefined8 *)(piVar11 + -10) = uVar14;
    *(undefined8 *)param_4 = uVar13;
  }
  piVar8 = piVar7;
  piVar12 = piVar9;
  if ((piVar7 <= param_5) || (param_3 = piVar9, piVar9 <= param_2)) goto LAB_10003d640;
  goto LAB_10003d540;
}

