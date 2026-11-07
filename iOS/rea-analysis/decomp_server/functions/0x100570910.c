// rea decompile_all
// name: FUN_100570910
// address: 0x100570910
// body: available
// range: 0x100570910-0x100570e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100570e58 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100570910(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int iVar11;
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
  undefined1 local_158 [24];
  byte local_140 [64];
  long local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 local_d0;
  undefined6 uStack_ce;
  byte local_c8;
  byte local_c7;
  long local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 local_90;
  undefined6 uStack_8e;
  byte local_88;
  byte local_87;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      plVar19 = (long *)(param_1 + 0x20);
      plVar20 = (long *)(param_2 + 0x20);
      do {
        lVar12 = lVar12 + -1;
        uStack_f8 = plVar19[1];
        local_100 = *plVar19;
        uVar21 = plVar19[3];
        local_f0 = plVar19[2];
        local_e0 = plVar19[4];
        uStack_d8 = (undefined2)plVar19[5];
        uVar9 = *(undefined8 *)((long)plVar19 + 0x32);
        uStack_ce = (undefined6)uVar9;
        local_c8 = (byte)((ulong)uVar9 >> 0x30);
        local_c7 = (byte)((ulong)uVar9 >> 0x38);
        uStack_d6 = (undefined6)*(undefined8 *)((long)plVar19 + 0x2a);
        local_d0 = (undefined2)((ulong)*(undefined8 *)((long)plVar19 + 0x2a) >> 0x30);
        uStack_b8 = plVar20[1];
        local_c0 = *plVar20;
        local_a8 = plVar20[3];
        local_b0 = plVar20[2];
        local_a0 = plVar20[4];
        uStack_98 = (undefined2)plVar20[5];
        uVar9 = *(undefined8 *)((long)plVar20 + 0x32);
        uStack_8e = (undefined6)uVar9;
        local_88 = (byte)((ulong)uVar9 >> 0x30);
        local_87 = (byte)((ulong)uVar9 >> 0x38);
        uStack_96 = (undefined6)*(undefined8 *)((long)plVar20 + 0x2a);
        local_90 = (undefined2)((ulong)*(undefined8 *)((long)plVar20 + 0x2a) >> 0x30);
        local_e8 = uVar21;
        if ((local_f0 & 0x100000000) == 0) {
          if ((local_b0 & 0x100000000) != 0) goto LAB_100570df4;
          if ((int)local_f0 != (int)local_b0) goto LAB_100570df4;
        }
        else if ((local_b0 & 0x100000000) == 0) goto LAB_100570df4;
        if (local_e0 == 0) {
          if (local_a0 != 0) goto LAB_100570df4;
        }
        else if ((local_a0 == 0) ||
                (((uVar21 != local_a8 || (local_e0 != local_a0)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar21 & 1) == 0)))) goto LAB_100570df4;
        lVar4 = CONCAT62(uStack_8e,local_90);
        if (CONCAT62(uStack_ce,local_d0) == 0) {
          if (lVar4 != 0) goto LAB_100570df4;
        }
        else if ((lVar4 == 0) ||
                (((uVar21 = CONCAT62(uStack_d6,uStack_d8), uVar21 != CONCAT62(uStack_96,uStack_98)
                  || (CONCAT62(uStack_ce,local_d0) != lVar4)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar21 & 1) == 0)))) goto LAB_100570df4;
        uVar21 = uStack_b8;
        lVar4 = local_c0;
        if (local_c8 == 2) {
          if (local_88 != 2) goto LAB_100570df4;
        }
        else if ((local_88 == 2) || (((local_c8 ^ local_88) & 1) != 0)) goto LAB_100570df4;
        if (local_c7 == 2) {
          if (local_87 != 2) goto LAB_100570df4;
        }
        else if ((local_87 == 2) || (((local_c7 ^ local_87) & 1) != 0)) goto LAB_100570df4;
        uVar2 = (uint)(uStack_f8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_b8 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar11 = (int)local_100;
        if (uStack_f8 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((local_100 != 0) || (uStack_f8 != 0xc000000000000000)) || (uStack_b8 >> 0x3e < 3))
             || ((uVar15 = 0, local_c0 != 0 || (uStack_b8 != 0xc000000000000000))))
          goto joined_r0x000100570cc8;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_f8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_100 >> 0x20);
              if (SBORROW4(iVar14,iVar11)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e48);
                (*pcVar5)();
              }
              uVar15 = (ulong)(iVar14 - iVar11);
            }
joined_r0x000100570cc8:
            if (uVar3 >> 0x1e < 2) goto LAB_100570b2c;
LAB_100570af8:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_100570de0;
              goto LAB_100570df4;
            }
            uVar17 = *(long *)(local_c0 + 0x18) - *(long *)(local_c0 + 0x10);
            if (SBORROW8(*(long *)(local_c0 + 0x18),*(long *)(local_c0 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e40);
              (*pcVar5)();
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(local_100 + 0x18) - *(long *)(local_100 + 0x10);
              if (SBORROW8(*(long *)(local_100 + 0x18),*(long *)(local_100 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e44);
                (*pcVar5)();
              }
              goto joined_r0x000100570cc8;
            }
            uVar15 = 0;
            if (1 < uVar16) goto LAB_100570af8;
LAB_100570b2c:
            if (uVar16 == 0) {
              uVar17 = uStack_b8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_c0 >> 0x20);
              if (SBORROW4(iVar14,(int)local_c0)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e3c);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar14 - (int)local_c0);
            }
          }
          if (uVar15 != uVar17) goto LAB_100570df4;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar11;
                plVar6 = (long *)((local_100 >> 0x20) - lVar18);
                if (local_100 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e4c);
                  (*pcVar5)();
                }
                FUN_1005b2cd4(&local_100,local_140);
                plVar7 = &local_c0;
                FUN_1005b2cd4(plVar7,local_140);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar8 = plVar7;
                if (plVar7 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)plVar8)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e58);
                    (*pcVar5)();
                  }
                  plVar7 = (long *)((lVar18 - (long)plVar8) + (long)plVar7);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar6 <= (long)plVar8) {
                  plVar8 = plVar6;
                }
                lVar18 = 0;
                if (plVar7 != (long *)0x0) {
                  lVar18 = (long)plVar8 + (long)plVar7;
                }
                FUN_100009038(local_140,plVar7,lVar18,lVar4,uVar21);
                FUN_1005b2d08(&local_c0);
                FUN_1005b2d08(&local_100);
                if ((local_140[0] & 1) != 0) goto LAB_100570de0;
                goto LAB_100570df4;
              }
              local_158[0] = (undefined1)local_100;
              local_158[1] = (undefined1)((ulong)local_100 >> 8);
              local_158[2] = (undefined1)((ulong)local_100 >> 0x10);
              local_158[3] = (undefined1)((ulong)local_100 >> 0x18);
              local_158[4] = (undefined1)((ulong)local_100 >> 0x20);
              local_158[5] = (undefined1)((ulong)local_100 >> 0x28);
              local_158[6] = (undefined1)((ulong)local_100 >> 0x30);
              local_158[7] = (undefined1)((ulong)local_100 >> 0x38);
              local_158[8] = (undefined1)uStack_f8;
              local_158[9] = (undefined1)(uStack_f8 >> 8);
              local_158[10] = (undefined1)(uStack_f8 >> 0x10);
              local_158[0xb] = (undefined1)(uStack_f8 >> 0x18);
              local_158[0xc] = (undefined1)(uStack_f8 >> 0x20);
              local_158[0xd] = (undefined1)(uStack_f8 >> 0x28);
              puVar10 = local_158 + (uStack_f8 >> 0x30 & 0xff);
              FUN_1005b2cd4(&local_100,local_140);
              FUN_1005b2cd4(&local_c0,local_140);
LAB_100570dbc:
              FUN_100009038(local_140,local_158,puVar10,lVar4,uVar21);
              FUN_1005b2d08(&local_c0);
              FUN_1005b2d08(&local_100);
            }
            else {
              if (uVar13 != 2) {
                local_158[8] = 0;
                local_158[9] = 0;
                local_158[10] = 0;
                local_158[0xb] = 0;
                local_158[0xc] = 0;
                local_158[0xd] = 0;
                local_158[0] = 0;
                local_158[1] = 0;
                local_158[2] = 0;
                local_158[3] = 0;
                local_158[4] = 0;
                local_158[5] = 0;
                local_158[6] = 0;
                local_158[7] = 0;
                FUN_1005b2cd4(&local_100,local_140);
                FUN_1005b2cd4(&local_c0,local_140);
                puVar10 = local_158;
                goto LAB_100570dbc;
              }
              lVar18 = *(long *)(local_100 + 0x10);
              lVar1 = *(long *)(local_100 + 0x18);
              FUN_1005b2cd4(&local_100,local_140);
              plVar6 = &local_c0;
              FUN_1005b2cd4(plVar6,local_140);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar7 = plVar6;
              if (plVar6 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar18,(long)plVar7)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e54);
                  (*pcVar5)();
                }
                plVar6 = (long *)((lVar18 - (long)plVar7) + (long)plVar6);
              }
              plVar8 = (long *)(lVar1 - lVar18);
              if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100570e50);
                (*pcVar5)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar8 <= (long)plVar7) {
                plVar7 = plVar8;
              }
              lVar18 = 0;
              if (plVar6 != (long *)0x0) {
                lVar18 = (long)plVar7 + (long)plVar6;
              }
              FUN_100009038(local_140,plVar6,lVar18,lVar4,uVar21);
              FUN_1005b2d08(&local_c0);
              FUN_1005b2d08(&local_100);
            }
            if ((local_140[0] & 1) == 0) goto LAB_100570df4;
          }
        }
LAB_100570de0:
        if (lVar12 == 0) break;
        plVar19 = plVar19 + 8;
        plVar20 = plVar20 + 8;
      } while( true );
    }
    uVar9 = 1;
  }
  else {
LAB_100570df4:
    uVar9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar9);
  }
  return;
}

