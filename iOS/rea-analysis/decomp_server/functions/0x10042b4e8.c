// rea decompile_all
// name: FUN_10042b4e8
// address: 0x10042b4e8
// body: available
// range: 0x10042b4e8-0x10042b9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042b9a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042b4e8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      puVar21 = (ulong *)(param_1 + 0x40);
      puVar22 = (ulong *)(param_2 + 0x40);
      do {
        if (lVar23 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b984);
          (*pcVar10)();
        }
        if ((int)puVar21[-4] != (int)puVar22[-4]) goto LAB_10042b93c;
        uVar16 = puVar21[-3];
        uVar3 = puVar21[-2];
        uVar1 = puVar21[-1];
        uVar4 = *puVar21;
        uVar5 = puVar22[-2];
        uVar2 = puVar22[-1];
        uVar6 = *puVar22;
        if ((uVar16 != puVar22[-3] || uVar3 != uVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar16,uVar3,puVar22[-3],uVar5,0), (uVar16 & 1) == 0)) goto LAB_10042b93c;
        uVar8 = (uint)(uVar4 >> 0x20);
        uVar14 = uVar8 >> 0x1e;
        uVar9 = (uint)(uVar6 >> 0x20);
        uVar17 = uVar9 >> 0x1e;
        iVar20 = (int)uVar1;
        if (uVar4 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar1 != 0) || (uVar4 != 0xc000000000000000)) || (uVar6 >> 0x3e < 3)) ||
             ((uVar16 = 0, uVar2 != 0 || (uVar6 != 0xc000000000000000))))
          goto joined_r0x00010042b7d8;
        }
        else {
          if (uVar8 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar16 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar15,iVar20)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b990);
                (*pcVar10)();
              }
              uVar16 = (ulong)(iVar15 - iVar20);
            }
joined_r0x00010042b7d8:
            if (uVar9 >> 0x1e < 2) goto LAB_10042b628;
LAB_10042b5f4:
            if (uVar17 != 2) {
              if (uVar16 == 0) goto LAB_10042b548;
              goto LAB_10042b93c;
            }
            uVar18 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b98c);
              (*pcVar10)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar16 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b994);
                (*pcVar10)();
              }
              goto joined_r0x00010042b7d8;
            }
            uVar16 = 0;
            if (1 < uVar17) goto LAB_10042b5f4;
LAB_10042b628:
            if (uVar17 == 0) {
              uVar18 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar15,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b988);
                (*pcVar10)();
              }
              uVar18 = (ulong)(iVar15 - (int)uVar2);
            }
          }
          if (uVar16 != uVar18) goto LAB_10042b93c;
          if (0 < (long)uVar16) {
            uVar16 = uVar2;
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar19 = (long)iVar20;
                uVar18 = ((long)uVar1 >> 0x20) - lVar19;
                if ((long)uVar1 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b998);
                  (*pcVar10)();
                }
                _swift_bridgeObjectRetain(uVar3);
                FUN_100008184(uVar1,uVar4);
                _swift_bridgeObjectRetain(uVar5);
                FUN_100008184(uVar2,uVar6);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar11 = uVar16;
                if (uVar16 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar19,uVar11)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b9a4);
                    (*pcVar10)();
                  }
                  uVar16 = (lVar19 - uVar11) + uVar16;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar18 <= (long)uVar11) {
                  uVar11 = uVar18;
                }
                lVar19 = 0;
                if (uVar16 != 0) {
                  lVar19 = uVar11 + uVar16;
                }
LAB_10042b88c:
                FUN_100009038(local_80,uVar16,lVar19,uVar2,uVar6);
                _swift_bridgeObjectRelease(uVar5);
                FUN_100006cdc(uVar2,uVar6);
                _swift_bridgeObjectRelease(uVar3);
                FUN_100006cdc(uVar1,uVar4);
                if ((local_80[0] & 1) != 0) goto LAB_10042b548;
                goto LAB_10042b93c;
              }
              local_80[0] = (byte)uVar1;
              local_80[1] = (byte)(uVar1 >> 8);
              local_80[2] = (byte)(uVar1 >> 0x10);
              local_80[3] = (byte)(uVar1 >> 0x18);
              local_80[4] = (byte)(uVar1 >> 0x20);
              local_80[5] = (byte)(uVar1 >> 0x28);
              local_80[6] = (byte)(uVar1 >> 0x30);
              local_80[7] = (byte)(uVar1 >> 0x38);
              local_80[8] = (byte)uVar4;
              local_80[9] = (byte)(uVar4 >> 8);
              local_80[10] = (byte)(uVar4 >> 0x10);
              local_80[0xb] = (byte)(uVar4 >> 0x18);
              local_80[0xc] = (byte)(uVar4 >> 0x20);
              local_80[0xd] = (byte)(uVar4 >> 0x28);
              pbVar13 = local_80 + (uVar4 >> 0x30 & 0xff);
              _swift_bridgeObjectRetain(uVar3);
              FUN_100008184(uVar1,uVar4);
              _swift_bridgeObjectRetain(uVar5);
              FUN_100008184(uVar2,uVar6);
            }
            else {
              if (uVar14 == 2) {
                lVar19 = *(long *)(uVar1 + 0x10);
                lVar7 = *(long *)(uVar1 + 0x18);
                _swift_bridgeObjectRetain(uVar3);
                FUN_100008184(uVar1,uVar4);
                _swift_bridgeObjectRetain(uVar5);
                FUN_100008184(uVar2,uVar6);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar18 = uVar16;
                if (uVar16 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar19,uVar18)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b9a0);
                    (*pcVar10)();
                  }
                  uVar16 = (lVar19 - uVar18) + uVar16;
                }
                uVar11 = lVar7 - lVar19;
                if (SBORROW8(lVar7,lVar19)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10042b99c);
                  (*pcVar10)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar11 <= (long)uVar18) {
                  uVar18 = uVar11;
                }
                lVar19 = 0;
                if (uVar16 != 0) {
                  lVar19 = uVar18 + uVar16;
                }
                goto LAB_10042b88c;
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
              _swift_bridgeObjectRetain(uVar3);
              FUN_100008184(uVar1,uVar4);
              _swift_bridgeObjectRetain(uVar5);
              FUN_100008184(uVar2,uVar6);
              pbVar13 = local_80;
            }
            FUN_100009038(&local_81,local_80,pbVar13,uVar2,uVar6);
            _swift_bridgeObjectRelease(uVar5);
            FUN_100006cdc(uVar2,uVar6);
            _swift_bridgeObjectRelease(uVar3);
            FUN_100006cdc(uVar1,uVar4);
            if ((local_81 & 1) == 0) goto LAB_10042b93c;
          }
        }
LAB_10042b548:
        puVar21 = puVar21 + 5;
        puVar22 = puVar22 + 5;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar12 = 1;
  }
  else {
LAB_10042b93c:
    uVar12 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar12);
  }
  return;
}

