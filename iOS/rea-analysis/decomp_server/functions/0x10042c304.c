// rea decompile_all
// name: FUN_10042c304
// address: 0x10042c304
// body: available
// range: 0x10042c304-0x10042c79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042c79c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042c304(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 local_110;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  byte local_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 == 0) || (param_1 == param_2)) {
LAB_10042c740:
      uVar10 = 1;
      goto LAB_10042c744;
    }
    uStack_c8 = *(undefined8 *)(param_1 + 0x28);
    local_d0 = *(undefined8 *)(param_1 + 0x20);
    local_b8 = *(long *)(param_1 + 0x38);
    local_c0 = *(undefined8 *)(param_1 + 0x30);
    local_b0 = *(ulong *)(param_1 + 0x40);
    uStack_98 = *(undefined8 *)(param_2 + 0x28);
    local_a0 = *(undefined8 *)(param_2 + 0x20);
    local_88 = *(long *)(param_2 + 0x38);
    local_90 = *(undefined8 *)(param_2 + 0x30);
    local_80 = *(ulong *)(param_2 + 0x40);
    if ((int)local_d0 == (int)local_a0) {
      puVar20 = (undefined8 *)(param_1 + 0x48);
      puVar19 = (undefined8 *)(param_2 + 0x48);
      do {
        uVar5 = local_80;
        lVar4 = local_88;
        if (local_d0._4_4_ != local_a0._4_4_) break;
        if ((int)uStack_c8 != (int)uStack_98) break;
        if (uStack_c8._4_4_ != uStack_98._4_4_) break;
        if ((int)local_c0 != (int)local_90) break;
        if (local_c0._4_4_ != local_90._4_4_) break;
        uVar2 = (uint)(local_b0 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        uVar3 = (uint)(local_80 >> 0x20);
        uVar15 = uVar3 >> 0x1e;
        iVar11 = (int)local_b8;
        if (local_b0 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((local_b8 != 0) || (local_b0 != 0xc000000000000000)) || (local_80 >> 0x3e < 3)) ||
             ((uVar14 = 0, local_88 != 0 || (local_80 != 0xc000000000000000))))
          goto joined_r0x00010042c604;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar14 = local_b0 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)local_b8 >> 0x20);
              if (SBORROW4(iVar13,iVar11)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c788);
                (*pcVar6)();
              }
              uVar14 = (ulong)(iVar13 - iVar11);
            }
joined_r0x00010042c604:
            if (uVar3 >> 0x1e < 2) goto LAB_10042c470;
LAB_10042c43c:
            if (uVar15 != 2) {
              if (uVar14 == 0) goto LAB_10042c6f8;
              break;
            }
            uVar16 = *(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10);
            if (SBORROW8(*(long *)(local_88 + 0x18),*(long *)(local_88 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c784);
              (*pcVar6)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar14 = *(long *)(local_b8 + 0x18) - *(long *)(local_b8 + 0x10);
              if (SBORROW8(*(long *)(local_b8 + 0x18),*(long *)(local_b8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c78c);
                (*pcVar6)();
              }
              goto joined_r0x00010042c604;
            }
            uVar14 = 0;
            if (1 < uVar15) goto LAB_10042c43c;
LAB_10042c470:
            if (uVar15 == 0) {
              uVar16 = local_80 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)local_88 >> 0x20);
              if (SBORROW4(iVar13,(int)local_88)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c780);
                (*pcVar6)();
              }
              uVar16 = (ulong)(iVar13 - (int)local_88);
            }
          }
          if (uVar14 != uVar16) break;
          if (0 < (long)uVar14) {
            if (uVar12 < 2) {
              if (uVar12 == 0) {
                local_110._0_1_ = (undefined1)local_b8;
                local_110._1_1_ = (undefined1)((ulong)local_b8 >> 8);
                local_110._2_1_ = (undefined1)((ulong)local_b8 >> 0x10);
                local_110._3_1_ = (undefined1)((ulong)local_b8 >> 0x18);
                local_110._4_1_ = (undefined1)((ulong)local_b8 >> 0x20);
                local_110._5_1_ = (undefined1)((ulong)local_b8 >> 0x28);
                local_110._6_1_ = (undefined1)((ulong)local_b8 >> 0x30);
                local_110._7_1_ = (undefined1)((ulong)local_b8 >> 0x38);
                uStack_108 = (undefined1)local_b0;
                uStack_107 = (undefined1)(local_b0 >> 8);
                uStack_106 = (undefined1)(local_b0 >> 0x10);
                uStack_105 = (undefined1)(local_b0 >> 0x18);
                uStack_104 = (undefined1)(local_b0 >> 0x20);
                uStack_103 = (undefined1)(local_b0 >> 0x28);
                puVar7 = (undefined8 *)((long)&local_110 + (local_b0 >> 0x30 & 0xff));
                FUN_10003efc8(&local_d0,local_f8);
                FUN_10003efc8(&local_a0,local_f8);
LAB_10042c6d4:
                puVar8 = &local_110;
              }
              else {
                lVar17 = (long)iVar11;
                puVar7 = (undefined8 *)((local_b8 >> 0x20) - lVar17);
                if (local_b8 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c790);
                  (*pcVar6)();
                }
                FUN_10003efc8(&local_d0,local_f8);
                puVar8 = &local_a0;
                FUN_10003efc8(puVar8,local_f8);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar9 = puVar8;
                if (puVar8 != (undefined8 *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,(long)puVar9)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c79c);
                    (*pcVar6)();
                  }
                  puVar8 = (undefined8 *)((lVar17 - (long)puVar9) + (long)puVar8);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar7 <= (long)puVar9) {
                  puVar9 = puVar7;
                }
                puVar7 = (undefined8 *)0x0;
                if (puVar8 != (undefined8 *)0x0) {
                  puVar7 = (undefined8 *)((long)puVar9 + (long)puVar8);
                }
              }
              FUN_100009038(local_f8,puVar8,puVar7,lVar4,uVar5);
              FUN_10043362c(&local_a0);
              FUN_10043362c(&local_d0);
            }
            else {
              if (uVar12 != 2) {
                uStack_108 = 0;
                uStack_107 = 0;
                uStack_106 = 0;
                uStack_105 = 0;
                uStack_104 = 0;
                uStack_103 = 0;
                local_110._0_1_ = 0;
                local_110._1_1_ = 0;
                local_110._2_1_ = 0;
                local_110._3_1_ = 0;
                local_110._4_1_ = 0;
                local_110._5_1_ = 0;
                local_110._6_1_ = 0;
                local_110._7_1_ = 0;
                FUN_10003efc8(&local_d0,local_f8);
                FUN_10003efc8(&local_a0,local_f8);
                puVar7 = &local_110;
                goto LAB_10042c6d4;
              }
              lVar17 = *(long *)(local_b8 + 0x10);
              lVar1 = *(long *)(local_b8 + 0x18);
              FUN_10003efc8(&local_d0,local_f8);
              puVar7 = &local_a0;
              FUN_10003efc8(puVar7,local_f8);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              puVar8 = puVar7;
              if (puVar7 != (undefined8 *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar17,(long)puVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c798);
                  (*pcVar6)();
                }
                puVar7 = (undefined8 *)((lVar17 - (long)puVar8) + (long)puVar7);
              }
              puVar9 = (undefined8 *)(lVar1 - lVar17);
              if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042c794);
                (*pcVar6)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)puVar9 <= (long)puVar8) {
                puVar8 = puVar9;
              }
              lVar17 = 0;
              if (puVar7 != (undefined8 *)0x0) {
                lVar17 = (long)puVar8 + (long)puVar7;
              }
              FUN_100009038(local_f8,puVar7,lVar17,lVar4,uVar5);
              FUN_10043362c(&local_a0);
              FUN_10043362c(&local_d0);
            }
            if ((local_f8[0] & 1) == 0) break;
          }
        }
LAB_10042c6f8:
        lVar18 = lVar18 + -1;
        if (lVar18 == 0) goto LAB_10042c740;
        uStack_c8 = puVar20[1];
        local_d0 = *puVar20;
        local_b8 = puVar20[3];
        local_c0 = puVar20[2];
        local_b0 = puVar20[4];
        puVar20 = puVar20 + 5;
        uStack_98 = puVar19[1];
        local_a0 = *puVar19;
        local_88 = puVar19[3];
        local_90 = puVar19[2];
        local_80 = puVar19[4];
        puVar19 = puVar19 + 5;
      } while ((int)local_d0 == (int)local_a0);
    }
  }
  uVar10 = 0;
LAB_10042c744:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar10);
  }
  return;
}

