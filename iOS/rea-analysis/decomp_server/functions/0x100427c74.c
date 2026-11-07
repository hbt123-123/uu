// rea decompile_all
// name: FUN_100427c74
// address: 0x100427c74
// body: available
// range: 0x100427c74-0x1004281b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004281b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100427c74(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 local_140 [24];
  byte local_128 [56];
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  ulong local_c0;
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  ulong local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == *(long *)(param_2 + 0x10)) {
    if ((lVar11 != 0) && (param_1 != param_2)) {
      plVar19 = (long *)(param_1 + 0x20);
      plVar20 = (long *)(param_2 + 0x20);
      do {
        lVar11 = lVar11 + -1;
        lVar18 = plVar19[1];
        local_f0 = *plVar19;
        lVar23 = plVar19[3];
        local_e0 = plVar19[2];
        lStack_c8 = plVar19[5];
        local_d0 = plVar19[4];
        local_c0 = plVar19[6];
        lVar21 = plVar20[1];
        local_b0 = *plVar20;
        lVar24 = plVar20[3];
        local_a0 = plVar20[2];
        lVar22 = plVar20[5];
        local_90 = plVar20[4];
        uVar12 = plVar20[6];
        uStack_a8._0_1_ = (char)lVar21;
        uStack_e8 = lVar18;
        uStack_d8 = lVar23;
        uStack_a8 = lVar21;
        local_98 = lVar24;
        lStack_88 = lVar22;
        local_80 = uVar12;
        if ((char)uStack_a8 == '\x01') {
          if (local_b0 < 3) {
            if (local_b0 == 0) {
              if (local_f0 != 0) goto LAB_10042814c;
            }
            else if (local_b0 == 1) {
              if (local_f0 != 1) goto LAB_10042814c;
            }
            else if (local_f0 != 2) goto LAB_10042814c;
          }
          else if (local_b0 == 3) {
            if (local_f0 != 3) goto LAB_10042814c;
          }
          else if (local_b0 == 4) {
            if (local_f0 != 4) goto LAB_10042814c;
          }
          else if (local_f0 != 5) goto LAB_10042814c;
        }
        else if (local_f0 != local_b0) goto LAB_10042814c;
        uStack_e8._4_4_ = (int)((ulong)lVar18 >> 0x20);
        uStack_a8._4_4_ = (int)((ulong)lVar21 >> 0x20);
        bVar4 = uStack_e8._4_4_ != uStack_a8._4_4_;
        if (bVar4) goto LAB_10042814c;
        local_98._0_1_ = (char)lVar24;
        if ((char)local_98 == '\x01') {
          if (local_a0 == 0) {
            if (local_e0 != 0) goto LAB_10042814c;
          }
          else if (local_a0 == 1) {
            if (local_e0 != 1) goto LAB_10042814c;
          }
          else if (local_e0 != 2) goto LAB_10042814c;
        }
        else if (local_e0 != local_a0) goto LAB_10042814c;
        uStack_d8._4_4_ = (int)((ulong)lVar23 >> 0x20);
        local_98._4_4_ = (int)((ulong)lVar24 >> 0x20);
        bVar4 = uStack_d8._4_4_ != local_98._4_4_;
        if (bVar4) goto LAB_10042814c;
        if ((int)local_d0 != (int)local_90) goto LAB_10042814c;
        uVar1 = (uint)(local_c0 >> 0x20);
        uVar13 = uVar1 >> 0x1e;
        uVar2 = (uint)(uVar12 >> 0x20);
        uVar16 = uVar2 >> 0x1e;
        iVar10 = (int)lStack_c8;
        if (local_c0 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((lStack_c8 != 0) || (local_c0 != 0xc000000000000000)) || (uVar12 >> 0x3e < 3)) ||
             ((uVar15 = 0, lVar22 != 0 || (uVar12 != 0xc000000000000000))))
          goto joined_r0x000100427ffc;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = local_c0 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)lStack_c8 >> 0x20);
              if (SBORROW4(iVar14,iVar10)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10042819c);
                (*pcVar3)();
              }
              uVar15 = (ulong)(iVar14 - iVar10);
            }
joined_r0x000100427ffc:
            if (uVar2 >> 0x1e < 2) goto LAB_100427e64;
LAB_100427e30:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_100428110;
              goto LAB_10042814c;
            }
            uVar17 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
            if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100428194);
              (*pcVar3)();
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(lStack_c8 + 0x18) - *(long *)(lStack_c8 + 0x10);
              if (SBORROW8(*(long *)(lStack_c8 + 0x18),*(long *)(lStack_c8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1004281a0);
                (*pcVar3)();
              }
              goto joined_r0x000100427ffc;
            }
            uVar15 = 0;
            if (1 < uVar16) goto LAB_100427e30;
LAB_100427e64:
            if (uVar16 == 0) {
              uVar17 = uVar12 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)lVar22 >> 0x20);
              if (SBORROW4(iVar14,(int)lVar22)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100428198);
                (*pcVar3)();
              }
              uVar17 = (ulong)(iVar14 - (int)lVar22);
            }
          }
          if (uVar15 != uVar17) goto LAB_10042814c;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar10;
                plVar5 = (long *)((lStack_c8 >> 0x20) - lVar18);
                if (lStack_c8 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004281a4);
                  (*pcVar3)();
                }
                FUN_100433660(&local_f0,local_128);
                plVar6 = &local_b0;
                FUN_100433660(plVar6,local_128);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                plVar7 = plVar6;
                if (plVar6 != (long *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,(long)plVar7)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004281b0);
                    (*pcVar3)();
                  }
                  plVar6 = (long *)((lVar18 - (long)plVar7) + (long)plVar6);
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)plVar5 <= (long)plVar7) {
                  plVar7 = plVar5;
                }
                lVar18 = 0;
                if (plVar6 != (long *)0x0) {
                  lVar18 = (long)plVar7 + (long)plVar6;
                }
                FUN_100009038(local_128,plVar6,lVar18,lVar22,uVar12);
                FUN_10043369c(&local_b0);
                FUN_10043369c(&local_f0);
                if ((local_128[0] & 1) != 0) goto LAB_100428110;
                goto LAB_10042814c;
              }
              local_140[0] = (undefined1)lStack_c8;
              local_140[1] = (undefined1)((ulong)lStack_c8 >> 8);
              local_140[2] = (undefined1)((ulong)lStack_c8 >> 0x10);
              local_140[3] = (undefined1)((ulong)lStack_c8 >> 0x18);
              local_140[4] = (undefined1)((ulong)lStack_c8 >> 0x20);
              local_140[5] = (undefined1)((ulong)lStack_c8 >> 0x28);
              local_140[6] = (undefined1)((ulong)lStack_c8 >> 0x30);
              local_140[7] = (undefined1)((ulong)lStack_c8 >> 0x38);
              local_140[8] = (undefined1)local_c0;
              local_140[9] = (undefined1)(local_c0 >> 8);
              local_140[10] = (undefined1)(local_c0 >> 0x10);
              local_140[0xb] = (undefined1)(local_c0 >> 0x18);
              local_140[0xc] = (undefined1)(local_c0 >> 0x20);
              local_140[0xd] = (undefined1)(local_c0 >> 0x28);
              puVar9 = local_140 + (local_c0 >> 0x30 & 0xff);
              FUN_100433660(&local_f0,local_128);
              FUN_100433660(&local_b0,local_128);
LAB_1004280ec:
              FUN_100009038(local_128,local_140,puVar9,lVar22,uVar12);
              FUN_10043369c(&local_b0);
              FUN_10043369c(&local_f0);
            }
            else {
              if (uVar13 != 2) {
                local_140[8] = 0;
                local_140[9] = 0;
                local_140[10] = 0;
                local_140[0xb] = 0;
                local_140[0xc] = 0;
                local_140[0xd] = 0;
                local_140[0] = 0;
                local_140[1] = 0;
                local_140[2] = 0;
                local_140[3] = 0;
                local_140[4] = 0;
                local_140[5] = 0;
                local_140[6] = 0;
                local_140[7] = 0;
                FUN_100433660(&local_f0,local_128);
                FUN_100433660(&local_b0,local_128);
                puVar9 = local_140;
                goto LAB_1004280ec;
              }
              lVar18 = *(long *)(lStack_c8 + 0x10);
              lVar21 = *(long *)(lStack_c8 + 0x18);
              FUN_100433660(&local_f0,local_128);
              plVar5 = &local_b0;
              FUN_100433660(plVar5,local_128);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar6 = plVar5;
              if (plVar5 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar18,(long)plVar6)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004281ac);
                  (*pcVar3)();
                }
                plVar5 = (long *)((lVar18 - (long)plVar6) + (long)plVar5);
              }
              plVar7 = (long *)(lVar21 - lVar18);
              if (SBORROW8(lVar21,lVar18)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1004281a8);
                (*pcVar3)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar7 <= (long)plVar6) {
                plVar6 = plVar7;
              }
              lVar18 = 0;
              if (plVar5 != (long *)0x0) {
                lVar18 = (long)plVar6 + (long)plVar5;
              }
              FUN_100009038(local_128,plVar5,lVar18,lVar22,uVar12);
              FUN_10043369c(&local_b0);
              FUN_10043369c(&local_f0);
            }
            if ((local_128[0] & 1) == 0) goto LAB_10042814c;
          }
        }
LAB_100428110:
        if (lVar11 == 0) break;
        plVar20 = plVar20 + 7;
        plVar19 = plVar19 + 7;
      } while( true );
    }
    uVar8 = 1;
  }
  else {
LAB_10042814c:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar8);
  }
  return;
}

