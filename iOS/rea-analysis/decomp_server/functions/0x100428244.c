// rea decompile_all
// name: FUN_100428244
// address: 0x100428244
// body: available
// range: 0x100428244-0x100428713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100428710 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100428244(long param_1,long param_2)

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
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  long local_b0;
  byte local_81;
  byte local_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 == *(long *)(param_2 + 0x10)) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      puVar23 = (ulong *)(param_1 + 0x30);
      puVar22 = (ulong *)(param_2 + 0x30);
      do {
        if (lVar24 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004286f0);
          (*pcVar7)();
        }
        uVar9 = puVar23[-2];
        uVar11 = puVar23[-1];
        uVar18 = *puVar23;
        uVar1 = puVar22[-2];
        uVar2 = puVar22[-1];
        uVar21 = *puVar22;
        FUN_100008184(uVar9,uVar11);
        _swift_retain(uVar18);
        FUN_100008184(uVar1,uVar2);
        uVar8 = uVar21;
        _swift_retain();
        if (uVar18 != uVar21) {
          _swift_retain(uVar18);
          _swift_retain(uVar21);
          uVar15 = uVar18;
          FUN_100455378(uVar18,uVar21);
          _swift_release(uVar21);
          uVar8 = uVar18;
          _swift_release();
          if ((uVar15 & 1) != 0) goto LAB_100428358;
LAB_100428688:
          FUN_100006cdc(uVar1,uVar2);
          _swift_release(uVar21);
          FUN_100006cdc(uVar9,uVar11);
          _swift_release(uVar18);
          goto LAB_1004286b0;
        }
LAB_100428358:
        uVar4 = (uint)(uVar11 >> 0x20);
        uVar13 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar2 >> 0x20);
        uVar16 = uVar5 >> 0x1e;
        iVar20 = (int)uVar9;
        if (uVar11 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((uVar9 != 0) || (uVar11 != 0xc000000000000000)) || (uVar2 >> 0x3e < 3)) ||
             ((uVar15 = 0, uVar1 != 0 || (uVar2 != 0xc000000000000000))))
          goto joined_r0x0001004283d0;
          FUN_100006cdc(0,0xc000000000000000);
          _swift_release(uVar21);
          uVar9 = 0;
          uVar11 = 0xc000000000000000;
LAB_1004282c0:
          FUN_100006cdc(uVar9,uVar11);
          _swift_release(uVar18);
        }
        else {
          if (1 < uVar4 >> 0x1e) {
            if (uVar13 == 2) {
              uVar15 = *(long *)(uVar9 + 0x18) - *(long *)(uVar9 + 0x10);
              if (SBORROW8(*(long *)(uVar9 + 0x18),*(long *)(uVar9 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1004286fc);
                (*pcVar7)();
              }
              goto joined_r0x0001004283d0;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_10042840c;
LAB_1004283d4:
            if (uVar16 == 2) {
              uVar17 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1004286f8);
                (*pcVar7)();
              }
              goto LAB_10042842c;
            }
            if (uVar15 != 0) goto LAB_100428688;
LAB_1004282a4:
            FUN_100006cdc(uVar1,uVar2);
            _swift_release(uVar21);
            goto LAB_1004282c0;
          }
          if (uVar13 == 0) {
            uVar15 = uVar11 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uVar9 >> 0x20);
            if (SBORROW4(iVar14,iVar20)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100428700);
              (*pcVar7)();
            }
            uVar15 = (ulong)(iVar14 - iVar20);
          }
joined_r0x0001004283d0:
          if (1 < uVar5 >> 0x1e) goto LAB_1004283d4;
LAB_10042840c:
          if (uVar16 == 0) {
            uVar17 = uVar2 >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)(uVar1 >> 0x20);
            if (SBORROW4(iVar14,(int)uVar1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1004286f4);
              (*pcVar7)();
            }
            uVar17 = (ulong)(iVar14 - (int)uVar1);
          }
LAB_10042842c:
          if (uVar15 != uVar17) goto LAB_100428688;
          if ((long)uVar15 < 1) goto LAB_1004282a4;
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
              local_80[8] = (byte)uVar11;
              local_80[9] = (byte)(uVar11 >> 8);
              local_80[10] = (byte)(uVar11 >> 0x10);
              local_80[0xb] = (byte)(uVar11 >> 0x18);
              local_80[0xc] = (byte)(uVar11 >> 0x20);
              local_80[0xd] = (byte)(uVar11 >> 0x28);
              pbVar12 = local_80 + (uVar11 >> 0x30 & 0xff);
              goto LAB_100428590;
            }
            lVar19 = (long)iVar20;
            uVar15 = ((long)uVar9 >> 0x20) - lVar19;
            if ((long)uVar9 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100428704);
              (*pcVar7)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (uVar8 == 0) {
              local_b0 = 0;
            }
            else {
              uVar17 = uVar8;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar19,uVar17)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100428710);
                (*pcVar7)();
              }
              local_b0 = (lVar19 - uVar17) + uVar8;
              uVar8 = uVar17;
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)uVar15 <= (long)uVar8) {
              uVar8 = uVar15;
            }
            lVar19 = 0;
            if (local_b0 != 0) {
              lVar19 = uVar8 + local_b0;
            }
LAB_10042863c:
            FUN_100009038(local_80,local_b0,lVar19,uVar1,uVar2);
            FUN_100006cdc(uVar1,uVar2);
            _swift_release(uVar21);
            FUN_100006cdc(uVar9,uVar11);
            _swift_release(uVar18);
            bVar6 = local_80[0];
          }
          else {
            if (uVar13 == 2) {
              lVar19 = *(long *)(uVar9 + 0x10);
              lVar3 = *(long *)(uVar9 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (uVar8 == 0) {
                local_b0 = 0;
              }
              else {
                uVar15 = uVar8;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar19,uVar15)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10042870c);
                  (*pcVar7)();
                }
                local_b0 = (lVar19 - uVar15) + uVar8;
                uVar8 = uVar15;
              }
              uVar15 = lVar3 - lVar19;
              if (SBORROW8(lVar3,lVar19)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100428708);
                (*pcVar7)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uVar15 <= (long)uVar8) {
                uVar8 = uVar15;
              }
              lVar19 = 0;
              if (local_b0 != 0) {
                lVar19 = uVar8 + local_b0;
              }
              goto LAB_10042863c;
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
            pbVar12 = local_80;
LAB_100428590:
            FUN_100009038(&local_81,local_80,pbVar12,uVar1,uVar2);
            FUN_100006cdc(uVar1,uVar2);
            _swift_release(uVar21);
            FUN_100006cdc(uVar9,uVar11);
            _swift_release(uVar18);
            bVar6 = local_81;
          }
          if ((bVar6 & 1) == 0) goto LAB_1004286b0;
        }
        puVar23 = puVar23 + 3;
        puVar22 = puVar22 + 3;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    uVar10 = 1;
  }
  else {
LAB_1004286b0:
    uVar10 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar10);
}

