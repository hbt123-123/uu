// rea decompile_all
// name: FUN_10056acec
// address: 0x10056acec
// body: available
// range: 0x10056acec-0x10056ba3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056ba3c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10056acec(long param_1,long param_2)

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
  byte bVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  ulong *local_c8;
  ulong local_a8;
  byte local_89;
  byte local_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar26 = *(long *)(param_1 + 0x10);
  if (lVar26 == *(long *)(param_2 + 0x10)) {
    if ((lVar26 != 0) && (param_1 != param_2)) {
      local_c8 = (ulong *)(param_1 + 0x50);
      puVar28 = (ulong *)(param_2 + 0x28);
      do {
        if (lVar26 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10056b9fc);
          (*pcVar11)();
        }
        uVar12 = local_c8[-6];
        uVar3 = local_c8[-5];
        uVar13 = local_c8[-4];
        uVar16 = local_c8[-3];
        uVar1 = local_c8[-2];
        uVar4 = local_c8[-1];
        uVar19 = *local_c8;
        uVar5 = *puVar28;
        uVar2 = puVar28[1];
        uVar6 = puVar28[2];
        uVar15 = puVar28[3];
        uVar17 = puVar28[4];
        local_a8 = puVar28[5];
        if (((uVar12 != puVar28[-1]) || (uVar3 != uVar5)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar12,uVar3,puVar28[-1],uVar5,0), (uVar12 & 1) == 0)) goto LAB_10056b9bc;
        if (uVar19 != 0) {
          if (local_a8 == 0) {
            local_a8 = 0;
            goto LAB_10056b96c;
          }
          if (uVar19 == local_a8) {
            _swift_bridgeObjectRetain(uVar3);
            FUN_100008184(uVar13,uVar16);
            FUN_100481814(uVar1,uVar4,uVar19);
            _swift_bridgeObjectRetain(uVar5);
            FUN_100008184(uVar2,uVar6);
            FUN_100481814(uVar15,uVar17,uVar19);
            FUN_100481814(uVar1,uVar4,uVar19);
            FUN_100481814(uVar15,uVar17,uVar19);
LAB_10056b01c:
            uVar8 = (uint)(uVar4 >> 0x20);
            uVar18 = uVar8 >> 0x1e;
            uVar9 = (uint)(uVar17 >> 0x20);
            uVar23 = uVar9 >> 0x1e;
            iVar25 = (int)uVar1;
            uVar12 = uVar15;
            uVar22 = uVar17;
            if (uVar4 >> 0x3e == 3) {
              uVar21 = 0;
              if (((uVar1 != 0) || (uVar4 != 0xc000000000000000)) ||
                 ((uVar17 >> 0x3e < 3 ||
                  ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000))))))
              goto joined_r0x00010056b090;
              uVar12 = 0;
              uVar22 = 0xc000000000000000;
LAB_10056b218:
              FUN_10008f148(uVar12,uVar22,local_a8);
              goto LAB_10056b458;
            }
            if (uVar8 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar21 = uVar4 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)(uVar1 >> 0x20);
                if (SBORROW4(iVar20,iVar25)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba20);
                  (*pcVar11)();
                }
                uVar21 = (ulong)(iVar20 - iVar25);
              }
joined_r0x00010056b090:
              if (1 < uVar9 >> 0x1e) goto LAB_10056b094;
LAB_10056b0d0:
              if (uVar23 == 0) {
                uVar24 = uVar17 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)(uVar15 >> 0x20);
                if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba08);
                  (*pcVar11)();
                }
                uVar24 = (ulong)(iVar20 - (int)uVar15);
              }
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
                if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba24);
                  (*pcVar11)();
                }
                goto joined_r0x00010056b090;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto LAB_10056b0d0;
LAB_10056b094:
              if (uVar23 != 2) {
                if (uVar21 != 0) goto LAB_10056b8b0;
                goto LAB_10056b218;
              }
              uVar24 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
              if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba0c);
                (*pcVar11)();
              }
            }
            if (uVar21 != uVar24) goto LAB_10056b8b0;
            if ((long)uVar21 < 1) goto LAB_10056b218;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                local_88[0] = (byte)uVar1;
                local_88[1] = (byte)(uVar1 >> 8);
                local_88[2] = (byte)(uVar1 >> 0x10);
                local_88[3] = (byte)(uVar1 >> 0x18);
                local_88[4] = (byte)(uVar1 >> 0x20);
                local_88[5] = (byte)(uVar1 >> 0x28);
                local_88[6] = (byte)(uVar1 >> 0x30);
                local_88[7] = (byte)(uVar1 >> 0x38);
                local_88[8] = (byte)uVar4;
                local_88[9] = (byte)(uVar4 >> 8);
                local_88[10] = (byte)(uVar4 >> 0x10);
                local_88[0xb] = (byte)(uVar4 >> 0x18);
                local_88[0xc] = (byte)(uVar4 >> 0x20);
                local_88[0xd] = (byte)(uVar4 >> 0x28);
                FUN_100008184(uVar15,uVar17);
                FUN_100009038(&local_89,local_88,local_88 + (uVar4 >> 0x30 & 0xff),uVar15,uVar17);
                FUN_100006cdc(uVar15,uVar17);
                FUN_10008f148(uVar15,uVar17,local_a8);
                bVar10 = local_89;
              }
              else {
                lVar27 = (long)iVar25;
                uVar12 = ((long)uVar1 >> 0x20) - lVar27;
                if ((long)uVar1 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba28);
                  (*pcVar11)();
                }
                uVar22 = uVar15;
                FUN_100008184(uVar15,uVar17);
                __s10Foundation13__DataStorageC6_bytesSvSgvg(uVar4);
                if (uVar22 == 0) {
                  lVar27 = 0;
                }
                else {
                  uVar21 = uVar22;
                  __s10Foundation13__DataStorageC7_offsetSivg(uVar4);
                  if (SBORROW8(lVar27,uVar21)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba3c);
                    (*pcVar11)();
                  }
                  lVar27 = (lVar27 - uVar21) + uVar22;
                  uVar22 = uVar21;
                }
                __s10Foundation13__DataStorageC7_lengthSivg(uVar4);
                if ((long)uVar12 <= (long)uVar22) {
                  uVar22 = uVar12;
                }
                lVar7 = 0;
                if (lVar27 != 0) {
                  lVar7 = uVar22 + lVar27;
                }
                FUN_100009038(local_88,lVar27,lVar7,uVar15,uVar17);
                FUN_100006cdc(uVar15,uVar17);
                FUN_10008f148(uVar15,uVar17,local_a8);
                bVar10 = local_88[0];
              }
            }
            else if (uVar18 == 2) {
              lVar27 = *(long *)(uVar1 + 0x10);
              lVar7 = *(long *)(uVar1 + 0x18);
              FUN_100008184();
              __s10Foundation13__DataStorageC6_bytesSvSgvg(uVar4);
              uVar22 = uVar12;
              if (uVar12 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg(uVar4);
                if (SBORROW8(lVar27,uVar22)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba38);
                  (*pcVar11)();
                }
                uVar12 = (lVar27 - uVar22) + uVar12;
              }
              uVar21 = lVar7 - lVar27;
              if (SBORROW8(lVar7,lVar27)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba2c);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg(uVar4);
              if ((long)uVar21 <= (long)uVar22) {
                uVar22 = uVar21;
              }
              lVar27 = 0;
              if (uVar12 != 0) {
                lVar27 = uVar22 + uVar12;
              }
              FUN_100009038(local_88,uVar12,lVar27,uVar15,uVar17);
              FUN_100006cdc(uVar15,uVar17);
              FUN_10008f148(uVar15,uVar17,local_a8);
              bVar10 = local_88[0];
            }
            else {
              local_88[8] = 0;
              local_88[9] = 0;
              local_88[10] = 0;
              local_88[0xb] = 0;
              local_88[0xc] = 0;
              local_88[0xd] = 0;
              local_88[0] = 0;
              local_88[1] = 0;
              local_88[2] = 0;
              local_88[3] = 0;
              local_88[4] = 0;
              local_88[5] = 0;
              local_88[6] = 0;
              local_88[7] = 0;
              FUN_100008184(uVar15,uVar17);
              FUN_100009038(&local_89,local_88,local_88,uVar15,uVar17);
              FUN_100006cdc(uVar15,uVar17);
              FUN_10008f148(uVar15,uVar17,local_a8);
              bVar10 = local_89;
            }
            if ((bVar10 & 1) != 0) goto LAB_10056b458;
          }
          else {
            _swift_bridgeObjectRetain(uVar3);
            FUN_100008184(uVar13,uVar16);
            FUN_100481814(uVar1,uVar4,uVar19);
            _swift_bridgeObjectRetain(uVar5);
            FUN_100008184(uVar2,uVar6);
            FUN_100481814(uVar15,uVar17,local_a8);
            FUN_100481814(uVar1,uVar4,uVar19);
            FUN_100481814(uVar15,uVar17,local_a8);
            uVar12 = local_a8;
            FUN_1004f813c();
            if ((uVar12 & 1) != 0) goto LAB_10056b01c;
LAB_10056b8b0:
            FUN_10008f148(uVar15,uVar17,local_a8);
          }
          FUN_10008f148(uVar1,uVar4,uVar19);
          _swift_bridgeObjectRelease(uVar5);
          FUN_100006cdc(uVar2,uVar6);
          FUN_10008f148(uVar15,uVar17,local_a8);
          _swift_bridgeObjectRelease(uVar3);
          FUN_100006cdc(uVar13,uVar16);
          uVar15 = uVar1;
          uVar17 = uVar4;
          local_a8 = uVar19;
LAB_10056b9b8:
          FUN_10008f148(uVar15,uVar17,local_a8);
          goto LAB_10056b9bc;
        }
        if (local_a8 != 0) {
LAB_10056b96c:
          FUN_100481814(uVar1,uVar4,uVar19);
          FUN_100481814(uVar15,uVar17,local_a8);
          FUN_10008f148(uVar1,uVar4,uVar19);
          goto LAB_10056b9b8;
        }
        _swift_bridgeObjectRetain(uVar3);
        FUN_100008184(uVar13,uVar16);
        FUN_100481814(uVar1,uVar4,0);
        _swift_bridgeObjectRetain(uVar5);
        FUN_100008184(uVar2,uVar6);
        FUN_100481814(uVar15,uVar17,0);
        FUN_100481814(uVar1,uVar4,0);
        FUN_100481814(uVar15,uVar17,0);
LAB_10056b458:
        uVar12 = uVar1;
        FUN_10008f148(uVar1,uVar4,uVar19);
        uVar8 = (uint)(uVar16 >> 0x20);
        uVar18 = uVar8 >> 0x1e;
        uVar9 = (uint)(uVar6 >> 0x20);
        uVar23 = uVar9 >> 0x1e;
        iVar25 = (int)uVar13;
        if (uVar16 >> 0x3e == 3) {
          uVar22 = 0;
          if ((((uVar13 != 0) || (uVar16 != 0xc000000000000000)) || (uVar6 >> 0x3e < 3)) ||
             ((uVar22 = 0, uVar2 != 0 || (uVar6 != 0xc000000000000000))))
          goto joined_r0x00010056b4f0;
          _swift_bridgeObjectRelease(uVar5);
          FUN_100006cdc(0,0xc000000000000000);
          FUN_10008f148(uVar15,uVar17,local_a8);
          _swift_bridgeObjectRelease(uVar3);
          uVar13 = 0;
          uVar16 = 0xc000000000000000;
LAB_10056ad84:
          FUN_100006cdc(uVar13,uVar16);
          FUN_10008f148(uVar1,uVar4,uVar19);
        }
        else {
          if (1 < uVar8 >> 0x1e) {
            if (uVar18 == 2) {
              uVar22 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
              if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba10);
                (*pcVar11)();
              }
              goto joined_r0x00010056b4f0;
            }
            uVar22 = 0;
            if (uVar23 < 2) goto LAB_10056b52c;
LAB_10056b4f4:
            if (uVar23 == 2) {
              uVar21 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba00);
                (*pcVar11)();
              }
              goto LAB_10056b548;
            }
            if (uVar22 != 0) goto LAB_10056b924;
LAB_10056ad50:
            _swift_bridgeObjectRelease(uVar5);
            FUN_100006cdc(uVar2,uVar6);
            FUN_10008f148(uVar15,uVar17,local_a8);
            _swift_bridgeObjectRelease(uVar3);
            goto LAB_10056ad84;
          }
          if (uVar18 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)(uVar13 >> 0x20);
            if (SBORROW4(iVar20,iVar25)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba14);
              (*pcVar11)();
            }
            uVar22 = (ulong)(iVar20 - iVar25);
          }
joined_r0x00010056b4f0:
          if (1 < uVar9 >> 0x1e) goto LAB_10056b4f4;
LAB_10056b52c:
          if (uVar23 == 0) {
            uVar21 = uVar6 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)(uVar2 >> 0x20);
            if (SBORROW4(iVar20,(int)uVar2)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba04);
              (*pcVar11)();
            }
            uVar21 = (ulong)(iVar20 - (int)uVar2);
          }
LAB_10056b548:
          if (uVar22 != uVar21) {
LAB_10056b924:
            _swift_bridgeObjectRelease(uVar5);
            FUN_100006cdc(uVar2,uVar6);
            FUN_10008f148(uVar15,uVar17,local_a8);
            _swift_bridgeObjectRelease(uVar3);
            FUN_100006cdc(uVar13,uVar16);
            uVar15 = uVar1;
            uVar17 = uVar4;
            local_a8 = uVar19;
            goto LAB_10056b9b8;
          }
          if ((long)uVar22 < 1) goto LAB_10056ad50;
          if (uVar18 < 2) {
            if (uVar18 == 0) {
              local_88[0] = (byte)uVar13;
              local_88[1] = (byte)(uVar13 >> 8);
              local_88[2] = (byte)(uVar13 >> 0x10);
              local_88[3] = (byte)(uVar13 >> 0x18);
              local_88[4] = (byte)(uVar13 >> 0x20);
              local_88[5] = (byte)(uVar13 >> 0x28);
              local_88[6] = (byte)(uVar13 >> 0x30);
              local_88[7] = (byte)(uVar13 >> 0x38);
              local_88[8] = (byte)uVar16;
              local_88[9] = (byte)(uVar16 >> 8);
              local_88[10] = (byte)(uVar16 >> 0x10);
              local_88[0xb] = (byte)(uVar16 >> 0x18);
              local_88[0xc] = (byte)(uVar16 >> 0x20);
              local_88[0xd] = (byte)(uVar16 >> 0x28);
              FUN_100009038(&local_89,local_88,local_88 + (uVar16 >> 0x30 & 0xff),uVar2,uVar6);
              _swift_bridgeObjectRelease(uVar5);
              FUN_100006cdc(uVar2,uVar6);
              FUN_10008f148(uVar15,uVar17,local_a8);
              _swift_bridgeObjectRelease(uVar3);
LAB_10056b888:
              FUN_100006cdc(uVar13,uVar16);
              FUN_10008f148(uVar1,uVar4,uVar19);
              bVar10 = local_89;
            }
            else {
              lVar27 = (long)iVar25;
              uVar22 = ((long)uVar13 >> 0x20) - lVar27;
              if ((long)uVar13 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba18);
                (*pcVar11)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              uVar21 = uVar12;
              if (uVar12 != 0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar27,uVar21)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba34);
                  (*pcVar11)();
                }
                uVar12 = (lVar27 - uVar21) + uVar12;
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)uVar22 <= (long)uVar21) {
                uVar21 = uVar22;
              }
              lVar27 = 0;
              if (uVar12 != 0) {
                lVar27 = uVar21 + uVar12;
              }
              FUN_100009038(local_88,uVar12,lVar27,uVar2,uVar6);
              _swift_bridgeObjectRelease(uVar5);
              FUN_100006cdc(uVar2,uVar6);
              FUN_10008f148(uVar15,uVar17,local_a8);
              _swift_bridgeObjectRelease(uVar3);
              FUN_100006cdc(uVar13,uVar16);
              FUN_10008f148(uVar1,uVar4,uVar19);
              bVar10 = local_88[0];
            }
          }
          else {
            if (uVar18 != 2) {
              local_88[8] = 0;
              local_88[9] = 0;
              local_88[10] = 0;
              local_88[0xb] = 0;
              local_88[0xc] = 0;
              local_88[0xd] = 0;
              local_88[0] = 0;
              local_88[1] = 0;
              local_88[2] = 0;
              local_88[3] = 0;
              local_88[4] = 0;
              local_88[5] = 0;
              local_88[6] = 0;
              local_88[7] = 0;
              FUN_100009038(&local_89,local_88,local_88,uVar2,uVar6);
              _swift_bridgeObjectRelease(uVar5);
              FUN_100006cdc(uVar2,uVar6);
              FUN_10008f148(uVar15,uVar17,local_a8);
              _swift_bridgeObjectRelease(uVar3);
              goto LAB_10056b888;
            }
            lVar27 = *(long *)(uVar13 + 0x10);
            lVar7 = *(long *)(uVar13 + 0x18);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            uVar22 = uVar12;
            if (uVar12 != 0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar27,uVar22)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba30);
                (*pcVar11)();
              }
              uVar12 = (lVar27 - uVar22) + uVar12;
            }
            uVar21 = lVar7 - lVar27;
            if (SBORROW8(lVar7,lVar27)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10056ba1c);
              (*pcVar11)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)uVar21 <= (long)uVar22) {
              uVar22 = uVar21;
            }
            lVar27 = 0;
            if (uVar12 != 0) {
              lVar27 = uVar22 + uVar12;
            }
            FUN_100009038(local_88,uVar12,lVar27,uVar2,uVar6);
            _swift_bridgeObjectRelease(uVar5);
            FUN_100006cdc(uVar2,uVar6);
            FUN_10008f148(uVar15,uVar17,local_a8);
            _swift_bridgeObjectRelease(uVar3);
            FUN_100006cdc(uVar13,uVar16);
            FUN_10008f148(uVar1,uVar4,uVar19);
            bVar10 = local_88[0];
          }
          if ((bVar10 & 1) == 0) goto LAB_10056b9bc;
        }
        local_c8 = local_c8 + 7;
        puVar28 = puVar28 + 7;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    uVar14 = 1;
  }
  else {
LAB_10056b9bc:
    uVar14 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar14);
  }
  return;
}

