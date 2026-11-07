// rea decompile_all
// name: FUN_1004276a0
// address: 0x1004276a0
// body: available
// range: 0x1004276a0-0x100427c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100427c70 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004276a0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (param_1 != param_2)) {
      puVar23 = (ulong *)(param_1 + 0x48);
      puVar24 = (ulong *)(param_2 + 0x28);
      do {
        if (lVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c50);
          (*pcVar12)();
        }
        uVar17 = puVar23[-5];
        uVar3 = puVar23[-4];
        uVar19 = puVar23[-3];
        uVar4 = puVar23[-2];
        uVar1 = puVar23[-1];
        uVar5 = *puVar23;
        uVar6 = *puVar24;
        uVar13 = puVar24[1];
        uVar7 = puVar24[2];
        uVar2 = puVar24[3];
        uVar8 = puVar24[4];
        if ((((uVar17 != puVar24[-1]) || (uVar3 != uVar6)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar17,uVar3,puVar24[-1],uVar6,0), (uVar17 & 1) == 0)) ||
           (((uVar19 != uVar13 || (uVar4 != uVar7)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar19,uVar4,uVar13,uVar7,0), (uVar19 & 1) == 0)))) goto LAB_100427c08;
        uVar10 = (uint)(uVar5 >> 0x20);
        uVar15 = uVar10 >> 0x1e;
        uVar11 = (uint)(uVar8 >> 0x20);
        uVar18 = uVar11 >> 0x1e;
        iVar21 = (int)uVar1;
        if (uVar5 >> 0x3e == 3) {
          uVar17 = 0;
          if (((uVar1 != 0) || (uVar5 != 0xc000000000000000)) ||
             ((uVar8 >> 0x3e < 3 || ((uVar17 = 0, uVar2 != 0 || (uVar8 != 0xc000000000000000))))))
          goto joined_r0x000100427a54;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar16,iVar21)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c5c);
                (*pcVar12)();
              }
              uVar17 = (ulong)(iVar16 - iVar21);
            }
joined_r0x000100427a54:
            if (1 < uVar11 >> 0x1e) goto LAB_100427834;
LAB_100427868:
            if (uVar18 == 0) {
              uVar19 = uVar8 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c54);
                (*pcVar12)();
              }
              uVar19 = (ulong)(iVar16 - (int)uVar2);
            }
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c60);
                (*pcVar12)();
              }
              goto joined_r0x000100427a54;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto LAB_100427868;
LAB_100427834:
            if (uVar18 != 2) {
              if (uVar17 == 0) goto LAB_100427700;
              goto LAB_100427c08;
            }
            uVar19 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c58);
              (*pcVar12)();
            }
          }
          if (uVar17 != uVar19) goto LAB_100427c08;
          if (0 < (long)uVar17) {
            uVar17 = uVar2;
            if (uVar15 < 2) {
              if (uVar15 != 0) {
                lVar20 = (long)iVar21;
                uVar19 = ((long)uVar1 >> 0x20) - lVar20;
                if ((long)uVar1 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c64);
                  (*pcVar12)();
                }
                _swift_bridgeObjectRetain(uVar3);
                _swift_bridgeObjectRetain(uVar4);
                FUN_100008184(uVar1,uVar5);
                _swift_bridgeObjectRetain(uVar6);
                _swift_bridgeObjectRetain(uVar7);
                FUN_100008184(uVar2,uVar8);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar13 = uVar17;
                if (uVar17 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar20,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c70);
                    (*pcVar12)();
                  }
                  uVar17 = (lVar20 - uVar13) + uVar17;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar19 <= (long)uVar13) {
                  uVar13 = uVar19;
                }
                lVar20 = 0;
                if (uVar17 != 0) {
                  lVar20 = uVar13 + uVar17;
                }
LAB_100427b14:
                FUN_100009038(local_80,uVar17,lVar20,uVar2,uVar8);
                _swift_bridgeObjectRelease(uVar7);
                _swift_bridgeObjectRelease(uVar6);
                FUN_100006cdc(uVar2,uVar8);
                _swift_bridgeObjectRelease(uVar4);
                _swift_bridgeObjectRelease(uVar3);
                FUN_100006cdc(uVar1,uVar5);
                if ((local_80[0] & 1) != 0) goto LAB_100427700;
                goto LAB_100427c08;
              }
              local_80[0] = (byte)uVar1;
              local_80[1] = (byte)(uVar1 >> 8);
              local_80[2] = (byte)(uVar1 >> 0x10);
              local_80[3] = (byte)(uVar1 >> 0x18);
              local_80[4] = (byte)(uVar1 >> 0x20);
              local_80[5] = (byte)(uVar1 >> 0x28);
              local_80[6] = (byte)(uVar1 >> 0x30);
              local_80[7] = (byte)(uVar1 >> 0x38);
              local_80[8] = (byte)uVar5;
              local_80[9] = (byte)(uVar5 >> 8);
              local_80[10] = (byte)(uVar5 >> 0x10);
              local_80[0xb] = (byte)(uVar5 >> 0x18);
              local_80[0xc] = (byte)(uVar5 >> 0x20);
              local_80[0xd] = (byte)(uVar5 >> 0x28);
              _swift_bridgeObjectRetain(uVar3);
              _swift_bridgeObjectRetain(uVar4);
              FUN_100008184(uVar1,uVar5);
              _swift_bridgeObjectRetain(uVar6);
              _swift_bridgeObjectRetain(uVar7);
              FUN_100008184(uVar2,uVar8);
              FUN_100009038(&local_81,local_80,local_80 + (uVar5 >> 0x30 & 0xff),uVar2,uVar8);
              _swift_bridgeObjectRelease(uVar7);
            }
            else {
              if (uVar15 == 2) {
                lVar20 = *(long *)(uVar1 + 0x10);
                lVar9 = *(long *)(uVar1 + 0x18);
                _swift_bridgeObjectRetain(uVar3);
                _swift_bridgeObjectRetain(uVar4);
                FUN_100008184(uVar1,uVar5);
                _swift_bridgeObjectRetain(uVar6);
                _swift_bridgeObjectRetain(uVar7);
                FUN_100008184(uVar2,uVar8);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar19 = uVar17;
                if (uVar17 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar20,uVar19)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c6c);
                    (*pcVar12)();
                  }
                  uVar17 = (lVar20 - uVar19) + uVar17;
                }
                uVar13 = lVar9 - lVar20;
                if (SBORROW8(lVar9,lVar20)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x100427c68);
                  (*pcVar12)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar13 <= (long)uVar19) {
                  uVar19 = uVar13;
                }
                lVar20 = 0;
                if (uVar17 != 0) {
                  lVar20 = uVar19 + uVar17;
                }
                goto LAB_100427b14;
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
              _swift_bridgeObjectRetain(uVar4);
              FUN_100008184(uVar1,uVar5);
              _swift_bridgeObjectRetain(uVar6);
              _swift_bridgeObjectRetain(uVar7);
              FUN_100008184(uVar2,uVar8);
              FUN_100009038(&local_81,local_80,local_80,uVar2,uVar8);
              _swift_bridgeObjectRelease(uVar7);
            }
            _swift_bridgeObjectRelease(uVar6);
            FUN_100006cdc(uVar2,uVar8);
            _swift_bridgeObjectRelease(uVar4);
            _swift_bridgeObjectRelease(uVar3);
            FUN_100006cdc(uVar1,uVar5);
            if ((local_81 & 1) == 0) goto LAB_100427c08;
          }
        }
LAB_100427700:
        puVar23 = puVar23 + 6;
        puVar24 = puVar24 + 6;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    uVar14 = 1;
  }
  else {
LAB_100427c08:
    uVar14 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar14);
}

