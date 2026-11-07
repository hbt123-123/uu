// rea decompile_all
// name: FUN_100083910
// address: 0x100083910
// body: available
// range: 0x100083910-0x1000846af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100084308) */

void FUN_100083910(ulong *param_1,double param_2,ulong param_3,code *param_4,ulong param_5,
                  code *param_6)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ID IVar6;
  code *pcVar7;
  ulong uVar8;
  code *pcVar9;
  undefined4 uVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uVar14;
  long unaff_x20;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  byte bVar21;
  code *pcVar22;
  byte bVar23;
  ulong uVar24;
  ID IVar25;
  ulong uVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 auStack_2f0 [8];
  undefined1 auStack_2d0 [16];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulong local_2a8;
  code *local_2a0;
  ulong uStack_298;
  undefined4 local_284;
  ulong local_280;
  undefined8 uStack_278;
  uint local_264;
  ID local_260;
  undefined8 uStack_258;
  long local_250;
  undefined8 uStack_248;
  ID local_238;
  code *local_230;
  long local_228;
  ulong local_220;
  undefined8 uStack_218;
  long local_210;
  long lStack_208;
  long local_200;
  code *local_1f8;
  ulong local_1f0;
  code *local_1e8;
  code *local_1e0;
  long local_1d8;
  ulong local_1d0;
  undefined *local_1c0;
  ulong uStack_1b8;
  code *local_1a8;
  code *pcStack_1a0;
  ulong local_198;
  uint local_18c;
  undefined1 auStack_170 [8];
  undefined4 local_168;
  undefined1 auStack_148 [12];
  undefined4 local_13c;
  undefined1 auStack_120 [16];
  undefined4 local_110;
  undefined1 auStack_f8 [20];
  undefined4 local_e4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte local_90;
  
  lVar3 = 0;
  pcVar22 = param_4;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar24 = (long)&local_2c0 + lVar17;
  lVar12 = unaff_x20 + 0x20;
  _swift_unknownObjectWeakLoadStrong();
  local_1d0 = param_3;
  if (lVar12 != 0) {
    if (DAT_100a73b60 != -1) {
      pcVar22 = FUN_1000efc4c;
      _swift_once(&DAT_100a73b60);
    }
    lVar11 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar11 == 0) ||
       (lVar11 = *(long *)(lVar11 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
       , lVar11 == 0)) {
      _swift_unknownObjectRelease();
    }
    else {
      lVar4 = lVar11;
      local_210 = lVar15;
      lStack_208 = lVar3;
      local_1d8 = lVar12;
      FUN_1000c7b64();
      uVar8 = *(ulong *)(lVar4 + 0x30);
      pcVar5 = *(code **)(lVar4 + 0x38);
      _swift_bridgeObjectRetain(pcVar5);
      _swift_release(lVar4);
      if (pcVar5 != (code *)0x0) {
        if (uVar8 == param_3 && pcVar5 == param_4) {
          _swift_bridgeObjectRelease();
        }
        else {
          pcVar22 = pcVar5;
          param_6 = param_4;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease();
          param_5 = param_3;
          if ((uVar8 & 1) == 0) goto LAB_100083aac;
        }
        FUN_1000255e4();
        if (param_5 != 0) {
          local_230 = param_4;
          local_1f8 = pcVar22;
          local_1e8 = pcVar5;
          FUN_10044e04c();
          FUN_10001a914();
          bVar21 = DAT_100a73d18;
          local_200 = DAT_100a73d10;
          if ((DAT_100a73d18 & 1) == 0) {
            IVar25 = 0;
          }
          else {
            IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d10 * 8);
          }
          local_1f0 = param_5;
          local_1e0 = pcVar5;
          IVar6 = _objc_msgSend((ID)pcVar5,"frameQuality");
          bVar23 = DAT_100a73d28;
          local_228 = lVar11;
          if (IVar25 != IVar6) {
            local_200 = DAT_100a73d20;
            if (DAT_100a73d28 == 1) {
              IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d20 * 8);
            }
            else {
              IVar25 = 0;
            }
            IVar6 = _objc_msgSend((ID)local_1e0,"frameQuality");
            bVar1 = DAT_100a73d38;
            bVar21 = bVar23;
            if (IVar25 != IVar6) {
              local_200 = DAT_100a73d30;
              if (DAT_100a73d38 == 1) {
                IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d30 * 8);
              }
              else {
                IVar25 = 0;
              }
              IVar6 = _objc_msgSend((ID)local_1e0,"frameQuality");
              bVar23 = DAT_100a73d48;
              bVar21 = bVar1;
              if (IVar25 != IVar6) {
                local_200 = DAT_100a73d40;
                if (DAT_100a73d48 == 1) {
                  IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d40 * 8);
                }
                else {
                  IVar25 = 0;
                }
                IVar6 = _objc_msgSend((ID)local_1e0,"frameQuality");
                bVar1 = DAT_100a73d58;
                bVar21 = bVar23;
                if (IVar25 != IVar6) {
                  local_200 = DAT_100a73d50;
                  if (DAT_100a73d58 == 1) {
                    IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d50 * 8);
                  }
                  else {
                    IVar25 = 0;
                  }
                  IVar6 = _objc_msgSend((ID)local_1e0,"frameQuality");
                  bVar23 = DAT_100a73d68;
                  lVar12 = DAT_100a73d60;
                  bVar21 = bVar1;
                  if (IVar25 != IVar6) {
                    if (DAT_100a73d68 == 1) {
                      IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d60 * 8);
                    }
                    else {
                      IVar25 = 0;
                    }
                    IVar6 = _objc_msgSend((ID)local_1e0,"frameQuality");
                    local_200 = lVar12;
                    bVar21 = bVar23;
                    if (IVar25 != IVar6) {
                      local_200 = 5;
                      bVar21 = 1;
                    }
                  }
                }
              }
            }
          }
          pcVar22 = local_1e0;
          bVar23 = DAT_100a73d18;
          lVar12 = DAT_100a73d10;
          if (DAT_100a73d18 == 1) {
            IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d10 * 8);
          }
          else {
            IVar25 = 0;
          }
          IVar6 = _objc_msgSend((ID)local_1e0,"autoStartupQuality");
          bVar1 = DAT_100a73d28;
          lVar3 = DAT_100a73d20;
          if (IVar25 != IVar6) {
            if (DAT_100a73d28 == 1) {
              IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d20 * 8);
            }
            else {
              IVar25 = 0;
            }
            IVar6 = _objc_msgSend((ID)pcVar22,"autoStartupQuality");
            bVar2 = DAT_100a73d38;
            lVar15 = DAT_100a73d30;
            lVar12 = lVar3;
            bVar23 = bVar1;
            if (IVar25 != IVar6) {
              if (DAT_100a73d38 == 1) {
                IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d30 * 8);
              }
              else {
                IVar25 = 0;
              }
              IVar6 = _objc_msgSend((ID)pcVar22,"autoStartupQuality");
              bVar1 = DAT_100a73d48;
              lVar3 = DAT_100a73d40;
              lVar12 = lVar15;
              bVar23 = bVar2;
              if (IVar25 != IVar6) {
                if (DAT_100a73d48 == 1) {
                  IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d40 * 8);
                }
                else {
                  IVar25 = 0;
                }
                IVar6 = _objc_msgSend((ID)pcVar22,"autoStartupQuality");
                bVar2 = DAT_100a73d58;
                lVar15 = DAT_100a73d50;
                lVar12 = lVar3;
                bVar23 = bVar1;
                if (IVar25 != IVar6) {
                  if (DAT_100a73d58 == 1) {
                    IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d50 * 8);
                  }
                  else {
                    IVar25 = 0;
                  }
                  IVar6 = _objc_msgSend((ID)pcVar22,"autoStartupQuality");
                  pcVar5 = local_1e0;
                  bVar1 = DAT_100a73d68;
                  lVar3 = DAT_100a73d60;
                  lVar12 = lVar15;
                  bVar23 = bVar2;
                  if (IVar25 != IVar6) {
                    if (DAT_100a73d68 == 1) {
                      IVar25 = *(ID *)(&DAT_10080b148 + DAT_100a73d60 * 8);
                    }
                    else {
                      IVar25 = 0;
                    }
                    IVar6 = _objc_msgSend((ID)local_1e0,"autoStartupQuality");
                    lVar12 = lVar3;
                    pcVar22 = pcVar5;
                    bVar23 = bVar1;
                    if (IVar25 != IVar6) {
                      lVar12 = 2;
                      bVar23 = 1;
                    }
                  }
                }
              }
            }
          }
          local_260 = _objc_msgSend((ID)pcVar22,"codecType");
          uVar10 = 0x86254b;
          IVar25 = _objc_msgSend((ID)pcVar22,"chromaSampling");
          FUN_10043e4f8();
          pcVar5 = local_1f8;
          local_220 = CONCAT44(local_220._4_4_,uVar10);
          local_238 = IVar25;
          FUN_10044e04c(local_1e8,local_1f8,local_1f0);
          _CGDisplayRotation();
          IVar25 = _objc_msgSend((ID)pcVar22,"fps");
          param_4 = local_230;
          if ((bVar21 & 1) == 0) {
            if (local_200 < -0x80000000) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100084688);
              (*pcVar22)();
            }
            if (0x7fffffff < local_200) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10008468c);
              (*pcVar22)();
            }
          }
          local_264 = (uint)IVar25;
          IVar25 = _objc_msgSend((ID)pcVar22,"frameQuality");
          pcVar22 = local_1e8;
          uVar8 = local_1f0;
          local_250 = lVar12;
          if ((IVar25 == 0) &&
             (plVar16 = (long *)(unaff_x20 +
                                _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality)
             , (*(byte *)((long)plVar16 + 9) & 1) == 0)) {
            bVar23 = *(byte *)(plVar16 + 1);
            local_250 = *plVar16;
          }
          if ((bVar23 & 1) == 0) {
            if (local_250 < -0x80000000) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100084690);
              (*pcVar22)();
            }
            if (0x7fffffff < local_250) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100084694);
              (*pcVar22)();
            }
          }
          pcVar7 = local_1e8;
          FUN_10044e04c(local_1e8,pcVar5,local_1f0);
          local_280 = CONCAT44(local_280._4_4_,(int)pcVar7);
          FUN_10044e6ac(auStack_170,pcVar22,pcVar5,uVar8);
          FUN_10003ef88(auStack_170);
          FUN_10044e6ac(auStack_148,pcVar22,pcVar5,uVar8);
          FUN_10003ef88(auStack_148);
          IVar25 = _objc_msgSend((ID)local_1e0,"maxCustomBitrate");
          local_284 = (undefined4)IVar25;
          pcVar7 = pcVar22;
          pcVar9 = pcVar5;
          uVar13 = uVar8;
          FUN_10044f634(pcVar22,pcVar5,uVar8);
          local_2a0 = pcVar7;
          _swift_bridgeObjectRelease(pcVar9);
          FUN_100006cdc(uVar13,param_6);
          pcVar9 = pcVar5;
          FUN_10044fcf4(pcVar22,pcVar5,uVar8);
          pcVar7 = local_1e0;
          uVar8 = local_220;
          if (((ulong)pcVar9 & 1) == 0) {
            if ((long)pcVar22 < -0x80000000) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100084698);
              (*pcVar22)();
            }
            if (0x7fffffff < (long)pcVar22) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10008469c);
              (*pcVar22)();
            }
          }
          uVar13 = local_220 & 0x100;
          IVar25 = _objc_msgSend((ID)local_1e0,"maxScaleWidth");
          local_2a8 = CONCAT44(local_2a8._4_4_,(int)IVar25);
          IVar25 = _objc_msgSend((ID)pcVar7,"maxScaleHeight");
          pcVar7 = local_1e8;
          uVar26 = local_1f0;
          local_2c0 = CONCAT44(local_2c0._4_4_,(int)IVar25);
          FUN_10044e6ac(auStack_120,local_1e8,pcVar5,local_1f0);
          FUN_10003ef88(auStack_120);
          FUN_10044e6ac(auStack_f8,pcVar7,pcVar5,uVar26);
          FUN_10003ef88(auStack_f8);
          IVar25 = local_238;
          lVar12 = local_250;
          if ((uVar8 & 1) == 0 && uVar13 == 0) {
            if ((long)local_238 < -0x80000000) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1000846a0);
              (*pcVar22)();
            }
            if (0x7fffffff < (long)local_238) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1000846a4);
              (*pcVar22)();
            }
          }
          IVar6 = _objc_msgSend((ID)local_1e0,"fps");
          dVar27 = (double)(long)param_2;
          if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000846a8);
            (*pcVar22)();
          }
          if (dVar27 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000846ac);
            (*pcVar22)();
          }
          if (9.223372036854776e+18 <= dVar27) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000846b0);
            (*pcVar22)();
          }
          uVar10 = 1;
          if (local_260 == 2) {
            uVar10 = 2;
          }
          uVar19 = (undefined4)IVar25;
          if ((local_220 & 0x100) != 0) {
            uVar19 = 1;
          }
          *(undefined4 *)((long)auStack_2f0 + lVar17 + 0x18) = uVar19;
          *(int *)((long)auStack_2f0 + lVar17 + 0x1c) = (int)IVar6;
          *(undefined4 *)((long)auStack_2f0 + lVar17 + 0x10) = local_110;
          *(undefined4 *)((long)auStack_2f0 + lVar17 + 0x14) = local_e4;
          *(undefined4 *)((long)auStack_2f0 + lVar17 + 0xc) = (undefined4)local_2c0;
          uVar19 = (undefined4)local_2a8;
          *(undefined4 *)((long)auStack_2f0 + lVar17 + 4) = uVar10;
          *(undefined4 *)((long)auStack_2f0 + lVar17 + 8) = uVar19;
          *(int *)((long)auStack_2f0 + lVar17) = (int)pcVar22;
          auStack_2d0[lVar17] =
               0x16c16c16c16c16c <
               ((long)dVar27 * 0x4fa4fa4fa4fa4fa5 + 0x2d82d82d82d82d8U >> 2 |
               (long)dVar27 * 0x4fa4fa4fa4fa4fa5 << 0x3e);
          FUN_1005fe7e0(&local_d0,local_264,local_200,lVar12,local_280 & 0xffffffff,local_168,
                        local_13c,local_284,local_2a0);
          uStack_218 = uStack_c8;
          local_220 = local_d0;
          uStack_258 = uStack_a8;
          local_260 = local_b0;
          uStack_248 = uStack_b8;
          local_250 = uStack_c0;
          uStack_278 = uStack_98;
          local_280 = uStack_a0;
          local_264 = (uint)local_90;
          uVar8 = local_1d0;
          FUN_1001a11bc(local_1d0,param_4);
          plVar16 = *(long **)(uVar8 + 0x30);
          pcVar22 = *(code **)(*plVar16 + 0xb0);
          _swift_retain(plVar16);
          (*pcVar22)(&local_1a8);
          _swift_release(plVar16);
          _swift_release(uVar8);
          uVar8 = (ulong)local_18c;
          if ((int)local_18c < 1) {
            uVar8 = _objc_msgSend((ID)local_1e0,"fps");
          }
          local_238 = CONCAT44(local_238._4_4_,(int)uVar8);
          uVar10 = *(undefined4 *)(unaff_x20 + 0x10);
          uVar20 = *(undefined1 *)(unaff_x20 + 0x14);
          local_1a8 = local_1e8;
          pcStack_1a0 = local_1f8;
          local_198 = local_1f0;
          FUN_10008f100();
          FUN_100537580(&local_1c0,0,0,&DAT_1009c3b70,PTR___s10Foundation4DataVN_1009961e8,uVar8,
                        &PTR_PTR_1009d16b0);
          lVar12 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
          uStack_298 = uStack_1b8;
          local_2a0 = (code *)local_1c0;
          local_284 = uVar10;
          _swift_beginAccess(unaff_x20 +
                             _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                             &local_1a8,0,0);
          lVar3 = lStack_208;
          lVar17 = local_210;
          uVar8 = unaff_x20 + lVar12;
          uVar13 = uVar24;
          (**(code **)(local_210 + 0x10))(uVar24,uVar8,lStack_208);
          __s10Foundation4UUIDV10uuidStringSSvg();
          lVar12 = local_228;
          local_2a8 = uVar13;
          (**(code **)(lVar17 + 8))(uVar24,lVar3);
          uVar24 = *(ulong *)(unaff_x20 +
                             _TtC14UURemoteServer19SecondScreenManager::settingsRevision);
          lVar12 = *(long *)(lVar12 + _TtC14UURemoteServer22StreamerConnectSession::
                                      ___lazy_storage___appDataHandler);
          lVar17 = *(long *)(lVar12 + 0x18);
          if (lVar17 == 0) {
            FUN_10008f148(local_1e8,local_1f8,local_1f0);
            _swift_unknownObjectRelease(local_1d8);
            puVar18 = (undefined *)0x0;
          }
          else {
            uVar28 = *(undefined8 *)(lVar12 + 0x20);
            lVar12 = *(long *)(lVar12 + 0x28);
            FUN_10008f174(lVar17,uVar28,lVar12);
            _swift_bridgeObjectRelease(uVar28);
            _swift_bridgeObjectRelease(lVar17);
            lVar17 = *(long *)(lVar12 + 0x10);
            if (lVar17 == 0) {
              _swift_bridgeObjectRelease(lVar12);
              FUN_10008f148(local_1e8,local_1f8,local_1f0);
              _swift_unknownObjectRelease(local_1d8);
              puVar18 = PTR___swiftEmptyArrayStorage_100995ea0;
            }
            else {
              local_1c0 = PTR___swiftEmptyArrayStorage_100995ea0;
              FUN_10006fb28(0,lVar17,0);
              lVar3 = 0;
              lVar15 = *(ulong *)(local_1c0 + 0x10) * 0x1c;
              uVar13 = *(ulong *)(local_1c0 + 0x10);
              do {
                lVar11 = lVar12 + lVar3;
                uVar30 = *(undefined8 *)(lVar11 + 0x30);
                uVar10 = *(undefined4 *)(lVar11 + 0x38);
                uVar26 = uVar13 + 1;
                uVar28 = *(undefined8 *)(lVar11 + 0x20);
                uVar29 = *(undefined8 *)(lVar11 + 0x28);
                if (*(ulong *)(local_1c0 + 0x18) >> 1 <= uVar13) {
                  local_2c0 = *(undefined8 *)(lVar11 + 0x20);
                  uStack_2b8 = *(undefined8 *)(lVar11 + 0x28);
                  local_210 = lVar15;
                  lStack_208 = lVar12;
                  FUN_10006fb28(1 < *(ulong *)(local_1c0 + 0x18),uVar26,1);
                  lVar12 = lStack_208;
                  lVar15 = local_210;
                  uVar28 = local_2c0;
                  uVar29 = uStack_2b8;
                }
                puVar18 = local_1c0;
                *(ulong *)(local_1c0 + 0x10) = uVar26;
                lVar11 = lVar3 + lVar15;
                *(undefined8 *)(local_1c0 + lVar11 + 0x28) = uVar29;
                *(undefined8 *)(local_1c0 + lVar11 + 0x20) = uVar28;
                *(undefined8 *)(local_1c0 + lVar11 + 0x30) = uVar30;
                *(undefined4 *)(local_1c0 + lVar11 + 0x38) = uVar10;
                lVar3 = lVar3 + 0x1c;
                lVar17 = lVar17 + -1;
                uVar13 = uVar26;
              } while (lVar17 != 0);
              _swift_bridgeObjectRelease();
              _swift_retain(puVar18);
              FUN_10008f148(local_1e8,local_1f8,local_1f0);
              _swift_release(puVar18);
              _swift_unknownObjectRelease(local_1d8);
              param_4 = local_230;
            }
          }
          _swift_bridgeObjectRetain(param_4);
          uVar14 = 0;
          uVar13 = 0;
          uVar26 = 0;
          uVar10 = (undefined4)local_200;
          goto LAB_100083b78;
        }
      }
LAB_100083aac:
      _swift_unknownObjectRelease(local_1d8);
    }
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000846b0,0,0xd00000000000009f,0x800000010087e740,&DAT_d000000000000013,
                0x800000010087e7e0,0x45,0);
  _swift_bridgeObjectRetain(param_4);
  uStack_298 = 0xf000000000000000;
  local_2a0 = (code *)0x0;
  uVar13 = 0xd000000000000017;
  uStack_218 = 0;
  local_220 = 0;
  param_2 = 0.0;
  uVar26 = 0x800000010087e800;
  uVar8 = 0;
  uVar24 = 0;
  puVar18 = (undefined *)0x0;
  local_2a8 = 0;
  local_284 = 0;
  local_238._0_4_ = 0;
  uVar10 = 0;
  local_250 = 0;
  uStack_248 = 0;
  uVar20 = 1;
  local_260 = 0;
  uStack_258 = 0;
  local_264 = 3;
  uVar14 = 1;
  local_280 = 0;
  uStack_278 = 0;
LAB_100083b78:
  *param_1 = local_1d0;
  param_1[1] = (ulong)param_4;
  *(undefined4 *)(param_1 + 2) = local_284;
  *(undefined1 *)((long)param_1 + 0x14) = uVar20;
  param_1[4] = uStack_298;
  param_1[3] = (ulong)local_2a0;
  *(undefined4 *)(param_1 + 5) = (undefined4)local_238;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar10;
  param_1[6] = (ulong)param_2;
  param_1[7] = local_2a8;
  param_1[8] = uVar8;
  param_1[9] = uVar24;
  *(undefined1 *)(param_1 + 10) = uVar14;
  *(undefined8 *)((long)param_1 + 0x5c) = uStack_218;
  *(ulong *)((long)param_1 + 0x54) = local_220;
  *(undefined8 *)((long)param_1 + 0x6c) = uStack_248;
  *(long *)((long)param_1 + 100) = local_250;
  *(undefined8 *)((long)param_1 + 0x7c) = uStack_258;
  *(ID *)((long)param_1 + 0x74) = local_260;
  *(undefined8 *)((long)param_1 + 0x8c) = uStack_278;
  *(ulong *)((long)param_1 + 0x84) = local_280;
  *(char *)((long)param_1 + 0x94) = (char)local_264;
  param_1[0x13] = (ulong)puVar18;
  param_1[0x14] = uVar13;
  param_1[0x15] = uVar26;
  return;
}

