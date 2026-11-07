// rea decompile_all
// name: FUN_100573028
// address: 0x100573028
// body: available
// range: 0x100573028-0x1005735af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005735ac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100573028(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  int iVar23;
  long *plVar24;
  long lVar25;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      plVar21 = (long *)(param_2 + 0x40);
      plVar24 = (long *)(param_1 + 0x40);
      do {
        if (lVar25 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10057358c);
          (*pcVar11)();
        }
        lVar1 = plVar24[-4];
        uVar3 = plVar24[-3];
        uVar18 = plVar24[-1];
        lVar4 = *plVar24;
        lVar2 = plVar21[-4];
        uVar5 = plVar21[-3];
        cVar7 = (char)plVar21[-2];
        lVar6 = *plVar21;
        if ((char)plVar24[-2] == '\f') {
          if (cVar7 != '\f') goto LAB_100573544;
        }
        else if ((cVar7 == '\f') ||
                (*(long *)(&DAT_10083cc80 + (long)(char)plVar24[-2] * 8) !=
                 *(long *)(&DAT_10083cc80 + (long)cVar7 * 8))) goto LAB_100573544;
        if (lVar4 == 0) {
          if (lVar6 != 0) goto LAB_100573544;
        }
        else if ((lVar6 == 0) ||
                (((uVar18 != plVar21[-1] || (lVar4 != lVar6)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar18,lVar4,plVar21[-1],lVar6,0), (uVar18 & 1) == 0))))
        goto LAB_100573544;
        uVar9 = (uint)(uVar3 >> 0x20);
        uVar16 = uVar9 >> 0x1e;
        uVar10 = (uint)(uVar5 >> 0x20);
        uVar19 = uVar10 >> 0x1e;
        iVar23 = (int)lVar1;
        if (uVar3 >> 0x3e == 3) {
          uVar18 = 0;
          if (((lVar1 != 0) || (uVar3 != 0xc000000000000000)) ||
             ((uVar5 >> 0x3e < 3 || ((uVar18 = 0, lVar2 != 0 || (uVar5 != 0xc000000000000000))))))
          goto joined_r0x0001005733d4;
        }
        else {
          if (uVar9 >> 0x1e < 2) {
            if (uVar16 == 0) {
              uVar18 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)((ulong)lVar1 >> 0x20);
              if (SBORROW4(iVar17,iVar23)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10057359c);
                (*pcVar11)();
              }
              uVar18 = (ulong)(iVar17 - iVar23);
            }
joined_r0x0001005733d4:
            if (uVar10 >> 0x1e < 2) goto LAB_1005731f8;
LAB_1005731c4:
            if (uVar19 != 2) {
              if (uVar18 == 0) goto LAB_100573090;
              goto LAB_100573544;
            }
            uVar20 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
            if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x100573594);
              (*pcVar11)();
            }
          }
          else {
            if (uVar16 == 2) {
              uVar18 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
              if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x100573598);
                (*pcVar11)();
              }
              goto joined_r0x0001005733d4;
            }
            uVar18 = 0;
            if (1 < uVar19) goto LAB_1005731c4;
LAB_1005731f8:
            if (uVar19 == 0) {
              uVar20 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar17,(int)lVar2)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x100573590);
                (*pcVar11)();
              }
              uVar20 = (ulong)(iVar17 - (int)lVar2);
            }
          }
          if (uVar18 != uVar20) goto LAB_100573544;
          if (0 < (long)uVar18) {
            lVar12 = lVar6;
            if (uVar16 < 2) {
              if (uVar16 != 0) {
                lVar22 = (long)iVar23;
                lVar13 = (lVar1 >> 0x20) - lVar22;
                if (lVar1 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1005735a0);
                  (*pcVar11)();
                }
                FUN_100008184(lVar1,uVar3);
                _swift_bridgeObjectRetain(lVar4);
                FUN_100008184(lVar2,uVar5);
                _swift_bridgeObjectRetain();
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar14 = lVar12;
                if (lVar12 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar22,lVar14)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1005735ac);
                    (*pcVar11)();
                  }
                  lVar12 = (lVar22 - lVar14) + lVar12;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar13 <= lVar14) {
                  lVar14 = lVar13;
                }
                lVar22 = 0;
                if (lVar12 != 0) {
                  lVar22 = lVar14 + lVar12;
                }
LAB_100573480:
                FUN_100009038(local_80,lVar12,lVar22,lVar2,uVar5);
                FUN_100006cdc(lVar2,uVar5);
                _swift_bridgeObjectRelease(lVar6);
                FUN_100006cdc(lVar1,uVar3);
                _swift_bridgeObjectRelease(lVar4);
                if ((local_80[0] & 1) != 0) goto LAB_100573090;
                goto LAB_100573544;
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
              _swift_bridgeObjectRetain(lVar4);
              FUN_100008184(lVar2,uVar5);
              _swift_bridgeObjectRetain(lVar6);
              FUN_100009038(&local_81,local_80,local_80 + (uVar3 >> 0x30 & 0xff),lVar2,uVar5);
              FUN_100006cdc(lVar2,uVar5);
              _swift_bridgeObjectRelease(lVar6);
              FUN_100006cdc(lVar1,uVar3);
              _swift_bridgeObjectRelease(lVar4);
            }
            else {
              if (uVar16 == 2) {
                lVar22 = *(long *)(lVar1 + 0x10);
                lVar14 = *(long *)(lVar1 + 0x18);
                FUN_100008184(lVar1,uVar3);
                _swift_bridgeObjectRetain(lVar4);
                FUN_100008184(lVar2,uVar5);
                _swift_bridgeObjectRetain();
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar13 = lVar12;
                if (lVar12 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar22,lVar13)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1005735a8);
                    (*pcVar11)();
                  }
                  lVar12 = (lVar22 - lVar13) + lVar12;
                }
                lVar8 = lVar14 - lVar22;
                if (SBORROW8(lVar14,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x1005735a4);
                  (*pcVar11)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar8 <= lVar13) {
                  lVar13 = lVar8;
                }
                lVar22 = 0;
                if (lVar12 != 0) {
                  lVar22 = lVar13 + lVar12;
                }
                goto LAB_100573480;
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
              _swift_bridgeObjectRetain(lVar4);
              FUN_100008184(lVar2,uVar5);
              _swift_bridgeObjectRetain(lVar6);
              FUN_100009038(&local_81,local_80,local_80,lVar2,uVar5);
              FUN_100006cdc(lVar2,uVar5);
              _swift_bridgeObjectRelease(lVar6);
              FUN_100006cdc(lVar1,uVar3);
              _swift_bridgeObjectRelease(lVar4);
            }
            if ((local_81 & 1) == 0) goto LAB_100573544;
          }
        }
LAB_100573090:
        plVar24 = plVar24 + 5;
        plVar21 = plVar21 + 5;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar15 = 1;
  }
  else {
LAB_100573544:
    uVar15 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar15);
  }
  return;
}

