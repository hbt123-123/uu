// rea decompile_all
// name: FUN_1005701e8
// address: 0x1005701e8
// body: available
// range: 0x1005701e8-0x1005706bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005706bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005701e8(long param_1,long param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  long local_b8;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 != 0) && (param_1 != param_2)) {
      puVar24 = (ulong *)(param_1 + 0x30);
      puVar23 = (ulong *)(param_2 + 0x30);
      do {
        if (lVar18 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10057069c);
          (*pcVar7)();
        }
        uVar9 = puVar24[-2];
        uVar12 = puVar24[-1];
        uVar20 = *puVar24;
        uVar1 = puVar23[-2];
        uVar2 = puVar23[-1];
        uVar22 = *puVar23;
        FUN_100008184(uVar9,uVar12);
        _swift_retain(uVar20);
        FUN_100008184(uVar1,uVar2);
        uVar8 = uVar22;
        _swift_retain();
        if (uVar20 != uVar22) {
          _swift_retain(uVar20);
          _swift_retain(uVar22);
          uVar15 = uVar20;
          (*param_3)(uVar20,uVar22);
          _swift_release(uVar22);
          uVar8 = uVar20;
          _swift_release();
          if ((uVar15 & 1) != 0) goto LAB_100570330;
LAB_100570634:
          FUN_100006cdc(uVar1,uVar2);
          _swift_release(uVar22);
          FUN_100006cdc(uVar9,uVar12);
          _swift_release(uVar20);
          goto LAB_10057065c;
        }
LAB_100570330:
        uVar4 = (uint)(uVar12 >> 0x20);
        uVar13 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar2 >> 0x20);
        uVar16 = uVar5 >> 0x1e;
        iVar21 = (int)uVar9;
        if (uVar12 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((uVar9 != 0) || (uVar12 != 0xc000000000000000)) || (uVar2 >> 0x3e < 3)) ||
             ((uVar15 = 0, uVar1 != 0 || (uVar2 != 0xc000000000000000))))
          goto joined_r0x0001005703a8;
          FUN_100006cdc(0,0xc000000000000000);
          _swift_release(uVar22);
          uVar9 = 0;
          uVar12 = 0xc000000000000000;
LAB_1005704c4:
          FUN_100006cdc(uVar9,uVar12);
          _swift_release(uVar20);
        }
        else {
          if (1 < uVar4 >> 0x1e) {
            if (uVar13 == 2) {
              uVar15 = *(long *)(uVar9 + 0x18) - *(long *)(uVar9 + 0x10);
              if (SBORROW8(*(long *)(uVar9 + 0x18),*(long *)(uVar9 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706a8);
                (*pcVar7)();
              }
              goto joined_r0x0001005703a8;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_1005703e4;
LAB_1005703ac:
            if (uVar16 == 2) {
              uVar17 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706a4);
                (*pcVar7)();
              }
              goto LAB_10057040c;
            }
            if (uVar15 != 0) goto LAB_100570634;
LAB_1005704a8:
            FUN_100006cdc(uVar1,uVar2);
            _swift_release(uVar22);
            goto LAB_1005704c4;
          }
          if (uVar13 == 0) {
            uVar15 = uVar12 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uVar9 >> 0x20);
            if (SBORROW4(iVar14,iVar21)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706ac);
              (*pcVar7)();
            }
            uVar15 = (ulong)(iVar14 - iVar21);
          }
joined_r0x0001005703a8:
          if (1 < uVar5 >> 0x1e) goto LAB_1005703ac;
LAB_1005703e4:
          if (uVar16 == 0) {
            uVar17 = uVar2 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uVar1 >> 0x20);
            if (SBORROW4(iVar14,(int)uVar1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706a0);
              (*pcVar7)();
            }
            uVar17 = (ulong)(iVar14 - (int)uVar1);
          }
LAB_10057040c:
          if (uVar15 != uVar17) goto LAB_100570634;
          if ((long)uVar15 < 1) goto LAB_1005704a8;
          if (uVar13 < 2) {
            if (uVar13 == 0) {
              local_80[0] = (byte)uVar9;
              local_80[1] = (byte)(uVar9 >> 8);
              local_80[2] = (byte)(uVar9 >> 0x10);
              local_80[3] = (byte)(uVar9 >> 0x18);
              local_80[4] = (byte)(uVar9 >> 0x20);
              local_80[5] = (byte)(uVar9 >> 0x28);
              local_80[6] = (byte)(uVar9 >> 0x30);
              local_80[7] = (byte)(uVar9 >> 0x38);
              local_80[8] = (byte)uVar12;
              local_80[9] = (byte)(uVar12 >> 8);
              local_80[10] = (byte)(uVar12 >> 0x10);
              local_80[0xb] = (byte)(uVar12 >> 0x18);
              local_80[0xc] = (byte)(uVar12 >> 0x20);
              local_80[0xd] = (byte)(uVar12 >> 0x28);
              pbVar11 = local_80 + (uVar12 >> 0x30 & 0xff);
              goto LAB_10057025c;
            }
            lVar19 = (long)iVar21;
            uVar15 = ((long)uVar9 >> 0x20) - lVar19;
            if ((long)uVar9 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706b0);
              (*pcVar7)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (uVar8 == 0) {
              local_b8 = 0;
            }
            else {
              uVar17 = uVar8;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar19,uVar17)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706bc);
                (*pcVar7)();
              }
              local_b8 = (lVar19 - uVar17) + uVar8;
              uVar8 = uVar17;
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)uVar15 <= (long)uVar8) {
              uVar8 = uVar15;
            }
            lVar19 = 0;
            if (local_b8 != 0) {
              lVar19 = uVar8 + local_b8;
            }
LAB_1005705e8:
            FUN_100009038(local_80,local_b8,lVar19,uVar1,uVar2);
            FUN_100006cdc(uVar1,uVar2);
            _swift_release(uVar22);
            FUN_100006cdc(uVar9,uVar12);
            _swift_release(uVar20);
            bVar6 = local_80[0];
          }
          else {
            if (uVar13 == 2) {
              lVar19 = *(long *)(uVar9 + 0x10);
              lVar3 = *(long *)(uVar9 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (uVar8 == 0) {
                local_b8 = 0;
              }
              else {
                uVar15 = uVar8;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar19,uVar15)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706b8);
                  (*pcVar7)();
                }
                local_b8 = (lVar19 - uVar15) + uVar8;
                uVar8 = uVar15;
              }
              uVar15 = lVar3 - lVar19;
              if (SBORROW8(lVar3,lVar19)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1005706b4);
                (*pcVar7)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uVar15 <= (long)uVar8) {
                uVar8 = uVar15;
              }
              lVar19 = 0;
              if (local_b8 != 0) {
                lVar19 = uVar8 + local_b8;
              }
              goto LAB_1005705e8;
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
            pbVar11 = local_80;
LAB_10057025c:
            FUN_100009038(&local_81,local_80,pbVar11,uVar1,uVar2);
            FUN_100006cdc(uVar1,uVar2);
            _swift_release(uVar22);
            FUN_100006cdc(uVar9,uVar12);
            _swift_release(uVar20);
            bVar6 = local_81;
          }
          if ((bVar6 & 1) == 0) goto LAB_10057065c;
        }
        puVar24 = puVar24 + 3;
        puVar23 = puVar23 + 3;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    uVar10 = 1;
  }
  else {
LAB_10057065c:
    uVar10 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar10);
}

