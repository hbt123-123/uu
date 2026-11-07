// rea decompile_all
// name: FUN_10056dbe0
// address: 0x10056dbe0
// body: available
// range: 0x10056dbe0-0x10056e127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056e124 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056dbe0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  byte local_1c1 [9];
  byte local_1b8 [104];
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == *(long *)(param_2 + 0x10)) {
    if ((lVar11 != 0) && (param_1 != param_2)) {
      puVar18 = (ulong *)(param_1 + 0x20);
      puVar19 = (ulong *)(param_2 + 0x20);
      do {
        lVar11 = lVar11 + -1;
        uStack_148 = puVar18[1];
        uVar14 = *puVar18;
        uStack_138 = puVar18[3];
        local_140 = puVar18[2];
        local_108 = puVar18[9];
        local_110 = puVar18[8];
        uStack_f8 = puVar18[0xb];
        local_100 = puVar18[10];
        local_128 = puVar18[5];
        local_130 = puVar18[4];
        uStack_118 = puVar18[7];
        local_120 = puVar18[6];
        local_f0 = puVar18[0xc];
        uStack_d8 = puVar19[1];
        local_e0 = *puVar19;
        uStack_c8 = puVar19[3];
        local_d0 = puVar19[2];
        uStack_b8 = puVar19[5];
        local_c0 = puVar19[4];
        local_a8 = puVar19[7];
        uStack_b0 = puVar19[6];
        uStack_98 = puVar19[9];
        local_a0 = puVar19[8];
        local_88 = puVar19[0xb];
        local_90 = puVar19[10];
        local_80 = puVar19[0xc];
        local_150 = uVar14;
        if ((((uVar14 != local_e0) || (uStack_148 != uStack_d8)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar14 & 1) == 0)) ||
           (((local_140 != local_d0 || (uStack_138 != uStack_c8)) &&
            (uVar14 = local_140,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar14 & 1) == 0)))) goto LAB_10056e0c8;
        if (((char)local_130 != (char)local_c0) ||
           (((local_128 != uStack_b8 || (local_120 != uStack_b0)) &&
            (uVar14 = local_128,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar14 & 1) == 0)))) goto LAB_10056e0c8;
        uVar4 = local_a0;
        uVar14 = local_110;
        if ((char)uStack_118 != (char)local_a8) goto LAB_10056e0c8;
        FUN_1005b3194(&local_150,local_1b8);
        FUN_1005b3194(&local_e0,local_1b8);
        FUN_10056acec(uVar14,uVar4);
        uVar5 = local_80;
        uVar4 = local_88;
        if ((uVar14 & 1) == 0) {
LAB_10056e0b8:
          FUN_1005b31d0(&local_e0);
          FUN_1005b31d0(&local_150);
          goto LAB_10056e0c8;
        }
        if ((local_90 & 1) == 0) {
          if (local_108 == uStack_98) goto LAB_10056dd88;
          goto LAB_10056e0b8;
        }
        if (uStack_98 == 0) {
          if (local_108 == 0) goto LAB_10056dd88;
          goto LAB_10056e0b8;
        }
        if (uStack_98 != 1) {
          if (local_108 == 2) goto LAB_10056dd88;
          goto LAB_10056e0b8;
        }
        if (local_108 != 1) goto LAB_10056e0b8;
LAB_10056dd88:
        uVar2 = (uint)(local_f0 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        uVar3 = (uint)(local_80 >> 0x20);
        uVar15 = uVar3 >> 0x1e;
        iVar10 = (int)uStack_f8;
        if (local_f0 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((uStack_f8 != 0) || (local_f0 != 0xc000000000000000)) || (local_80 >> 0x3e < 3)) ||
             ((uVar14 = 0, local_88 != 0 || (local_80 != 0xc000000000000000))))
          goto joined_r0x00010056df8c;
LAB_10056dee8:
          FUN_1005b31d0(&local_e0);
          FUN_1005b31d0(&local_150);
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar14 = local_f0 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(uStack_f8 >> 0x20);
              if (SBORROW4(iVar13,iVar10)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e114);
                (*pcVar6)();
              }
              uVar14 = (ulong)(iVar13 - iVar10);
            }
joined_r0x00010056df8c:
            if (1 < uVar3 >> 0x1e) goto LAB_10056dde4;
LAB_10056de18:
            if (uVar15 == 0) {
              uVar16 = local_80 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(local_88 >> 0x20);
              if (SBORROW4(iVar13,(int)local_88)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e10c);
                (*pcVar6)();
              }
              uVar16 = (ulong)(iVar13 - (int)local_88);
            }
          }
          else {
            if (uVar12 == 2) {
              uVar14 = *(long *)(uStack_f8 + 0x18) - *(long *)(uStack_f8 + 0x10);
              if (SBORROW8(*(long *)(uStack_f8 + 0x18),*(long *)(uStack_f8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e110);
                (*pcVar6)();
              }
              goto joined_r0x00010056df8c;
            }
            uVar14 = 0;
            if (uVar15 < 2) goto LAB_10056de18;
LAB_10056dde4:
            if (uVar15 != 2) {
              if (uVar14 != 0) goto LAB_10056e0b8;
              goto LAB_10056dee8;
            }
            uVar16 = *(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10);
            if (SBORROW8(*(long *)(local_88 + 0x18),*(long *)(local_88 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e108);
              (*pcVar6)();
            }
          }
          if (uVar14 != uVar16) goto LAB_10056e0b8;
          if ((long)uVar14 < 1) goto LAB_10056dee8;
          uVar14 = local_88;
          if (uVar12 < 2) {
            if (uVar12 != 0) {
              lVar17 = (long)iVar10;
              uVar16 = ((long)uStack_f8 >> 0x20) - lVar17;
              if ((long)uStack_f8 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e118);
                (*pcVar6)();
              }
              FUN_100008184(local_88,local_80);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              uVar7 = uVar14;
              if (uVar14 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,uVar7)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e124);
                  (*pcVar6)();
                }
                uVar14 = (lVar17 - uVar7) + uVar14;
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uVar16 <= (long)uVar7) {
                uVar7 = uVar16;
              }
              lVar17 = 0;
              if (uVar14 != 0) {
                lVar17 = uVar7 + uVar14;
              }
LAB_10056e018:
              FUN_100009038(local_1b8,uVar14,lVar17,uVar4,uVar5);
              FUN_100006cdc(uVar4,uVar5);
              FUN_1005b31d0(&local_e0);
              FUN_1005b31d0(&local_150);
              if ((local_1b8[0] & 1) != 0) goto LAB_10056e09c;
              goto LAB_10056e0c8;
            }
            local_1b8[0] = (byte)uStack_f8;
            local_1b8[1] = (byte)(uStack_f8 >> 8);
            local_1b8[2] = (byte)(uStack_f8 >> 0x10);
            local_1b8[3] = (byte)(uStack_f8 >> 0x18);
            local_1b8[4] = (byte)(uStack_f8 >> 0x20);
            local_1b8[5] = (byte)(uStack_f8 >> 0x28);
            local_1b8[6] = (byte)(uStack_f8 >> 0x30);
            local_1b8[7] = (byte)(uStack_f8 >> 0x38);
            local_1b8[8] = (byte)local_f0;
            local_1b8[9] = (byte)(local_f0 >> 8);
            local_1b8[10] = (byte)(local_f0 >> 0x10);
            local_1b8[0xb] = (byte)(local_f0 >> 0x18);
            local_1b8[0xc] = (byte)(local_f0 >> 0x20);
            local_1b8[0xd] = (byte)(local_f0 >> 0x28);
            pbVar9 = local_1b8 + (local_f0 >> 0x30 & 0xff);
            FUN_100008184(local_88,local_80);
          }
          else {
            if (uVar12 == 2) {
              lVar17 = *(long *)(uStack_f8 + 0x10);
              lVar1 = *(long *)(uStack_f8 + 0x18);
              FUN_100008184(local_88,local_80);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              uVar16 = uVar14;
              if (uVar14 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e120);
                  (*pcVar6)();
                }
                uVar14 = (lVar17 - uVar16) + uVar14;
              }
              uVar7 = lVar1 - lVar17;
              if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10056e11c);
                (*pcVar6)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uVar7 <= (long)uVar16) {
                uVar16 = uVar7;
              }
              lVar17 = 0;
              if (uVar14 != 0) {
                lVar17 = uVar16 + uVar14;
              }
              goto LAB_10056e018;
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
            FUN_100008184(local_88,local_80);
            pbVar9 = local_1b8;
          }
          FUN_100009038(local_1c1,local_1b8,pbVar9,uVar4,uVar5);
          FUN_100006cdc(uVar4,uVar5);
          FUN_1005b31d0(&local_e0);
          FUN_1005b31d0(&local_150);
          if ((local_1c1[0] & 1) == 0) goto LAB_10056e0c8;
        }
LAB_10056e09c:
        if (lVar11 == 0) break;
        puVar19 = puVar19 + 0xd;
        puVar18 = puVar18 + 0xd;
      } while( true );
    }
    uVar8 = 1;
  }
  else {
LAB_10056e0c8:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar8);
}

