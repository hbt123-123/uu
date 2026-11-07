// rea decompile_all
// name: FUN_10042a230
// address: 0x10042a230
// body: available
// range: 0x10042a230-0x10042a653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042a650 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042a230(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == *(long *)(param_2 + 0x10)) {
    if ((lVar20 != 0) && (param_1 != param_2)) {
      puVar21 = (ulong *)(param_1 + 0x30);
      puVar22 = (ulong *)(param_2 + 0x30);
      do {
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a630);
          (*pcVar8)();
        }
        bVar9 = false;
        if ((*(float *)(puVar21 + -2) == *(float *)(puVar22 + -2)) &&
           (bVar9 = false,
           !NAN(*(float *)((long)puVar21 + -0xc)) && !NAN(*(float *)((long)puVar22 + -0xc)))) {
          bVar9 = *(float *)((long)puVar21 + -0xc) == *(float *)((long)puVar22 + -0xc);
        }
        if (!bVar9) goto LAB_10042a5e8;
        uVar1 = puVar21[-1];
        uVar3 = *puVar21;
        uVar2 = puVar22[-1];
        uVar4 = *puVar22;
        uVar6 = (uint)(uVar3 >> 0x20);
        uVar13 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar4 >> 0x20);
        uVar16 = uVar7 >> 0x1e;
        iVar19 = (int)uVar1;
        if (uVar3 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((uVar1 != 0) || (uVar3 != 0xc000000000000000)) || (uVar4 >> 0x3e < 3)) ||
             ((uVar15 = 0, uVar2 != 0 || (uVar4 != 0xc000000000000000))))
          goto joined_r0x00010042a4c4;
        }
        else {
          if (uVar6 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar14,iVar19)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a640);
                (*pcVar8)();
              }
              uVar15 = (ulong)(iVar14 - iVar19);
            }
joined_r0x00010042a4c4:
            if (uVar7 >> 0x1e < 2) goto LAB_10042a34c;
LAB_10042a318:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto LAB_10042a294;
              goto LAB_10042a5e8;
            }
            uVar17 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a634);
              (*pcVar8)();
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a63c);
                (*pcVar8)();
              }
              goto joined_r0x00010042a4c4;
            }
            uVar15 = 0;
            if (1 < uVar16) goto LAB_10042a318;
LAB_10042a34c:
            if (uVar16 == 0) {
              uVar17 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar14,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a638);
                (*pcVar8)();
              }
              uVar17 = (ulong)(iVar14 - (int)uVar2);
            }
          }
          if (uVar15 != uVar17) goto LAB_10042a5e8;
          if (0 < (long)uVar15) {
            uVar15 = uVar2;
            if (uVar13 < 2) {
              if (uVar13 != 0) {
                lVar18 = (long)iVar19;
                uVar17 = ((long)uVar1 >> 0x20) - lVar18;
                if ((long)uVar1 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a644);
                  (*pcVar8)();
                }
                FUN_100008184(uVar1,uVar3);
                FUN_100008184(uVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar10 = uVar15;
                if (uVar15 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,uVar10)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a650);
                    (*pcVar8)();
                  }
                  uVar15 = (lVar18 - uVar10) + uVar15;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar17 <= (long)uVar10) {
                  uVar10 = uVar17;
                }
                lVar18 = 0;
                if (uVar15 != 0) {
                  lVar18 = uVar10 + uVar15;
                }
LAB_10042a564:
                FUN_100009038(local_80,uVar15,lVar18,uVar2,uVar4);
                FUN_100006cdc(uVar2,uVar4);
                FUN_100006cdc(uVar1,uVar3);
                if ((local_80[0] & 1) != 0) goto LAB_10042a294;
                goto LAB_10042a5e8;
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
              pbVar12 = local_80 + (uVar3 >> 0x30 & 0xff);
              FUN_100008184(uVar1,uVar3);
              FUN_100008184(uVar2,uVar4);
            }
            else {
              if (uVar13 == 2) {
                lVar18 = *(long *)(uVar1 + 0x10);
                lVar5 = *(long *)(uVar1 + 0x18);
                FUN_100008184(uVar1,uVar3);
                FUN_100008184(uVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar17 = uVar15;
                if (uVar15 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar18,uVar17)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a64c);
                    (*pcVar8)();
                  }
                  uVar15 = (lVar18 - uVar17) + uVar15;
                }
                uVar10 = lVar5 - lVar18;
                if (SBORROW8(lVar5,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10042a648);
                  (*pcVar8)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar10 <= (long)uVar17) {
                  uVar17 = uVar10;
                }
                lVar18 = 0;
                if (uVar15 != 0) {
                  lVar18 = uVar17 + uVar15;
                }
                goto LAB_10042a564;
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
              FUN_100008184(uVar2,uVar4);
              pbVar12 = local_80;
            }
            FUN_100009038(&local_81,local_80,pbVar12,uVar2,uVar4);
            FUN_100006cdc(uVar2,uVar4);
            FUN_100006cdc(uVar1,uVar3);
            if ((local_81 & 1) == 0) goto LAB_10042a5e8;
          }
        }
LAB_10042a294:
        puVar21 = puVar21 + 3;
        puVar22 = puVar22 + 3;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_10042a5e8:
    uVar11 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar11);
  }
  return;
}

