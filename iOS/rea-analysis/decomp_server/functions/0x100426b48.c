// rea decompile_all
// name: FUN_100426b48
// address: 0x100426b48
// body: available
// range: 0x100426b48-0x10042711b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100427118 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100426b48(long param_1,long param_2)

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
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  ulong *puVar24;
  long lVar25;
  ulong *puVar26;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      puVar24 = (ulong *)(param_1 + 0x50);
      puVar26 = (ulong *)(param_2 + 0x28);
      do {
        if (lVar23 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1004270f8);
          (*pcVar14)();
        }
        uVar19 = puVar24[-6];
        uVar3 = puVar24[-5];
        uVar12 = puVar24[-4];
        uVar21 = puVar24[-3];
        uVar4 = puVar24[-2];
        uVar1 = puVar24[-1];
        uVar5 = *puVar24;
        uVar6 = *puVar26;
        uVar13 = puVar26[1];
        uVar15 = puVar26[2];
        uVar7 = puVar26[3];
        uVar2 = puVar26[4];
        uVar8 = puVar26[5];
        if ((uVar19 != puVar26[-1]) || (uVar3 != uVar6)) {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar19,uVar3,puVar26[-1],uVar6,0);
          uVar16 = 0;
          if ((uVar19 & 1) == 0) goto LAB_1004270bc;
        }
        uVar16 = 0;
        if ((((int)uVar12 != (int)uVar13) || (uVar16 = 0, uVar21 != uVar15)) ||
           (uVar16 = 0, uVar4 != uVar7)) goto LAB_1004270bc;
        uVar10 = (uint)(uVar5 >> 0x20);
        uVar17 = uVar10 >> 0x1e;
        uVar11 = (uint)(uVar8 >> 0x20);
        uVar20 = uVar11 >> 0x1e;
        iVar22 = (int)uVar1;
        if (uVar5 >> 0x3e == 3) {
          uVar19 = 0;
          if (((uVar1 != 0) || (uVar5 != 0xc000000000000000)) ||
             ((uVar8 >> 0x3e < 3 || ((uVar19 = 0, uVar2 != 0 || (uVar8 != 0xc000000000000000))))))
          goto joined_r0x000100426f14;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar17 == 0) {
              uVar19 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar18 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar18,iVar22)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100427108);
                (*pcVar14)();
              }
              uVar19 = (ulong)(iVar18 - iVar22);
            }
joined_r0x000100426f14:
            if (uVar11 >> 0x1e < 2) goto LAB_100426cfc;
LAB_100426cc8:
            if (uVar20 != 2) {
              if (uVar19 == 0) goto LAB_100426ba8;
              goto LAB_1004270b0;
            }
            uVar21 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1004270fc);
              (*pcVar14)();
            }
          }
          else {
            if (uVar17 == 2) {
              uVar19 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100427104);
                (*pcVar14)();
              }
              goto joined_r0x000100426f14;
            }
            uVar19 = 0;
            if (1 < uVar20) goto LAB_100426cc8;
LAB_100426cfc:
            if (uVar20 == 0) {
              uVar21 = uVar8 >> 0x30 & 0xff;
            }
            else {
              iVar18 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar18,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100427100);
                (*pcVar14)();
              }
              uVar21 = (ulong)(iVar18 - (int)uVar2);
            }
          }
          if (uVar19 != uVar21) goto LAB_1004270b0;
          if (0 < (long)uVar19) {
            if (uVar17 < 2) {
              if (uVar17 != 0) {
                lVar25 = (long)iVar22;
                uVar19 = ((long)uVar1 >> 0x20) - lVar25;
                if ((long)uVar1 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x10042710c);
                  (*pcVar14)();
                }
                _swift_bridgeObjectRetain(uVar3);
                FUN_100008184(uVar1,uVar5);
                _swift_bridgeObjectRetain(uVar6);
                uVar21 = uVar2;
                FUN_100008184(uVar2,uVar8);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar15 = uVar21;
                if (uVar21 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar25,uVar15)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x100427118);
                    (*pcVar14)();
                  }
                  uVar21 = (lVar25 - uVar15) + uVar21;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar19 <= (long)uVar15) {
                  uVar15 = uVar19;
                }
                lVar25 = 0;
                if (uVar21 != 0) {
                  lVar25 = uVar15 + uVar21;
                }
                FUN_100009038(local_80,uVar21,lVar25,uVar2,uVar8);
                _swift_bridgeObjectRelease(uVar6);
LAB_100426ff8:
                FUN_100006cdc(uVar2,uVar8);
                _swift_bridgeObjectRelease(uVar3);
                FUN_100006cdc(uVar1,uVar5);
                if ((local_80[0] & 1) != 0) goto LAB_100426ba8;
                goto LAB_1004270b0;
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
              FUN_100008184(uVar1,uVar5);
              _swift_bridgeObjectRetain(uVar6);
              FUN_100008184(uVar2,uVar8);
              FUN_100009038(&local_81,local_80,local_80 + (uVar5 >> 0x30 & 0xff),uVar2,uVar8);
              _swift_bridgeObjectRelease(uVar6);
              FUN_100006cdc(uVar2,uVar8);
              _swift_bridgeObjectRelease(uVar3);
            }
            else {
              if (uVar17 == 2) {
                lVar25 = *(long *)(uVar1 + 0x10);
                lVar9 = *(long *)(uVar1 + 0x18);
                _swift_bridgeObjectRetain(uVar3);
                FUN_100008184(uVar1,uVar5);
                _swift_bridgeObjectRetain(uVar6);
                uVar19 = uVar2;
                FUN_100008184(uVar2,uVar8);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar21 = uVar19;
                if (uVar19 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar25,uVar21)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x100427114);
                    (*pcVar14)();
                  }
                  uVar19 = (lVar25 - uVar21) + uVar19;
                }
                uVar15 = lVar9 - lVar25;
                if (SBORROW8(lVar9,lVar25)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x100427110);
                  (*pcVar14)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar15 <= (long)uVar21) {
                  uVar21 = uVar15;
                }
                lVar25 = 0;
                if (uVar19 != 0) {
                  lVar25 = uVar21 + uVar19;
                }
                FUN_100009038(local_80,uVar19,lVar25,uVar2,uVar8);
                _swift_bridgeObjectRelease(uVar6);
                goto LAB_100426ff8;
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
              FUN_100008184(uVar1,uVar5);
              _swift_bridgeObjectRetain(uVar6);
              FUN_100008184(uVar2,uVar8);
              FUN_100009038(&local_81,local_80,local_80,uVar2,uVar8);
              _swift_bridgeObjectRelease(uVar6);
              FUN_100006cdc(uVar2,uVar8);
              _swift_bridgeObjectRelease(uVar3);
            }
            FUN_100006cdc(uVar1,uVar5);
            if ((local_81 & 1) == 0) goto LAB_1004270b0;
          }
        }
LAB_100426ba8:
        puVar24 = puVar24 + 7;
        puVar26 = puVar26 + 7;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar16 = 1;
  }
  else {
LAB_1004270b0:
    uVar16 = 0;
  }
LAB_1004270bc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar16);
  }
  return;
}

