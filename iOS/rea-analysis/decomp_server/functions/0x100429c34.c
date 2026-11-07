// rea decompile_all
// name: FUN_100429c34
// address: 0x100429c34
// body: available
// range: 0x100429c34-0x10042a22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042a22c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100429c34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar26 = *(long *)(param_1 + 0x10);
  if (lVar26 == *(long *)(param_2 + 0x10)) {
    if ((lVar26 != 0) && (param_1 != param_2)) {
      lVar23 = 0;
      do {
        if (lVar26 == 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a20c);
          (*pcVar13)();
        }
        lVar1 = param_1 + lVar23;
        lVar15 = param_2 + lVar23;
        if (*(int *)(lVar1 + 0x20) != *(int *)(lVar15 + 0x20)) goto LAB_10042a1c4;
        uVar20 = *(ulong *)(lVar1 + 0x28);
        lVar4 = *(long *)(lVar1 + 0x30);
        uVar22 = *(ulong *)(lVar1 + 0x38);
        lVar5 = *(long *)(lVar1 + 0x40);
        lVar2 = *(long *)(lVar1 + 0x48);
        uVar6 = *(ulong *)(lVar1 + 0x50);
        lVar7 = *(long *)(lVar15 + 0x30);
        uVar3 = *(ulong *)(lVar15 + 0x38);
        lVar8 = *(long *)(lVar15 + 0x40);
        lVar1 = *(long *)(lVar15 + 0x48);
        uVar9 = *(ulong *)(lVar15 + 0x50);
        if ((((uVar20 != *(ulong *)(lVar15 + 0x28)) || (lVar4 != lVar7)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar20,lVar4,*(ulong *)(lVar15 + 0x28),lVar7,0), (uVar20 & 1) == 0)) ||
           (((uVar22 != uVar3 || (lVar5 != lVar8)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar22,lVar5,uVar3,lVar8,0), (uVar22 & 1) == 0)))) goto LAB_10042a1c4;
        iVar25 = (int)lVar2;
        uVar11 = (uint)(uVar6 >> 0x20);
        uVar18 = uVar11 >> 0x1e;
        uVar12 = (uint)(uVar9 >> 0x20);
        uVar21 = uVar12 >> 0x1e;
        if (uVar6 >> 0x3e == 3) {
          uVar20 = 0;
          if (((lVar2 != 0) || (uVar6 != 0xc000000000000000)) ||
             ((uVar9 >> 0x3e < 3 || ((uVar20 = 0, lVar1 != 0 || (uVar9 != 0xc000000000000000))))))
          goto joined_r0x00010042a124;
        }
        else {
          if (uVar11 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar19,iVar25)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a218);
                (*pcVar13)();
              }
              uVar20 = (ulong)(iVar19 - iVar25);
            }
joined_r0x00010042a124:
            if (1 < uVar12 >> 0x1e) goto LAB_100429ef0;
LAB_100429f24:
            if (uVar21 == 0) {
              uVar22 = uVar9 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)lVar1 >> 0x20);
              if (SBORROW4(iVar19,(int)lVar1)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a210);
                (*pcVar13)();
              }
              uVar22 = (ulong)(iVar19 - (int)lVar1);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar20 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
              if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a21c);
                (*pcVar13)();
              }
              goto joined_r0x00010042a124;
            }
            uVar20 = 0;
            if (uVar21 < 2) goto LAB_100429f24;
LAB_100429ef0:
            if (uVar21 != 2) {
              if (uVar20 == 0) goto LAB_100429db4;
              goto LAB_10042a1c4;
            }
            uVar22 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
            if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a214);
              (*pcVar13)();
            }
          }
          if (uVar20 != uVar22) goto LAB_10042a1c4;
          if (0 < (long)uVar20) {
            lVar15 = lVar1;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                local_80[0] = (byte)lVar2;
                local_80[1] = (byte)((ulong)lVar2 >> 8);
                local_80[2] = (byte)((ulong)lVar2 >> 0x10);
                local_80[3] = (byte)((ulong)lVar2 >> 0x18);
                local_80[4] = (byte)((ulong)lVar2 >> 0x20);
                local_80[5] = (byte)((ulong)lVar2 >> 0x28);
                local_80[6] = (byte)((ulong)lVar2 >> 0x30);
                local_80[7] = (byte)((ulong)lVar2 >> 0x38);
                local_80[8] = (byte)uVar6;
                local_80[9] = (byte)(uVar6 >> 8);
                local_80[10] = (byte)(uVar6 >> 0x10);
                local_80[0xb] = (byte)(uVar6 >> 0x18);
                local_80[0xc] = (byte)(uVar6 >> 0x20);
                local_80[0xd] = (byte)(uVar6 >> 0x28);
                _swift_bridgeObjectRetain(lVar4);
                _swift_bridgeObjectRetain(lVar5);
                FUN_100008184(lVar2,uVar6);
                _swift_bridgeObjectRetain(lVar7);
                _swift_bridgeObjectRetain(lVar8);
                FUN_100008184(lVar1,uVar9);
                FUN_100009038(&local_81,local_80,local_80 + (uVar6 >> 0x30 & 0xff),lVar1,uVar9);
                _swift_bridgeObjectRelease(lVar8);
                _swift_bridgeObjectRelease(lVar7);
                FUN_100006cdc(lVar1,uVar9);
LAB_100429d8c:
                _swift_bridgeObjectRelease(lVar5);
                _swift_bridgeObjectRelease(lVar4);
                FUN_100006cdc(lVar2,uVar6);
                if ((local_81 & 1) != 0) goto LAB_100429db4;
                goto LAB_10042a1c4;
              }
              lVar24 = (long)iVar25;
              lVar16 = (lVar2 >> 0x20) - lVar24;
              if (lVar2 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a220);
                (*pcVar13)();
              }
              _swift_bridgeObjectRetain(lVar4);
              _swift_bridgeObjectRetain(lVar5);
              FUN_100008184(lVar2,uVar6);
              _swift_bridgeObjectRetain(lVar7);
              _swift_bridgeObjectRetain(lVar8);
              FUN_100008184(lVar1,uVar9);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              lVar14 = lVar15;
              if (lVar15 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar24,lVar14)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a22c);
                  (*pcVar13)();
                }
                lVar15 = (lVar24 - lVar14) + lVar15;
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if (lVar16 <= lVar14) {
                lVar14 = lVar16;
              }
              lVar24 = 0;
              if (lVar15 != 0) {
                lVar24 = lVar14 + lVar15;
              }
            }
            else {
              if (uVar18 != 2) {
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
                _swift_bridgeObjectRetain(lVar4);
                _swift_bridgeObjectRetain(lVar5);
                FUN_100008184(lVar2,uVar6);
                _swift_bridgeObjectRetain(lVar7);
                _swift_bridgeObjectRetain(lVar8);
                FUN_100008184(lVar1,uVar9);
                FUN_100009038(&local_81,local_80,local_80,lVar1,uVar9);
                _swift_bridgeObjectRelease(lVar8);
                _swift_bridgeObjectRelease(lVar7);
                FUN_100006cdc(lVar1,uVar9);
                goto LAB_100429d8c;
              }
              lVar24 = *(long *)(lVar2 + 0x10);
              lVar14 = *(long *)(lVar2 + 0x18);
              _swift_bridgeObjectRetain(lVar4);
              _swift_bridgeObjectRetain(lVar5);
              FUN_100008184(lVar2,uVar6);
              _swift_bridgeObjectRetain(lVar7);
              _swift_bridgeObjectRetain(lVar8);
              FUN_100008184(lVar1,uVar9);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              lVar16 = lVar15;
              if (lVar15 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar24,lVar16)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a228);
                  (*pcVar13)();
                }
                lVar15 = (lVar24 - lVar16) + lVar15;
              }
              lVar10 = lVar14 - lVar24;
              if (SBORROW8(lVar14,lVar24)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10042a224);
                (*pcVar13)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if (lVar10 <= lVar16) {
                lVar16 = lVar10;
              }
              lVar24 = 0;
              if (lVar15 != 0) {
                lVar24 = lVar16 + lVar15;
              }
            }
            FUN_100009038(local_80,lVar15,lVar24,lVar1,uVar9);
            _swift_bridgeObjectRelease(lVar8);
            _swift_bridgeObjectRelease(lVar7);
            FUN_100006cdc(lVar1,uVar9);
            _swift_bridgeObjectRelease(lVar5);
            _swift_bridgeObjectRelease(lVar4);
            FUN_100006cdc(lVar2,uVar6);
            if ((local_80[0] & 1) == 0) goto LAB_10042a1c4;
          }
        }
LAB_100429db4:
        lVar23 = lVar23 + 0x38;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    uVar17 = 1;
  }
  else {
LAB_10042a1c4:
    uVar17 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar17);
}

