// rea decompile_all
// name: FUN_10038c128
// address: 0x10038c128
// body: available
// range: 0x10038c128-0x10038cb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038c6a4 to 0x10038cb18 FUN_10038cb18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038c128(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  
LAB_10038c154:
  do {
    plVar14 = param_1;
    uVar7 = (long)param_2 - (long)plVar14 >> 3;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        lVar10 = *plVar14;
        if (*(uint *)(lVar10 + 8) <= *(uint *)(param_2[-1] + 8)) {
          return;
        }
        *plVar14 = param_2[-1];
        param_2[-1] = lVar10;
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        lVar10 = *plVar14;
        lVar8 = plVar14[1];
        uVar9 = *(uint *)(lVar8 + 8);
        lVar16 = param_2[-1];
        if (uVar9 < *(uint *)(lVar10 + 8)) {
          if (*(uint *)(lVar16 + 8) < uVar9) {
            *plVar14 = lVar16;
          }
          else {
            *plVar14 = lVar8;
            plVar14[1] = lVar10;
            if (*(uint *)(lVar10 + 8) <= *(uint *)(param_2[-1] + 8)) {
              return;
            }
            plVar14[1] = param_2[-1];
          }
          param_2[-1] = lVar10;
          return;
        }
        if (uVar9 <= *(uint *)(lVar16 + 8)) {
          return;
        }
        plVar14[1] = lVar16;
        param_2[-1] = lVar8;
        lVar10 = *plVar14;
        if (*(uint *)(lVar10 + 8) <= *(uint *)(plVar14[1] + 8)) {
          return;
        }
        *plVar14 = plVar14[1];
        plVar14[1] = lVar10;
        return;
      }
      if (uVar7 == 4) {
        plVar5 = plVar14 + 1;
        lVar8 = *plVar5;
        plVar12 = plVar14 + 2;
        lVar16 = *plVar12;
        lVar15 = *plVar14;
        uVar9 = *(uint *)(lVar8 + 8);
        lVar10 = lVar16;
        plVar4 = plVar14;
        if (uVar9 < *(uint *)(lVar15 + 8)) {
          lVar6 = lVar15;
          plVar19 = plVar12;
          if (uVar9 <= *(uint *)(lVar16 + 8)) {
            *plVar14 = lVar8;
            plVar14[1] = lVar15;
            plVar4 = plVar5;
            if (*(uint *)(lVar15 + 8) <= *(uint *)(lVar16 + 8)) goto LAB_10038ca8c;
          }
        }
        else {
          if (uVar9 <= *(uint *)(lVar16 + 8)) goto LAB_10038ca8c;
          *plVar5 = lVar16;
          *plVar12 = lVar8;
          lVar6 = lVar8;
          lVar10 = lVar8;
          plVar19 = plVar5;
          if (*(uint *)(lVar15 + 8) <= *(uint *)(lVar16 + 8)) goto LAB_10038ca8c;
        }
        *plVar4 = lVar16;
        *plVar19 = lVar15;
        lVar10 = lVar6;
LAB_10038ca8c:
        if (*(uint *)(lVar10 + 8) <= *(uint *)(param_2[-1] + 8)) {
          return;
        }
        *plVar12 = param_2[-1];
        param_2[-1] = lVar10;
        lVar8 = *plVar12;
        lVar10 = *plVar5;
        if (*(uint *)(lVar10 + 8) <= *(uint *)(lVar8 + 8)) {
          return;
        }
        plVar14[1] = lVar8;
        plVar14[2] = lVar10;
        lVar10 = *plVar14;
        if (*(uint *)(lVar10 + 8) <= *(uint *)(lVar8 + 8)) {
          return;
        }
        *plVar14 = lVar8;
        plVar14[1] = lVar10;
        return;
      }
      if (uVar7 == 5) {
        FUN_10038cb18(plVar14,plVar14 + 1,plVar14 + 2,plVar14 + 3,param_2 + -1);
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      plVar4 = plVar14 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar14 == param_2 || plVar4 == param_2) {
          return;
        }
        do {
          plVar5 = plVar4;
          lVar10 = *plVar14;
          lVar8 = plVar14[1];
          plVar14 = plVar5;
          if (*(uint *)(lVar8 + 8) < *(uint *)(lVar10 + 8)) {
            do {
              *plVar14 = lVar10;
              lVar10 = plVar14[-2];
              plVar14 = plVar14 + -1;
            } while (*(uint *)(lVar8 + 8) < *(uint *)(lVar10 + 8));
            *plVar14 = lVar8;
          }
          plVar4 = plVar5 + 1;
          plVar14 = plVar5;
        } while (plVar5 + 1 != param_2);
        return;
      }
      if (plVar14 == param_2 || plVar4 == param_2) {
        return;
      }
      lVar10 = 0;
      plVar5 = plVar14;
      do {
        lVar8 = *plVar5;
        lVar16 = plVar5[1];
        lVar15 = lVar10;
        if (*(uint *)(lVar16 + 8) < *(uint *)(lVar8 + 8)) {
          do {
            lVar6 = lVar15;
            *(long *)((long)plVar14 + lVar6 + 8) = lVar8;
            plVar5 = plVar14;
            if (lVar6 == 0) goto LAB_10038c7c8;
            lVar8 = *(long *)((long)plVar14 + lVar6 + -8);
            lVar15 = lVar6 + -8;
          } while (*(uint *)(lVar16 + 8) < *(uint *)(lVar8 + 8));
          plVar5 = (long *)((long)plVar14 + lVar6);
LAB_10038c7c8:
          *plVar5 = lVar16;
        }
        plVar12 = plVar4 + 1;
        lVar10 = lVar10 + 8;
        plVar5 = plVar4;
        plVar4 = plVar12;
        if (plVar12 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar14 == param_2) {
        return;
      }
      uVar11 = uVar7 - 2 >> 1;
      uVar13 = uVar11;
      do {
        if ((long)uVar13 <= (long)uVar11) {
          uVar17 = uVar13 << 1 | 1;
          plVar4 = plVar14 + uVar17;
          uVar1 = uVar13 * 2 + 2;
          lVar8 = *plVar4;
          plVar5 = plVar4;
          lVar10 = lVar8;
          uVar18 = uVar17;
          if ((long)uVar1 < (long)uVar7) {
            lVar10 = plVar4[1];
            plVar5 = plVar4 + 1;
            uVar18 = uVar1;
            if (*(uint *)(lVar10 + 8) <= *(uint *)(lVar8 + 8)) {
              plVar5 = plVar4;
              lVar10 = lVar8;
              uVar18 = uVar17;
            }
          }
          lVar8 = plVar14[uVar13];
          plVar4 = plVar14 + uVar13;
          if (*(uint *)(lVar8 + 8) <= *(uint *)(lVar10 + 8)) {
            do {
              plVar12 = plVar5;
              *plVar4 = lVar10;
              if ((long)uVar11 < (long)uVar18) break;
              uVar17 = uVar18 << 1 | 1;
              plVar4 = plVar14 + uVar17;
              uVar1 = uVar18 * 2 + 2;
              lVar16 = *plVar4;
              plVar5 = plVar4;
              lVar10 = lVar16;
              uVar18 = uVar17;
              if ((long)uVar1 < (long)uVar7) {
                lVar10 = plVar4[1];
                plVar5 = plVar4 + 1;
                uVar18 = uVar1;
                if (*(uint *)(lVar10 + 8) <= *(uint *)(lVar16 + 8)) {
                  plVar5 = plVar4;
                  lVar10 = lVar16;
                  uVar18 = uVar17;
                }
              }
              plVar4 = plVar12;
            } while (*(uint *)(lVar8 + 8) <= *(uint *)(lVar10 + 8));
            *plVar12 = lVar8;
          }
        }
        bVar2 = uVar13 != 0;
        uVar13 = uVar13 - 1;
      } while (bVar2);
      do {
        lVar10 = *plVar14;
        plVar4 = plVar14;
        uVar13 = 0;
        do {
          plVar12 = plVar4 + uVar13 + 1;
          lVar16 = *plVar12;
          uVar1 = uVar13 << 1 | 1;
          uVar11 = uVar13 * 2 + 2;
          plVar5 = plVar12;
          uVar17 = uVar1;
          lVar8 = lVar16;
          if ((long)uVar11 < (long)uVar7) {
            lVar8 = plVar4[uVar13 + 2];
            plVar5 = plVar4 + uVar13 + 2;
            uVar17 = uVar11;
            if (*(uint *)(lVar8 + 8) <= *(uint *)(lVar16 + 8)) {
              plVar5 = plVar12;
              uVar17 = uVar1;
              lVar8 = lVar16;
            }
          }
          *plVar4 = lVar8;
          plVar4 = plVar5;
          uVar13 = uVar17;
        } while ((long)uVar17 <= (long)(uVar7 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar5 == param_2) {
          *plVar5 = lVar10;
        }
        else {
          *plVar5 = *param_2;
          *param_2 = lVar10;
          lVar10 = (long)plVar5 + (8 - (long)plVar14) >> 3;
          if (1 < lVar10) {
            uVar13 = lVar10 - 2U >> 1;
            lVar8 = plVar14[uVar13];
            lVar10 = *plVar5;
            plVar4 = plVar14 + uVar13;
            if (*(uint *)(lVar8 + 8) < *(uint *)(lVar10 + 8)) {
              do {
                plVar12 = plVar4;
                *plVar5 = lVar8;
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1 >> 1;
                lVar8 = plVar14[uVar13];
                plVar5 = plVar12;
                plVar4 = plVar14 + uVar13;
              } while (*(uint *)(lVar8 + 8) < *(uint *)(lVar10 + 8));
              *plVar12 = lVar10;
            }
          }
        }
        bVar2 = (long)uVar7 < 3;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar4 = plVar14 + (uVar7 >> 1);
    lVar10 = param_2[-1];
    uVar9 = *(uint *)(lVar10 + 8);
    if (uVar7 < 0x81) {
      lVar16 = *plVar14;
      lVar8 = *plVar4;
      uVar3 = *(uint *)(lVar16 + 8);
      if (uVar3 < *(uint *)(lVar8 + 8)) {
        if (uVar9 < uVar3) {
          *plVar4 = lVar10;
        }
        else {
          *plVar4 = lVar16;
          *plVar14 = lVar8;
          if (*(uint *)(lVar8 + 8) <= *(uint *)(param_2[-1] + 8)) goto LAB_10038c45c;
          *plVar14 = param_2[-1];
        }
        param_2[-1] = lVar8;
      }
      else if (uVar9 < uVar3) {
        *plVar14 = lVar10;
        param_2[-1] = lVar16;
        lVar10 = *plVar4;
        if (*(uint *)(*plVar14 + 8) < *(uint *)(lVar10 + 8)) {
          *plVar4 = *plVar14;
          *plVar14 = lVar10;
        }
      }
    }
    else {
      lVar16 = *plVar4;
      lVar8 = *plVar14;
      uVar3 = *(uint *)(lVar16 + 8);
      if (uVar3 < *(uint *)(lVar8 + 8)) {
        if (uVar9 < uVar3) {
          *plVar14 = lVar10;
        }
        else {
          *plVar14 = lVar16;
          *plVar4 = lVar8;
          if (*(uint *)(lVar8 + 8) <= *(uint *)(param_2[-1] + 8)) goto LAB_10038c294;
          *plVar4 = param_2[-1];
        }
        param_2[-1] = lVar8;
      }
      else if (uVar9 < uVar3) {
        *plVar4 = lVar10;
        param_2[-1] = lVar16;
        lVar10 = *plVar14;
        if (*(uint *)(*plVar4 + 8) < *(uint *)(lVar10 + 8)) {
          *plVar14 = *plVar4;
          *plVar4 = lVar10;
        }
      }
LAB_10038c294:
      plVar5 = plVar4 + -1;
      lVar8 = *plVar5;
      lVar10 = plVar14[1];
      uVar9 = *(uint *)(lVar8 + 8);
      lVar16 = param_2[-2];
      if (uVar9 < *(uint *)(lVar10 + 8)) {
        if (*(uint *)(lVar16 + 8) < uVar9) {
          plVar14[1] = lVar16;
        }
        else {
          plVar14[1] = lVar8;
          *plVar5 = lVar10;
          if (*(uint *)(lVar10 + 8) <= *(uint *)(param_2[-2] + 8)) goto LAB_10038c348;
          *plVar5 = param_2[-2];
        }
        param_2[-2] = lVar10;
      }
      else if (*(uint *)(lVar16 + 8) < uVar9) {
        *plVar5 = lVar16;
        param_2[-2] = lVar8;
        lVar10 = plVar14[1];
        if (*(uint *)(*plVar5 + 8) < *(uint *)(lVar10 + 8)) {
          plVar14[1] = *plVar5;
          *plVar5 = lVar10;
        }
      }
LAB_10038c348:
      plVar12 = plVar4 + 1;
      lVar8 = *plVar12;
      lVar10 = plVar14[2];
      uVar9 = *(uint *)(lVar8 + 8);
      lVar16 = param_2[-3];
      if (uVar9 < *(uint *)(lVar10 + 8)) {
        if (*(uint *)(lVar16 + 8) < uVar9) {
          plVar14[2] = lVar16;
        }
        else {
          plVar14[2] = lVar8;
          *plVar12 = lVar10;
          if (*(uint *)(lVar10 + 8) <= *(uint *)(param_2[-3] + 8)) goto LAB_10038c3d0;
          *plVar12 = param_2[-3];
        }
        param_2[-3] = lVar10;
      }
      else if (*(uint *)(lVar16 + 8) < uVar9) {
        *plVar12 = lVar16;
        param_2[-3] = lVar8;
        lVar10 = plVar14[2];
        if (*(uint *)(*plVar12 + 8) < *(uint *)(lVar10 + 8)) {
          plVar14[2] = *plVar12;
          *plVar12 = lVar10;
        }
      }
LAB_10038c3d0:
      lVar10 = *plVar4;
      lVar8 = *plVar5;
      uVar9 = *(uint *)(lVar10 + 8);
      lVar16 = *plVar12;
      if (uVar9 < *(uint *)(lVar8 + 8)) {
        lVar15 = lVar10;
        if (uVar9 <= *(uint *)(lVar16 + 8)) {
          *plVar5 = lVar10;
          *plVar4 = lVar8;
          plVar5 = plVar4;
          lVar10 = lVar8;
          lVar15 = lVar16;
          if (*(uint *)(lVar8 + 8) <= *(uint *)(lVar16 + 8)) goto LAB_10038c450;
        }
LAB_10038c448:
        *plVar5 = lVar16;
        *plVar12 = lVar8;
        lVar10 = lVar15;
      }
      else if (*(uint *)(lVar16 + 8) < uVar9) {
        *plVar4 = lVar16;
        *plVar12 = lVar10;
        plVar12 = plVar4;
        lVar10 = lVar16;
        lVar15 = lVar8;
        if (*(uint *)(lVar16 + 8) < *(uint *)(lVar8 + 8)) goto LAB_10038c448;
      }
LAB_10038c450:
      lVar8 = *plVar14;
      *plVar14 = lVar10;
      *plVar4 = lVar8;
    }
LAB_10038c45c:
    param_3 = param_3 + -1;
    lVar10 = *plVar14;
    param_1 = plVar14;
    if ((param_4 & 1) == 0) {
      uVar9 = *(uint *)(lVar10 + 8);
      if (uVar9 <= *(uint *)(plVar14[-1] + 8)) {
        if (uVar9 < *(uint *)(param_2[-1] + 8)) {
          do {
            param_1 = param_1 + 1;
          } while (*(uint *)(*param_1 + 8) <= uVar9);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(uint *)(*param_1 + 8) <= uVar9);
        }
        plVar4 = param_2;
        if (param_1 < param_2) {
          do {
            plVar4 = plVar4 + -1;
          } while (uVar9 < *(uint *)(*plVar4 + 8));
        }
        if (param_1 < plVar4) {
          lVar8 = *param_1;
          lVar16 = *plVar4;
          do {
            *param_1 = lVar16;
            *plVar4 = lVar8;
            do {
              param_1 = param_1 + 1;
              lVar8 = *param_1;
            } while (*(uint *)(lVar8 + 8) <= *(uint *)(lVar10 + 8));
            do {
              plVar4 = plVar4 + -1;
              lVar16 = *plVar4;
            } while (*(uint *)(lVar10 + 8) < *(uint *)(lVar16 + 8));
          } while (param_1 < plVar4);
        }
        plVar4 = param_1 + -1;
        if (plVar4 != plVar14) {
          *plVar14 = *plVar4;
        }
        param_4 = 0;
        *plVar4 = lVar10;
        goto LAB_10038c154;
      }
    }
    else {
      uVar9 = *(uint *)(lVar10 + 8);
    }
    lVar8 = 0;
    do {
      lVar16 = *(long *)((long)plVar14 + lVar8 + 8);
      lVar8 = lVar8 + 8;
    } while (*(uint *)(lVar16 + 8) < uVar9);
    plVar4 = (long *)((long)plVar14 + lVar8);
    plVar5 = param_2;
    if (lVar8 == 8) {
      do {
        if (plVar5 <= plVar4) break;
        plVar5 = plVar5 + -1;
      } while (uVar9 <= *(uint *)(*plVar5 + 8));
    }
    else {
      do {
        plVar5 = plVar5 + -1;
      } while (uVar9 <= *(uint *)(*plVar5 + 8));
    }
    param_1 = plVar4;
    if (plVar4 < plVar5) {
      lVar8 = *plVar5;
      plVar12 = plVar5;
      do {
        *param_1 = lVar8;
        *plVar12 = lVar16;
        do {
          param_1 = param_1 + 1;
          lVar16 = *param_1;
        } while (*(uint *)(lVar16 + 8) < *(uint *)(lVar10 + 8));
        do {
          plVar12 = plVar12 + -1;
          lVar8 = *plVar12;
        } while (*(uint *)(lVar10 + 8) <= *(uint *)(lVar8 + 8));
      } while (param_1 < plVar12);
    }
    plVar12 = param_1 + -1;
    if (plVar12 != plVar14) {
      *plVar14 = *plVar12;
    }
    *plVar12 = lVar10;
    if (plVar4 < plVar5) {
LAB_10038c578:
      FUN_10038c128(plVar14,plVar12,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar4 = plVar14;
      FUN_10038cc90(plVar14,plVar12);
      plVar5 = param_1;
      FUN_10038cc90(param_1,param_2);
      if ((int)plVar5 == 0) {
        if (((ulong)plVar4 & 1) == 0) goto LAB_10038c578;
      }
      else {
        param_1 = plVar14;
        param_2 = plVar12;
        if (((ulong)plVar4 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}

