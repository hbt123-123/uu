// rea decompile_all
// name: FUN_10038cfa0
// address: 0x10038cfa0
// body: available
// range: 0x10038cfa0-0x10038d94b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038d4f4 to 0x10038d94c FUN_10038d94c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038cfa0(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  
LAB_10038cfcc:
  do {
    plVar15 = param_1;
    uVar8 = (long)param_2 - (long)plVar15 >> 3;
    if (uVar8 - 2 == 0 || (long)uVar8 < 2) {
      if (uVar8 < 2) {
        return;
      }
      if (uVar8 == 2) {
        lVar11 = *plVar15;
        if (*(uint *)(param_2[-1] + 8) < *(uint *)(lVar11 + 8)) {
          *plVar15 = param_2[-1];
          param_2[-1] = lVar11;
          return;
        }
        return;
      }
    }
    else {
      if (uVar8 == 3) {
        lVar11 = *plVar15;
        lVar9 = plVar15[1];
        uVar10 = *(uint *)(lVar9 + 8);
        uVar3 = *(uint *)(lVar11 + 8);
        lVar17 = param_2[-1];
        if (uVar10 < uVar3) {
          if (*(uint *)(lVar17 + 8) < uVar10) {
            *plVar15 = lVar17;
          }
          else {
            *plVar15 = lVar9;
            plVar15[1] = lVar11;
            if (uVar3 <= *(uint *)(param_2[-1] + 8)) {
              return;
            }
            plVar15[1] = param_2[-1];
          }
          param_2[-1] = lVar11;
          return;
        }
        if (*(uint *)(lVar17 + 8) < uVar10) {
          plVar15[1] = lVar17;
          param_2[-1] = lVar9;
          lVar11 = *plVar15;
          if (*(uint *)(plVar15[1] + 8) < *(uint *)(lVar11 + 8)) {
            *plVar15 = plVar15[1];
            plVar15[1] = lVar11;
            return;
          }
          return;
        }
        return;
      }
      if (uVar8 == 4) {
        plVar6 = plVar15 + 1;
        lVar11 = *plVar6;
        plVar13 = plVar15 + 2;
        lVar9 = *plVar13;
        uVar10 = *(uint *)(lVar11 + 8);
        lVar17 = *plVar15;
        uVar3 = *(uint *)(lVar17 + 8);
        uVar4 = *(uint *)(lVar9 + 8);
        plVar5 = plVar15;
        if (uVar10 < uVar3) {
          lVar7 = lVar17;
          plVar19 = plVar13;
          if (uVar10 <= uVar4) {
            *plVar15 = lVar11;
            plVar15[1] = lVar17;
            lVar11 = lVar9;
            plVar5 = plVar6;
            goto joined_r0x00010038d864;
          }
        }
        else {
          lVar14 = lVar9;
          if (uVar10 <= uVar4) goto LAB_10038d8c8;
          *plVar6 = lVar9;
          *plVar13 = lVar11;
          plVar19 = plVar6;
          lVar7 = lVar11;
joined_r0x00010038d864:
          lVar14 = lVar11;
          if (uVar3 <= uVar4) goto LAB_10038d8c8;
        }
        *plVar5 = lVar9;
        *plVar19 = lVar17;
        lVar14 = lVar7;
LAB_10038d8c8:
        if (*(uint *)(lVar14 + 8) <= *(uint *)(param_2[-1] + 8)) {
          return;
        }
        *plVar13 = param_2[-1];
        param_2[-1] = lVar14;
        lVar9 = *plVar13;
        uVar10 = *(uint *)(lVar9 + 8);
        lVar11 = *plVar6;
        if (uVar10 < *(uint *)(lVar11 + 8)) {
          plVar15[1] = lVar9;
          plVar15[2] = lVar11;
          lVar11 = *plVar15;
          if (uVar10 < *(uint *)(lVar11 + 8)) {
            *plVar15 = lVar9;
            plVar15[1] = lVar11;
            return;
          }
          return;
        }
        return;
      }
      if (uVar8 == 5) {
        FUN_10038d94c(plVar15,plVar15 + 1,plVar15 + 2,plVar15 + 3,param_2 + -1);
        return;
      }
    }
    if ((long)uVar8 < 0x18) {
      plVar5 = plVar15 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar15 != param_2 && plVar5 != param_2) {
          do {
            plVar6 = plVar5;
            lVar11 = *plVar15;
            lVar9 = plVar15[1];
            uVar10 = *(uint *)(lVar9 + 8);
            plVar15 = plVar6;
            if (uVar10 < *(uint *)(lVar11 + 8)) {
              do {
                *plVar15 = lVar11;
                lVar11 = plVar15[-2];
                plVar15 = plVar15 + -1;
              } while (uVar10 < *(uint *)(lVar11 + 8));
              *plVar15 = lVar9;
            }
            plVar5 = plVar6 + 1;
            plVar15 = plVar6;
          } while (plVar6 + 1 != param_2);
          return;
        }
        return;
      }
      if (plVar15 == param_2 || plVar5 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar6 = plVar15;
      do {
        lVar9 = *plVar6;
        lVar17 = plVar6[1];
        uVar10 = *(uint *)(lVar17 + 8);
        lVar14 = lVar11;
        if (uVar10 < *(uint *)(lVar9 + 8)) {
          do {
            lVar7 = lVar14;
            *(long *)((long)plVar15 + lVar7 + 8) = lVar9;
            plVar6 = plVar15;
            if (lVar7 == 0) goto LAB_10038d60c;
            lVar9 = *(long *)((long)plVar15 + lVar7 + -8);
            lVar14 = lVar7 + -8;
          } while (uVar10 < *(uint *)(lVar9 + 8));
          plVar6 = (long *)((long)plVar15 + lVar7);
LAB_10038d60c:
          *plVar6 = lVar17;
        }
        plVar13 = plVar5 + 1;
        lVar11 = lVar11 + 8;
        plVar6 = plVar5;
        plVar5 = plVar13;
        if (plVar13 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar15 == param_2) {
        return;
      }
      uVar12 = uVar8 - 2 >> 1;
      uVar18 = uVar12;
      do {
        if ((long)uVar18 <= (long)uVar12) {
          uVar1 = uVar18 << 1 | 1;
          plVar5 = plVar15 + uVar1;
          uVar16 = uVar18 * 2 + 2;
          if ((long)uVar16 < (long)uVar8) {
            lVar11 = plVar5[1];
            plVar6 = plVar5 + 1;
            if (*(uint *)(lVar11 + 8) <= *(uint *)(*plVar5 + 8)) {
              plVar6 = plVar5;
              uVar16 = uVar1;
              lVar11 = *plVar5;
            }
          }
          else {
            plVar6 = plVar5;
            uVar16 = uVar1;
            lVar11 = *plVar5;
          }
          lVar9 = plVar15[uVar18];
          uVar10 = *(uint *)(lVar9 + 8);
          plVar5 = plVar15 + uVar18;
          if (uVar10 <= *(uint *)(lVar11 + 8)) {
            do {
              plVar13 = plVar6;
              *plVar5 = lVar11;
              if ((long)uVar12 < (long)uVar16) break;
              uVar1 = uVar16 << 1 | 1;
              plVar5 = plVar15 + uVar1;
              uVar16 = uVar16 * 2 + 2;
              if ((long)uVar16 < (long)uVar8) {
                lVar11 = plVar5[1];
                plVar6 = plVar5 + 1;
                if (*(uint *)(lVar11 + 8) <= *(uint *)(*plVar5 + 8)) {
                  plVar6 = plVar5;
                  uVar16 = uVar1;
                  lVar11 = *plVar5;
                }
              }
              else {
                plVar6 = plVar5;
                uVar16 = uVar1;
                lVar11 = *plVar5;
              }
              plVar5 = plVar13;
            } while (uVar10 <= *(uint *)(lVar11 + 8));
            *plVar13 = lVar9;
          }
        }
        bVar2 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar2);
      do {
        uVar18 = 0;
        lVar11 = *plVar15;
        plVar5 = plVar15;
        do {
          plVar6 = plVar5 + uVar18 + 1;
          uVar16 = uVar18 << 1 | 1;
          uVar12 = uVar18 * 2 + 2;
          if ((long)uVar12 < (long)uVar8) {
            lVar9 = plVar5[uVar18 + 2];
            lVar17 = uVar18 + 1;
            plVar13 = plVar5 + uVar18 + 2;
            uVar18 = uVar12;
            if (*(uint *)(lVar9 + 8) <= *(uint *)(plVar5[lVar17] + 8)) {
              plVar13 = plVar6;
              uVar18 = uVar16;
              lVar9 = plVar5[lVar17];
            }
          }
          else {
            plVar13 = plVar6;
            uVar18 = uVar16;
            lVar9 = *plVar6;
          }
          *plVar5 = lVar9;
          plVar5 = plVar13;
        } while ((long)uVar18 <= (long)(uVar8 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar13 == param_2) {
          *plVar13 = lVar11;
        }
        else {
          *plVar13 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar13 + (8 - (long)plVar15) >> 3;
          if (1 < lVar11) {
            uVar18 = lVar11 - 2U >> 1;
            lVar9 = plVar15[uVar18];
            lVar11 = *plVar13;
            uVar10 = *(uint *)(lVar11 + 8);
            plVar5 = plVar15 + uVar18;
            if (*(uint *)(lVar9 + 8) < uVar10) {
              do {
                plVar6 = plVar5;
                *plVar13 = lVar9;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                lVar9 = plVar15[uVar18];
                plVar13 = plVar6;
                plVar5 = plVar15 + uVar18;
              } while (*(uint *)(lVar9 + 8) < uVar10);
              *plVar6 = lVar11;
            }
          }
        }
        bVar2 = (long)uVar8 < 3;
        uVar8 = uVar8 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar5 = plVar15 + (uVar8 >> 1);
    lVar11 = param_2[-1];
    uVar10 = *(uint *)(lVar11 + 8);
    if (uVar8 < 0x81) {
      lVar17 = *plVar15;
      uVar3 = *(uint *)(lVar17 + 8);
      lVar9 = *plVar5;
      uVar4 = *(uint *)(lVar9 + 8);
      if (uVar3 < uVar4) {
        if (uVar10 < uVar3) {
          *plVar5 = lVar11;
        }
        else {
          *plVar5 = lVar17;
          *plVar15 = lVar9;
          if (uVar4 <= *(uint *)(param_2[-1] + 8)) goto LAB_10038d2b4;
          *plVar15 = param_2[-1];
        }
        param_2[-1] = lVar9;
      }
      else if (uVar10 < uVar3) {
        *plVar15 = lVar11;
        param_2[-1] = lVar17;
        lVar11 = *plVar5;
        if (*(uint *)(*plVar15 + 8) < *(uint *)(lVar11 + 8)) {
          *plVar5 = *plVar15;
          *plVar15 = lVar11;
        }
      }
    }
    else {
      lVar17 = *plVar5;
      uVar3 = *(uint *)(lVar17 + 8);
      lVar9 = *plVar15;
      uVar4 = *(uint *)(lVar9 + 8);
      if (uVar3 < uVar4) {
        if (uVar10 < uVar3) {
          *plVar15 = lVar11;
        }
        else {
          *plVar15 = lVar17;
          *plVar5 = lVar9;
          if (uVar4 <= *(uint *)(param_2[-1] + 8)) goto LAB_10038d108;
          *plVar5 = param_2[-1];
        }
        param_2[-1] = lVar9;
      }
      else if (uVar10 < uVar3) {
        *plVar5 = lVar11;
        param_2[-1] = lVar17;
        lVar11 = *plVar15;
        if (*(uint *)(*plVar5 + 8) < *(uint *)(lVar11 + 8)) {
          *plVar15 = *plVar5;
          *plVar5 = lVar11;
        }
      }
LAB_10038d108:
      plVar6 = plVar5 + -1;
      lVar9 = *plVar6;
      uVar10 = *(uint *)(lVar9 + 8);
      lVar11 = plVar15[1];
      uVar3 = *(uint *)(lVar11 + 8);
      lVar17 = param_2[-2];
      if (uVar10 < uVar3) {
        if (*(uint *)(lVar17 + 8) < uVar10) {
          plVar15[1] = lVar17;
        }
        else {
          plVar15[1] = lVar9;
          *plVar6 = lVar11;
          if (uVar3 <= *(uint *)(param_2[-2] + 8)) goto LAB_10038d1b4;
          *plVar6 = param_2[-2];
        }
        param_2[-2] = lVar11;
      }
      else if (*(uint *)(lVar17 + 8) < uVar10) {
        *plVar6 = lVar17;
        param_2[-2] = lVar9;
        lVar11 = plVar15[1];
        if (*(uint *)(*plVar6 + 8) < *(uint *)(lVar11 + 8)) {
          plVar15[1] = *plVar6;
          *plVar6 = lVar11;
        }
      }
LAB_10038d1b4:
      plVar13 = plVar5 + 1;
      lVar9 = *plVar13;
      uVar10 = *(uint *)(lVar9 + 8);
      lVar11 = plVar15[2];
      uVar3 = *(uint *)(lVar11 + 8);
      lVar17 = param_2[-3];
      if (uVar10 < uVar3) {
        if (*(uint *)(lVar17 + 8) < uVar10) {
          plVar15[2] = lVar17;
        }
        else {
          plVar15[2] = lVar9;
          *plVar13 = lVar11;
          if (uVar3 <= *(uint *)(param_2[-3] + 8)) goto LAB_10038d238;
          *plVar13 = param_2[-3];
        }
        param_2[-3] = lVar11;
      }
      else if (*(uint *)(lVar17 + 8) < uVar10) {
        *plVar13 = lVar17;
        param_2[-3] = lVar9;
        lVar11 = plVar15[2];
        if (*(uint *)(*plVar13 + 8) < *(uint *)(lVar11 + 8)) {
          plVar15[2] = *plVar13;
          *plVar13 = lVar11;
        }
      }
LAB_10038d238:
      lVar11 = *plVar5;
      uVar10 = *(uint *)(lVar11 + 8);
      lVar9 = *plVar6;
      uVar3 = *(uint *)(lVar9 + 8);
      lVar17 = *plVar13;
      uVar4 = *(uint *)(lVar17 + 8);
      if (uVar10 < uVar3) {
        lVar14 = lVar11;
        if (uVar10 <= uVar4) {
          *plVar6 = lVar11;
          *plVar5 = lVar9;
          plVar6 = plVar5;
          lVar11 = lVar9;
          lVar14 = lVar17;
          if (uVar3 <= uVar4) goto LAB_10038d2a8;
        }
LAB_10038d2a0:
        *plVar6 = lVar17;
        *plVar13 = lVar9;
        lVar11 = lVar14;
      }
      else if (uVar4 < uVar10) {
        *plVar5 = lVar17;
        *plVar13 = lVar11;
        plVar13 = plVar5;
        lVar11 = lVar17;
        lVar14 = lVar9;
        if (uVar4 < uVar3) goto LAB_10038d2a0;
      }
LAB_10038d2a8:
      lVar9 = *plVar15;
      *plVar15 = lVar11;
      *plVar5 = lVar9;
    }
LAB_10038d2b4:
    param_3 = param_3 + -1;
    lVar11 = *plVar15;
    param_1 = plVar15;
    if ((param_4 & 1) == 0) {
      uVar10 = *(uint *)(lVar11 + 8);
      if (uVar10 <= *(uint *)(plVar15[-1] + 8)) {
        if (uVar10 < *(uint *)(param_2[-1] + 8)) {
          do {
            param_1 = param_1 + 1;
          } while (*(uint *)(*param_1 + 8) <= uVar10);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (*(uint *)(*param_1 + 8) <= uVar10);
        }
        plVar5 = param_2;
        if (param_1 < param_2) {
          do {
            plVar5 = plVar5 + -1;
          } while (uVar10 < *(uint *)(*plVar5 + 8));
        }
        if (param_1 < plVar5) {
          lVar9 = *param_1;
          lVar17 = *plVar5;
          do {
            *param_1 = lVar17;
            *plVar5 = lVar9;
            do {
              param_1 = param_1 + 1;
              lVar9 = *param_1;
            } while (*(uint *)(lVar9 + 8) <= uVar10);
            do {
              plVar5 = plVar5 + -1;
              lVar17 = *plVar5;
            } while (uVar10 < *(uint *)(lVar17 + 8));
          } while (param_1 < plVar5);
        }
        plVar5 = param_1 + -1;
        if (plVar5 != plVar15) {
          *plVar15 = *plVar5;
        }
        param_4 = 0;
        *plVar5 = lVar11;
        goto LAB_10038cfcc;
      }
    }
    else {
      uVar10 = *(uint *)(lVar11 + 8);
    }
    lVar9 = 0;
    do {
      lVar17 = *(long *)((long)plVar15 + lVar9 + 8);
      lVar9 = lVar9 + 8;
    } while (*(uint *)(lVar17 + 8) < uVar10);
    plVar5 = (long *)((long)plVar15 + lVar9);
    plVar6 = param_2;
    if (lVar9 == 8) {
      do {
        if (plVar6 <= plVar5) break;
        plVar6 = plVar6 + -1;
      } while (uVar10 <= *(uint *)(*plVar6 + 8));
    }
    else {
      do {
        plVar6 = plVar6 + -1;
      } while (uVar10 <= *(uint *)(*plVar6 + 8));
    }
    param_1 = plVar5;
    if (plVar5 < plVar6) {
      lVar9 = *plVar6;
      plVar13 = plVar6;
      do {
        *param_1 = lVar9;
        *plVar13 = lVar17;
        do {
          param_1 = param_1 + 1;
          lVar17 = *param_1;
        } while (*(uint *)(lVar17 + 8) < uVar10);
        do {
          plVar13 = plVar13 + -1;
          lVar9 = *plVar13;
        } while (uVar10 <= *(uint *)(lVar9 + 8));
      } while (param_1 < plVar13);
    }
    plVar13 = param_1 + -1;
    if (plVar13 != plVar15) {
      *plVar15 = *plVar13;
    }
    *plVar13 = lVar11;
    if (plVar5 < plVar6) {
LAB_10038d3cc:
      FUN_10038cfa0(plVar15,plVar13,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar5 = plVar15;
      FUN_10038dac0(plVar15,plVar13);
      plVar6 = param_1;
      FUN_10038dac0(param_1,param_2);
      if ((int)plVar6 == 0) {
        if (((ulong)plVar5 & 1) == 0) goto LAB_10038d3cc;
      }
      else {
        param_1 = plVar15;
        param_2 = plVar13;
        if (((ulong)plVar5 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}

