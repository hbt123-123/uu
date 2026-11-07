// rea decompile_all
// name: FUN_100572b4c
// address: 0x100572b4c
// body: available
// range: 0x100572b4c-0x100572fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100572fc8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100572b4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      lVar19 = 0;
      do {
        if (lVar23 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fa8);
          (*pcVar10)();
        }
        lVar11 = param_1 + lVar19;
        lVar1 = *(long *)(lVar11 + 0x20);
        uVar3 = *(ulong *)(lVar11 + 0x28);
        lVar12 = param_2 + lVar19;
        lVar2 = *(long *)(lVar12 + 0x20);
        uVar4 = *(ulong *)(lVar12 + 0x28);
        bVar6 = *(byte *)(lVar12 + 0x34);
        bVar7 = *(byte *)(lVar12 + 0x3c);
        if ((*(byte *)(lVar11 + 0x34) & 1) == 0) {
          if (*(int *)(lVar11 + 0x30) != *(int *)(lVar12 + 0x30)) {
            bVar6 = 1;
          }
          if ((bVar6 & 1) != 0) goto LAB_100572f60;
        }
        else if (bVar6 == 0) goto LAB_100572f60;
        if ((*(byte *)(lVar11 + 0x3c) & 1) == 0) {
          if (*(int *)(lVar11 + 0x38) != *(int *)(lVar12 + 0x38)) {
            bVar7 = 1;
          }
          if ((bVar7 & 1) != 0) goto LAB_100572f60;
        }
        else if (bVar7 == 0) goto LAB_100572f60;
        uVar8 = (uint)(uVar3 >> 0x20);
        uVar14 = uVar8 >> 0x1e;
        uVar9 = (uint)(uVar4 >> 0x20);
        uVar17 = uVar9 >> 0x1e;
        iVar22 = (int)lVar1;
        if (uVar3 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((lVar1 != 0) || (uVar3 != 0xc000000000000000)) || (uVar4 >> 0x3e < 3)) ||
             ((uVar16 = 0, lVar2 != 0 || (uVar4 != 0xc000000000000000))))
          goto joined_r0x000100572e2c;
        }
        else {
          if (uVar8 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar16 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lVar1 >> 0x20);
              if (SBORROW4(iVar15,iVar22)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fb4);
                (*pcVar10)();
              }
              uVar16 = (ulong)(iVar15 - iVar22);
            }
joined_r0x000100572e2c:
            if (uVar9 >> 0x1e < 2) goto LAB_100572ca8;
LAB_100572c74:
            if (uVar17 != 2) {
              if (uVar16 == 0) goto LAB_100572bb0;
              goto LAB_100572f60;
            }
            uVar18 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
            if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fb0);
              (*pcVar10)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar16 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
              if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fb8);
                (*pcVar10)();
              }
              goto joined_r0x000100572e2c;
            }
            uVar16 = 0;
            if (1 < uVar17) goto LAB_100572c74;
LAB_100572ca8:
            if (uVar17 == 0) {
              uVar18 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar15,(int)lVar2)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fac);
                (*pcVar10)();
              }
              uVar18 = (ulong)(iVar15 - (int)lVar2);
            }
          }
          if (uVar16 != uVar18) goto LAB_100572f60;
          if (0 < (long)uVar16) {
            lVar11 = lVar2;
            if (uVar14 < 2) {
              if (uVar14 == 0) {
                local_80[0] = (byte)lVar1;
                local_80[1] = (byte)((ulong)lVar1 >> 8);
                local_80[2] = (byte)((ulong)lVar1 >> 0x10);
                local_80[3] = (byte)((ulong)lVar1 >> 0x18);
                local_80[4] = (byte)((ulong)lVar1 >> 0x20);
                local_80[5] = (byte)((ulong)lVar1 >> 0x28);
                local_80[6] = (byte)((ulong)lVar1 >> 0x30);
                local_80[7] = (byte)((ulong)lVar1 >> 0x38);
                local_80[8] = (byte)uVar3;
                local_80[9] = (byte)(uVar3 >> 8);
                local_80[10] = (byte)(uVar3 >> 0x10);
                local_80[0xb] = (byte)(uVar3 >> 0x18);
                local_80[0xc] = (byte)(uVar3 >> 0x20);
                local_80[0xd] = (byte)(uVar3 >> 0x28);
                FUN_100008184(lVar1,uVar3);
                FUN_100008184(lVar2,uVar4);
                FUN_100009038(&local_81,local_80,local_80 + (uVar3 >> 0x30 & 0xff),lVar2,uVar4);
                FUN_100006cdc(lVar2,uVar4);
                FUN_100006cdc(lVar1,uVar3);
                if ((local_81 & 1) != 0) goto LAB_100572bb0;
                goto LAB_100572f60;
              }
              lVar21 = (long)iVar22;
              lVar20 = (lVar1 >> 0x20) - lVar21;
              if (lVar1 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fbc);
                (*pcVar10)();
              }
              FUN_100008184(lVar1,uVar3);
              FUN_100008184(lVar2,uVar4);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              lVar12 = lVar11;
              if (lVar11 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar21,lVar12)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fc8);
                  (*pcVar10)();
                }
                lVar11 = (lVar21 - lVar12) + lVar11;
              }
LAB_100572e94:
              __s10Foundation13__DataStorageC7_lengthSivg();
              if (lVar20 <= lVar12) {
                lVar12 = lVar20;
              }
              lVar21 = 0;
              if (lVar11 != 0) {
                lVar21 = lVar12 + lVar11;
              }
              FUN_100009038(local_80,lVar11,lVar21,lVar2,uVar4);
              FUN_100006cdc(lVar2,uVar4);
              FUN_100006cdc(lVar1,uVar3);
              bVar6 = local_80[0];
            }
            else {
              if (uVar14 == 2) {
                lVar21 = *(long *)(lVar1 + 0x10);
                lVar5 = *(long *)(lVar1 + 0x18);
                FUN_100008184(lVar1,uVar3);
                FUN_100008184(lVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar12 = lVar11;
                if (lVar11 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar21,lVar12)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fc4);
                    (*pcVar10)();
                  }
                  lVar11 = (lVar21 - lVar12) + lVar11;
                }
                lVar20 = lVar5 - lVar21;
                if (SBORROW8(lVar5,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100572fc0);
                  (*pcVar10)();
                }
                goto LAB_100572e94;
              }
              local_80[8] = 0;
              local_80[9] = 0;
              local_80[10] = 0;
              local_80[0xb] = 0;
              local_80[0xc] = 0;
              local_80[0xd] = 0;
              local_80[0] = 0;
              local_80[1] = 0;
              local_80[2] = 0;
              local_80[3] = 0;
              local_80[4] = 0;
              local_80[5] = 0;
              local_80[6] = 0;
              local_80[7] = 0;
              FUN_100008184(lVar1,uVar3);
              FUN_100008184(lVar2,uVar4);
              FUN_100009038(&local_81,local_80,local_80,lVar2,uVar4);
              FUN_100006cdc(lVar2,uVar4);
              FUN_100006cdc(lVar1,uVar3);
              bVar6 = local_81;
            }
            if ((bVar6 & 1) == 0) goto LAB_100572f60;
          }
        }
LAB_100572bb0:
        lVar19 = lVar19 + 0x20;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar13 = 1;
  }
  else {
LAB_100572f60:
    uVar13 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13);
  }
  return;
}

