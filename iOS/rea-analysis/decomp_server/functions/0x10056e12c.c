// rea decompile_all
// name: FUN_10056e12c
// address: 0x10056e12c
// body: available
// range: 0x10056e12c-0x10056e677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056e674 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056e12c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar26 = *(long *)(param_1 + 0x10);
  if (lVar26 == *(long *)(param_2 + 0x10)) {
    if ((lVar26 != 0) && (param_1 != param_2)) {
      pbVar24 = (byte *)(param_2 + 0x40);
      pbVar20 = (byte *)(param_1 + 0x40);
      do {
        if (lVar26 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e654);
          (*pcVar11)();
        }
        lVar1 = *(long *)(pbVar20 + -0x20);
        uVar3 = *(ulong *)(pbVar20 + -0x18);
        lVar25 = *(long *)(pbVar20 + -8);
        bVar5 = *pbVar20;
        lVar2 = *(long *)(pbVar24 + -0x20);
        uVar4 = *(ulong *)(pbVar24 + -0x18);
        lVar23 = *(long *)(pbVar24 + -8);
        bVar6 = *pbVar24;
        if (lVar25 == 0) {
          if (lVar23 != 0) goto LAB_10056e60c;
        }
        else {
          if (lVar23 == 0) goto LAB_10056e60c;
          uVar12 = *(ulong *)(pbVar20 + -0x10);
          if ((uVar12 != *(ulong *)(pbVar24 + -0x10) || lVar25 != lVar23) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar12,lVar25,*(ulong *)(pbVar24 + -0x10),lVar23,0), (uVar12 & 1) == 0))
          goto LAB_10056e60c;
        }
        if (bVar5 == 2) {
          if (bVar6 != 2) goto LAB_10056e60c;
        }
        else if ((bVar6 == 2) || (((bVar5 ^ bVar6) & 1) != 0)) goto LAB_10056e60c;
        uVar9 = (uint)(uVar3 >> 0x20);
        uVar16 = uVar9 >> 0x1e;
        uVar10 = (uint)(uVar4 >> 0x20);
        uVar18 = uVar10 >> 0x1e;
        iVar22 = (int)lVar1;
        if (uVar3 >> 0x3e == 3) {
          uVar12 = 0;
          if ((((lVar1 != 0) || (uVar3 != 0xc000000000000000)) || (uVar4 >> 0x3e < 3)) ||
             ((uVar12 = 0, lVar2 != 0 || (uVar4 != 0xc000000000000000))))
          goto joined_r0x00010056e494;
        }
        else {
          if (uVar9 >> 0x1e < 2) {
            if (uVar16 == 0) {
              uVar12 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)((ulong)lVar1 >> 0x20);
              if (SBORROW4(iVar17,iVar22)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e664);
                (*pcVar11)();
              }
              uVar12 = (ulong)(iVar17 - iVar22);
            }
joined_r0x00010056e494:
            if (uVar10 >> 0x1e < 2) goto LAB_10056e2e0;
LAB_10056e2ac:
            if (uVar18 != 2) {
              if (uVar12 == 0) goto LAB_10056e18c;
              goto LAB_10056e60c;
            }
            uVar19 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
            if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e65c);
              (*pcVar11)();
            }
          }
          else {
            if (uVar16 == 2) {
              uVar12 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
              if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e660);
                (*pcVar11)();
              }
              goto joined_r0x00010056e494;
            }
            uVar12 = 0;
            if (1 < uVar18) goto LAB_10056e2ac;
LAB_10056e2e0:
            if (uVar18 == 0) {
              uVar19 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar17,(int)lVar2)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e658);
                (*pcVar11)();
              }
              uVar19 = (ulong)(iVar17 - (int)lVar2);
            }
          }
          if (uVar12 != uVar19) goto LAB_10056e60c;
          if (0 < (long)uVar12) {
            lVar13 = lVar23;
            if (uVar16 < 2) {
              if (uVar16 != 0) {
                lVar21 = (long)iVar22;
                lVar8 = (lVar1 >> 0x20) - lVar21;
                if (lVar1 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e668);
                  (*pcVar11)();
                }
                FUN_100008184(lVar1,uVar3);
                _swift_bridgeObjectRetain(lVar25);
                FUN_100008184(lVar2,uVar4);
                _swift_bridgeObjectRetain();
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar14 = lVar13;
                if (lVar13 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar21,lVar14)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e674);
                    (*pcVar11)();
                  }
                  lVar13 = (lVar21 - lVar14) + lVar13;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar8 <= lVar14) {
                  lVar14 = lVar8;
                }
LAB_10056e524:
                lVar8 = 0;
                if (lVar13 != 0) {
                  lVar8 = lVar14 + lVar13;
                }
                FUN_100009038(local_80,lVar13,lVar8,lVar2,uVar4);
                FUN_100006cdc(lVar2,uVar4);
                _swift_bridgeObjectRelease(lVar23);
                FUN_100006cdc(lVar1,uVar3);
                _swift_bridgeObjectRelease(lVar25);
                if ((local_80[0] & 1) != 0) goto LAB_10056e18c;
                goto LAB_10056e60c;
              }
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
              _swift_bridgeObjectRetain(lVar25);
              FUN_100008184(lVar2,uVar4);
              _swift_bridgeObjectRetain(lVar23);
              FUN_100009038(&local_81,local_80,local_80 + (uVar3 >> 0x30 & 0xff),lVar2,uVar4);
              FUN_100006cdc(lVar2,uVar4);
              _swift_bridgeObjectRelease(lVar23);
              FUN_100006cdc(lVar1,uVar3);
            }
            else {
              if (uVar16 == 2) {
                lVar8 = *(long *)(lVar1 + 0x10);
                lVar21 = *(long *)(lVar1 + 0x18);
                FUN_100008184(lVar1,uVar3);
                _swift_bridgeObjectRetain(lVar25);
                FUN_100008184(lVar2,uVar4);
                _swift_bridgeObjectRetain();
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar14 = lVar13;
                if (lVar13 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar8,lVar14)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e670);
                    (*pcVar11)();
                  }
                  lVar13 = (lVar8 - lVar14) + lVar13;
                }
                lVar7 = lVar21 - lVar8;
                if (SBORROW8(lVar21,lVar8)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056e66c);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar7 <= lVar14) {
                  lVar14 = lVar7;
                }
                goto LAB_10056e524;
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
              _swift_bridgeObjectRetain(lVar25);
              FUN_100008184(lVar2,uVar4);
              _swift_bridgeObjectRetain(lVar23);
              FUN_100009038(&local_81,local_80,local_80,lVar2,uVar4);
              FUN_100006cdc(lVar2,uVar4);
              _swift_bridgeObjectRelease(lVar23);
              FUN_100006cdc(lVar1,uVar3);
            }
            _swift_bridgeObjectRelease(lVar25);
            if ((local_81 & 1) == 0) goto LAB_10056e60c;
          }
        }
LAB_10056e18c:
        pbVar20 = pbVar20 + 0x28;
        pbVar24 = pbVar24 + 0x28;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    uVar15 = 1;
  }
  else {
LAB_10056e60c:
    uVar15 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar15);
  }
  return;
}

