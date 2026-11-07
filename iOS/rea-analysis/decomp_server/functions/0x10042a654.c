// rea decompile_all
// name: FUN_10042a654
// address: 0x10042a654
// body: available
// range: 0x10042a654-0x10042aa77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042aa74 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042a654(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    if ((lVar19 != 0) && (param_1 != param_2)) {
      puVar20 = (ulong *)(param_1 + 0x30);
      puVar21 = (ulong *)(param_2 + 0x30);
      do {
        if (lVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa54);
          (*pcVar8)();
        }
        if ((int)puVar20[-2] != (int)puVar21[-2] ||
            *(int *)((long)puVar20 + -0xc) != *(int *)((long)puVar21 + -0xc)) goto LAB_10042aa0c;
        uVar1 = puVar20[-1];
        uVar3 = *puVar20;
        uVar2 = puVar21[-1];
        uVar4 = *puVar21;
        uVar6 = (uint)(uVar3 >> 0x20);
        uVar12 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar4 >> 0x20);
        uVar15 = uVar7 >> 0x1e;
        iVar18 = (int)uVar1;
        if (uVar3 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((uVar1 != 0) || (uVar3 != 0xc000000000000000)) || (uVar4 >> 0x3e < 3)) ||
             ((uVar14 = 0, uVar2 != 0 || (uVar4 != 0xc000000000000000))))
          goto joined_r0x00010042a8e8;
        }
        else {
          if (uVar6 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar14 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar13,iVar18)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa64);
                (*pcVar8)();
              }
              uVar14 = (ulong)(iVar13 - iVar18);
            }
joined_r0x00010042a8e8:
            if (uVar7 >> 0x1e < 2) goto LAB_10042a770;
LAB_10042a73c:
            if (uVar15 != 2) {
              if (uVar14 == 0) goto LAB_10042a6b8;
              goto LAB_10042aa0c;
            }
            uVar16 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa58);
              (*pcVar8)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar14 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa60);
                (*pcVar8)();
              }
              goto joined_r0x00010042a8e8;
            }
            uVar14 = 0;
            if (1 < uVar15) goto LAB_10042a73c;
LAB_10042a770:
            if (uVar15 == 0) {
              uVar16 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar13,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa5c);
                (*pcVar8)();
              }
              uVar16 = (ulong)(iVar13 - (int)uVar2);
            }
          }
          if (uVar14 != uVar16) goto LAB_10042aa0c;
          if (0 < (long)uVar14) {
            uVar14 = uVar2;
            if (uVar12 < 2) {
              if (uVar12 != 0) {
                lVar17 = (long)iVar18;
                uVar16 = ((long)uVar1 >> 0x20) - lVar17;
                if ((long)uVar1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa68);
                  (*pcVar8)();
                }
                FUN_100008184(uVar1,uVar3);
                FUN_100008184(uVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar9 = uVar14;
                if (uVar14 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,uVar9)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa74);
                    (*pcVar8)();
                  }
                  uVar14 = (lVar17 - uVar9) + uVar14;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar16 <= (long)uVar9) {
                  uVar9 = uVar16;
                }
                lVar17 = 0;
                if (uVar14 != 0) {
                  lVar17 = uVar9 + uVar14;
                }
LAB_10042a988:
                FUN_100009038(local_80,uVar14,lVar17,uVar2,uVar4);
                FUN_100006cdc(uVar2,uVar4);
                FUN_100006cdc(uVar1,uVar3);
                if ((local_80[0] & 1) != 0) goto LAB_10042a6b8;
                goto LAB_10042aa0c;
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
              pbVar11 = local_80 + (uVar3 >> 0x30 & 0xff);
              FUN_100008184(uVar1,uVar3);
              FUN_100008184(uVar2,uVar4);
            }
            else {
              if (uVar12 == 2) {
                lVar17 = *(long *)(uVar1 + 0x10);
                lVar5 = *(long *)(uVar1 + 0x18);
                FUN_100008184(uVar1,uVar3);
                FUN_100008184(uVar2,uVar4);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar16 = uVar14;
                if (uVar14 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa70);
                    (*pcVar8)();
                  }
                  uVar14 = (lVar17 - uVar16) + uVar14;
                }
                uVar9 = lVar5 - lVar17;
                if (SBORROW8(lVar5,lVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10042aa6c);
                  (*pcVar8)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar9 <= (long)uVar16) {
                  uVar16 = uVar9;
                }
                lVar17 = 0;
                if (uVar14 != 0) {
                  lVar17 = uVar16 + uVar14;
                }
                goto LAB_10042a988;
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
              pbVar11 = local_80;
            }
            FUN_100009038(&local_81,local_80,pbVar11,uVar2,uVar4);
            FUN_100006cdc(uVar2,uVar4);
            FUN_100006cdc(uVar1,uVar3);
            if ((local_81 & 1) == 0) goto LAB_10042aa0c;
          }
        }
LAB_10042a6b8:
        puVar20 = puVar20 + 3;
        puVar21 = puVar21 + 3;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    uVar10 = 1;
  }
  else {
LAB_10042aa0c:
    uVar10 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar10);
  }
  return;
}

