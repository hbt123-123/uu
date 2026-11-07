// rea decompile_all
// name: FUN_100428c64
// address: 0x100428c64
// body: available
// range: 0x100428c64-0x10042918b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100429188 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100428c64(long param_1,long param_2)

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
  undefined1 local_1b8 [24];
  byte local_1a0 [96];
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
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
        uStack_138 = puVar19[1];
        uVar21 = *puVar19;
        uStack_128 = puVar19[3];
        local_130 = puVar19[2];
        uStack_118 = puVar19[5];
        local_120 = puVar19[4];
        uStack_108 = puVar19[7];
        local_110 = puVar19[6];
        uStack_f8 = puVar19[9];
        local_100 = puVar19[8];
        uStack_e8 = puVar19[0xb];
        local_f0 = puVar19[10];
        uStack_d8 = puVar20[1];
        local_e0 = *puVar20;
        uStack_c8 = puVar20[3];
        local_d0 = puVar20[2];
        uStack_98 = puVar20[9];
        local_a0 = puVar20[8];
        uStack_88 = puVar20[0xb];
        local_90 = puVar20[10];
        uStack_b8 = puVar20[5];
        local_c0 = puVar20[4];
        uStack_a8 = puVar20[7];
        local_b0 = puVar20[6];
        local_140 = uVar21;
        if ((((uVar21 != local_e0) || (uStack_138 != uStack_d8)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar21 & 1) == 0)) ||
           ((((((local_130 != local_d0 || (uStack_128 != uStack_c8)) &&
               (uVar21 = local_130,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar21 & 1) == 0)) ||
              (((local_120 != local_c0 || (uStack_118 != uStack_b8)) &&
               (uVar21 = local_120,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar21 & 1) == 0)))) ||
             (((local_110 != local_b0 || (uStack_108 != uStack_a8)) &&
              (uVar21 = local_110,
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar21 & 1) == 0)))) ||
            (((local_100 != local_a0 || (uStack_f8 != uStack_98)) &&
             (uVar21 = local_100,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar21 & 1) == 0)))))) goto LAB_100429124;
        uVar4 = uStack_88;
        uVar21 = local_90;
        uVar2 = (uint)(uStack_e8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_88 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar11 = (int)local_f0;
        if (uStack_e8 >> 0x3e == 3) {
          uVar15 = 0;
          if (((local_f0 != 0) || (uStack_e8 != 0xc000000000000000)) ||
             ((uStack_88 >> 0x3e < 3 ||
              ((uVar15 = 0, local_90 != 0 || (uStack_88 != 0xc000000000000000))))))
          goto joined_r0x000100428fd0;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_e8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(local_f0 >> 0x20);
              if (SBORROW4(iVar14,iVar11)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100429178);
                (*pcVar5)();
              }
              uVar15 = (ulong)(iVar14 - iVar11);
            }
joined_r0x000100428fd0:
            if (1 < uVar3 >> 0x1e) goto LAB_100428e0c;
LAB_100428e40:
            if (uVar16 == 0) {
              uVar17 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(local_90 >> 0x20);
              if (SBORROW4(iVar14,(int)local_90)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10042916c);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar14 - (int)local_90);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
              if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100429174);
                (*pcVar5)();
              }
              goto joined_r0x000100428fd0;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_100428e40;
LAB_100428e0c:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_100429110;
              goto LAB_100429124;
            }
            uVar17 = *(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10);
            if (SBORROW8(*(long *)(local_90 + 0x18),*(long *)(local_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100429170);
              (*pcVar5)();
            }
          }
          if (uVar15 != uVar17) goto LAB_100429124;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar11;
                puVar7 = (ulong *)(((long)local_f0 >> 0x20) - lVar18);
                if ((long)local_f0 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10042917c);
                  (*pcVar5)();
                }
                FUN_100008184(local_90,uStack_88);
                FUN_1004333fc(&local_140,local_1a0);
                puVar6 = &local_e0;
                FUN_1004333fc(puVar6,local_1a0);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar8 = puVar6;
                if (puVar6 != (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar8)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100429188);
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
LAB_100429074:
                FUN_100009038(local_1a0,puVar6,lVar18,uVar21,uVar4);
                FUN_100006cdc(uVar21,uVar4);
                FUN_100433438(&local_e0);
                FUN_100433438(&local_140);
                if ((local_1a0[0] & 1) != 0) goto LAB_100429110;
                goto LAB_100429124;
              }
              local_1b8[0] = (undefined1)local_f0;
              local_1b8[1] = (undefined1)(local_f0 >> 8);
              local_1b8[2] = (undefined1)(local_f0 >> 0x10);
              local_1b8[3] = (undefined1)(local_f0 >> 0x18);
              local_1b8[4] = (undefined1)(local_f0 >> 0x20);
              local_1b8[5] = (undefined1)(local_f0 >> 0x28);
              local_1b8[6] = (undefined1)(local_f0 >> 0x30);
              local_1b8[7] = (undefined1)(local_f0 >> 0x38);
              local_1b8[8] = (undefined1)uStack_e8;
              local_1b8[9] = (undefined1)(uStack_e8 >> 8);
              local_1b8[10] = (undefined1)(uStack_e8 >> 0x10);
              local_1b8[0xb] = (undefined1)(uStack_e8 >> 0x18);
              local_1b8[0xc] = (undefined1)(uStack_e8 >> 0x20);
              local_1b8[0xd] = (undefined1)(uStack_e8 >> 0x28);
              puVar10 = local_1b8 + (uStack_e8 >> 0x30 & 0xff);
              FUN_100008184(local_90,uStack_88);
              FUN_1004333fc(&local_140,local_1a0);
              FUN_1004333fc(&local_e0,local_1a0);
            }
            else {
              if (uVar13 == 2) {
                lVar18 = *(long *)(local_f0 + 0x10);
                lVar1 = *(long *)(local_f0 + 0x18);
                FUN_100008184(local_90,uStack_88);
                FUN_1004333fc(&local_140,local_1a0);
                puVar6 = &local_e0;
                FUN_1004333fc(puVar6,local_1a0);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar7 = puVar6;
                if (puVar6 != (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar7)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100429184);
                    (*pcVar5)();
                  }
                  puVar6 = (ulong *)((lVar18 - (long)puVar7) + (long)puVar6);
                }
                puVar8 = (ulong *)(lVar1 - lVar18);
                if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100429180);
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
                goto LAB_100429074;
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
              FUN_100008184(local_90,uStack_88);
              FUN_1004333fc(&local_140,local_1a0);
              FUN_1004333fc(&local_e0,local_1a0);
              puVar10 = local_1b8;
            }
            FUN_100009038(local_1a0,local_1b8,puVar10,uVar21,uVar4);
            FUN_100006cdc(uVar21,uVar4);
            FUN_100433438(&local_e0);
            FUN_100433438(&local_140);
            if ((local_1a0[0] & 1) == 0) goto LAB_100429124;
          }
        }
LAB_100429110:
        if (lVar12 == 0) break;
        puVar20 = puVar20 + 0xc;
        puVar19 = puVar19 + 0xc;
      } while( true );
    }
    uVar9 = 1;
  }
  else {
LAB_100429124:
    uVar9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
}

