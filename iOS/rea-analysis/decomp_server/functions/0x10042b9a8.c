// rea decompile_all
// name: FUN_10042b9a8
// address: 0x10042b9a8
// body: available
// range: 0x10042b9a8-0x10042bed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042bed0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042b9a8(long param_1,long param_2)

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
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 local_158 [24];
  byte local_140 [64];
  undefined8 local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  ulong uStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    if ((lVar19 == 0) || (param_1 == param_2)) {
LAB_10042be74:
      uVar10 = 1;
      goto LAB_10042be78;
    }
    lStack_f8 = *(long *)(param_1 + 0x28);
    local_100 = *(undefined8 *)(param_1 + 0x20);
    local_e8 = *(undefined8 *)(param_1 + 0x38);
    uStack_f0 = *(undefined8 *)(param_1 + 0x30);
    uStack_d8 = *(undefined8 *)(param_1 + 0x48);
    local_e0 = *(long *)(param_1 + 0x40);
    uStack_c8 = *(ulong *)(param_1 + 0x58);
    local_d0 = *(long *)(param_1 + 0x50);
    local_b8 = *(long *)(param_2 + 0x28);
    local_c0 = *(undefined8 *)(param_2 + 0x20);
    uStack_a8 = *(undefined8 *)(param_2 + 0x38);
    local_b0 = *(undefined8 *)(param_2 + 0x30);
    local_98 = *(ulong *)(param_2 + 0x48);
    local_a0 = *(long *)(param_2 + 0x40);
    uStack_88 = *(ulong *)(param_2 + 0x58);
    local_90 = *(long *)(param_2 + 0x50);
    if ((int)local_100 == (int)local_c0) {
      puVar20 = (undefined8 *)(param_1 + 0x60);
      puVar21 = (undefined8 *)(param_2 + 0x60);
      do {
        uVar5 = uStack_88;
        lVar4 = local_90;
        if ((char)local_b0 == '\x01') {
          if (local_b8 == 0) {
            if (lStack_f8 != 0) break;
          }
          else if (local_b8 == 1) {
            if (lStack_f8 != 1) break;
          }
          else if (lStack_f8 != 2) break;
        }
        else if (lStack_f8 != local_b8) break;
        if (uStack_f0._4_4_ != local_b0._4_4_) break;
        if ((int)local_e8 != (int)uStack_a8) break;
        if ((local_98 & 1) == 0) {
          if (local_e0 != local_a0) break;
        }
        else if (local_a0 < 2) {
          if (local_a0 == 0) {
            if (local_e0 != 0) break;
          }
          else if (local_e0 != 1) break;
        }
        else if (local_a0 == 2) {
          if (local_e0 != 2) break;
        }
        else if (local_a0 == 3) {
          if (local_e0 != 3) break;
        }
        else if (local_e0 != 4) break;
        uVar2 = (uint)(uStack_c8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_88 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar12 = (int)local_d0;
        if (uStack_c8 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((local_d0 != 0) || (uStack_c8 != 0xc000000000000000)) || (uStack_88 >> 0x3e < 3)) ||
             ((uVar15 = 0, local_90 != 0 || (uStack_88 != 0xc000000000000000))))
          goto joined_r0x00010042bcf4;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_c8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_d0 >> 0x20);
              if (SBORROW4(iVar14,iVar12)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042bebc);
                (*pcVar6)();
              }
              uVar15 = (ulong)(iVar14 - iVar12);
            }
joined_r0x00010042bcf4:
            if (1 < uVar3 >> 0x1e) goto LAB_10042bb3c;
LAB_10042bb70:
            if (uVar16 == 0) {
              uVar17 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_90 >> 0x20);
              if (SBORROW4(iVar14,(int)local_90)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042beb8);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar14 - (int)local_90);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10);
              if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042bec0);
                (*pcVar6)();
              }
              goto joined_r0x00010042bcf4;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_10042bb70;
LAB_10042bb3c:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_10042be28;
              break;
            }
            uVar17 = *(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10);
            if (SBORROW8(*(long *)(local_90 + 0x18),*(long *)(local_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10042beb4);
              (*pcVar6)();
            }
          }
          if (uVar15 != uVar17) break;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar12;
                puVar8 = (undefined8 *)((local_d0 >> 0x20) - lVar18);
                if (local_d0 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042bec4);
                  (*pcVar6)();
                }
                FUN_1004336d0(&local_100,local_140);
                puVar7 = &local_c0;
                FUN_1004336d0(puVar7,local_140);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar9 = puVar7;
                if (puVar7 != (undefined8 *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar9)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10042bed0);
                    (*pcVar6)();
                  }
                  puVar7 = (undefined8 *)((lVar18 - (long)puVar9) + (long)puVar7);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar8 <= (long)puVar9) {
                  puVar9 = puVar8;
                }
                lVar18 = 0;
                if (puVar7 != (undefined8 *)0x0) {
                  lVar18 = (long)puVar9 + (long)puVar7;
                }
LAB_10042bdb0:
                FUN_100009038(local_140,puVar7,lVar18,lVar4,uVar5);
                FUN_10043370c(&local_c0);
                FUN_10043370c(&local_100);
                if ((local_140[0] & 1) != 0) goto LAB_10042be28;
                break;
              }
              local_158[0] = (undefined1)local_d0;
              local_158[1] = (undefined1)((ulong)local_d0 >> 8);
              local_158[2] = (undefined1)((ulong)local_d0 >> 0x10);
              local_158[3] = (undefined1)((ulong)local_d0 >> 0x18);
              local_158[4] = (undefined1)((ulong)local_d0 >> 0x20);
              local_158[5] = (undefined1)((ulong)local_d0 >> 0x28);
              local_158[6] = (undefined1)((ulong)local_d0 >> 0x30);
              local_158[7] = (undefined1)((ulong)local_d0 >> 0x38);
              local_158[8] = (undefined1)uStack_c8;
              local_158[9] = (undefined1)(uStack_c8 >> 8);
              local_158[10] = (undefined1)(uStack_c8 >> 0x10);
              local_158[0xb] = (undefined1)(uStack_c8 >> 0x18);
              local_158[0xc] = (undefined1)(uStack_c8 >> 0x20);
              local_158[0xd] = (undefined1)(uStack_c8 >> 0x28);
              puVar11 = local_158 + (uStack_c8 >> 0x30 & 0xff);
              FUN_1004336d0(&local_100,local_140);
              FUN_1004336d0(&local_c0,local_140);
            }
            else {
              if (uVar13 == 2) {
                lVar18 = *(long *)(local_d0 + 0x10);
                lVar1 = *(long *)(local_d0 + 0x18);
                FUN_1004336d0(&local_100,local_140);
                puVar7 = &local_c0;
                FUN_1004336d0(puVar7,local_140);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar8 = puVar7;
                if (puVar7 != (undefined8 *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10042becc);
                    (*pcVar6)();
                  }
                  puVar7 = (undefined8 *)((lVar18 - (long)puVar8) + (long)puVar7);
                }
                puVar9 = (undefined8 *)(lVar1 - lVar18);
                if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042bec8);
                  (*pcVar6)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar9 <= (long)puVar8) {
                  puVar8 = puVar9;
                }
                lVar18 = 0;
                if (puVar7 != (undefined8 *)0x0) {
                  lVar18 = (long)puVar8 + (long)puVar7;
                }
                goto LAB_10042bdb0;
              }
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
              FUN_1004336d0(&local_100,local_140);
              FUN_1004336d0(&local_c0,local_140);
              puVar11 = local_158;
            }
            FUN_100009038(local_140,local_158,puVar11,lVar4,uVar5);
            FUN_10043370c(&local_c0);
            FUN_10043370c(&local_100);
            if ((local_140[0] & 1) == 0) break;
          }
        }
LAB_10042be28:
        lVar19 = lVar19 + -1;
        if (lVar19 == 0) goto LAB_10042be74;
        lStack_f8 = puVar20[1];
        local_100 = *puVar20;
        local_e8 = puVar20[3];
        uStack_f0 = puVar20[2];
        uStack_d8 = puVar20[5];
        local_e0 = puVar20[4];
        uStack_c8 = puVar20[7];
        local_d0 = puVar20[6];
        local_b8 = puVar21[1];
        local_c0 = *puVar21;
        uStack_a8 = puVar21[3];
        local_b0 = puVar21[2];
        local_98 = puVar21[5];
        local_a0 = puVar21[4];
        uStack_88 = puVar21[7];
        local_90 = puVar21[6];
        puVar20 = puVar20 + 8;
        puVar21 = puVar21 + 8;
      } while ((int)local_100 == (int)local_c0);
    }
  }
  uVar10 = 0;
LAB_10042be78:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar10);
}

