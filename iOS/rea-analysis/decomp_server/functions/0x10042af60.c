// rea decompile_all
// name: FUN_10042af60
// address: 0x10042af60
// body: available
// range: 0x10042af60-0x10042b4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042b4e4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042af60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
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
  long lVar22;
  int iVar23;
  long lVar24;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (param_1 != param_2)) {
      lVar24 = 0;
      do {
        if (lVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4c4);
          (*pcVar11)();
        }
        lVar1 = param_1 + lVar24;
        lVar12 = param_2 + lVar24;
        if (*(int *)(lVar1 + 0x20) != *(int *)(lVar12 + 0x20)) goto LAB_10042b47c;
        uVar16 = *(ulong *)(lVar1 + 0x28);
        lVar3 = *(long *)(lVar1 + 0x30);
        lVar19 = *(long *)(lVar1 + 0x38);
        lVar2 = *(long *)(lVar1 + 0x48);
        uVar4 = *(ulong *)(lVar1 + 0x50);
        lVar5 = *(long *)(lVar12 + 0x30);
        lVar20 = *(long *)(lVar12 + 0x38);
        cVar8 = *(char *)(lVar12 + 0x40);
        lVar1 = *(long *)(lVar12 + 0x48);
        uVar6 = *(ulong *)(lVar12 + 0x50);
        if (((uVar16 != *(ulong *)(lVar12 + 0x28)) || (lVar3 != lVar5)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar16,lVar3,*(ulong *)(lVar12 + 0x28),lVar5,0), (uVar16 & 1) == 0))
        goto LAB_10042b47c;
        if (cVar8 == '\0') {
          if (lVar19 != lVar20) goto LAB_10042b47c;
        }
        else if (lVar20 < 3) {
          if (lVar20 == 0) {
            if (lVar19 != 0) goto LAB_10042b47c;
          }
          else if (lVar20 == 1) {
            if (lVar19 != 1) goto LAB_10042b47c;
          }
          else if (lVar19 != 2) goto LAB_10042b47c;
        }
        else if (lVar20 == 3) {
          if (lVar19 != 3) goto LAB_10042b47c;
        }
        else if (lVar20 == 4) {
          if (lVar19 != 4) goto LAB_10042b47c;
        }
        else if (lVar19 != 5) goto LAB_10042b47c;
        uVar9 = (uint)(uVar4 >> 0x20);
        uVar14 = uVar9 >> 0x1e;
        uVar10 = (uint)(uVar6 >> 0x20);
        uVar17 = uVar10 >> 0x1e;
        iVar23 = (int)lVar2;
        if (uVar4 >> 0x3e == 3) {
          uVar16 = 0;
          if (((lVar2 != 0) || (uVar4 != 0xc000000000000000)) ||
             ((uVar6 >> 0x3e < 3 || ((uVar16 = 0, lVar1 != 0 || (uVar6 != 0xc000000000000000))))))
          goto joined_r0x00010042b2dc;
        }
        else {
          if (uVar9 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar16 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar15,iVar23)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4d0);
                (*pcVar11)();
              }
              uVar16 = (ulong)(iVar15 - iVar23);
            }
joined_r0x00010042b2dc:
            if (1 < uVar10 >> 0x1e) goto LAB_10042b0f4;
LAB_10042b144:
            if (uVar17 == 0) {
              uVar18 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)lVar1 >> 0x20);
              if (SBORROW4(iVar15,(int)lVar1)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4cc);
                (*pcVar11)();
              }
              uVar18 = (ulong)(iVar15 - (int)lVar1);
            }
          }
          else {
            if (uVar14 == 2) {
              uVar16 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
              if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4d4);
                (*pcVar11)();
              }
              goto joined_r0x00010042b2dc;
            }
            uVar16 = 0;
            if (uVar17 < 2) goto LAB_10042b144;
LAB_10042b0f4:
            if (uVar17 != 2) {
              if (uVar16 == 0) goto LAB_10042afc4;
              goto LAB_10042b47c;
            }
            uVar18 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
            if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4c8);
              (*pcVar11)();
            }
          }
          if (uVar16 != uVar18) goto LAB_10042b47c;
          if (0 < (long)uVar16) {
            lVar12 = lVar1;
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar20 = (long)iVar23;
                lVar21 = (lVar2 >> 0x20) - lVar20;
                if (lVar2 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4d8);
                  (*pcVar11)();
                }
                _swift_bridgeObjectRetain(lVar3);
                FUN_100008184(lVar2,uVar4);
                _swift_bridgeObjectRetain(lVar5);
                FUN_100008184(lVar1,uVar6);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar19 = lVar12;
                if (lVar12 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar20,lVar19)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4e4);
                    (*pcVar11)();
                  }
                  lVar12 = (lVar20 - lVar19) + lVar12;
                }
LAB_10042b35c:
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar21 <= lVar19) {
                  lVar19 = lVar21;
                }
                lVar20 = 0;
                if (lVar12 != 0) {
                  lVar20 = lVar19 + lVar12;
                }
                FUN_100009038(local_80,lVar12,lVar20,lVar1,uVar6);
                _swift_bridgeObjectRelease(lVar5);
                FUN_100006cdc(lVar1,uVar6);
                _swift_bridgeObjectRelease(lVar3);
                FUN_100006cdc(lVar2,uVar4);
                if ((local_80[0] & 1) != 0) goto LAB_10042afc4;
                goto LAB_10042b47c;
              }
              local_80[0] = (byte)lVar2;
              local_80[1] = (byte)((ulong)lVar2 >> 8);
              local_80[2] = (byte)((ulong)lVar2 >> 0x10);
              local_80[3] = (byte)((ulong)lVar2 >> 0x18);
              local_80[4] = (byte)((ulong)lVar2 >> 0x20);
              local_80[5] = (byte)((ulong)lVar2 >> 0x28);
              local_80[6] = (byte)((ulong)lVar2 >> 0x30);
              local_80[7] = (byte)((ulong)lVar2 >> 0x38);
              local_80[8] = (byte)uVar4;
              local_80[9] = (byte)(uVar4 >> 8);
              local_80[10] = (byte)(uVar4 >> 0x10);
              local_80[0xb] = (byte)(uVar4 >> 0x18);
              local_80[0xc] = (byte)(uVar4 >> 0x20);
              local_80[0xd] = (byte)(uVar4 >> 0x28);
              _swift_bridgeObjectRetain(lVar3);
              FUN_100008184(lVar2,uVar4);
              _swift_bridgeObjectRetain(lVar5);
              FUN_100008184(lVar1,uVar6);
              FUN_100009038(&local_81,local_80,local_80 + (uVar4 >> 0x30 & 0xff),lVar1,uVar6);
              _swift_bridgeObjectRelease(lVar5);
              FUN_100006cdc(lVar1,uVar6);
            }
            else {
              if (uVar14 == 2) {
                lVar20 = *(long *)(lVar2 + 0x10);
                lVar7 = *(long *)(lVar2 + 0x18);
                _swift_bridgeObjectRetain(lVar3);
                FUN_100008184(lVar2,uVar4);
                _swift_bridgeObjectRetain(lVar5);
                FUN_100008184(lVar1,uVar6);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar19 = lVar12;
                if (lVar12 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar20,lVar19)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4e0);
                    (*pcVar11)();
                  }
                  lVar12 = (lVar20 - lVar19) + lVar12;
                }
                lVar21 = lVar7 - lVar20;
                if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10042b4dc);
                  (*pcVar11)();
                }
                goto LAB_10042b35c;
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
              _swift_bridgeObjectRetain(lVar3);
              FUN_100008184(lVar2,uVar4);
              _swift_bridgeObjectRetain(lVar5);
              FUN_100008184(lVar1,uVar6);
              FUN_100009038(&local_81,local_80,local_80,lVar1,uVar6);
              _swift_bridgeObjectRelease(lVar5);
              FUN_100006cdc(lVar1,uVar6);
            }
            _swift_bridgeObjectRelease(lVar3);
            FUN_100006cdc(lVar2,uVar4);
            if ((local_81 & 1) == 0) goto LAB_10042b47c;
          }
        }
LAB_10042afc4:
        lVar24 = lVar24 + 0x38;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    uVar13 = 1;
  }
  else {
LAB_10042b47c:
    uVar13 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar13);
}

