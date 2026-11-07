// rea decompile_all
// name: FUN_10056d5f4
// address: 0x10056d5f4
// body: available
// range: 0x10056d5f4-0x10056dbdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056dbdc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056d5f4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  long local_90;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_90 = *(long *)(param_1 + 0x10);
  if (local_90 == *(long *)(param_2 + 0x10)) {
    if ((local_90 != 0) && (param_1 != param_2)) {
      puVar21 = (ulong *)(param_1 + 0x48);
      puVar25 = (ulong *)(param_2 + 0x28);
      do {
        if (local_90 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbbc);
          (*pcVar10)();
        }
        uVar16 = puVar21[-5];
        uVar3 = puVar21[-4];
        uVar18 = puVar21[-3];
        uVar1 = puVar21[-2];
        uVar11 = puVar21[-1];
        uVar24 = *puVar21;
        uVar4 = *puVar25;
        uVar19 = puVar25[1];
        uVar2 = puVar25[2];
        uVar5 = puVar25[3];
        uVar20 = puVar25[4];
        if ((uVar16 == puVar25[-1]) && (uVar3 == uVar4)) {
          if ((int)uVar18 != (int)uVar19) goto LAB_10056db7c;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar16,uVar3,puVar25[-1],uVar4,0);
          uVar13 = 0;
          if (((uVar16 & 1) == 0) || ((int)uVar18 != (int)uVar19)) goto LAB_10056db80;
        }
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar1);
        FUN_100008184(uVar11,uVar24);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar2);
        FUN_100008184(uVar5,uVar20);
        uVar16 = uVar1;
        FUN_10056acec(uVar1,uVar2);
        if ((uVar16 & 1) == 0) {
LAB_10056db44:
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100006cdc(uVar5,uVar20);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar3);
          FUN_100006cdc(uVar11,uVar24);
          goto LAB_10056db7c;
        }
        uVar7 = (uint)(uVar24 >> 0x20);
        uVar14 = uVar7 >> 0x1e;
        uVar8 = (uint)(uVar20 >> 0x20);
        uVar17 = uVar8 >> 0x1e;
        iVar22 = (int)uVar11;
        if (uVar24 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar11 != 0) || (uVar24 != 0xc000000000000000)) || (uVar20 >> 0x3e < 3)) ||
             ((uVar16 = 0, uVar5 != 0 || (uVar20 != 0xc000000000000000))))
          goto joined_r0x00010056d820;
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100006cdc(0,0xc000000000000000);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar3);
          uVar11 = 0;
          uVar24 = 0xc000000000000000;
LAB_10056d690:
          FUN_100006cdc(uVar11,uVar24);
        }
        else {
          if (1 < uVar7 >> 0x1e) {
            if (uVar14 == 2) {
              uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
              if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbc8);
                (*pcVar10)();
              }
              goto joined_r0x00010056d820;
            }
            uVar16 = 0;
            if (uVar17 < 2) goto LAB_10056d85c;
LAB_10056d824:
            if (uVar17 == 2) {
              uVar18 = *(long *)(uVar5 + 0x18) - *(long *)(uVar5 + 0x10);
              if (SBORROW8(*(long *)(uVar5 + 0x18),*(long *)(uVar5 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbc4);
                (*pcVar10)();
              }
              goto LAB_10056d87c;
            }
            if (uVar16 != 0) goto LAB_10056db44;
LAB_10056d65c:
            _swift_bridgeObjectRelease(uVar2);
            _swift_bridgeObjectRelease(uVar4);
            FUN_100006cdc(uVar5,uVar20);
            _swift_bridgeObjectRelease(uVar1);
            _swift_bridgeObjectRelease(uVar3);
            goto LAB_10056d690;
          }
          if (uVar14 == 0) {
            uVar16 = uVar24 >> 0x30 & 0xff;
          }
          else {
            iVar15 = (int)(uVar11 >> 0x20);
            if (SBORROW4(iVar15,iVar22)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbcc);
              (*pcVar10)();
            }
            uVar16 = (ulong)(iVar15 - iVar22);
          }
joined_r0x00010056d820:
          if (1 < uVar8 >> 0x1e) goto LAB_10056d824;
LAB_10056d85c:
          if (uVar17 == 0) {
            uVar18 = uVar20 >> 0x30 & 0xff;
          }
          else {
            iVar15 = (int)(uVar5 >> 0x20);
            if (SBORROW4(iVar15,(int)uVar5)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbc0);
              (*pcVar10)();
            }
            uVar18 = (ulong)(iVar15 - (int)uVar5);
          }
LAB_10056d87c:
          if (uVar16 != uVar18) goto LAB_10056db44;
          if ((long)uVar16 < 1) goto LAB_10056d65c;
          if (uVar14 < 2) {
            if (uVar14 == 0) {
              local_80[0] = (byte)uVar11;
              local_80[1] = (byte)(uVar11 >> 8);
              local_80[2] = (byte)(uVar11 >> 0x10);
              local_80[3] = (byte)(uVar11 >> 0x18);
              local_80[4] = (byte)(uVar11 >> 0x20);
              local_80[5] = (byte)(uVar11 >> 0x28);
              local_80[6] = (byte)(uVar11 >> 0x30);
              local_80[7] = (byte)(uVar11 >> 0x38);
              local_80[8] = (byte)uVar24;
              local_80[9] = (byte)(uVar24 >> 8);
              local_80[10] = (byte)(uVar24 >> 0x10);
              local_80[0xb] = (byte)(uVar24 >> 0x18);
              local_80[0xc] = (byte)(uVar24 >> 0x20);
              local_80[0xd] = (byte)(uVar24 >> 0x28);
              FUN_100008184(uVar5,uVar20);
              FUN_100009038(&local_81,local_80,local_80 + (uVar24 >> 0x30 & 0xff),uVar5,uVar20);
              FUN_100006cdc(uVar5,uVar20);
              _swift_bridgeObjectRelease(uVar2);
              goto LAB_10056da74;
            }
            lVar23 = (long)iVar22;
            uVar19 = ((long)uVar11 >> 0x20) - lVar23;
            if ((long)uVar11 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbd0);
              (*pcVar10)();
            }
            uVar18 = uVar5;
            FUN_100008184(uVar5,uVar20);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (uVar18 == 0) {
              uVar16 = 0;
            }
            else {
              uVar12 = uVar18;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar23,uVar12)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbdc);
                (*pcVar10)();
              }
              uVar16 = (lVar23 - uVar12) + uVar18;
              uVar18 = uVar12;
            }
LAB_10056dab0:
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)uVar19 <= (long)uVar18) {
              uVar18 = uVar19;
            }
            lVar23 = 0;
            if (uVar16 != 0) {
              lVar23 = uVar18 + uVar16;
            }
            FUN_100009038(local_80,uVar16,lVar23,uVar5,uVar20);
            FUN_100006cdc(uVar5,uVar20);
            _swift_bridgeObjectRelease(uVar2);
            _swift_bridgeObjectRelease(uVar4);
            FUN_100006cdc(uVar5,uVar20);
            _swift_bridgeObjectRelease(uVar1);
            _swift_bridgeObjectRelease(uVar3);
            FUN_100006cdc(uVar11,uVar24);
            bVar9 = local_80[0];
          }
          else {
            if (uVar14 == 2) {
              lVar23 = *(long *)(uVar11 + 0x10);
              lVar6 = *(long *)(uVar11 + 0x18);
              uVar16 = uVar5;
              FUN_100008184(uVar5,uVar20);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              uVar18 = uVar16;
              if (uVar16 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar23,uVar18)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbd8);
                  (*pcVar10)();
                }
                uVar16 = (lVar23 - uVar18) + uVar16;
              }
              uVar19 = lVar6 - lVar23;
              if (SBORROW8(lVar6,lVar23)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10056dbd4);
                (*pcVar10)();
              }
              goto LAB_10056dab0;
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
            FUN_100008184(uVar5,uVar20);
            FUN_100009038(&local_81,local_80,local_80,uVar5,uVar20);
            FUN_100006cdc(uVar5,uVar20);
            _swift_bridgeObjectRelease(uVar2);
LAB_10056da74:
            _swift_bridgeObjectRelease(uVar4);
            FUN_100006cdc(uVar5,uVar20);
            _swift_bridgeObjectRelease(uVar1);
            _swift_bridgeObjectRelease(uVar3);
            FUN_100006cdc(uVar11,uVar24);
            bVar9 = local_81;
          }
          if ((bVar9 & 1) == 0) goto LAB_10056db7c;
        }
        puVar21 = puVar21 + 6;
        puVar25 = puVar25 + 6;
        local_90 = local_90 + -1;
      } while (local_90 != 0);
    }
    uVar13 = 1;
  }
  else {
LAB_10056db7c:
    uVar13 = 0;
  }
LAB_10056db80:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar13);
}

