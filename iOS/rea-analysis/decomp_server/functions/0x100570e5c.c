// rea decompile_all
// name: FUN_100570e5c
// address: 0x100570e5c
// body: available
// range: 0x100570e5c-0x100571433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100571430 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100570e5c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  undefined1 local_170 [24];
  byte local_158 [72];
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  ulong uStack_e8;
  long local_e0;
  ulong local_d8;
  long local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  ulong uStack_98;
  long local_90;
  ulong local_88;
  long local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 == *(long *)(param_2 + 0x10)) {
    if ((lVar17 != 0) && (param_1 != param_2)) {
      lVar18 = 0;
      do {
        plVar4 = (long *)(param_1 + 0x20 + lVar18 * 0x48);
        uVar21 = plVar4[5];
        local_f0 = plVar4[4];
        local_d8 = plVar4[7];
        local_e0 = plVar4[6];
        local_d0 = plVar4[8];
        lStack_108 = plVar4[1];
        local_110 = *plVar4;
        local_f8 = plVar4[3];
        local_100 = plVar4[2];
        plVar4 = (long *)(param_2 + 0x20 + lVar18 * 0x48);
        local_80 = plVar4[8];
        uStack_98 = plVar4[5];
        local_a0 = plVar4[4];
        local_88 = plVar4[7];
        local_90 = plVar4[6];
        lStack_b8 = plVar4[1];
        local_c0 = *plVar4;
        local_a8 = plVar4[3];
        local_b0 = plVar4[2];
        lVar9 = *(long *)(local_110 + 0x10);
        uStack_e8 = uVar21;
        if (lVar9 != *(long *)(local_c0 + 0x10)) goto LAB_1005713c8;
        if ((lVar9 != 0) && (local_110 != local_c0)) {
          piVar11 = (int *)(local_110 + 0x20);
          piVar12 = (int *)(local_c0 + 0x20);
          do {
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100571408);
              (*pcVar3)();
            }
            if (*piVar11 != *piVar12) goto LAB_1005713c8;
            piVar11 = piVar11 + 1;
            piVar12 = piVar12 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        lVar9 = *(long *)(lStack_108 + 0x10);
        if (lVar9 != *(long *)(lStack_b8 + 0x10)) goto LAB_1005713c8;
        if (lVar9 != 0 && lStack_108 != lStack_b8) {
          piVar11 = (int *)(lStack_108 + 0x20);
          piVar12 = (int *)(lStack_b8 + 0x20);
          do {
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10057140c);
              (*pcVar3)();
            }
            if (*piVar11 != *piVar12) goto LAB_1005713c8;
            piVar11 = piVar11 + 1;
            piVar12 = piVar12 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (local_e0 == 0) {
          if (local_90 != 0) goto LAB_1005713c8;
        }
        else if ((local_90 == 0) ||
                (((uVar21 != uStack_98 || (local_e0 != local_90)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar21 & 1) == 0)))) goto LAB_1005713c8;
        if (local_d0 == 0) {
          if (local_80 != 0) goto LAB_1005713c8;
        }
        else if ((local_80 == 0) ||
                (((local_d8 != local_88 || (local_d0 != local_80)) &&
                 (uVar21 = local_d8,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar21 & 1) == 0)))) goto LAB_1005713c8;
        lVar9 = *(long *)(local_100 + 0x10);
        if (lVar9 != *(long *)(local_b0 + 0x10)) goto LAB_1005713c8;
        if ((lVar9 != 0) && (local_100 != local_b0)) {
          plVar4 = (long *)(local_100 + 0x28);
          plVar5 = (long *)(local_b0 + 0x28);
          do {
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100571410);
              (*pcVar3)();
            }
            uVar21 = plVar4[-1];
            if ((uVar21 != plVar5[-1] || *plVar4 != *plVar5) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar21 & 1) == 0)) goto LAB_1005713c8;
            plVar4 = plVar4 + 2;
            plVar5 = plVar5 + 2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        uVar21 = local_a0;
        lVar9 = local_a8;
        uVar2 = (uint)(local_f0 >> 0x20);
        uVar10 = uVar2 >> 0x1e;
        iVar8 = (int)local_f8;
        iVar15 = (int)((ulong)local_f8 >> 0x20);
        if (local_f0 >> 0x3e == 3) {
          uVar13 = 0;
          if ((((local_f8 != 0) || (local_f0 != 0xc000000000000000)) || (local_a0 >> 0x3e < 3)) ||
             ((uVar13 = 0, local_a8 != 0 || (local_a0 != 0xc000000000000000)))) goto LAB_10057110c;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar10 == 0) {
              uVar13 = local_f0 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar15,iVar8)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10057141c);
                (*pcVar3)();
              }
              uVar13 = (ulong)(iVar15 - iVar8);
            }
          }
          else if (uVar10 == 2) {
            uVar13 = *(long *)(local_f8 + 0x18) - *(long *)(local_f8 + 0x10);
            if (SBORROW8(*(long *)(local_f8 + 0x18),*(long *)(local_f8 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100571420);
              (*pcVar3)();
            }
          }
          else {
            uVar13 = 0;
          }
LAB_10057110c:
          uVar2 = (uint)(local_a0 >> 0x20);
          uVar14 = uVar2 >> 0x1e;
          if (uVar2 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar16 = local_a0 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)local_a8 >> 0x20);
              if (SBORROW4(iVar15,(int)local_a8)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100571414);
                (*pcVar3)();
              }
              uVar16 = (ulong)(iVar15 - (int)local_a8);
            }
          }
          else {
            if (uVar14 != 2) {
              if (uVar13 == 0) goto LAB_1005713b4;
              goto LAB_1005713c8;
            }
            uVar16 = *(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10);
            if (SBORROW8(*(long *)(local_a8 + 0x18),*(long *)(local_a8 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100571418);
              (*pcVar3)();
            }
          }
          if (uVar13 != uVar16) goto LAB_1005713c8;
          if (0 < (long)uVar13) {
            if (uVar10 < 2) {
              if (uVar10 != 0) {
                lVar20 = (long)iVar8;
                plVar19 = (long *)((local_f8 >> 0x20) - lVar20);
                if (local_f8 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100571424);
                  (*pcVar3)();
                }
                FUN_100008184(local_a8,local_a0);
                FUN_1005b2698(&local_110,local_158);
                plVar4 = &local_c0;
                FUN_1005b2698(plVar4,local_158);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar5 = plVar4;
                if (plVar4 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar20,(long)plVar5)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100571430);
                    (*pcVar3)();
                  }
                  plVar4 = (long *)((lVar20 - (long)plVar5) + (long)plVar4);
                }
LAB_1005712e4:
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar19 <= (long)plVar5) {
                  plVar5 = plVar19;
                }
                lVar20 = 0;
                if (plVar4 != (long *)0x0) {
                  lVar20 = (long)plVar5 + (long)plVar4;
                }
                FUN_100009038(local_158,plVar4,lVar20,lVar9,uVar21);
                FUN_100006cdc(lVar9,uVar21);
                FUN_1005b26cc(&local_c0);
                FUN_1005b26cc(&local_110);
                if ((local_158[0] & 1) != 0) goto LAB_1005713b4;
                goto LAB_1005713c8;
              }
              local_170[0] = (undefined1)local_f8;
              local_170[1] = (undefined1)((ulong)local_f8 >> 8);
              local_170[2] = (undefined1)((ulong)local_f8 >> 0x10);
              local_170[3] = (undefined1)((ulong)local_f8 >> 0x18);
              local_170[4] = (undefined1)((ulong)local_f8 >> 0x20);
              local_170[5] = (undefined1)((ulong)local_f8 >> 0x28);
              local_170[6] = (undefined1)((ulong)local_f8 >> 0x30);
              local_170[7] = (undefined1)((ulong)local_f8 >> 0x38);
              local_170[8] = (undefined1)local_f0;
              local_170[9] = (undefined1)(local_f0 >> 8);
              local_170[10] = (undefined1)(local_f0 >> 0x10);
              local_170[0xb] = (undefined1)(local_f0 >> 0x18);
              local_170[0xc] = (undefined1)(local_f0 >> 0x20);
              local_170[0xd] = (undefined1)(local_f0 >> 0x28);
              puVar7 = local_170 + (local_f0 >> 0x30 & 0xff);
              FUN_100008184(local_a8,local_a0);
              FUN_1005b2698(&local_110,local_158);
              FUN_1005b2698(&local_c0,local_158);
            }
            else {
              if (uVar10 == 2) {
                lVar20 = *(long *)(local_f8 + 0x10);
                lVar1 = *(long *)(local_f8 + 0x18);
                FUN_100008184(local_a8,local_a0);
                FUN_1005b2698(&local_110,local_158);
                plVar4 = &local_c0;
                FUN_1005b2698(plVar4,local_158);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar5 = plVar4;
                if (plVar4 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar20,(long)plVar5)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10057142c);
                    (*pcVar3)();
                  }
                  plVar4 = (long *)((lVar20 - (long)plVar5) + (long)plVar4);
                }
                plVar19 = (long *)(lVar1 - lVar20);
                if (SBORROW8(lVar1,lVar20)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100571428);
                  (*pcVar3)();
                }
                goto LAB_1005712e4;
              }
              local_170[8] = 0;
              local_170[9] = 0;
              local_170[10] = 0;
              local_170[0xb] = 0;
              local_170[0xc] = 0;
              local_170[0xd] = 0;
              local_170[0] = 0;
              local_170[1] = 0;
              local_170[2] = 0;
              local_170[3] = 0;
              local_170[4] = 0;
              local_170[5] = 0;
              local_170[6] = 0;
              local_170[7] = 0;
              FUN_100008184(local_a8,local_a0);
              FUN_1005b2698(&local_110,local_158);
              FUN_1005b2698(&local_c0,local_158);
              puVar7 = local_170;
            }
            FUN_100009038(local_158,local_170,puVar7,lVar9,uVar21);
            FUN_100006cdc(lVar9,uVar21);
            FUN_1005b26cc(&local_c0);
            FUN_1005b26cc(&local_110);
            if ((local_158[0] & 1) == 0) goto LAB_1005713c8;
          }
        }
LAB_1005713b4:
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar17);
    }
    uVar6 = 1;
  }
  else {
LAB_1005713c8:
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6);
}

