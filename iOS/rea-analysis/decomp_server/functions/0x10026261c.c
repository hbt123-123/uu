// rea decompile_all
// name: FUN_10026261c
// address: 0x10026261c
// body: available
// range: 0x10026261c-0x100262f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100262f40 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026261c(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong auStack_120 [2];
  byte *local_110;
  ulong local_108;
  byte *local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  ulong *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  byte local_89;
  byte local_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  pbVar10 = (byte *)0x0;
  __s10Foundation3URLVMa();
  lVar32 = *(long *)(pbVar10 + -8);
  lVar31 = (long)auStack_120 - (*(long *)(lVar32 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  local_c8 = lVar31;
  FUN_10026d874();
  uVar21 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b8 = (ulong *)(lVar31 - uVar21);
  uVar30 = (long)local_b8 - uVar21;
  puVar12 = &DAT_100a81138;
  local_c0 = (long *)(uVar30 - uVar21);
  FUN_100004bb4(&DAT_100a81138,&DAT_100815250);
  uVar21 = (long)(uVar30 - uVar21) -
           (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  local_98 = puVar12;
  FUN_10026d8cc();
  lVar22 = *(long *)(lVar13 + -8);
  uVar24 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar26 = uVar21 - uVar24;
  lVar29 = lVar26 - uVar24;
  lVar31 = *(long *)(param_1 + 0x10);
  local_a0 = lVar13;
  if (lVar31 == *(long *)(param_2 + 0x10)) {
    if ((lVar31 != 0) && (param_1 != param_2)) {
      local_f8 = 0;
      uVar24 = (ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar24;
      param_2 = param_2 + uVar24;
      local_d0 = *(long *)(lVar22 + 0x48);
      local_f0 = lVar26;
      local_e0 = uVar30;
      local_d8 = lVar11;
      do {
        local_a8 = param_1;
        FUN_100082394(param_1,lVar29,FUN_10026d8cc);
        if (lVar31 == 0) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f20);
          (*pcVar28)();
        }
        local_b0 = param_2;
        FUN_100082394(param_2,lVar26,FUN_10026d8cc);
        plVar1 = (long *)(uVar21 + (long)*(int *)(local_98 + 0x30));
        FUN_100082394(lVar29,uVar21,FUN_10026d874);
        FUN_100082394(lVar26,plVar1,FUN_10026d874);
        lVar13 = uVar21;
        _swift_getEnumCaseMultiPayload(uVar21,lVar11);
        puVar2 = local_b8;
        plVar14 = local_c0;
        if ((int)lVar13 != 0) {
          if ((int)lVar13 == 1) {
            FUN_100082394(uVar21,uVar30,FUN_10026d874);
            plVar14 = plVar1;
            _swift_getEnumCaseMultiPayload(plVar1,lVar11);
            lVar11 = local_c8;
            if ((int)plVar14 == 1) {
              (**(code **)(lVar32 + 0x20))(local_c8,plVar1,pbVar10);
              uVar24 = uVar30;
              __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar30,lVar11);
              lVar13 = local_a0;
              pcVar28 = *(code **)(lVar32 + 8);
              (*pcVar28)(lVar11,pbVar10);
              (*pcVar28)(uVar30,pbVar10);
              lVar11 = local_d8;
              uVar18 = local_f8;
              if ((uVar24 & 1) != 0) goto LAB_100262d50;
LAB_100262eb0:
              local_f8 = uVar18;
              FUN_1000d27dc(uVar21,FUN_10026d874);
            }
            else {
              (**(code **)(lVar32 + 8))(uVar30,pbVar10);
LAB_100262e6c:
              FUN_100040bb4(uVar21,&DAT_100a81138,&DAT_100815250);
            }
          }
          else {
            FUN_100082394(uVar21,local_b8,FUN_10026d874);
            uVar30 = *puVar2;
            uVar24 = puVar2[1];
            plVar14 = plVar1;
            _swift_getEnumCaseMultiPayload(plVar1,lVar11);
            if ((int)plVar14 != 2) goto LAB_100262e6c;
            lVar26 = *plVar1;
            uVar19 = plVar1[1];
            FUN_100263ce4(0);
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar30,lVar26);
            if ((uVar30 & 1) != 0) {
              lVar26 = local_f0;
              lVar11 = local_d8;
              lVar13 = local_a0;
              uVar30 = local_e0;
              uVar18 = local_f8;
              if (uVar24 != uVar19) goto LAB_100262eb0;
              goto LAB_100262d50;
            }
            FUN_1000d27dc(uVar21,FUN_10026d874);
            lVar26 = local_f0;
          }
LAB_100262ec0:
          FUN_1000d27dc(lVar26,FUN_10026d8cc);
          FUN_1000d27dc(lVar29,FUN_10026d8cc);
          goto LAB_100262ee0;
        }
        FUN_100082394(uVar21,local_c0,FUN_10026d874);
        local_e8 = *plVar14;
        uVar30 = plVar14[1];
        plVar14 = plVar1;
        _swift_getEnumCaseMultiPayload(plVar1,lVar11);
        lVar13 = local_a0;
        lVar22 = local_e8;
        if ((int)plVar14 != 0) {
          FUN_100006cdc(local_e8,uVar30);
          goto LAB_100262e6c;
        }
        pbVar15 = (byte *)*plVar1;
        uVar24 = plVar1[1];
        uVar5 = (uint)(uVar30 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        uVar6 = (uint)(uVar24 >> 0x20);
        uVar25 = uVar6 >> 0x1e;
        iVar27 = (int)local_e8;
        if (uVar30 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((local_e8 != 0) || (uVar30 != 0xc000000000000000)) || (uVar24 >> 0x3e < 3)) ||
             ((uVar19 = 0, pbVar15 != (byte *)0x0 || (uVar24 != 0xc000000000000000)))) {
joined_r0x000100262c34:
            if (uVar25 < 2) goto LAB_100262a30;
LAB_1002629fc:
            if (uVar25 == 2) {
              uVar17 = *(long *)(pbVar15 + 0x18) - *(long *)(pbVar15 + 0x10);
              if (SBORROW8(*(long *)(pbVar15 + 0x18),*(long *)(pbVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f28);
                (*pcVar28)();
              }
              goto LAB_100262a54;
            }
            if (uVar19 == 0) goto LAB_100262b3c;
            goto LAB_100262ea0;
          }
          FUN_100006cdc(0,0xc000000000000000);
          lVar22 = 0;
          uVar30 = 0xc000000000000000;
LAB_100262b48:
          FUN_100006cdc(lVar22,uVar30);
          uVar30 = local_e0;
        }
        else {
          if (1 < uVar5 >> 0x1e) {
            if (uVar20 == 2) {
              uVar19 = *(long *)(local_e8 + 0x18) - *(long *)(local_e8 + 0x10);
              if (SBORROW8(*(long *)(local_e8 + 0x18),*(long *)(local_e8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f30);
                (*pcVar28)();
              }
            }
            else {
              uVar19 = 0;
            }
            goto joined_r0x000100262c34;
          }
          if (uVar20 == 0) {
            uVar19 = uVar30 >> 0x30 & 0xff;
          }
          else {
            iVar23 = (int)((ulong)local_e8 >> 0x20);
            if (SBORROW4(iVar23,iVar27)) {
                    /* WARNING: Does not return */
              pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f2c);
              (*pcVar28)();
            }
            uVar19 = (ulong)(iVar23 - iVar27);
          }
          if (1 < uVar6 >> 0x1e) goto LAB_1002629fc;
LAB_100262a30:
          if (uVar25 == 0) {
            uVar17 = uVar24 >> 0x30 & 0xff;
          }
          else {
            iVar23 = (int)((ulong)pbVar15 >> 0x20);
            if (SBORROW4(iVar23,(int)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f24);
              (*pcVar28)();
            }
            uVar17 = (ulong)(iVar23 - (int)pbVar15);
          }
LAB_100262a54:
          if (uVar19 != uVar17) {
LAB_100262ea0:
            FUN_100006cdc();
            FUN_100006cdc(lVar22,uVar30);
            uVar18 = local_f8;
            goto LAB_100262eb0;
          }
          if ((long)uVar19 < 1) {
LAB_100262b3c:
            FUN_100006cdc();
            goto LAB_100262b48;
          }
          local_100 = pbVar15;
          if (uVar20 < 2) {
            if (uVar20 == 0) {
              local_88[0] = (byte)local_e8;
              local_88[1] = (byte)((ulong)local_e8 >> 8);
              local_88[2] = (byte)((ulong)local_e8 >> 0x10);
              local_88[3] = (byte)((ulong)local_e8 >> 0x18);
              local_88[4] = (byte)((ulong)local_e8 >> 0x20);
              local_88[5] = (byte)((ulong)local_e8 >> 0x28);
              local_88[6] = (byte)((ulong)local_e8 >> 0x30);
              local_88[7] = (byte)((ulong)local_e8 >> 0x38);
              local_88[8] = (byte)uVar30;
              local_88[9] = (byte)(uVar30 >> 8);
              local_88[10] = (byte)(uVar30 >> 0x10);
              local_88[0xb] = (byte)(uVar30 >> 0x18);
              local_88[0xc] = (byte)(uVar30 >> 0x20);
              local_88[0xd] = (byte)(uVar30 >> 0x28);
              local_110 = local_88 + (uVar30 >> 0x30 & 0xff);
              FUN_100008184();
              uVar18 = local_f8;
              FUN_100009038(&local_89,local_88,local_110,pbVar15,uVar24);
              pbVar15 = local_100;
              local_f8 = uVar18;
              FUN_100006cdc(local_100,uVar24);
              FUN_100006cdc(pbVar15,uVar24);
              lVar22 = local_e8;
LAB_100262d3c:
              FUN_100006cdc(lVar22,uVar30);
              uVar9 = local_f8;
              uVar18 = local_f8;
              uVar30 = local_e0;
              lVar11 = local_d8;
              bVar7 = local_89;
            }
            else {
              lVar26 = (long)iVar27;
              local_110 = (byte *)((local_e8 >> 0x20) - lVar26);
              if (local_e8 >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
                pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f34);
                (*pcVar28)();
              }
              local_108 = uVar24;
              FUN_100008184();
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              pbVar16 = pbVar15;
              if (pbVar15 != (byte *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar26,(long)pbVar16)) {
                    /* WARNING: Does not return */
                  pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f40);
                  (*pcVar28)();
                }
                pbVar15 = pbVar15 + (lVar26 - (long)pbVar16);
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              uVar9 = local_f8;
              pbVar8 = local_100;
              uVar24 = local_108;
              if ((long)local_110 <= (long)pbVar16) {
                pbVar16 = local_110;
              }
              pbVar4 = (byte *)0x0;
              if (pbVar15 != (byte *)0x0) {
                pbVar4 = pbVar16 + (long)pbVar15;
              }
              FUN_100009038(local_88,pbVar15,pbVar4,local_100,local_108);
              FUN_100006cdc(pbVar8,uVar24);
              FUN_100006cdc(pbVar8,uVar24);
              FUN_100006cdc(local_e8,uVar30);
              lVar26 = local_f0;
              uVar18 = local_f8;
              uVar30 = local_e0;
              lVar11 = local_d8;
              bVar7 = local_88[0];
            }
          }
          else {
            if (uVar20 != 2) {
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
              local_108 = uVar24;
              FUN_100008184();
              uVar18 = local_f8;
              FUN_100009038(&local_89,local_88,local_88,local_100,uVar24);
              pbVar15 = local_100;
              local_f8 = uVar18;
              FUN_100006cdc(local_100,local_108);
              FUN_100006cdc(pbVar15,local_108);
              goto LAB_100262d3c;
            }
            lVar26 = *(long *)(local_e8 + 0x10);
            lVar11 = *(long *)(local_e8 + 0x18);
            local_110 = pbVar10;
            local_108 = uVar24;
            FUN_100008184();
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            pbVar10 = pbVar15;
            auStack_120[1] = uVar21;
            if (pbVar15 != (byte *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar26,(long)pbVar10)) {
                    /* WARNING: Does not return */
                pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f3c);
                (*pcVar28)();
              }
              pbVar15 = pbVar15 + (lVar26 - (long)pbVar10);
            }
            pbVar16 = (byte *)(lVar11 - lVar26);
            if (SBORROW8(lVar11,lVar26)) {
                    /* WARNING: Does not return */
              pcVar28 = (code *)SoftwareBreakpoint(1,0x100262f38);
              (*pcVar28)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            uVar9 = local_f8;
            pbVar8 = local_100;
            uVar21 = local_108;
            if ((long)pbVar16 <= (long)pbVar10) {
              pbVar10 = pbVar16;
            }
            pbVar16 = (byte *)0x0;
            if (pbVar15 != (byte *)0x0) {
              pbVar16 = pbVar10 + (long)pbVar15;
            }
            FUN_100009038(local_88,pbVar15,pbVar16,local_100,local_108);
            FUN_100006cdc(pbVar8,uVar21);
            FUN_100006cdc(pbVar8,uVar21);
            FUN_100006cdc(local_e8,uVar30);
            lVar26 = local_f0;
            uVar21 = auStack_120[1];
            pbVar10 = local_110;
            uVar18 = local_f8;
            uVar30 = local_e0;
            lVar11 = local_d8;
            bVar7 = local_88[0];
          }
          local_f8 = uVar9;
          local_e0 = uVar30;
          local_d8 = lVar11;
          if ((bVar7 & 1) == 0) goto LAB_100262eb0;
        }
LAB_100262d50:
        FUN_1000d27dc(uVar21,FUN_10026d874);
        puVar2 = (ulong *)(lVar29 + *(int *)(lVar13 + 0x14));
        uVar24 = *puVar2;
        puVar3 = (ulong *)(lVar26 + *(int *)(lVar13 + 0x14));
        if (((uVar24 != *puVar3) || (puVar2[1] != puVar3[1])) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar24 & 1) == 0)) goto LAB_100262ec0;
        puVar2 = (ulong *)(lVar29 + *(int *)(lVar13 + 0x18));
        uVar24 = puVar2[1];
        puVar3 = (ulong *)(lVar26 + *(int *)(lVar13 + 0x18));
        uVar19 = puVar3[1];
        if (uVar24 != 0) {
          if ((uVar19 != 0) &&
             (((uVar17 = *puVar2, uVar17 == *puVar3 && (uVar24 == uVar19)) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar17 & 1) != 0)))) goto LAB_100262dd8;
          goto LAB_100262ec0;
        }
        if (uVar19 != 0) goto LAB_100262ec0;
LAB_100262dd8:
        puVar2 = (ulong *)(lVar29 + *(int *)(lVar13 + 0x1c));
        uVar19 = puVar2[1];
        puVar3 = (ulong *)(lVar26 + *(int *)(lVar13 + 0x1c));
        uVar17 = puVar3[1];
        uVar24 = (ulong)(uVar17 == 0);
        if (uVar19 == 0) {
LAB_10026278c:
          FUN_1000d27dc(lVar26,FUN_10026d8cc);
          FUN_1000d27dc(lVar29,FUN_10026d8cc);
          if ((uVar24 & 1) == 0) goto LAB_100262ee0;
        }
        else {
          if (uVar17 == 0) goto LAB_100262ec0;
          uVar24 = *puVar2;
          if ((uVar24 != *puVar3) || (uVar19 != uVar17)) {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            goto LAB_10026278c;
          }
          FUN_1000d27dc(lVar26,FUN_10026d8cc);
          FUN_1000d27dc(lVar29,FUN_10026d8cc);
        }
        param_2 = local_b0 + local_d0;
        param_1 = local_a8 + local_d0;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    uVar18 = 1;
  }
  else {
LAB_100262ee0:
    uVar18 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar18);
}

