// rea decompile_all
// name: FUN_1004271c4
// address: 0x1004271c4
// body: available
// range: 0x1004271c4-0x10042769f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042769c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004271c4(long param_1,long param_2,code *param_3,code *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
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
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined1 local_188 [24];
  byte local_170 [80];
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      puVar19 = (ulong *)(param_1 + 0x20);
      puVar20 = (ulong *)(param_2 + 0x20);
      do {
        lVar12 = lVar12 + -1;
        uStack_118 = puVar19[1];
        uVar21 = *puVar19;
        uStack_108 = puVar19[3];
        local_110 = puVar19[2];
        uStack_f8 = puVar19[5];
        local_100 = puVar19[4];
        uStack_e8 = puVar19[7];
        local_f0 = puVar19[6];
        uStack_d8 = puVar19[9];
        local_e0 = puVar19[8];
        uStack_c8 = puVar20[1];
        local_d0 = *puVar20;
        uStack_b8 = puVar20[3];
        local_c0 = puVar20[2];
        uStack_a8 = puVar20[5];
        local_b0 = puVar20[4];
        uStack_98 = puVar20[7];
        local_a0 = puVar20[6];
        uStack_88 = puVar20[9];
        local_90 = puVar20[8];
        local_120 = uVar21;
        if ((((((uVar21 != local_d0) || (uStack_118 != uStack_c8)) &&
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar21 & 1) == 0)) ||
             (((local_110 != local_c0 || (uStack_108 != uStack_b8)) &&
              (uVar21 = local_110,
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar21 & 1) == 0)))) ||
            (((local_100 != local_b0 || (uStack_f8 != uStack_a8)) &&
             (uVar21 = local_100,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar21 & 1) == 0)))) ||
           (((local_f0 != local_a0 || (uStack_e8 != uStack_98)) &&
            (uVar21 = local_f0,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar21 & 1) == 0)))) goto LAB_100427638;
        uVar4 = uStack_88;
        uVar21 = local_90;
        uVar2 = (uint)(uStack_d8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_88 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar11 = (int)local_e0;
        if (uStack_d8 >> 0x3e == 3) {
          uVar15 = 0;
          if (((local_e0 != 0) || (uStack_d8 != 0xc000000000000000)) ||
             ((uStack_88 >> 0x3e < 3 ||
              ((uVar15 = 0, local_90 != 0 || (uStack_88 != 0xc000000000000000))))))
          goto joined_r0x000100427510;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_d8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(local_e0 >> 0x20);
              if (SBORROW4(iVar14,iVar11)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10042768c);
                (*pcVar5)();
              }
              uVar15 = (ulong)(iVar14 - iVar11);
            }
joined_r0x000100427510:
            if (1 < uVar3 >> 0x1e) goto LAB_10042734c;
LAB_100427380:
            if (uVar16 == 0) {
              uVar17 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(local_90 >> 0x20);
              if (SBORROW4(iVar14,(int)local_90)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100427684);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar14 - (int)local_90);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(local_e0 + 0x18) - *(long *)(local_e0 + 0x10);
              if (SBORROW8(*(long *)(local_e0 + 0x18),*(long *)(local_e0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100427688);
                (*pcVar5)();
              }
              goto joined_r0x000100427510;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_100427380;
LAB_10042734c:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_100427624;
              goto LAB_100427638;
            }
            uVar17 = *(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10);
            if (SBORROW8(*(long *)(local_90 + 0x18),*(long *)(local_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100427680);
              (*pcVar5)();
            }
          }
          if (uVar15 != uVar17) goto LAB_100427638;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar11;
                puVar7 = (ulong *)(((long)local_e0 >> 0x20) - lVar18);
                if ((long)local_e0 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100427690);
                  (*pcVar5)();
                }
                (*param_3)(&local_120,local_170);
                puVar6 = &local_d0;
                (*param_3)(puVar6,local_170);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar8 = puVar6;
                if (puVar6 != (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar8)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10042769c);
                    (*pcVar5)();
                  }
                  puVar6 = (ulong *)((lVar18 - (long)puVar8) + (long)puVar6);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar7 <= (long)puVar8) {
                  puVar8 = puVar7;
                }
                lVar18 = 0;
                if (puVar6 != (ulong *)0x0) {
                  lVar18 = (long)puVar8 + (long)puVar6;
                }
LAB_1004275a8:
                FUN_100009038(local_170,puVar6,lVar18,uVar21,uVar4);
                (*param_4)(&local_d0);
                (*param_4)(&local_120);
                if ((local_170[0] & 1) != 0) goto LAB_100427624;
                goto LAB_100427638;
              }
              local_188[0] = (undefined1)local_e0;
              local_188[1] = (undefined1)(local_e0 >> 8);
              local_188[2] = (undefined1)(local_e0 >> 0x10);
              local_188[3] = (undefined1)(local_e0 >> 0x18);
              local_188[4] = (undefined1)(local_e0 >> 0x20);
              local_188[5] = (undefined1)(local_e0 >> 0x28);
              local_188[6] = (undefined1)(local_e0 >> 0x30);
              local_188[7] = (undefined1)(local_e0 >> 0x38);
              local_188[8] = (undefined1)uStack_d8;
              local_188[9] = (undefined1)(uStack_d8 >> 8);
              local_188[10] = (undefined1)(uStack_d8 >> 0x10);
              local_188[0xb] = (undefined1)(uStack_d8 >> 0x18);
              local_188[0xc] = (undefined1)(uStack_d8 >> 0x20);
              local_188[0xd] = (undefined1)(uStack_d8 >> 0x28);
              puVar10 = local_188 + (uStack_d8 >> 0x30 & 0xff);
              (*param_3)(&local_120,local_170);
              (*param_3)(&local_d0,local_170);
            }
            else {
              if (uVar13 == 2) {
                lVar18 = *(long *)(local_e0 + 0x10);
                lVar1 = *(long *)(local_e0 + 0x18);
                (*param_3)(&local_120,local_170);
                puVar6 = &local_d0;
                (*param_3)(puVar6,local_170);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar7 = puVar6;
                if (puVar6 != (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar7)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100427698);
                    (*pcVar5)();
                  }
                  puVar6 = (ulong *)((lVar18 - (long)puVar7) + (long)puVar6);
                }
                puVar8 = (ulong *)(lVar1 - lVar18);
                if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100427694);
                  (*pcVar5)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar8 <= (long)puVar7) {
                  puVar7 = puVar8;
                }
                lVar18 = 0;
                if (puVar6 != (ulong *)0x0) {
                  lVar18 = (long)puVar7 + (long)puVar6;
                }
                goto LAB_1004275a8;
              }
              local_188[8] = 0;
              local_188[9] = 0;
              local_188[10] = 0;
              local_188[0xb] = 0;
              local_188[0xc] = 0;
              local_188[0xd] = 0;
              local_188[0] = 0;
              local_188[1] = 0;
              local_188[2] = 0;
              local_188[3] = 0;
              local_188[4] = 0;
              local_188[5] = 0;
              local_188[6] = 0;
              local_188[7] = 0;
              (*param_3)(&local_120,local_170);
              (*param_3)(&local_d0,local_170);
              puVar10 = local_188;
            }
            FUN_100009038(local_170,local_188,puVar10,uVar21,uVar4);
            (*param_4)(&local_d0);
            (*param_4)(&local_120);
            if ((local_170[0] & 1) == 0) goto LAB_100427638;
          }
        }
LAB_100427624:
        if (lVar12 == 0) break;
        puVar20 = puVar20 + 10;
        puVar19 = puVar19 + 10;
      } while( true );
    }
    uVar9 = 1;
  }
  else {
LAB_100427638:
    uVar9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
}

