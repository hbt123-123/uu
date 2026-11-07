// rea decompile_all
// name: FUN_100428714
// address: 0x100428714
// body: available
// range: 0x100428714-0x100428c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100428c60 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100428714(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 local_1b8 [24];
  byte local_1a0 [96];
  long local_140;
  long lStack_138;
  ulong local_130;
  long lStack_128;
  long local_120;
  long local_118;
  ulong local_110;
  long lStack_108;
  ulong local_100;
  long lStack_f8;
  long local_f0;
  ulong uStack_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  ulong local_b0;
  long lStack_a8;
  ulong local_a0;
  long lStack_98;
  long local_90;
  ulong uStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == *(long *)(param_2 + 0x10)) {
    if ((lVar11 != 0) && (param_1 != param_2)) {
      plVar19 = (long *)(param_1 + 0x20);
      plVar20 = (long *)(param_2 + 0x20);
      do {
        lVar11 = lVar11 + -1;
        lStack_138 = plVar19[1];
        local_140 = *plVar19;
        lStack_128 = plVar19[3];
        uVar21 = plVar19[2];
        local_118 = plVar19[5];
        local_120 = plVar19[4];
        lStack_108 = plVar19[7];
        local_110 = plVar19[6];
        lStack_f8 = plVar19[9];
        local_100 = plVar19[8];
        uStack_e8 = plVar19[0xb];
        local_f0 = plVar19[10];
        local_d8 = plVar20[1];
        local_e0 = *plVar20;
        lStack_c8 = plVar20[3];
        local_d0 = plVar20[2];
        lStack_98 = plVar20[9];
        local_a0 = plVar20[8];
        uStack_88 = plVar20[0xb];
        local_90 = plVar20[10];
        lStack_b8 = plVar20[5];
        local_c0 = plVar20[4];
        lStack_a8 = plVar20[7];
        local_b0 = plVar20[6];
        lVar12 = local_140;
        if ((char)lStack_138 == '\x01') {
          lVar12 = *(long *)(&DAT_100827738 + local_140 * 8);
        }
        local_130 = uVar21;
        if ((char)local_d8 == '\x01') {
          if (local_e0 < 2) {
            if (local_e0 == 0) {
              if (lVar12 != 0) goto LAB_100428bfc;
            }
            else if (lVar12 != 2) goto LAB_100428bfc;
          }
          else if (local_e0 == 2) {
            if (lVar12 != 3) goto LAB_100428bfc;
          }
          else if (local_e0 == 3) {
            if (lVar12 != 4) goto LAB_100428bfc;
          }
          else if (lVar12 != 5) goto LAB_100428bfc;
        }
        else if (lVar12 != local_e0) goto LAB_100428bfc;
        if ((((uVar21 != local_d0) || (lStack_128 != lStack_c8)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar21 & 1) == 0)) ||
           ((((local_120 != local_c0 || (local_118 != lStack_b8)) ||
             (((local_110 != local_b0 || (lStack_108 != lStack_a8)) &&
              (uVar21 = local_110,
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar21 & 1) == 0)))) ||
            (((local_100 != local_a0 || (lStack_f8 != lStack_98)) &&
             (uVar21 = local_100,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar21 & 1) == 0)))))) goto LAB_100428bfc;
        uVar21 = uStack_88;
        lVar12 = local_90;
        uVar2 = (uint)(uStack_e8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_88 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar10 = (int)local_f0;
        if (uStack_e8 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((local_f0 != 0) || (uStack_e8 != 0xc000000000000000)) || (uStack_88 >> 0x3e < 3)) ||
             ((uVar15 = 0, local_90 != 0 || (uStack_88 != 0xc000000000000000))))
          goto joined_r0x000100428aac;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_e8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_f0 >> 0x20);
              if (SBORROW4(iVar14,iVar10)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c4c);
                (*pcVar4)();
              }
              uVar15 = (ulong)(iVar14 - iVar10);
            }
joined_r0x000100428aac:
            if (1 < uVar3 >> 0x1e) goto LAB_1004288ec;
LAB_100428920:
            if (uVar16 == 0) {
              uVar17 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_90 >> 0x20);
              if (SBORROW4(iVar14,(int)local_90)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c44);
                (*pcVar4)();
              }
              uVar17 = (ulong)(iVar14 - (int)local_90);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
              if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c50);
                (*pcVar4)();
              }
              goto joined_r0x000100428aac;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_100428920;
LAB_1004288ec:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_100428be8;
              goto LAB_100428bfc;
            }
            uVar17 = *(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10);
            if (SBORROW8(*(long *)(local_90 + 0x18),*(long *)(local_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c48);
              (*pcVar4)();
            }
          }
          if (uVar15 != uVar17) goto LAB_100428bfc;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar10;
                plVar6 = (long *)((local_f0 >> 0x20) - lVar18);
                if (local_f0 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c54);
                  (*pcVar4)();
                }
                FUN_10043346c(&local_140,local_1a0);
                plVar5 = &local_e0;
                FUN_10043346c(plVar5,local_1a0);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar7 = plVar5;
                if (plVar5 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)plVar7)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c60);
                    (*pcVar4)();
                  }
                  plVar5 = (long *)((lVar18 - (long)plVar7) + (long)plVar5);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar6 <= (long)plVar7) {
                  plVar7 = plVar6;
                }
                lVar18 = 0;
                if (plVar5 != (long *)0x0) {
                  lVar18 = (long)plVar7 + (long)plVar5;
                }
LAB_100428b68:
                FUN_100009038(local_1a0,plVar5,lVar18,lVar12,uVar21);
                FUN_1004334a8(&local_e0);
                FUN_1004334a8(&local_140);
                if ((local_1a0[0] & 1) != 0) goto LAB_100428be8;
                goto LAB_100428bfc;
              }
              local_1b8[0] = (undefined1)local_f0;
              local_1b8[1] = (undefined1)((ulong)local_f0 >> 8);
              local_1b8[2] = (undefined1)((ulong)local_f0 >> 0x10);
              local_1b8[3] = (undefined1)((ulong)local_f0 >> 0x18);
              local_1b8[4] = (undefined1)((ulong)local_f0 >> 0x20);
              local_1b8[5] = (undefined1)((ulong)local_f0 >> 0x28);
              local_1b8[6] = (undefined1)((ulong)local_f0 >> 0x30);
              local_1b8[7] = (undefined1)((ulong)local_f0 >> 0x38);
              local_1b8[8] = (undefined1)uStack_e8;
              local_1b8[9] = (undefined1)(uStack_e8 >> 8);
              local_1b8[10] = (undefined1)(uStack_e8 >> 0x10);
              local_1b8[0xb] = (undefined1)(uStack_e8 >> 0x18);
              local_1b8[0xc] = (undefined1)(uStack_e8 >> 0x20);
              local_1b8[0xd] = (undefined1)(uStack_e8 >> 0x28);
              puVar9 = local_1b8 + (uStack_e8 >> 0x30 & 0xff);
              FUN_10043346c(&local_140,local_1a0);
              FUN_10043346c(&local_e0,local_1a0);
            }
            else {
              if (uVar13 == 2) {
                lVar18 = *(long *)(local_f0 + 0x10);
                lVar1 = *(long *)(local_f0 + 0x18);
                FUN_10043346c(&local_140,local_1a0);
                plVar5 = &local_e0;
                FUN_10043346c(plVar5,local_1a0);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar6 = plVar5;
                if (plVar5 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)plVar6)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c5c);
                    (*pcVar4)();
                  }
                  plVar5 = (long *)((lVar18 - (long)plVar6) + (long)plVar5);
                }
                plVar7 = (long *)(lVar1 - lVar18);
                if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100428c58);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar7 <= (long)plVar6) {
                  plVar6 = plVar7;
                }
                lVar18 = 0;
                if (plVar5 != (long *)0x0) {
                  lVar18 = (long)plVar6 + (long)plVar5;
                }
                goto LAB_100428b68;
              }
              local_1b8[8] = 0;
              local_1b8[9] = 0;
              local_1b8[10] = 0;
              local_1b8[0xb] = 0;
              local_1b8[0xc] = 0;
              local_1b8[0xd] = 0;
              local_1b8[0] = 0;
              local_1b8[1] = 0;
              local_1b8[2] = 0;
              local_1b8[3] = 0;
              local_1b8[4] = 0;
              local_1b8[5] = 0;
              local_1b8[6] = 0;
              local_1b8[7] = 0;
              FUN_10043346c(&local_140,local_1a0);
              FUN_10043346c(&local_e0,local_1a0);
              puVar9 = local_1b8;
            }
            FUN_100009038(local_1a0,local_1b8,puVar9,lVar12,uVar21);
            FUN_1004334a8(&local_e0);
            FUN_1004334a8(&local_140);
            if ((local_1a0[0] & 1) == 0) goto LAB_100428bfc;
          }
        }
LAB_100428be8:
        if (lVar11 == 0) break;
        plVar20 = plVar20 + 0xc;
        plVar19 = plVar19 + 0xc;
      } while( true );
    }
    uVar8 = 1;
  }
  else {
LAB_100428bfc:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar8);
}

