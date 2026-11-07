// rea decompile_all
// name: FUN_10042bed4
// address: 0x10042bed4
// body: available
// range: 0x10042bed4-0x10042c303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042c300 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042bed4(int *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  ulong *puVar22;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar21 = *(long *)(param_1 + 4);
  if (lVar21 == *(long *)(param_2 + 4)) {
    if ((lVar21 != 0) && (param_1 != param_2)) {
      puVar22 = (ulong *)(param_1 + 0xe);
      do {
        if (lVar21 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2e0);
          (*pcVar8)();
        }
        if (((int)puVar22[-3] != param_2[8] || *(int *)((long)puVar22 + -0x14) != param_2[9]) ||
            (int)puVar22[-2] != param_2[10]) goto LAB_10042c298;
        uVar1 = puVar22[-1];
        uVar3 = *puVar22;
        lVar2 = *(long *)(param_2 + 0xc);
        uVar4 = *(ulong *)(param_2 + 0xe);
        uVar6 = (uint)(uVar3 >> 0x20);
        uVar14 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar4 >> 0x20);
        uVar17 = uVar7 >> 0x1e;
        iVar20 = (int)uVar1;
        if (uVar3 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar1 != 0) || (uVar3 != 0xc000000000000000)) || (uVar4 >> 0x3e < 3)) ||
             ((uVar16 = 0, lVar2 != 0 || (uVar4 != 0xc000000000000000))))
          goto joined_r0x00010042c174;
        }
        else {
          if (uVar6 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar16 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar15,iVar20)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2f0);
                (*pcVar8)();
              }
              uVar16 = (ulong)(iVar15 - iVar20);
            }
joined_r0x00010042c174:
            if (uVar7 >> 0x1e < 2) goto LAB_10042bffc;
LAB_10042bfc8:
            if (uVar17 != 2) {
              if (uVar16 == 0) goto LAB_10042bf38;
              goto LAB_10042c298;
            }
            uVar18 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
            if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2e4);
              (*pcVar8)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar16 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2ec);
                (*pcVar8)();
              }
              goto joined_r0x00010042c174;
            }
            uVar16 = 0;
            if (1 < uVar17) goto LAB_10042bfc8;
LAB_10042bffc:
            if (uVar17 == 0) {
              uVar18 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar15,(int)lVar2)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2e8);
                (*pcVar8)();
              }
              uVar18 = (ulong)(iVar15 - (int)lVar2);
            }
          }
          if (uVar16 != uVar18) goto LAB_10042c298;
          if (0 < (long)uVar16) {
            lVar9 = lVar2;
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar19 = (long)iVar20;
                lVar10 = ((long)uVar1 >> 0x20) - lVar19;
                if ((long)uVar1 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2f4);
                  (*pcVar8)();
                }
                FUN_100008184(uVar1,uVar3);
                FUN_100008184(lVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar11 = lVar9;
                if (lVar9 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar19,lVar11)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c300);
                    (*pcVar8)();
                  }
                  lVar9 = (lVar19 - lVar11) + lVar9;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar10 <= lVar11) {
                  lVar11 = lVar10;
                }
                lVar19 = 0;
                if (lVar9 != 0) {
                  lVar19 = lVar11 + lVar9;
                }
LAB_10042c214:
                FUN_100009038(local_80,lVar9,lVar19,lVar2,uVar4);
                FUN_100006cdc(lVar2,uVar4);
                FUN_100006cdc(uVar1,uVar3);
                if ((local_80[0] & 1) != 0) goto LAB_10042bf38;
                goto LAB_10042c298;
              }
              local_80[0] = (byte)uVar1;
              local_80[1] = (byte)(uVar1 >> 8);
              local_80[2] = (byte)(uVar1 >> 0x10);
              local_80[3] = (byte)(uVar1 >> 0x18);
              local_80[4] = (byte)(uVar1 >> 0x20);
              local_80[5] = (byte)(uVar1 >> 0x28);
              local_80[6] = (byte)(uVar1 >> 0x30);
              local_80[7] = (byte)(uVar1 >> 0x38);
              local_80[8] = (byte)uVar3;
              local_80[9] = (byte)(uVar3 >> 8);
              local_80[10] = (byte)(uVar3 >> 0x10);
              local_80[0xb] = (byte)(uVar3 >> 0x18);
              local_80[0xc] = (byte)(uVar3 >> 0x20);
              local_80[0xd] = (byte)(uVar3 >> 0x28);
              pbVar13 = local_80 + (uVar3 >> 0x30 & 0xff);
              FUN_100008184(uVar1,uVar3);
              FUN_100008184(lVar2,uVar4);
            }
            else {
              if (uVar14 == 2) {
                lVar19 = *(long *)(uVar1 + 0x10);
                lVar11 = *(long *)(uVar1 + 0x18);
                FUN_100008184(uVar1,uVar3);
                FUN_100008184(lVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar10 = lVar9;
                if (lVar9 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar19,lVar10)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2fc);
                    (*pcVar8)();
                  }
                  lVar9 = (lVar19 - lVar10) + lVar9;
                }
                lVar5 = lVar11 - lVar19;
                if (SBORROW8(lVar11,lVar19)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10042c2f8);
                  (*pcVar8)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar5 <= lVar10) {
                  lVar10 = lVar5;
                }
                lVar19 = 0;
                if (lVar9 != 0) {
                  lVar19 = lVar10 + lVar9;
                }
                goto LAB_10042c214;
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
              FUN_100008184(uVar1,uVar3);
              FUN_100008184(lVar2,uVar4);
              pbVar13 = local_80;
            }
            FUN_100009038(&local_81,local_80,pbVar13,lVar2,uVar4);
            FUN_100006cdc(lVar2,uVar4);
            FUN_100006cdc(uVar1,uVar3);
            if ((local_81 & 1) == 0) goto LAB_10042c298;
          }
        }
LAB_10042bf38:
        puVar22 = puVar22 + 4;
        lVar21 = lVar21 + -1;
        param_2 = param_2 + 8;
      } while (lVar21 != 0);
    }
    uVar12 = 1;
  }
  else {
LAB_10042c298:
    uVar12 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar12);
  }
  return;
}

