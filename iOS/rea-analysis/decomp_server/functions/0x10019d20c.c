// rea decompile_all
// name: FUN_10019d20c
// address: 0x10019d20c
// body: available
// range: 0x10019d20c-0x10019e3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019e3c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10019d20c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  byte ******ppppppbVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  byte ******ppppppbVar18;
  byte *******pppppppbVar19;
  ulong uVar20;
  byte *******pppppppbVar21;
  long lVar22;
  ulong uVar23;
  byte ******ppppppbVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  byte *******pppppppbVar27;
  byte ******ppppppbVar28;
  byte ******ppppppbVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 auStack_280 [16];
  undefined8 local_270;
  long lStack_268;
  byte *******local_260;
  long local_258;
  char *local_250;
  ID local_248;
  long local_240;
  ulong local_238;
  long local_230;
  ulong local_228;
  byte *******local_220;
  byte *******local_218;
  ulong local_210;
  byte ******local_208;
  byte *******local_200;
  byte *local_1f8;
  byte *******local_1f0;
  uint local_1e4;
  byte *******local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  byte local_1c8;
  undefined7 uStack_1c7;
  byte *******pppppppbStack_1c0;
  byte *******local_1b0;
  ulong uStack_1a8;
  byte *******local_190;
  byte ******ppppppbStack_188;
  byte ******local_180;
  byte ******ppppppbStack_178;
  byte ******local_170;
  byte ******ppppppbStack_168;
  byte *******local_130;
  byte ******ppppppbStack_128;
  byte ******ppppppbStack_120;
  byte ******ppppppbStack_118;
  byte ******local_110;
  byte ******ppppppbStack_108;
  byte ******local_100;
  byte ******ppppppbStack_f8;
  byte ******local_f0;
  byte ******ppppppbStack_e8;
  byte local_e0;
  byte *******local_d0;
  byte ******ppppppbStack_c8;
  byte *******local_c0;
  byte ******local_b8;
  byte ******local_b0;
  byte ******ppppppbStack_a8;
  byte *******local_a0;
  byte ******ppppppbStack_98;
  byte ******local_90;
  byte *******pppppppbStack_88;
  byte local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_10019c964();
  if (param_2 == 0) {
    FUN_100401b14(0);
    pcVar1 = thunk_FUN_10019bc80;
    uVar13 = 0xf8;
  }
  else {
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar13 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    IVar3 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",uVar13);
    if ((int)IVar3 == 0) {
      uVar13 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar13);
      local_270 = param_1;
      lStack_268 = param_2;
      FUN_1003fb4ec(FUN_10019e4f8,auStack_280,0xd000000000000091,0x8000000100899df0,
                    0xd000000000000015,0x8000000100899f00,0xfc,0);
      _swift_bridgeObjectRelease(param_2);
      pppppppbVar21 = (byte *******)PTR___swiftEmptyArrayStorage_100995ea0;
      goto LAB_10019d5c8;
    }
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    pcVar11 = "contentsAtPath:";
    IVar3 = NSFileManager::contentsAtPath_(IVar3,"contentsAtPath:",param_1);
    if (IVar3 != 0) {
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      IVar4 = IVar3;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar3,pcVar11);
      local_d0 = (byte *******)0x0;
      IVar4 = NSPropertyListSerialization::propertyListWithData_options_format_error_
                        ((ID)&_OBJC_CLASS___NSPropertyListSerialization,
                         "propertyListWithData:options:format:error:",IVar4,0,0,&local_d0);
      if (IVar4 == 0) {
        pppppppbVar21 = local_d0;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_d0);
        _swift_willThrow(0);
        FUN_100006cdc(IVar3,pcVar11);
        _swift_errorRelease(pppppppbVar21);
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_d0,IVar4);
        _swift_unknownObjectRelease(IVar4);
        puVar10 = &DAT_100a759d8;
        FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
        puVar8 = PTR___sypN_100995e88;
        pppppppbVar21 = (byte *******)&local_130;
        local_1d8 = puVar10;
        _swift_dynamicCast(pppppppbVar21,&local_d0,PTR___sypN_100995e88 + 8,puVar10,6);
        pppppppbVar27 = local_130;
        if (((ulong)pppppppbVar21 & 1) != 0) {
          if (local_130[2] == (byte ******)0x0) {
LAB_10019d608:
            ppppppbStack_c8 = (byte ******)0x0;
            local_d0 = (byte *******)0x0;
            local_b8 = (byte ******)0x0;
            local_c0 = (byte *******)0x0;
          }
          else {
            _swift_bridgeObjectRetain(local_130);
            lVar5 = -0x2fffffffffffffec;
            uVar31 = 0;
            FUN_1001a2c70(0xd000000000000014);
            if ((uVar31 & 1) == 0) {
              _swift_bridgeObjectRelease(pppppppbVar27);
              goto LAB_10019d608;
            }
            FUN_10003e8bc(pppppppbVar27[7] + lVar5 * 4,&local_d0);
            _swift_bridgeObjectRelease(pppppppbVar27);
          }
          _swift_bridgeObjectRelease(pppppppbVar27);
          if (local_b8 == (byte ******)0x0) {
            FUN_1000c776c(&local_d0);
          }
          else {
            pppppppbVar21 = (byte *******)&local_130;
            _swift_dynamicCast(pppppppbVar21,&local_d0,puVar8 + 8,local_1d8,6);
            pppppppbVar27 = local_130;
            if (((ulong)pppppppbVar21 & 1) != 0) {
              local_250 = pcVar11;
              local_248 = IVar3;
              FUN_10019cd50();
              local_258 = 0;
              local_1e0 = pppppppbVar27;
              uVar17 = 1L << ((ulong)*(byte *)(pppppppbVar27 + 4) & 0x3f);
              uVar31 = 0xffffffffffffffff;
              if ((long)uVar17 < 0x40) {
                uVar31 = ~(-1L << (uVar17 & 0x3f));
              }
              ppppppbVar29 = (byte ******)(uVar31 & (ulong)pppppppbVar27[8]);
              uVar31 = uVar17 + 0x3f >> 6;
              local_1f8 = (byte *)((ulong)&local_1b0 | 1);
              local_1f0 = (byte *******)PTR___swiftEmptyArrayStorage_100995ea0;
              lVar5 = 0;
              local_218 = pppppppbVar21;
LAB_10019d740:
              if (ppppppbVar29 == (byte ******)0x0) {
                uVar17 = uVar31;
                if ((long)uVar31 <= lVar5 + 1) {
                  uVar17 = lVar5 + 1;
                }
                lVar22 = uVar17 - 1;
                lVar7 = lVar5;
                do {
                  lVar5 = lVar7 + 1;
                  if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3a8);
                    (*pcVar1)();
                  }
                  if ((long)uVar31 <= lVar5) {
                    ppppppbVar29 = (byte ******)0x0;
                    ppppppbStack_178 = (byte ******)0x0;
                    local_180 = (byte ******)0x0;
                    ppppppbStack_168 = (byte ******)0x0;
                    local_170 = (byte ******)0x0;
                    ppppppbStack_188 = (byte ******)0x0;
                    local_190 = (byte *******)0x0;
                    goto LAB_10019d7bc;
                  }
                  ppppppbVar29 = (pppppppbVar27 + 8)[lVar5];
                  lVar7 = lVar7 + 1;
                } while (ppppppbVar29 == (byte ******)0x0);
              }
              uVar17 = ((ulong)ppppppbVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       ((ulong)ppppppbVar29 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              ppppppbVar29 = (byte ******)((long)ppppppbVar29 - 1U & (ulong)ppppppbVar29);
              uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar5 << 6;
              local_190 = (byte *******)local_1e0[6][uVar17 * 2];
              ppppppbVar24 = (byte ******)(local_1e0[6] + uVar17 * 2)[1];
              ppppppbStack_188 = ppppppbVar24;
              FUN_10003e8bc(local_1e0[7] + uVar17 * 4,&local_180);
              _swift_bridgeObjectRetain(ppppppbVar24);
              lVar22 = lVar5;
LAB_10019d7bc:
              ppppppbVar24 = ppppppbStack_188;
              pppppppbVar21 = local_190;
              ppppppbStack_128 = ppppppbStack_188;
              local_130 = local_190;
              ppppppbStack_118 = ppppppbStack_178;
              ppppppbStack_120 = local_180;
              ppppppbStack_108 = ppppppbStack_168;
              local_110 = local_170;
              if (ppppppbStack_188 != (byte ******)0x0) {
                FUN_10007f3d4(&ppppppbStack_120,&local_190);
                ppppppbVar18 = (byte ******)((ulong)ppppppbVar24 >> 0x38 & 0xf);
                ppppppbVar12 = (byte ******)((ulong)pppppppbVar21 & 0xffffffffffff);
                ppppppbVar28 = ppppppbVar12;
                if (((ulong)ppppppbVar24 & 0x2000000000000000) != 0) {
                  ppppppbVar28 = ppppppbVar18;
                }
                lVar5 = lVar22;
                if (ppppppbVar28 == (byte ******)0x0) {
                  FUN_10003f094(&local_190);
                  _swift_bridgeObjectRelease(ppppppbVar24);
                }
                else {
                  if (((ulong)ppppppbVar24 >> 0x3c & 1) == 0) {
                    if (((ulong)ppppppbVar24 >> 0x3d & 1) == 0) {
                      if (((ulong)pppppppbVar21 >> 0x3c & 1) == 0) {
                        ppppppbVar12 = ppppppbVar24;
                        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                      }
                      else {
                        pppppppbVar21 =
                             (byte *******)(((ulong)ppppppbVar24 & 0xfffffffffffffff) + 0x20);
                      }
                      if (*(byte *)pppppppbVar21 == 0x2b) {
                        if ((long)ppppppbVar12 < 1) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3b0);
                          (*pcVar1)();
                        }
                        lVar7 = (long)ppppppbVar12 + -1;
                        if (lVar7 == 0) goto LAB_10019da74;
                        if (pppppppbVar21 == (byte *******)0x0) goto LAB_10019da18;
                        pppppppbVar26 = (byte *******)0x0;
                        do {
                          pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
                          if (((9 < *(byte *)pppppppbVar21 - 0x30) ||
                              (lVar22 = (long)pppppppbVar26 * 10,
                              SUB168(SEXT816((long)pppppppbVar26) * SEXT816(10),8) != lVar22 >> 0x3f
                              )) || (uVar17 = (ulong)(byte)(*(byte *)pppppppbVar21 - 0x30),
                                    pppppppbVar26 = (byte *******)(lVar22 + uVar17),
                                    SCARRY8(lVar22,uVar17))) goto LAB_10019da74;
                          uVar14 = 0;
                          lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                      }
                      else if (*(byte *)pppppppbVar21 == 0x2d) {
                        if ((long)ppppppbVar12 < 1) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3b4);
                          (*pcVar1)();
                        }
                        lVar7 = (long)ppppppbVar12 + -1;
                        if (lVar7 == 0) {
LAB_10019da74:
                          pppppppbVar26 = (byte *******)0x0;
                          uVar14 = 1;
                        }
                        else if (pppppppbVar21 == (byte *******)0x0) {
LAB_10019da18:
                          pppppppbVar26 = (byte *******)0x0;
                          uVar14 = 0;
                        }
                        else {
                          pppppppbVar26 = (byte *******)0x0;
                          do {
                            pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
                            if (((9 < *(byte *)pppppppbVar21 - 0x30) ||
                                (lVar22 = (long)pppppppbVar26 * 10,
                                SUB168(SEXT816((long)pppppppbVar26) * SEXT816(10),8) !=
                                lVar22 >> 0x3f)) ||
                               (uVar17 = (ulong)(byte)(*(byte *)pppppppbVar21 - 0x30),
                               pppppppbVar26 = (byte *******)(lVar22 - uVar17),
                               SBORROW8(lVar22,uVar17))) goto LAB_10019da74;
                            uVar14 = 0;
                            lVar7 = lVar7 + -1;
                          } while (lVar7 != 0);
                        }
                      }
                      else {
                        if (ppppppbVar12 == (byte ******)0x0) goto LAB_10019da74;
                        if (pppppppbVar21 == (byte *******)0x0) goto LAB_10019da18;
                        pppppppbVar26 = (byte *******)0x0;
                        do {
                          if (((9 < *(byte *)pppppppbVar21 - 0x30) ||
                              (lVar7 = (long)pppppppbVar26 * 10,
                              SUB168(SEXT816((long)pppppppbVar26) * SEXT816(10),8) != lVar7 >> 0x3f)
                              ) || (uVar17 = (ulong)(byte)(*(byte *)pppppppbVar21 - 0x30),
                                   pppppppbVar26 = (byte *******)(lVar7 + uVar17),
                                   SCARRY8(lVar7,uVar17))) goto LAB_10019da74;
                          uVar14 = 0;
                          pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
                          ppppppbVar12 = (byte ******)((long)ppppppbVar12 + -1);
                        } while (ppppppbVar12 != (byte ******)0x0);
                      }
                    }
                    else {
                      local_1b0 = pppppppbVar21;
                      uStack_1a8 = (ulong)ppppppbVar24 & 0xffffffffffffff;
                      uVar14 = (uint)pppppppbVar21 & 0xff;
                      if (uVar14 == 0x2b) {
                        if (ppppppbVar18 == (byte ******)0x0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3bc);
                          (*pcVar1)();
                        }
                        lVar7 = (long)ppppppbVar18 + -1;
                        if (lVar7 == 0) goto LAB_10019da74;
                        pppppppbVar26 = (byte *******)0x0;
                        pbVar6 = local_1f8;
                        do {
                          if (((9 < *pbVar6 - 0x30) ||
                              (lVar22 = (long)pppppppbVar26 * 10,
                              SUB168(SEXT816((long)pppppppbVar26) * SEXT816(10),8) != lVar22 >> 0x3f
                              )) || (uVar17 = (ulong)(byte)(*pbVar6 - 0x30),
                                    pppppppbVar26 = (byte *******)(lVar22 + uVar17),
                                    SCARRY8(lVar22,uVar17))) goto LAB_10019da74;
                          uVar14 = 0;
                          pbVar6 = pbVar6 + 1;
                          lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                      }
                      else if (uVar14 == 0x2d) {
                        if (ppppppbVar18 == (byte ******)0x0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3b8);
                          (*pcVar1)();
                        }
                        lVar7 = (long)ppppppbVar18 + -1;
                        if (lVar7 == 0) goto LAB_10019da74;
                        pppppppbVar26 = (byte *******)0x0;
                        pbVar6 = local_1f8;
                        do {
                          if (((9 < *pbVar6 - 0x30) ||
                              (lVar22 = (long)pppppppbVar26 * 10,
                              SUB168(SEXT816((long)pppppppbVar26) * SEXT816(10),8) != lVar22 >> 0x3f
                              )) || (uVar17 = (ulong)(byte)(*pbVar6 - 0x30),
                                    pppppppbVar26 = (byte *******)(lVar22 - uVar17),
                                    SBORROW8(lVar22,uVar17))) goto LAB_10019da74;
                          uVar14 = 0;
                          pbVar6 = pbVar6 + 1;
                          lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                      }
                      else {
                        if (ppppppbVar18 == (byte ******)0x0) goto LAB_10019da74;
                        pppppppbVar26 = (byte *******)0x0;
                        pppppppbVar21 = (byte *******)&local_1b0;
                        do {
                          if (((9 < *(byte *)pppppppbVar21 - 0x30) ||
                              (lVar7 = (long)pppppppbVar26 * 10,
                              SUB168(SEXT816((long)pppppppbVar26) * SEXT816(10),8) != lVar7 >> 0x3f)
                              ) || (uVar17 = (ulong)(byte)(*(byte *)pppppppbVar21 - 0x30),
                                   pppppppbVar26 = (byte *******)(lVar7 + uVar17),
                                   SCARRY8(lVar7,uVar17))) goto LAB_10019da74;
                          uVar14 = 0;
                          pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
                          ppppppbVar18 = (byte ******)((long)ppppppbVar18 + -1);
                        } while (ppppppbVar18 != (byte ******)0x0);
                      }
                    }
                    local_1c8 = (byte)uVar14;
                    ppppppbVar28 = (byte ******)(ulong)uVar14;
                    pppppppbVar21 = pppppppbVar26;
                  }
                  else {
                    ppppppbVar28 = ppppppbVar24;
                    FUN_10000c2c8(pppppppbVar21,ppppppbVar24,10);
                  }
                  _swift_bridgeObjectRelease(ppppppbVar24);
                  if (((ulong)ppppppbVar28 & 1) == 0) {
                    FUN_10003e8bc(&local_190,&local_1b0);
                    pbVar6 = &local_1c8;
                    _swift_dynamicCast(pbVar6,&local_1b0,puVar8 + 8,local_1d8,6);
                    if ((int)pbVar6 == 0) {
                      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
                      FUN_1000cc648();
                      if (*(long *)(puVar10 + 0x10) != 0) goto LAB_10019dae0;
LAB_10019db4c:
                      local_1e4 = 0;
                    }
                    else {
                      puVar10 = (undefined *)CONCAT71(uStack_1c7,local_1c8);
                      if (*(long *)(puVar10 + 0x10) == 0) goto LAB_10019db4c;
LAB_10019dae0:
                      _swift_bridgeObjectRetain(puVar10);
                      lVar7 = 0x64656c62616e65;
                      uVar17 = 0;
                      FUN_1001a2c70(0x64656c62616e65);
                      if ((uVar17 & 1) == 0) {
                        _swift_bridgeObjectRelease(puVar10);
                        goto LAB_10019db4c;
                      }
                      FUN_10003e8bc(*(long *)(puVar10 + 0x38) + lVar7 * 0x20,&local_1b0);
                      _swift_bridgeObjectRelease(puVar10);
                      pbVar6 = &local_1c8;
                      _swift_dynamicCast(pbVar6,&local_1b0,puVar8 + 8,PTR___sSbN_1009958c8,6);
                      if (((ulong)pbVar6 & 1) == 0) goto LAB_10019db4c;
                      local_1e4 = (uint)local_1c8;
                    }
                    if (*(long *)(puVar10 + 0x10) == 0) {
LAB_10019dc14:
                      _swift_bridgeObjectRelease(puVar10);
LAB_10019dc1c:
                      ppppppbVar24 = (byte ******)0x0;
                      pppppppbVar25 = (byte *******)0xe000000000000000;
LAB_10019dc28:
                      ppppppbVar28 = (byte ******)0x0;
                      local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
                      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10019dc34:
                      ppppppbVar12 = ppppppbVar24;
                      pppppppbVar26 = pppppppbVar25;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (ppppppbVar24,pppppppbVar25,0x647261646e617473,0xe800000000000000,0)
                      ;
                      if (((ulong)ppppppbVar12 & 1) != 0) goto LAB_10019dfc8;
                      FUN_10003f094(&local_190);
                      _swift_bridgeObjectRelease(puVar10);
                      _swift_bridgeObjectRelease(local_1d0);
                      _swift_bridgeObjectRelease(pppppppbVar25);
                      puVar8 = PTR___sypN_100995e88;
                    }
                    else {
                      lVar7 = 0x65756c6176;
                      uVar17 = 0;
                      FUN_1001a2c70(0x65756c6176);
                      if ((uVar17 & 1) == 0) goto LAB_10019dc14;
                      FUN_10003e8bc(*(long *)(puVar10 + 0x38) + lVar7 * 0x20,&local_1b0);
                      _swift_bridgeObjectRelease(puVar10);
                      pbVar6 = &local_1c8;
                      pppppppbVar26 = (byte *******)&local_1b0;
                      _swift_dynamicCast(pbVar6,pppppppbVar26,puVar8 + 8,local_1d8,6);
                      if (((ulong)pbVar6 & 1) == 0) goto LAB_10019dc1c;
                      lVar7 = CONCAT71(uStack_1c7,local_1c8);
                      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_10019dc94:
                        local_208 = (byte ******)0x0;
                        local_200 = (byte *******)0xe000000000000000;
                      }
                      else {
                        _swift_bridgeObjectRetain(lVar7);
                        lVar22 = 0x65707974;
                        pppppppbVar26 = (byte *******)0xe400000000000000;
                        FUN_1001a2c70(0x65707974);
                        if (((ulong)pppppppbVar26 & 1) == 0) {
                          _swift_bridgeObjectRelease(lVar7);
                          goto LAB_10019dc94;
                        }
                        FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar22 * 0x20,&local_1b0);
                        _swift_bridgeObjectRelease(lVar7);
                        pbVar6 = &local_1c8;
                        pppppppbVar26 = (byte *******)&local_1b0;
                        _swift_dynamicCast(pbVar6,pppppppbVar26,puVar8 + 8,PTR___sSSN_1009957f8,6);
                        if (((ulong)pbVar6 & 1) == 0) goto LAB_10019dc94;
                        local_208 = (byte ******)CONCAT71(uStack_1c7,local_1c8);
                        local_200 = pppppppbStack_1c0;
                      }
                      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_10019dd40:
                        _swift_bridgeObjectRelease(lVar7);
                        pppppppbVar25 = local_200;
                        puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
                        if (local_208 == (byte ******)0x647261646e617473) {
                          ppppppbVar28 = (byte ******)0x0;
                          if (local_200 == (byte *******)0xe800000000000000) {
                            local_208 = (byte ******)0x647261646e617473;
                            pppppppbVar25 = (byte *******)0xe800000000000000;
                            local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
                            ppppppbVar24 = local_208;
                            goto LAB_10019dfc8;
                          }
                          ppppppbVar24 = (byte ******)0x647261646e617473;
                          goto LAB_10019dc28;
                        }
                        ppppppbVar28 = (byte ******)0x0;
                        local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
                        ppppppbVar24 = local_208;
                        goto LAB_10019dc34;
                      }
                      lVar22 = 0x6574656d61726170;
                      pppppppbVar26 = (byte *******)0xea00000000007372;
                      FUN_1001a2c70(0x6574656d61726170);
                      if (((ulong)pppppppbVar26 & 1) == 0) goto LAB_10019dd40;
                      FUN_10003e8bc(*(long *)(lVar7 + 0x38) + lVar22 * 0x20,&local_1b0);
                      _swift_bridgeObjectRelease(lVar7);
                      puVar10 = &DAT_100a7c740;
                      FUN_100004bb4(&DAT_100a7c740,&DAT_1008105b8);
                      pbVar6 = &local_1c8;
                      pppppppbVar26 = (byte *******)&local_1b0;
                      _swift_dynamicCast(pbVar6,pppppppbVar26,puVar8 + 8,puVar10,6);
                      if (((ulong)pbVar6 & 1) == 0) {
LAB_10019e118:
                        ppppppbVar28 = (byte ******)0x0;
                        local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
                        puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
                      }
                      else {
                        lVar7 = CONCAT71(uStack_1c7,local_1c8);
                        uVar17 = *(ulong *)(lVar7 + 0x10);
                        if (uVar17 == 0) {
                          _swift_bridgeObjectRelease();
                          goto LAB_10019e118;
                        }
                        ppppppbVar28 = (byte ******)0x0;
                        uVar23 = 0;
                        local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
                        lVar22 = lVar7 + uVar17 * 8;
                        puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
                        local_240 = lVar22;
                        local_238 = uVar17;
                        local_230 = lVar7;
                        do {
                          uVar30 = *(ulong *)(lVar7 + uVar23 * 8 + 0x20);
                          uVar15 = uVar30 & 0x20000 | (ulong)ppppppbVar28;
                          uVar14 = (uint)((ulong)ppppppbVar28 >> 0x12) & 1;
                          if ((uVar30 & 0x40000) == 0) {
                            uVar14 = 1;
                          }
                          if (uVar14 == 0) {
                            uVar15 = uVar15 | 0x40000;
                          }
                          uVar20 = uVar15 | uVar30 & 0x80000;
                          uVar14 = (uint)(uVar15 >> 0x14) & 1;
                          if ((uVar30 & 0x100000) == 0) {
                            uVar14 = 1;
                          }
                          if (uVar14 == 0) {
                            uVar20 = uVar20 | 0x100000;
                          }
                          if (uVar30 < 0xffff) {
                            if (*(ulong *)(lVar7 + 0x10) < uVar17) {
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3c0);
                              (*pcVar1)();
                            }
                            if (uVar30 != *(ulong *)(lVar22 + 0x18)) {
                              puVar8 = puVar10;
                              _swift_isUniquelyReferenced_nonNull_native();
                              puVar9 = puVar10;
                              local_210 = uVar20;
                              if (((ulong)puVar8 & 1) == 0) {
                                pppppppbVar26 = (byte *******)(*(long *)(puVar10 + 0x10) + 1);
                                puVar9 = (undefined *)0x0;
                                FUN_100034a14(0,pppppppbVar26,1,puVar10);
                              }
                              uVar17 = *(ulong *)(puVar9 + 0x10);
                              pppppppbVar25 = (byte *******)(uVar17 + 1);
                              puVar10 = puVar9;
                              if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar17) {
                                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                                local_220 = pppppppbVar25;
                                FUN_100034a14(puVar10,pppppppbVar25,1,puVar9);
                                pppppppbVar26 = pppppppbVar25;
                                pppppppbVar25 = local_220;
                              }
                              *(byte ********)(puVar10 + 0x10) = pppppppbVar25;
                              *(ulong *)(puVar10 + uVar17 * 8 + 0x20) = uVar30;
                              uVar17 = uVar30;
                              FUN_10019cb78();
                              if (pppppppbVar26 == (byte *******)0x0) {
                                puVar8 = local_1d0;
                                _swift_isUniquelyReferenced_nonNull_native();
                                if (((ulong)puVar8 & 1) == 0) {
                                  pppppppbVar26 = (byte *******)(*(long *)(local_1d0 + 0x10) + 1);
                                  puVar8 = (undefined *)0x0;
                                  FUN_100033898(0,pppppppbVar26,1);
                                  local_1d0 = puVar8;
                                }
                                uVar17 = *(ulong *)(local_1d0 + 0x10);
                                pppppppbVar25 = (byte *******)(uVar17 + 1);
                                if (*(ulong *)(local_1d0 + 0x18) >> 1 <= uVar17) {
                                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(local_1d0 + 0x18));
                                  local_260 = pppppppbVar25;
                                  FUN_100033898(puVar8,pppppppbVar25,1,local_1d0);
                                  pppppppbVar26 = pppppppbVar25;
                                  pppppppbVar25 = local_260;
                                  local_1d0 = puVar8;
                                }
                                pppppppbVar19 = (byte *******)0xe600000000000000;
                                uVar15 = 0x776f6e6b6e75;
                              }
                              else {
                                puVar8 = local_1d0;
                                local_228 = uVar17;
                                local_220 = pppppppbVar26;
                                _swift_isUniquelyReferenced_nonNull_native();
                                if (((ulong)puVar8 & 1) == 0) {
                                  pppppppbVar26 = (byte *******)(*(long *)(local_1d0 + 0x10) + 1);
                                  puVar8 = (undefined *)0x0;
                                  FUN_100033898(0,pppppppbVar26,1);
                                  local_1d0 = puVar8;
                                }
                                uVar17 = *(ulong *)(local_1d0 + 0x10);
                                pppppppbVar25 = (byte *******)(uVar17 + 1);
                                pppppppbVar19 = local_220;
                                uVar15 = local_228;
                                if (*(ulong *)(local_1d0 + 0x18) >> 1 <= uVar17) {
                                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(local_1d0 + 0x18));
                                  local_260 = pppppppbVar25;
                                  FUN_100033898(puVar8,pppppppbVar25,1,local_1d0);
                                  pppppppbVar26 = pppppppbVar25;
                                  pppppppbVar19 = local_220;
                                  uVar15 = local_228;
                                  pppppppbVar25 = local_260;
                                  local_1d0 = puVar8;
                                }
                              }
                              *(byte ********)(local_1d0 + 0x10) = pppppppbVar25;
                              *(ulong *)(local_1d0 + uVar17 * 0x10 + 0x20) = uVar15;
                              *(byte ********)(local_1d0 + uVar17 * 0x10 + 0x28) = pppppppbVar19;
                              lVar7 = local_230;
                              uVar17 = local_238;
                              lVar22 = local_240;
                              uVar20 = local_210;
                            }
                          }
                          uVar23 = uVar23 + 1;
                          ppppppbVar28 = (byte ******)(uVar20 | uVar30 & 0x800000);
                        } while (uVar17 != uVar23);
                        _swift_bridgeObjectRelease();
                      }
                      pppppppbVar25 = local_200;
                      ppppppbVar24 = local_208;
                      if (local_208 != (byte ******)0x647261646e617473) goto LAB_10019dc34;
                      if (local_200 != (byte *******)0xe800000000000000) {
                        ppppppbVar24 = (byte ******)0x647261646e617473;
                        goto LAB_10019dc34;
                      }
                      local_208 = (byte ******)0x647261646e617473;
                      pppppppbVar25 = (byte *******)0xe800000000000000;
                      ppppppbVar24 = local_208;
LAB_10019dfc8:
                      local_208 = ppppppbVar24;
                      pppppppbVar19 = pppppppbVar21;
                      FUN_10019d04c();
                      uVar14 = 0;
                      if (((uint)pppppppbVar19 & 0xff) != 0x31) {
                        uVar14 = (uint)pppppppbVar19;
                      }
                      local_210 = CONCAT44(local_210._4_4_,uVar14);
                      if (*(long *)(puVar10 + 0x10) == 0) {
                        local_220 = (byte *******)0xffffffffffffffff;
                      }
                      else {
                        local_220 = *(byte ********)(puVar10 + *(long *)(puVar10 + 0x10) * 8 + 0x18)
                        ;
                      }
                      plVar16 = (long *)(local_1d0 + 0x10);
                      local_200 = pppppppbVar25;
                      if (*plVar16 == 0) {
                        ppppppbVar24 = (byte ******)0x0;
                        ppppppbVar12 = (byte ******)0xe000000000000000;
                      }
                      else {
                        ppppppbVar24 = (byte ******)plVar16[*plVar16 * 2];
                        ppppppbVar12 = (byte ******)(plVar16 + *plVar16 * 2)[1];
                        _swift_bridgeObjectRetain(ppppppbVar12);
                      }
                      _swift_bridgeObjectRelease(puVar10);
                      _swift_bridgeObjectRelease(local_1d0);
                      ppppppbVar18 = ppppppbVar28;
                      FUN_1003e6894();
                      pppppppbVar25 = local_218;
                      ppppppbStack_c8 = (byte ******)CONCAT71(ppppppbStack_c8._1_7_,(char)local_1e4)
                      ;
                      local_c0 = local_220;
                      ppppppbStack_a8 = local_208;
                      local_a0 = local_200;
                      uVar17 = local_210 & 0xffffffff;
                      local_80 = (byte)local_210;
                      local_d0 = pppppppbVar21;
                      local_b8 = ppppppbVar24;
                      local_b0 = ppppppbVar12;
                      ppppppbStack_98 = ppppppbVar28;
                      local_90 = ppppppbVar18;
                      pppppppbStack_88 = pppppppbVar26;
                      if ((local_218[2] == (byte ******)0x0) ||
                         (FUN_1001a2f1c(uVar17), ((ulong)pppppppbVar26 & 1) == 0)) {
                        pppppppbVar21 = local_1f0;
                        _swift_isUniquelyReferenced_nonNull_native();
                        puVar8 = PTR___sypN_100995e88;
                        if (((ulong)pppppppbVar21 & 1) == 0) {
                          pppppppbVar21 = (byte *******)0x0;
                          FUN_100035134(0,(long)local_1f0[2] + 1,1);
                          local_1f0 = pppppppbVar21;
                        }
                        ppppppbVar24 = local_1f0[2];
                        pppppppbVar21 = local_1f0;
                        if ((byte ******)((ulong)local_1f0[3] >> 1) <= ppppppbVar24) {
                          pppppppbVar21 = (byte *******)(ulong)((byte ******)0x1 < local_1f0[3]);
                          FUN_100035134(pppppppbVar21,(byte ******)((long)ppppppbVar24 + 1U),1);
                        }
                        pppppppbVar21[2] = (byte ******)((long)ppppppbVar24 + 1U);
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 5] = ppppppbStack_c8;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 4] = (byte ******)local_d0;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 7] = local_b8;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 6] = (byte ******)local_c0;
                        *(byte *)(pppppppbVar21 + (long)ppppppbVar24 * 0xb + 0xe) = local_80;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 0xb] = ppppppbStack_98;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 10] = (byte ******)local_a0;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 0xd] =
                             (byte ******)pppppppbStack_88;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 0xc] = local_90;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 9] = ppppppbStack_a8;
                        pppppppbVar21[(long)ppppppbVar24 * 0xb + 8] = local_b0;
                        local_1f0 = pppppppbVar21;
                        goto LAB_10019d738;
                      }
                      pppppppbVar21 = pppppppbVar25;
                      _swift_isUniquelyReferenced_nonNull_native(pppppppbVar25);
                      local_1b0 = pppppppbVar25;
                      FUN_1000615dc(&local_d0,uVar17,pppppppbVar21);
                      FUN_10003f094(&local_190);
                      local_218 = local_1b0;
                      puVar8 = PTR___sypN_100995e88;
                    }
                  }
                  else {
LAB_10019d738:
                    FUN_10003f094(&local_190);
                  }
                }
                goto LAB_10019d740;
              }
              _swift_release(local_1e0);
              pppppppbVar21 = local_218;
              pppppppbVar27 = local_218 + 8;
              uVar17 = 1L << ((ulong)*(byte *)(local_218 + 4) & 0x3f);
              uVar31 = 0xffffffffffffffff;
              if ((long)uVar17 < 0x40) {
                uVar31 = ~(-1L << (uVar17 & 0x3f));
              }
              ppppppbVar29 = (byte ******)(uVar31 & (ulong)*pppppppbVar27);
              _swift_bridgeObjectRetain(local_218);
              IVar3 = local_248;
              lVar5 = 0;
              while( true ) {
                for (; ppppppbVar29 != (byte ******)0x0;
                    ppppppbVar29 = (byte ******)((long)ppppppbVar29 - 1U & (ulong)ppppppbVar29)) {
                  uVar31 = ((ulong)ppppppbVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                           ((ulong)ppppppbVar29 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  ppppppbVar24 = pppppppbVar21[7] +
                                 (LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) | lVar5 << 6) * 0xb;
                  ppppppbStack_128 = (byte ******)ppppppbVar24[1];
                  local_130 = (byte *******)*ppppppbVar24;
                  ppppppbStack_118 = (byte ******)ppppppbVar24[3];
                  ppppppbStack_120 = (byte ******)ppppppbVar24[2];
                  ppppppbStack_f8 = (byte ******)ppppppbVar24[7];
                  local_100 = (byte ******)ppppppbVar24[6];
                  ppppppbStack_e8 = (byte ******)ppppppbVar24[9];
                  local_f0 = (byte ******)ppppppbVar24[8];
                  local_e0 = *(byte *)(ppppppbVar24 + 10);
                  ppppppbStack_108 = (byte ******)ppppppbVar24[5];
                  local_110 = (byte ******)ppppppbVar24[4];
                  FUN_100082c4c(&local_130,&local_190);
                  pppppppbVar26 = local_1f0;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)pppppppbVar26 & 1) == 0) {
                    pppppppbVar26 = (byte *******)0x0;
                    FUN_100035134(0,(long)local_1f0[2] + 1,1);
                    local_1f0 = pppppppbVar26;
                  }
                  ppppppbVar24 = local_1f0[2];
                  pppppppbVar26 = local_1f0;
                  if ((byte ******)((ulong)local_1f0[3] >> 1) <= ppppppbVar24) {
                    pppppppbVar26 = (byte *******)(ulong)((byte ******)0x1 < local_1f0[3]);
                    FUN_100035134(pppppppbVar26,(byte ******)((long)ppppppbVar24 + 1U),1);
                  }
                  pppppppbVar26[2] = (byte ******)((long)ppppppbVar24 + 1U);
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 5] = ppppppbStack_128;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 4] = (byte ******)local_130;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 7] = ppppppbStack_118;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 6] = ppppppbStack_120;
                  *(byte *)(pppppppbVar26 + (long)ppppppbVar24 * 0xb + 0xe) = local_e0;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 0xb] = ppppppbStack_f8;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 10] = local_100;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 0xd] = ppppppbStack_e8;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 0xc] = local_f0;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 9] = ppppppbStack_108;
                  pppppppbVar26[(long)ppppppbVar24 * 0xb + 8] = local_110;
                  local_1f0 = pppppppbVar26;
                }
                bVar2 = SCARRY8(lVar5,1);
                lVar5 = lVar5 + 1;
                if (bVar2) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3ac);
                  (*pcVar1)();
                }
                if ((long)(uVar17 + 0x3f >> 6) <= lVar5) break;
                ppppppbVar29 = pppppppbVar27[lVar5];
              }
              _swift_release(pppppppbVar21);
              pppppppbVar27 = local_1f0;
              local_130 = local_1f0;
              _swift_bridgeObjectRetain(local_1f0);
              lVar5 = local_258;
              FUN_10019b474(&local_130);
              if (lVar5 != 0) {
                _swift_errorRelease(lVar5);
                _swift_release(local_130);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e3d8);
                (*pcVar1)();
              }
              FUN_100006cdc(IVar3,local_250);
              _swift_bridgeObjectRelease(pppppppbVar21);
              _swift_bridgeObjectRelease(pppppppbVar27);
              pppppppbVar21 = local_130;
              goto LAB_10019d5c8;
            }
          }
          FUN_100401b14(0);
          FUN_1003fb4ec(FUN_10019c010,0,0xd000000000000091,0x8000000100899df0,0xd000000000000015,
                        0x8000000100899f00,0x109,0);
          FUN_100006cdc(IVar3,pcVar11);
          pppppppbVar21 = (byte *******)PTR___swiftEmptyArrayStorage_100995ea0;
          goto LAB_10019d5c8;
        }
        FUN_100006cdc(IVar3,pcVar11);
      }
    }
    FUN_100401b14(0);
    pcVar1 = FUN_10019bfe4;
    uVar13 = 0x105;
  }
  FUN_1003fb4ec(pcVar1,0,0xd000000000000091,0x8000000100899df0,0xd000000000000015,0x8000000100899f00
                ,uVar13,0);
  pppppppbVar21 = (byte *******)PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10019d5c8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(pppppppbVar21);
}

