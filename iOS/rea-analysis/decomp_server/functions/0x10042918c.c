// rea decompile_all
// name: FUN_10042918c
// address: 0x10042918c
// body: available
// range: 0x10042918c-0x1004296cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004296c8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042918c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      lVar27 = 0;
      do {
        if (lVar25 == 0) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296a8);
          (*pcVar15)();
        }
        lVar17 = param_1 + lVar27;
        uVar21 = *(ulong *)(lVar17 + 0x20);
        lVar3 = *(long *)(lVar17 + 0x28);
        bVar7 = *(byte *)(lVar17 + 0x30);
        bVar8 = *(byte *)(lVar17 + 0x31);
        lVar1 = *(long *)(lVar17 + 0x38);
        uVar4 = *(ulong *)(lVar17 + 0x40);
        lVar17 = param_2 + lVar27;
        lVar5 = *(long *)(lVar17 + 0x28);
        bVar9 = *(byte *)(lVar17 + 0x30);
        bVar10 = *(byte *)(lVar17 + 0x31);
        lVar2 = *(long *)(lVar17 + 0x38);
        uVar6 = *(ulong *)(lVar17 + 0x40);
        if (uVar21 == *(ulong *)(lVar17 + 0x20) && lVar3 == lVar5) {
          uVar16 = 0;
          if (bVar7 != bVar9) goto LAB_10042966c;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar21,lVar3,*(ulong *)(lVar17 + 0x20),lVar5,0);
          uVar16 = 0;
          if (((uVar21 & 1) == 0) || (((bVar7 ^ bVar9) & 1) != 0)) goto LAB_10042966c;
        }
        uVar16 = 0;
        if (((bVar8 ^ bVar10) & 1) != 0) goto LAB_10042966c;
        uVar13 = (uint)(uVar4 >> 0x20);
        uVar19 = uVar13 >> 0x1e;
        uVar14 = (uint)(uVar6 >> 0x20);
        uVar22 = uVar14 >> 0x1e;
        iVar26 = (int)lVar1;
        if (uVar4 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((lVar1 != 0) || (uVar4 != 0xc000000000000000)) || (uVar6 >> 0x3e < 3)) ||
             ((uVar21 = 0, lVar2 != 0 || (uVar6 != 0xc000000000000000))))
          goto joined_r0x0001004294f4;
        }
        else {
          if (uVar13 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)lVar1 >> 0x20);
              if (SBORROW4(iVar20,iVar26)) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296b8);
                (*pcVar15)();
              }
              uVar21 = (ulong)(iVar20 - iVar26);
            }
joined_r0x0001004294f4:
            if (uVar14 >> 0x1e < 2) goto LAB_100429350;
LAB_10042931c:
            if (uVar22 != 2) {
              if (uVar21 == 0) goto LAB_1004291f0;
              goto LAB_100429660;
            }
            uVar23 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
            if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296ac);
              (*pcVar15)();
            }
          }
          else {
            if (uVar19 == 2) {
              uVar21 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
              if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296b4);
                (*pcVar15)();
              }
              goto joined_r0x0001004294f4;
            }
            uVar21 = 0;
            if (1 < uVar22) goto LAB_10042931c;
LAB_100429350:
            if (uVar22 == 0) {
              uVar23 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar2)) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296b0);
                (*pcVar15)();
              }
              uVar23 = (ulong)(iVar20 - (int)lVar2);
            }
          }
          if (uVar21 != uVar23) goto LAB_100429660;
          if (0 < (long)uVar21) {
            lVar17 = lVar2;
            if (uVar19 < 2) {
              if (uVar19 != 0) {
                lVar24 = (long)iVar26;
                lVar12 = (lVar1 >> 0x20) - lVar24;
                if (lVar1 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                  pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296bc);
                  (*pcVar15)();
                }
                _swift_bridgeObjectRetain(lVar3);
                FUN_100008184(lVar1,uVar4);
                _swift_bridgeObjectRetain(lVar5);
                FUN_100008184(lVar2,uVar6);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar18 = lVar17;
                if (lVar17 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar24,lVar18)) {
                    /* WARNING: Does not return */
                    pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296c8);
                    (*pcVar15)();
                  }
                  lVar17 = (lVar24 - lVar18) + lVar17;
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar12 <= lVar18) {
                  lVar18 = lVar12;
                }
LAB_10042957c:
                lVar12 = 0;
                if (lVar17 != 0) {
                  lVar12 = lVar18 + lVar17;
                }
                FUN_100009038(local_80,lVar17,lVar12,lVar2,uVar6);
                _swift_bridgeObjectRelease(lVar5);
                FUN_100006cdc(lVar2,uVar6);
                _swift_bridgeObjectRelease(lVar3);
                FUN_100006cdc(lVar1,uVar4);
                if ((local_80[0] & 1) != 0) goto LAB_1004291f0;
                goto LAB_100429660;
              }
              local_80[0] = (byte)lVar1;
              local_80[1] = (byte)((ulong)lVar1 >> 8);
              local_80[2] = (byte)((ulong)lVar1 >> 0x10);
              local_80[3] = (byte)((ulong)lVar1 >> 0x18);
              local_80[4] = (byte)((ulong)lVar1 >> 0x20);
              local_80[5] = (byte)((ulong)lVar1 >> 0x28);
              local_80[6] = (byte)((ulong)lVar1 >> 0x30);
              local_80[7] = (byte)((ulong)lVar1 >> 0x38);
              local_80[8] = (byte)uVar4;
              local_80[9] = (byte)(uVar4 >> 8);
              local_80[10] = (byte)(uVar4 >> 0x10);
              local_80[0xb] = (byte)(uVar4 >> 0x18);
              local_80[0xc] = (byte)(uVar4 >> 0x20);
              local_80[0xd] = (byte)(uVar4 >> 0x28);
              _swift_bridgeObjectRetain(lVar3);
              FUN_100008184(lVar1,uVar4);
              _swift_bridgeObjectRetain(lVar5);
              FUN_100008184(lVar2,uVar6);
              FUN_100009038(&local_81,local_80,local_80 + (uVar4 >> 0x30 & 0xff),lVar2,uVar6);
              _swift_bridgeObjectRelease(lVar5);
              FUN_100006cdc(lVar2,uVar6);
            }
            else {
              if (uVar19 == 2) {
                lVar12 = *(long *)(lVar1 + 0x10);
                lVar24 = *(long *)(lVar1 + 0x18);
                _swift_bridgeObjectRetain(lVar3);
                FUN_100008184(lVar1,uVar4);
                _swift_bridgeObjectRetain(lVar5);
                FUN_100008184(lVar2,uVar6);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                lVar18 = lVar17;
                if (lVar17 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar12,lVar18)) {
                    /* WARNING: Does not return */
                    pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296c4);
                    (*pcVar15)();
                  }
                  lVar17 = (lVar12 - lVar18) + lVar17;
                }
                lVar11 = lVar24 - lVar12;
                if (SBORROW8(lVar24,lVar12)) {
                    /* WARNING: Does not return */
                  pcVar15 = (code *)SoftwareBreakpoint(1,0x1004296c0);
                  (*pcVar15)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar11 <= lVar18) {
                  lVar18 = lVar11;
                }
                goto LAB_10042957c;
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
              FUN_100008184(lVar1,uVar4);
              _swift_bridgeObjectRetain(lVar5);
              FUN_100008184(lVar2,uVar6);
              FUN_100009038(&local_81,local_80,local_80,lVar2,uVar6);
              _swift_bridgeObjectRelease(lVar5);
              FUN_100006cdc(lVar2,uVar6);
            }
            _swift_bridgeObjectRelease(lVar3);
            FUN_100006cdc(lVar1,uVar4);
            if ((local_81 & 1) == 0) goto LAB_100429660;
          }
        }
LAB_1004291f0:
        lVar27 = lVar27 + 0x28;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar16 = 1;
  }
  else {
LAB_100429660:
    uVar16 = 0;
  }
LAB_10042966c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar16);
  }
  return;
}

