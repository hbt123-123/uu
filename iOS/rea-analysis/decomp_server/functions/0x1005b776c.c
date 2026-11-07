// rea decompile_all
// name: FUN_1005b776c
// address: 0x1005b776c
// body: available
// range: 0x1005b776c-0x1005b8ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005b8ac4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b776c(long param_1,long param_2)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  int iVar17;
  double dVar18;
  uint uVar19;
  ulong uVar20;
  double *pdVar21;
  double dVar22;
  int iVar23;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  byte bVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  ulong local_118;
  double local_e8;
  byte local_c9 [9];
  byte local_c0 [14];
  undefined2 uStack_b2;
  double local_b0;
  byte local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88;
  long local_80;
  int iVar24;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 == param_2) {
    uVar16 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar27 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      local_118 = 0xffffffffffffffff;
      if ((long)uVar27 < 0x40) {
        local_118 = ~(-1L << (uVar27 & 0x3f));
      }
      local_118 = local_118 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar13 = 0;
LAB_1005b7818:
      do {
        if (local_118 == 0) {
          do {
            lVar33 = lVar13 + 1;
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b87cc);
              (*pcVar11)();
            }
            if ((long)(uVar27 + 0x3f >> 6) <= lVar33) goto LAB_1005b8528;
            local_118 = ((ulong *)(param_1 + 0x40))[lVar33];
            lVar13 = lVar13 + 1;
          } while (local_118 == 0);
          uVar20 = (local_118 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_118 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
          local_118 = local_118 - 1 & local_118;
        }
        else {
          uVar20 = (local_118 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_118 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
          local_118 = local_118 - 1 & local_118;
          lVar33 = lVar13;
        }
        uVar20 = LZCOUNT(uVar20) | lVar33 << 6;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar20 * 0x10);
        pdVar21 = (double *)(*(long *)(param_1 + 0x38) + uVar20 * 0x30);
        lVar13 = *plVar1;
        uVar20 = plVar1[1];
        dVar2 = *pdVar21;
        local_e8 = pdVar21[1];
        dVar32 = pdVar21[2];
        bVar8 = *(byte *)(pdVar21 + 3);
        uVar34 = (uint)bVar8;
        dVar3 = pdVar21[4];
        dVar5 = pdVar21[5];
        _swift_bridgeObjectRetain(uVar20);
        FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
        FUN_100008184(dVar3,dVar5);
        if (uVar20 == 0) {
LAB_1005b8528:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          uVar16 = 1;
          goto LAB_1005b878c;
        }
        uVar28 = uVar20;
        FUN_1001a2c70();
        _swift_bridgeObjectRelease(uVar20);
        if ((uVar28 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
          FUN_100006cdc(dVar3,dVar5);
          goto LAB_1005b8788;
        }
        pdVar21 = (double *)(*(long *)(param_2 + 0x38) + lVar13 * 0x30);
        dVar4 = *pdVar21;
        dVar6 = pdVar21[1];
        dVar30 = pdVar21[2];
        bVar9 = *(byte *)(pdVar21 + 3);
        dVar14 = pdVar21[4];
        dVar18 = pdVar21[5];
        bVar12 = (((ulong)dVar32 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uVar35 = (uint)bVar8;
        if (((((ulong)dVar30 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar9 == 0xff)) {
          if (!bVar12 || uVar35 != 0xff) {
LAB_1005b85d0:
            FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
            FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
            FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
            FUN_100006cdc(dVar3,dVar5);
            _swift_bridgeObjectRelease(param_2);
            _swift_bridgeObjectRelease_n(param_1,2);
            local_c0[0] = SUB81(dVar4,0);
            local_c0[1] = (byte)((ulong)dVar4 >> 8);
            local_c0[2] = (byte)((ulong)dVar4 >> 0x10);
            local_c0[3] = (byte)((ulong)dVar4 >> 0x18);
            local_c0[4] = (byte)((ulong)dVar4 >> 0x20);
            local_c0[5] = (byte)((ulong)dVar4 >> 0x28);
            local_c0[6] = (byte)((ulong)dVar4 >> 0x30);
            local_c0[7] = (byte)((ulong)dVar4 >> 0x38);
            local_c0[8] = SUB81(dVar6,0);
            local_c0[9] = (byte)((ulong)dVar6 >> 8);
            local_c0[10] = (byte)((ulong)dVar6 >> 0x10);
            local_c0[0xb] = (byte)((ulong)dVar6 >> 0x18);
            local_c0[0xc] = (byte)((ulong)dVar6 >> 0x20);
            local_c0[0xd] = (byte)((ulong)dVar6 >> 0x28);
            uStack_b2 = (undefined2)((ulong)dVar6 >> 0x30);
            local_88 = (undefined1)uVar34;
            local_b0 = dVar30;
            local_a8 = bVar9;
            local_a0 = dVar2;
            dStack_98 = local_e8;
            local_90 = dVar32;
            FUN_100040bb4(local_c0,&DAT_100aad008,&DAT_10083cbe8);
            goto LAB_1005b8788;
          }
          FUN_10051fe90(dVar4,dVar6,dVar30,0xff);
          FUN_100008184(dVar14,dVar18);
          FUN_10051fe90(dVar4,dVar6,dVar30,0xff);
          FUN_10051fe90(dVar2,local_e8,dVar32,0xff);
          uVar36 = 0xff;
          bVar29 = 0xff;
        }
        else {
          if (bVar12 && uVar35 == 0xff) {
            uVar34 = 0xff;
            goto LAB_1005b85d0;
          }
          uVar25 = (uint)((ulong)dVar30 >> 0x20);
          uVar19 = uVar25 >> 0x1c & 3 | (bVar9 & 1) << 2;
          uVar36 = (uint)bVar8;
          uVar10 = (uint)((ulong)dVar32 >> 0x20);
          bVar29 = bVar9;
          if (uVar19 < 3) {
            if (uVar19 == 0) {
              if ((uVar10 >> 0x1c & 3) != 0 || (bVar8 & 1) != 0) goto LAB_1005b86c0;
              dVar31 = 0.0;
              if (((ulong)dVar6 & 1) == 0) {
                dVar31 = dVar4;
              }
              if (((ulong)local_e8 & 1) == 0) {
                if (dVar31 == dVar2) goto LAB_1005b7d40;
              }
              else if (dVar31 == 0.0) {
LAB_1005b7d40:
                FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
                FUN_100008184(dVar14,dVar18);
                FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
                FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
                uVar36 = uVar34;
                goto LAB_1005b7f88;
              }
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_100008184(dVar14,dVar18);
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
            }
            else {
              if (uVar19 != 1) {
                if ((uVar10 >> 0x1c & 3 | (uVar36 & 1) << 2) != 2) {
                  FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
                  goto LAB_1005b86c8;
                }
                if (dVar4 == dVar2 && dVar6 == local_e8) {
                  FUN_10051fe90(dVar2,local_e8,dVar30,bVar9);
                  FUN_100008184(dVar14,dVar18);
                  FUN_10051fe90(dVar2,local_e8,dVar30,bVar9);
                  FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
                  FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
                }
                else {
                  dVar31 = dVar4;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (dVar4,dVar6,dVar2,local_e8,0);
                  FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
                  FUN_100008184(dVar14,dVar18);
                  FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
                  FUN_10051fe90(dVar2,local_e8,dVar32,uVar36);
                  FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
                  if (((ulong)dVar31 & 1) == 0) goto LAB_1005b8718;
                }
                goto LAB_1005b7f84;
              }
              if ((uVar10 >> 0x1c & 3 | (uVar35 & 1) << 2) != 1) goto LAB_1005b86c0;
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_100008184(dVar14,dVar18);
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
              if (dVar4 == dVar2) goto LAB_1005b7f84;
            }
LAB_1005b8718:
            FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
            FUN_10051ff3c(dVar2,local_e8,dVar32,bVar8);
            FUN_100006cdc(dVar3,dVar5);
            FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
            FUN_100006cdc(dVar14,dVar18);
            _swift_bridgeObjectRelease(param_2);
            goto LAB_1005b8780;
          }
          if (uVar19 == 3) {
            if ((uVar10 >> 0x1c & 3 | (uVar35 & 1) << 2) == 3) {
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_100008184(dVar14,dVar18);
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
              if (((SUB84(dVar4,0) ^ SUB84(dVar2,0)) & 1) != 0) goto LAB_1005b8718;
              goto LAB_1005b7f84;
            }
LAB_1005b86c0:
            FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
LAB_1005b86c8:
            FUN_100008184(dVar14,dVar18);
            FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
            FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
LAB_1005b8708:
            FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
            goto LAB_1005b8718;
          }
          iVar23 = SUB84(dVar6,0);
          iVar26 = (int)((ulong)dVar6 >> 0x20);
          iVar17 = SUB84(local_e8,0);
          iVar24 = (int)((ulong)local_e8 >> 0x20);
          if (uVar19 != 4) {
            if ((uVar10 >> 0x1c & 3 | (uVar36 & 1) << 2) == 5) {
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_100008184(dVar14,dVar18);
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
              dVar31 = dVar4;
              FUN_10056ba40(dVar4,dVar2);
              if (((ulong)dVar31 & 1) == 0) {
                FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
                FUN_100006cdc(dVar3,dVar5);
                FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
                FUN_100006cdc(dVar14,dVar18);
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
LAB_1005b89f4:
                FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
              }
              else {
                uVar20 = (ulong)dVar32 & 0xcfffffffffffffff;
                if ((ulong)dVar30 >> 0x3e == 3) {
                  dVar31 = 0.0;
                  if ((((dVar6 != 0.0 || ((ulong)dVar30 & 0xcfffffffffffffff) != 0xc000000000000000)
                        || (ulong)dVar32 >> 0x3e < 3) || (local_e8 != 0.0)) ||
                     (dVar15 = dVar31, uVar20 != 0xc000000000000000)) goto LAB_1005b842c;
LAB_1005b84f8:
                  FUN_10051ff3c(dVar2,dVar15,dVar32,uVar34);
                  local_e8 = dVar15;
                  uVar36 = uVar34;
                  goto LAB_1005b7f88;
                }
                if (uVar25 >> 0x1e == 2) {
                  dVar31 = (double)(*(long *)((long)dVar6 + 0x18) - *(long *)((long)dVar6 + 0x10));
                  if (SBORROW8(*(long *)((long)dVar6 + 0x18),*(long *)((long)dVar6 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8abc);
                    (*pcVar11)();
                  }
                }
                else if (uVar25 >> 0x1e == 1) {
                  if (SBORROW4(iVar26,iVar23)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8ac4);
                    (*pcVar11)();
                  }
                  dVar31 = (double)(long)(iVar26 - iVar23);
                }
                else {
                  dVar31 = (double)((ulong)dVar30 >> 0x30 & 0xff);
                }
LAB_1005b842c:
                dVar15 = local_e8;
                if (1 < uVar10 >> 0x1e) {
                  if (uVar10 >> 0x1e == 2) {
                    dVar22 = (double)(*(long *)((long)local_e8 + 0x18) -
                                     *(long *)((long)local_e8 + 0x10));
                    if (SBORROW8(*(long *)((long)local_e8 + 0x18),*(long *)((long)local_e8 + 0x10)))
                    {
                    /* WARNING: Does not return */
                      pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8ab4);
                      (*pcVar11)();
                    }
                    goto LAB_1005b8470;
                  }
                  if (dVar31 == 0.0) goto LAB_1005b84f8;
LAB_1005b8980:
                  FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
                  FUN_100006cdc(dVar3,dVar5);
                  FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
                  FUN_100006cdc(dVar14,dVar18);
                  _swift_bridgeObjectRelease(param_2);
                  _swift_bridgeObjectRelease_n(param_1,2);
                  goto LAB_1005b89f4;
                }
                if (uVar10 >> 0x1e == 0) {
                  dVar22 = (double)((ulong)dVar32 >> 0x30 & 0xff);
                }
                else {
                  if (SBORROW4(iVar24,iVar17)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8ab0);
                    (*pcVar11)();
                  }
                  dVar22 = (double)(long)(iVar24 - iVar17);
                }
LAB_1005b8470:
                if (dVar31 != dVar22) goto LAB_1005b8980;
                if ((long)dVar31 < 1) goto LAB_1005b84f8;
                FUN_100008184(local_e8,uVar20);
                dVar31 = dVar6;
                FUN_100009264(dVar6,(ulong)dVar30 & 0xcfffffffffffffff,local_e8,uVar20);
                FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
                if (((ulong)dVar31 & 1) != 0) goto LAB_1005b7f88;
                FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
                FUN_100006cdc(dVar3,dVar5);
                FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
                FUN_100006cdc(dVar14,dVar18);
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
              }
              FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
            }
            else {
              FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
              FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
              FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
              FUN_100006cdc(dVar3,dVar5);
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease_n(param_1,2);
              FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
              FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
            }
            goto LAB_1005b8788;
          }
          if ((uVar10 >> 0x1c & 3 | (uVar35 & 1) << 2) != 4) goto LAB_1005b86c0;
          FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
          FUN_100008184(dVar14,dVar18);
          FUN_10051fe90(dVar4,dVar6,dVar30,bVar9);
          FUN_10051fe90(dVar2,local_e8,dVar32,uVar34);
          dVar31 = dVar4;
          FUN_1005b776c(dVar4,dVar2);
          if (((ulong)dVar31 & 1) == 0) goto LAB_1005b8708;
          if ((ulong)dVar30 >> 0x3e == 3) {
            if ((dVar6 == 0.0 && dVar30 == -2.0) && 2 < (ulong)dVar32 >> 0x3e) {
              uVar20 = 0;
              if ((local_e8 == 0.0) && (dVar32 == -2.0)) {
                dVar32 = -2.0;
                FUN_10051ff3c(dVar2,0,0xc000000000000000,uVar34);
                local_e8 = 0.0;
                uVar36 = uVar34;
                goto LAB_1005b7f88;
              }
            }
            else {
              uVar20 = 0;
            }
          }
          else if (uVar25 >> 0x1e == 0) {
            uVar20 = (ulong)dVar30 >> 0x30 & 0xff;
          }
          else if (uVar25 >> 0x1e == 1) {
            if (SBORROW4(iVar26,iVar23)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8ab8);
              (*pcVar11)();
            }
            uVar20 = (ulong)(iVar26 - iVar23);
          }
          else {
            uVar20 = *(long *)((long)dVar6 + 0x18) - *(long *)((long)dVar6 + 0x10);
            if (SBORROW8(*(long *)((long)dVar6 + 0x18),*(long *)((long)dVar6 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8ac0);
              (*pcVar11)();
            }
          }
          if (uVar10 >> 0x1e < 2) {
            if (uVar10 >> 0x1e == 0) {
              uVar28 = (ulong)dVar32 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar24,iVar17)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8aac);
                (*pcVar11)();
              }
              uVar28 = (ulong)(iVar24 - iVar17);
            }
LAB_1005b7f10:
            if (uVar20 != uVar28) {
LAB_1005b8968:
              FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
              goto LAB_1005b8718;
            }
            if (0 < (long)uVar20) {
              FUN_100008184(local_e8,dVar32);
              dVar31 = dVar6;
              FUN_100009264(dVar6,dVar30,local_e8,dVar32);
              FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
              if (((ulong)dVar31 & 1) != 0) goto LAB_1005b7f84;
              goto LAB_1005b8718;
            }
          }
          else {
            if (uVar10 >> 0x1e == 2) {
              uVar28 = *(long *)((long)local_e8 + 0x18) - *(long *)((long)local_e8 + 0x10);
              if (SBORROW8(*(long *)((long)local_e8 + 0x18),*(long *)((long)local_e8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8aa8);
                (*pcVar11)();
              }
              goto LAB_1005b7f10;
            }
            if (uVar20 != 0) goto LAB_1005b8968;
          }
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar34);
LAB_1005b7f84:
          uVar36 = (uint)bVar8;
        }
LAB_1005b7f88:
        dVar31 = dVar4;
        FUN_10051ff3c(dVar4,dVar6,dVar30,bVar29);
        uVar34 = (uint)((ulong)dVar18 >> 0x20);
        uVar19 = uVar34 >> 0x1e;
        uVar35 = (uint)((ulong)dVar5 >> 0x20);
        uVar25 = uVar35 >> 0x1e;
        iVar17 = SUB84(dVar14,0);
        lVar13 = lVar33;
        if ((ulong)dVar18 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((dVar14 != 0.0 || dVar18 != -2.0) || (ulong)dVar5 >> 0x3e < 3) || (dVar3 != 0.0)) ||
             (dVar5 != -2.0)) goto joined_r0x0001005b8028;
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
          FUN_100006cdc(0,0xc000000000000000);
          FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
          dVar14 = 0.0;
          dVar18 = -2.0;
LAB_1005b81b8:
          FUN_100006cdc(dVar14,dVar18);
          goto LAB_1005b7818;
        }
        if (uVar34 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar20 = (ulong)dVar18 >> 0x30 & 0xff;
          }
          else {
            iVar26 = (int)((ulong)dVar14 >> 0x20);
            if (SBORROW4(iVar26,iVar17)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8a94);
              (*pcVar11)();
            }
            uVar20 = (ulong)(iVar26 - iVar17);
          }
joined_r0x0001005b8028:
          if (uVar35 >> 0x1e < 2) goto LAB_1005b8064;
LAB_1005b802c:
          if (uVar25 == 2) {
            uVar28 = *(long *)((long)dVar3 + 0x18) - *(long *)((long)dVar3 + 0x10);
            if (SBORROW8(*(long *)((long)dVar3 + 0x18),*(long *)((long)dVar3 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8a88);
              (*pcVar11)();
            }
            goto LAB_1005b8088;
          }
          if (uVar20 == 0) goto LAB_1005b8180;
LAB_1005b8578:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
          FUN_100006cdc(dVar3,dVar5);
          FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
          FUN_100006cdc(dVar14,dVar18);
          goto LAB_1005b8788;
        }
        if (uVar19 == 2) {
          uVar20 = *(long *)((long)dVar14 + 0x18) - *(long *)((long)dVar14 + 0x10);
          if (SBORROW8(*(long *)((long)dVar14 + 0x18),*(long *)((long)dVar14 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8a90);
            (*pcVar11)();
          }
          goto joined_r0x0001005b8028;
        }
        uVar20 = 0;
        if (1 < uVar25) goto LAB_1005b802c;
LAB_1005b8064:
        if (uVar25 == 0) {
          uVar28 = (ulong)dVar5 >> 0x30 & 0xff;
        }
        else {
          iVar26 = (int)((ulong)dVar3 >> 0x20);
          if (SBORROW4(iVar26,SUB84(dVar3,0))) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8a8c);
            (*pcVar11)();
          }
          uVar28 = (ulong)(iVar26 - SUB84(dVar3,0));
        }
LAB_1005b8088:
        if (uVar20 != uVar28) goto LAB_1005b8578;
        if ((long)uVar20 < 1) {
LAB_1005b8180:
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
          FUN_100006cdc(dVar3,dVar5);
          FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
          goto LAB_1005b81b8;
        }
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            local_c0[0] = SUB81(dVar14,0);
            local_c0[1] = (byte)((ulong)dVar14 >> 8);
            local_c0[2] = (byte)((ulong)dVar14 >> 0x10);
            local_c0[3] = (byte)((ulong)dVar14 >> 0x18);
            local_c0[4] = (byte)((ulong)dVar14 >> 0x20);
            local_c0[5] = (byte)((ulong)dVar14 >> 0x28);
            local_c0[6] = (byte)((ulong)dVar14 >> 0x30);
            local_c0[7] = (byte)((ulong)dVar14 >> 0x38);
            local_c0[8] = SUB81(dVar18,0);
            local_c0[9] = (byte)((ulong)dVar18 >> 8);
            local_c0[10] = (byte)((ulong)dVar18 >> 0x10);
            local_c0[0xb] = (byte)((ulong)dVar18 >> 0x18);
            local_c0[0xc] = (byte)((ulong)dVar18 >> 0x20);
            local_c0[0xd] = (byte)((ulong)dVar18 >> 0x28);
            FUN_100009038(local_c9,local_c0,local_c0 + ((ulong)dVar18 >> 0x30 & 0xff),dVar3,dVar5);
            FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
            FUN_100006cdc(dVar14,dVar18);
            FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
            goto LAB_1005b83f8;
          }
          lVar33 = (long)iVar17;
          dVar15 = (double)(((long)dVar14 >> 0x20) - lVar33);
          if ((long)dVar14 >> 0x20 < lVar33) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8a98);
            (*pcVar11)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          dVar22 = dVar31;
          if (dVar31 != 0.0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar33,(long)dVar22)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8aa4);
              (*pcVar11)();
            }
            dVar31 = (double)((lVar33 - (long)dVar22) + (long)dVar31);
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)dVar15 <= (long)dVar22) {
            dVar22 = dVar15;
          }
          lVar33 = 0;
          if (dVar31 != 0.0) {
            lVar33 = (long)dVar22 + (long)dVar31;
          }
          FUN_100009038(local_c0,dVar31,lVar33,dVar3,dVar5);
          FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
          FUN_100006cdc(dVar14,dVar18);
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
          FUN_100006cdc(dVar3,dVar5);
          bVar8 = local_c0[0];
joined_r0x0001005b8390:
          if ((bVar8 & 1) == 0) break;
          goto LAB_1005b7818;
        }
        if (uVar19 != 2) {
          local_c0[8] = 0;
          local_c0[9] = 0;
          local_c0[10] = 0;
          local_c0[0xb] = 0;
          local_c0[0xc] = 0;
          local_c0[0xd] = 0;
          local_c0[0] = 0;
          local_c0[1] = 0;
          local_c0[2] = 0;
          local_c0[3] = 0;
          local_c0[4] = 0;
          local_c0[5] = 0;
          local_c0[6] = 0;
          local_c0[7] = 0;
          FUN_100009038(local_c9,local_c0,local_c0,dVar3,dVar5);
          FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
          FUN_100006cdc(dVar14,dVar18);
          FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
LAB_1005b83f8:
          FUN_100006cdc(dVar3,dVar5);
          bVar8 = local_c9[0];
          goto joined_r0x0001005b8390;
        }
        lVar33 = *(long *)((long)dVar14 + 0x10);
        lVar7 = *(long *)((long)dVar14 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        dVar15 = dVar31;
        if (dVar31 != 0.0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar33,(long)dVar15)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8aa0);
            (*pcVar11)();
          }
          dVar31 = (double)((lVar33 - (long)dVar15) + (long)dVar31);
        }
        dVar22 = (double)(lVar7 - lVar33);
        if (SBORROW8(lVar7,lVar33)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1005b8a9c);
          (*pcVar11)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if ((long)dVar22 <= (long)dVar15) {
          dVar15 = dVar22;
        }
        lVar33 = 0;
        if (dVar31 != 0.0) {
          lVar33 = (long)dVar15 + (long)dVar31;
        }
        FUN_100009038(local_c0,dVar31,lVar33,dVar3,dVar5);
        FUN_10051ff3c(dVar4,dVar6,dVar30,bVar9);
        FUN_100006cdc(dVar14,dVar18);
        FUN_10051ff3c(dVar2,local_e8,dVar32,uVar36);
        FUN_100006cdc(dVar3,dVar5);
      } while ((local_c0[0] & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
LAB_1005b8780:
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_1005b8788:
    uVar16 = 0;
  }
LAB_1005b878c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar16);
}

