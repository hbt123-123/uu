// rea decompile_all
// name: FUN_10042aa78
// address: 0x10042aa78
// body: available
// range: 0x10042aa78-0x10042af5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042af5c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042aa78(long param_1,long param_2)

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
  ulong uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 local_128 [24];
  byte local_110 [48];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  ulong uStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    if ((lVar19 == 0) || (param_1 == param_2)) {
LAB_10042af00:
      uVar10 = 1;
      goto LAB_10042af04;
    }
    uStack_d8 = *(undefined8 *)(param_1 + 0x28);
    local_e0 = *(undefined8 *)(param_1 + 0x20);
    local_c8 = *(undefined8 *)(param_1 + 0x38);
    local_d0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(ulong *)(param_1 + 0x48);
    local_c0 = *(long *)(param_1 + 0x40);
    local_a8 = *(undefined8 *)(param_2 + 0x28);
    local_b0 = *(undefined8 *)(param_2 + 0x20);
    uStack_98 = *(undefined8 *)(param_2 + 0x38);
    local_a0 = *(undefined8 *)(param_2 + 0x30);
    uStack_88 = *(ulong *)(param_2 + 0x48);
    local_90 = *(long *)(param_2 + 0x40);
    if ((int)local_e0 == (int)local_b0) {
      puVar20 = (undefined8 *)(param_1 + 0x50);
      puVar21 = (undefined8 *)(param_2 + 0x50);
      do {
        uVar5 = uStack_88;
        lVar4 = local_90;
        if (local_e0._4_4_ != local_b0._4_4_) break;
        if ((float)uStack_d8 != (float)local_a8) break;
        if (uStack_d8._4_4_ != local_a8._4_4_) break;
        if ((float)local_d0 != (float)local_a0) break;
        if (local_d0._4_4_ != local_a0._4_4_) break;
        if ((float)local_c8 != (float)uStack_98) break;
        uVar2 = (uint)(uStack_b8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_88 >> 0x20);
        uVar15 = uVar3 >> 0x1e;
        iVar12 = (int)local_c0;
        iVar16 = (int)((ulong)local_c0 >> 0x20);
        if (uStack_b8 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((local_c0 != 0) || (uStack_b8 != 0xc000000000000000)) || (uStack_88 >> 0x3e < 3)) ||
             ((uVar14 = 0, local_90 != 0 || (uStack_88 != 0xc000000000000000))))
          goto joined_r0x00010042abc0;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar14 = uStack_b8 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar16,iVar12)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af48);
                (*pcVar6)();
              }
              uVar14 = (ulong)(iVar16 - iVar12);
            }
joined_r0x00010042abc0:
            if (1 < uVar3 >> 0x1e) goto LAB_10042abc4;
LAB_10042ac14:
            if (uVar15 == 0) {
              uVar17 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)local_90 >> 0x20);
              if (SBORROW4(iVar16,(int)local_90)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af40);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - (int)local_90);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar14 = *(long *)(local_c0 + 0x18) - *(long *)(local_c0 + 0x10);
              if (SBORROW8(*(long *)(local_c0 + 0x18),*(long *)(local_c0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af4c);
                (*pcVar6)();
              }
              goto joined_r0x00010042abc0;
            }
            uVar14 = 0;
            if (uVar15 < 2) goto LAB_10042ac14;
LAB_10042abc4:
            if (uVar15 != 2) {
              if (uVar14 == 0) goto LAB_10042aebc;
              break;
            }
            uVar17 = *(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10);
            if (SBORROW8(*(long *)(local_90 + 0x18),*(long *)(local_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af44);
              (*pcVar6)();
            }
          }
          if (uVar14 != uVar17) break;
          if (0 < (long)uVar14) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar12;
                puVar7 = (undefined8 *)((local_c0 >> 0x20) - lVar18);
                if (local_c0 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af50);
                  (*pcVar6)();
                }
                FUN_1004335bc(&local_e0,local_110);
                puVar8 = &local_b0;
                FUN_1004335bc(puVar8,local_110);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar9 = puVar8;
                if (puVar8 != (undefined8 *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar9)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af5c);
                    (*pcVar6)();
                  }
                  puVar8 = (undefined8 *)((lVar18 - (long)puVar9) + (long)puVar8);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar7 <= (long)puVar9) {
                  puVar9 = puVar7;
                }
                lVar18 = 0;
                if (puVar8 != (undefined8 *)0x0) {
                  lVar18 = (long)puVar9 + (long)puVar8;
                }
                FUN_100009038(local_110,puVar8,lVar18,lVar4,uVar5);
                FUN_1004335f8(&local_b0);
                FUN_1004335f8(&local_e0);
LAB_10042ae50:
                if ((local_110[0] & 1) != 0) goto LAB_10042aebc;
                break;
              }
              local_128[0] = (undefined1)local_c0;
              local_128[1] = (undefined1)((ulong)local_c0 >> 8);
              local_128[2] = (undefined1)((ulong)local_c0 >> 0x10);
              local_128[3] = (undefined1)((ulong)local_c0 >> 0x18);
              local_128[4] = (undefined1)((ulong)local_c0 >> 0x20);
              local_128[5] = (undefined1)((ulong)local_c0 >> 0x28);
              local_128[6] = (undefined1)((ulong)local_c0 >> 0x30);
              local_128[7] = (undefined1)((ulong)local_c0 >> 0x38);
              local_128[8] = (undefined1)uStack_b8;
              local_128[9] = (undefined1)(uStack_b8 >> 8);
              local_128[10] = (undefined1)(uStack_b8 >> 0x10);
              local_128[0xb] = (undefined1)(uStack_b8 >> 0x18);
              local_128[0xc] = (undefined1)(uStack_b8 >> 0x20);
              local_128[0xd] = (undefined1)(uStack_b8 >> 0x28);
              puVar11 = local_128 + (uStack_b8 >> 0x30 & 0xff);
              FUN_1004335bc(&local_e0,local_110);
              FUN_1004335bc(&local_b0,local_110);
            }
            else {
              if (uVar13 == 2) {
                lVar18 = *(long *)(local_c0 + 0x10);
                lVar1 = *(long *)(local_c0 + 0x18);
                FUN_1004335bc(&local_e0,local_110);
                puVar7 = &local_b0;
                FUN_1004335bc(puVar7,local_110);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar8 = puVar7;
                if (puVar7 != (undefined8 *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)puVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af58);
                    (*pcVar6)();
                  }
                  puVar7 = (undefined8 *)((lVar18 - (long)puVar8) + (long)puVar7);
                }
                puVar9 = (undefined8 *)(lVar1 - lVar18);
                if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042af54);
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
                FUN_100009038(local_110,puVar7,lVar18,lVar4,uVar5);
                FUN_1004335f8(&local_b0);
                FUN_1004335f8(&local_e0);
                goto LAB_10042ae50;
              }
              local_128[8] = 0;
              local_128[9] = 0;
              local_128[10] = 0;
              local_128[0xb] = 0;
              local_128[0xc] = 0;
              local_128[0xd] = 0;
              local_128[0] = 0;
              local_128[1] = 0;
              local_128[2] = 0;
              local_128[3] = 0;
              local_128[4] = 0;
              local_128[5] = 0;
              local_128[6] = 0;
              local_128[7] = 0;
              FUN_1004335bc(&local_e0,local_110);
              FUN_1004335bc(&local_b0,local_110);
              puVar11 = local_128;
            }
            FUN_100009038(local_110,local_128,puVar11,lVar4,uVar5);
            FUN_1004335f8(&local_b0);
            FUN_1004335f8(&local_e0);
            if ((local_110[0] & 1) == 0) break;
          }
        }
LAB_10042aebc:
        lVar19 = lVar19 + -1;
        if (lVar19 == 0) goto LAB_10042af00;
        uStack_d8 = puVar20[1];
        local_e0 = *puVar20;
        local_c8 = puVar20[3];
        local_d0 = puVar20[2];
        uStack_b8 = puVar20[5];
        local_c0 = puVar20[4];
        puVar20 = puVar20 + 6;
        local_a8 = puVar21[1];
        local_b0 = *puVar21;
        uStack_98 = puVar21[3];
        local_a0 = puVar21[2];
        uStack_88 = puVar21[5];
        local_90 = puVar21[4];
        puVar21 = puVar21 + 6;
      } while ((int)local_e0 == (int)local_b0);
    }
  }
  uVar10 = 0;
LAB_10042af04:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar10);
}

