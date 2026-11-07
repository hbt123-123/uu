// rea decompile_all
// name: FUN_100156db0
// address: 0x100156db0
// body: available
// range: 0x100156db0-0x10015787f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100157764) */

void FUN_100156db0(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined auStack_310 [16];
  undefined8 auStack_300 [2];
  undefined auStack_2f0 [4];
  byte abStack_2ec [4];
  long local_2e8;
  long lStack_2e0;
  long local_2d8;
  long local_2d0;
  undefined *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  ulong local_240;
  undefined1 local_238;
  undefined *local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulong local_1f0;
  undefined1 auStack_1e0 [24];
  undefined *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined1 local_78;
  
  puVar7 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_2f0 + -extraout_x8;
  lVar8 = 0;
  FUN_100127240();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar20 = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  _swift_beginAccess(lVar9,auStack_1e0,0,0);
  local_2d8 = lVar9;
  FUN_10016b6f8(lVar9,puVar20);
  FUN_10007f314(puVar20,puVar7,&DAT_100a79890,&DAT_10080e600);
  lVar9 = 0;
  __s10Foundation4UUIDVMa();
  local_2e8 = *(long *)(lVar9 + -8);
  puVar10 = puVar7;
  lStack_2e0 = lVar9;
  (**(code **)(local_2e8 + 0x30))(puVar7,1);
  local_2d0 = lVar8;
  if ((int)puVar10 == 1) {
    FUN_10016b73c(puVar20);
    FUN_100040bb4(puVar7,&DAT_100a79890,&DAT_10080e600);
  }
  else {
    FUN_100040bb4(puVar7,&DAT_100a79890,&DAT_10080e600);
    bVar4 = puVar20[(long)*(int *)(lVar8 + 0x1c) + 4];
    puVar7 = puVar20;
    FUN_10016b73c();
    if ((bVar4 & 1) != 0) {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_100157880,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000017,
                    0x8000000100893e00,0xde,0);
      return;
    }
  }
  FUN_100153164();
  puVar10 = puVar7;
  FUN_10018b0b4();
  _swift_release(puVar7);
  if (puVar10 != (undefined *)0x0) {
    uVar16 = *(ulong *)(puVar10 + 0x10);
    if (uVar16 == 0) {
      _swift_bridgeObjectRelease(puVar10);
    }
    else {
      if ((*(byte *)(unaff_x20 +
                    _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) & 1)
          == 0) {
        local_180 = PTR___swiftEmptyArrayStorage_100995ea0;
        uVar24 = uVar16;
        FUN_10007008c(0,uVar16,0);
        uVar17 = 0;
        do {
          puVar7 = local_180;
          if (*(ulong *)(puVar10 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10015787c);
            (*pcVar6)();
          }
          uVar21 = *(ulong *)(puVar10 + uVar17 * 8 + 0x20);
          uVar28 = uVar21 & 0xffffffffffffff8;
          if (uVar21 >> 0x3e == 0) {
            uVar25 = *(ulong *)(uVar28 + 0x10);
          }
          else {
            uVar25 = uVar28;
            if ((long)uVar21 < 0) {
              uVar25 = uVar21;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          _swift_bridgeObjectRetain(uVar21);
          puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (uVar25 != 0) {
            uVar22 = 0;
            do {
              while( true ) {
                if ((uVar21 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar28 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001575a8);
                    (*pcVar6)();
                  }
                  uVar26 = *(ulong *)(uVar21 + uVar22 * 8 + 0x20);
                  _swift_retain(uVar26);
                }
                else {
                  uVar26 = uVar22;
                  uVar24 = uVar21;
                  FUN_10016a8a0();
                }
                if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001575a4);
                  (*pcVar6)();
                }
                uVar27 = uVar22 + 1;
                uVar11 = *(ulong *)(uVar26 + 0x18);
                if (uVar11 != 0) break;
LAB_10015716c:
                FUN_100401b14(0);
                uVar24 = uVar26;
                FUN_1003fb45c(FUN_10016bbc4,uVar26,0xd0000000000000a5,0x8000000100893d50,
                              0x7255656c69467369,0xed0000293a5f286c,0x26,7);
                puVar12 = puVar13;
                _swift_isUniquelyReferenced_nonNull_native();
                local_c0 = puVar13;
                if (((ulong)puVar12 & 1) == 0) {
                  uVar24 = *(long *)(puVar13 + 0x10) + 1;
                  FUN_1000700c8(0,uVar24,1);
                }
                uVar11 = *(ulong *)(local_c0 + 0x10);
                uVar22 = uVar11 + 1;
                if (*(ulong *)(local_c0 + 0x18) >> 1 <= uVar11) {
                  uVar24 = uVar22;
                  FUN_1000700c8(1 < *(ulong *)(local_c0 + 0x18),uVar22,1);
                }
                *(ulong *)(local_c0 + 0x10) = uVar22;
                *(ulong *)(local_c0 + uVar11 * 8 + 0x20) = uVar26;
                puVar13 = local_c0;
                uVar22 = uVar27;
                if (uVar27 == uVar25) goto LAB_100157250;
              }
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              if (uVar11 == 0x662e63696c627570 && uVar24 == 0xef6c72752d656c69) {
                _swift_bridgeObjectRelease(uVar24);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                _swift_bridgeObjectRelease(uVar24);
                if ((uVar11 & 1) == 0) goto LAB_10015716c;
              }
              FUN_100401b14(0);
              uVar24 = uVar26;
              FUN_1003fb45c(FUN_10016bbcc,uVar26,0xd0000000000000a5,0x8000000100893d50,
                            0x7255656c69467369,0xed0000293a5f286c,0x23,7);
              _swift_release(uVar26);
              uVar22 = uVar22 + 1;
            } while (uVar27 != uVar25);
          }
LAB_100157250:
          _swift_bridgeObjectRelease(uVar21);
          local_180 = puVar7;
          uVar28 = *(ulong *)(puVar7 + 0x10);
          uVar21 = uVar28 + 1;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar28) {
            uVar24 = uVar21;
            FUN_10007008c(1 < *(ulong *)(puVar7 + 0x18),uVar21,1);
          }
          puVar7 = local_180;
          uVar17 = uVar17 + 1;
          *(ulong *)(local_180 + 0x10) = uVar21;
          *(undefined **)(local_180 + uVar28 * 8 + 0x20) = puVar13;
        } while (uVar17 != uVar16);
        _swift_bridgeObjectRelease(puVar10);
        uVar24 = *(ulong *)(puVar7 + 0x10);
        uVar16 = 0;
        puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
        while (uVar17 = uVar16, uVar24 != uVar17) {
          if (*(ulong *)(puVar7 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100157880);
            (*pcVar6)();
          }
          uVar21 = *(ulong *)(puVar7 + uVar17 * 8 + 0x20);
          if (uVar21 >> 0x3e == 0) {
            uVar28 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar28 = uVar21 & 0xffffffffffffff8;
            if ((long)uVar21 < 0) {
              uVar28 = uVar21;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          uVar16 = uVar17 + 1;
          if (uVar28 != 0) {
            _swift_bridgeObjectRetain(uVar21);
            puVar13 = puVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            local_180 = puVar10;
            if (((ulong)puVar13 & 1) == 0) {
              FUN_10007008c(0,*(long *)(puVar10 + 0x10) + 1,1);
            }
            uVar16 = *(ulong *)(local_180 + 0x10);
            if (*(ulong *)(local_180 + 0x18) >> 1 <= uVar16) {
              FUN_10007008c(1 < *(ulong *)(local_180 + 0x18),uVar16 + 1,1);
            }
            *(ulong *)(local_180 + 0x10) = uVar16 + 1;
            *(ulong *)(local_180 + uVar16 * 8 + 0x20) = uVar21;
            uVar16 = uVar17 + 1;
            puVar10 = local_180;
          }
        }
        _swift_release(puVar7);
        if (*(long *)(puVar10 + 0x10) == 0) {
          _swift_release(puVar10);
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_1001578ac,0,0xd0000000000000a4,0x800000010088d870,0xd000000000000017,
                        0x8000000100893e00,0xe7,0);
          return;
        }
      }
      FUN_10015362c();
      puVar13 = puVar10;
      FUN_10019250c(puVar10);
      _swift_release(puVar7);
      _swift_bridgeObjectRelease(puVar10);
      uVar18 = *(undefined8 *)
                (unaff_x20 +
                _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___uploadCopyModel);
      _swift_retain(uVar18);
      FUN_1001934bc(&local_1c8,puVar13);
      uStack_1f8 = uStack_190;
      local_200 = local_198;
      local_1f0 = local_188;
      uStack_218 = uStack_1b0;
      local_220 = local_1b8;
      uStack_208 = uStack_1a0;
      uStack_210 = local_1a8;
      uStack_228 = uStack_1c0;
      local_230 = local_1c8;
      _swift_release(uVar18);
      _swift_bridgeObjectRelease(puVar13);
      if (local_1c8 != (undefined *)0x0) {
        lVar9 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
        _swift_unknownObjectWeakLoadStrong();
        lVar19 = local_2d0;
        lVar8 = local_2d8;
        if (lVar9 != 0) {
          if (*(char *)(local_2d8 + *(int *)(local_2d0 + 0x2c)) == '\x01') {
            _swift_beginAccess(local_2d8,&local_280,0x21,0);
            puVar1 = (undefined4 *)(lVar8 + *(int *)(lVar19 + 0x1c));
            if ((*(byte *)(puVar1 + 1) & 1) == 0) {
              uVar3 = *puVar1;
              uStack_158 = uStack_208;
              local_160 = uStack_210;
              uStack_148 = uStack_1f8;
              uStack_150 = local_200;
              local_140 = local_1f0;
              uStack_178 = uStack_228;
              local_180 = local_230;
              uStack_168 = uStack_218;
              uStack_170 = local_220;
              FUN_100128ac0(&local_180,&local_c0);
              FUN_100127da8(uVar3);
              lVar19 = local_2d0;
            }
            else {
              uStack_158 = uStack_208;
              local_160 = uStack_210;
              uStack_148 = uStack_1f8;
              uStack_150 = local_200;
              local_140 = local_1f0;
              uStack_178 = uStack_228;
              local_180 = local_230;
              uStack_168 = uStack_218;
              uStack_170 = local_220;
              FUN_100128ac0(&local_180,&local_c0);
            }
            FUN_100040bb4(lVar8,&DAT_100a79890,&DAT_10080e600);
            (**(code **)(local_2e8 + 0x38))(lVar8,1,1,lStack_2e0);
            uVar18 = *(undefined8 *)(lVar8 + *(int *)(lVar19 + 0x14));
            *(undefined **)(lVar8 + *(int *)(lVar19 + 0x14)) =
                 PTR___swiftEmptyArrayStorage_100995ea0;
            puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar19 + 0x18));
            uVar23 = puVar2[1];
            *puVar2 = 0;
            puVar2[1] = 0xe000000000000000;
            *puVar1 = 0;
            *(undefined1 *)(puVar1 + 1) = 1;
            iVar5 = *(int *)(lVar19 + 0x24);
            FUN_100040bb4(lVar8 + iVar5,&DAT_100a76718,&DAT_10080ccc0);
            lVar14 = 0;
            __s10Foundation4DateVMa();
            (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar8 + iVar5,1,1,lVar14);
            *(undefined1 *)(lVar8 + *(int *)(lVar19 + 0x2c)) = 0;
            _swift_endAccess(&local_280);
            _swift_bridgeObjectRelease(uVar23);
            _swift_bridgeObjectRelease(uVar18);
          }
          else {
            uStack_158 = uStack_208;
            local_160 = uStack_210;
            uStack_148 = uStack_1f8;
            uStack_150 = local_200;
            local_140 = local_1f0;
            uStack_178 = uStack_228;
            local_180 = local_230;
            uStack_168 = uStack_218;
            uStack_170 = local_220;
            FUN_100128ac0(&local_180,&local_c0);
          }
          local_80 = local_188 & 0xcfffffffffffffff;
          local_238 = 0;
          local_c0 = local_1c8;
          uStack_b8 = uStack_1c0;
          local_b0 = local_1b8;
          uStack_a8 = uStack_1b0;
          local_a0 = local_1a8;
          uStack_98 = uStack_1a0;
          local_90 = local_198;
          uStack_88 = uStack_190;
          local_78 = 0;
          FUN_10007f314(&local_1c8,&local_180,&DAT_100a7a408,&DAT_10080edb0);
          FUN_100193a8c(&local_180,&local_c0);
          ppuVar15 = &local_1c8;
          FUN_100040bb4(ppuVar15,&DAT_100a7a408,&DAT_10080edb0);
          local_280 = local_1c8;
          uStack_278 = uStack_1c0;
          local_270 = local_1b8;
          uStack_268 = uStack_1b0;
          local_260 = local_1a8;
          uStack_258 = uStack_1a0;
          local_250 = local_198;
          uStack_248 = uStack_190;
          local_240 = local_188;
          FUN_10016bbd4();
          puVar7 = &DAT_1009be6a8;
          uVar18 = 0;
          FUN_100538a2c(0,&DAT_1009be6a8,ppuVar15);
          uVar23 = 0;
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)(uVar23);
          *(undefined8 *)(puVar20 + -0x10) = uVar18;
          *(undefined **)(puVar20 + -8) = puVar7;
          FUN_1003fb45c(FUN_10016bc14,puVar20 + -0x20,0xd0000000000000a4,0x800000010088d870,
                        0xd000000000000017,0x8000000100893e00,0xf2,7);
          _swift_bridgeObjectRelease(puVar7);
          FUN_1001bd040(&local_180,0,0);
          _swift_release();
          FUN_1000914e4(&local_180);
          _swift_unknownObjectRelease(lVar9);
          FUN_100040bb4(&local_1c8,&DAT_100a7a408,&DAT_10080edb0);
        }
        FUN_100040bb4(&local_1c8,&DAT_100a7a408,&DAT_10080edb0);
      }
    }
  }
  return;
}

