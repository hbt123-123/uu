// rea decompile_all
// name: FUN_1001d64b8
// address: 0x1001d64b8
// body: available
// range: 0x1001d64b8-0x1001d7063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d64b8(undefined *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,code *param_12,
                  undefined8 param_13,undefined8 param_14,byte param_15)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  byte *pbVar15;
  byte **ppbVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long unaff_x20;
  byte *pbVar21;
  uint uVar22;
  long lVar23;
  undefined4 uVar24;
  long lVar25;
  undefined1 auStack_120 [16];
  uint local_110 [2];
  ulong local_108;
  ulong local_100;
  byte *local_f0;
  undefined *local_e8;
  uint local_dc;
  undefined *local_d8;
  long local_d0;
  byte *local_a0;
  ulong uStack_98;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  local_d0 = _TtC14UURemoteServer15TerminalManager::tmuxController;
  uVar18 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalManager::tmuxController);
  FUN_1001eaa9c();
  _swift_allocObject();
  _swift_retain(uVar18);
  _swift_bridgeObjectRetain(param_5);
  puVar8 = param_1;
  FUN_1001e9428(param_1,param_4,param_5,param_6,param_7,uVar18);
  uVar22 = (uint)param_1;
  if (puVar8 == (undefined *)0x0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_100 = CONCAT44(local_100._4_4_,uVar22);
    FUN_1003fb4ec(FUN_1001df8d8,local_110,0xd000000000000095,0x8000000100889250,0xd000000000000064,
                  0x800000010089e430,0x1eb,0);
    (*param_12)(500,0xd00000000000001c,0x800000010089e4a0,1);
    return;
  }
  puVar1 = (undefined8 *)(puVar8 + _TtC14UURemoteServer15TerminalSession::onOutput);
  uVar18 = *puVar1;
  uVar12 = puVar1[1];
  *puVar1 = param_8;
  puVar1[1] = param_9;
  FUN_10007ed2c(uVar18,uVar12);
  puVar6 = &DAT_1009a3ab0;
  _swift_allocObject(&DAT_1009a3ab0,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar10 = &DAT_1009a3ad8;
  _swift_allocObject(&DAT_1009a3ad8,0x30,7);
  *(undefined **)(puVar10 + 0x10) = puVar6;
  *(uint *)(puVar10 + 0x18) = uVar22;
  *(undefined8 *)(puVar10 + 0x20) = param_10;
  *(undefined8 *)(puVar10 + 0x28) = param_11;
  puVar1 = (undefined8 *)(puVar8 + _TtC14UURemoteServer15TerminalSession::onExit);
  uVar18 = *puVar1;
  uVar12 = puVar1[1];
  *puVar1 = FUN_1001df904;
  puVar1[1] = puVar10;
  _swift_retain(param_9);
  _swift_retain(puVar6);
  _swift_retain(param_11);
  FUN_10007ed2c(uVar18,uVar12);
  _swift_release(puVar6);
  lVar23 = _TtC14UURemoteServer15TerminalManager::sessions;
  if (param_3 != 0) {
    uVar19 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar19 = param_3 >> 0x38 & 0xf;
    }
    if (uVar19 != 0) {
      puVar2 = (ulong *)(puVar8 + _TtC14UURemoteServer15TerminalSession::name);
      uVar19 = puVar2[1];
      *puVar2 = param_2;
      puVar2[1] = param_3;
      _swift_bridgeObjectRetain(param_3);
      _swift_bridgeObjectRelease(uVar19);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_110[0] = uVar22;
      local_108 = param_2;
      local_100 = param_3;
      FUN_1003fb48c(FUN_1001e02e8,auStack_120,0xd000000000000095,0x8000000100889250,
                    0xd000000000000064,0x800000010089e430,0x1f9,0);
      goto LAB_1001d6de8;
    }
  }
  local_e8 = puVar8;
  local_dc = uVar22;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_80,0,0);
  lVar23 = *(long *)(unaff_x20 + lVar23);
  uVar13 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar19 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(lVar23 + 0x40);
  local_f0 = (byte *)((ulong)&local_a0 | 1);
  _swift_bridgeObjectRetain_n(lVar23,2);
  lVar25 = 0;
  local_d8 = PTR___swiftEmptyArrayStorage_100995ea0;
joined_r0x0001001d679c:
  if (uVar19 != 0) {
    uVar3 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar19 = uVar19 - 1 & uVar19;
    lVar20 = *(long *)(*(long *)(lVar23 + 0x38) +
                      (lVar25 << 9 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 3));
    puVar8 = *(undefined **)(lVar20 + _TtC14UURemoteServer15TerminalSession::name);
    uVar18 = ((undefined8 *)(lVar20 + _TtC14UURemoteServer15TerminalSession::name))[1];
    _swift_retain(lVar20);
    _swift_bridgeObjectRetain(uVar18);
    pbVar7 = (byte *)0x6e6f6973736573;
    uVar12 = uVar18;
    __sSS9hasPrefixySbSSF(0x6e6f6973736573,0xe700000000000000,puVar8,uVar18);
    if (((ulong)pbVar7 & 1) == 0) {
      _swift_release(lVar20);
      _swift_bridgeObjectRelease(uVar18);
    }
    else {
      pbVar7 = (byte *)0x6e6f6973736573;
      __sSS5countSivg(0x6e6f6973736573,0xe700000000000000);
      uVar11 = uVar18;
      FUN_1001dff9c();
      _swift_bridgeObjectRelease(uVar18);
      __sSS14_fromSubstringySSSshFZ(pbVar7,puVar8,uVar11,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      puVar14 = (undefined *)((ulong)puVar8 >> 0x38 & 0xf);
      puVar10 = (undefined *)((ulong)pbVar7 & 0xffffffffffff);
      puVar6 = puVar10;
      if (((ulong)puVar8 & 0x2000000000000000) != 0) {
        puVar6 = puVar14;
      }
      if (puVar6 != (undefined *)0x0) {
        if (((ulong)puVar8 >> 0x3c & 1) == 0) {
          if (((ulong)puVar8 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
              pbVar15 = pbVar7;
              puVar10 = puVar8;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            }
            else {
              pbVar15 = (byte *)(((ulong)puVar8 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar15 == 0x2b) {
              if ((long)puVar10 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d7058);
                (*pcVar4)();
              }
              puVar10 = puVar10 + -1;
              if (puVar10 == (undefined *)0x0) goto LAB_1001d6b0c;
              if (pbVar15 == (byte *)0x0) goto LAB_1001d6ab0;
              pbVar21 = (byte *)0x0;
              do {
                pbVar15 = pbVar15 + 1;
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)pbVar21 * 10,
                    SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar15 - 0x30), pbVar21 = (byte *)(lVar17 + uVar3),
                   SCARRY8(lVar17,uVar3))) goto LAB_1001d6b0c;
                bVar5 = false;
                puVar10 = puVar10 + -1;
              } while (puVar10 != (undefined *)0x0);
            }
            else if (*pbVar15 == 0x2d) {
              if ((long)puVar10 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d705c);
                (*pcVar4)();
              }
              puVar10 = puVar10 + -1;
              if (puVar10 == (undefined *)0x0) {
LAB_1001d6b0c:
                pbVar21 = (byte *)0x0;
                bVar5 = true;
              }
              else if (pbVar15 == (byte *)0x0) {
LAB_1001d6ab0:
                pbVar21 = (byte *)0x0;
                bVar5 = false;
              }
              else {
                pbVar21 = (byte *)0x0;
                do {
                  pbVar15 = pbVar15 + 1;
                  if (((9 < *pbVar15 - 0x30) ||
                      (lVar17 = (long)pbVar21 * 10,
                      SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                     (uVar3 = (ulong)(byte)(*pbVar15 - 0x30), pbVar21 = (byte *)(lVar17 - uVar3),
                     SBORROW8(lVar17,uVar3))) goto LAB_1001d6b0c;
                  bVar5 = false;
                  puVar10 = puVar10 + -1;
                } while (puVar10 != (undefined *)0x0);
              }
            }
            else {
              if (puVar10 == (undefined *)0x0) goto LAB_1001d6b0c;
              if (pbVar15 == (byte *)0x0) goto LAB_1001d6ab0;
              pbVar21 = (byte *)0x0;
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)pbVar21 * 10,
                    SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar15 - 0x30), pbVar21 = (byte *)(lVar17 + uVar3),
                   SCARRY8(lVar17,uVar3))) goto LAB_1001d6b0c;
                bVar5 = false;
                pbVar15 = pbVar15 + 1;
                puVar10 = puVar10 + -1;
              } while (puVar10 != (undefined *)0x0);
            }
          }
          else {
            local_a0 = pbVar7;
            uStack_98 = (ulong)puVar8 & 0xffffffffffffff;
            uVar22 = (uint)pbVar7 & 0xff;
            if (uVar22 == 0x2b) {
              if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d7060);
                (*pcVar4)();
              }
              puVar14 = puVar14 + -1;
              if (puVar14 == (undefined *)0x0) goto LAB_1001d6b0c;
              pbVar21 = (byte *)0x0;
              pbVar15 = local_f0;
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)pbVar21 * 10,
                    SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar15 - 0x30), pbVar21 = (byte *)(lVar17 + uVar3),
                   SCARRY8(lVar17,uVar3))) goto LAB_1001d6b0c;
                bVar5 = false;
                pbVar15 = pbVar15 + 1;
                puVar14 = puVar14 + -1;
              } while (puVar14 != (undefined *)0x0);
            }
            else if (uVar22 == 0x2d) {
              if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d7064);
                (*pcVar4)();
              }
              puVar14 = puVar14 + -1;
              if (puVar14 == (undefined *)0x0) goto LAB_1001d6b0c;
              pbVar21 = (byte *)0x0;
              pbVar15 = local_f0;
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)pbVar21 * 10,
                    SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar15 - 0x30), pbVar21 = (byte *)(lVar17 - uVar3),
                   SBORROW8(lVar17,uVar3))) goto LAB_1001d6b0c;
                bVar5 = false;
                pbVar15 = pbVar15 + 1;
                puVar14 = puVar14 + -1;
              } while (puVar14 != (undefined *)0x0);
            }
            else {
              if (puVar14 == (undefined *)0x0) goto LAB_1001d6b0c;
              pbVar21 = (byte *)0x0;
              ppbVar16 = &local_a0;
              do {
                if (((9 < *(byte *)ppbVar16 - 0x30) ||
                    (lVar17 = (long)pbVar21 * 10,
                    SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*(byte *)ppbVar16 - 0x30),
                   pbVar21 = (byte *)(lVar17 + uVar3), SCARRY8(lVar17,uVar3))) goto LAB_1001d6b0c;
                bVar5 = false;
                ppbVar16 = (byte **)((long)ppbVar16 + 1);
                puVar14 = puVar14 + -1;
              } while (puVar14 != (undefined *)0x0);
            }
          }
          local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar5);
          if (!bVar5) {
LAB_1001d6b20:
            if (0 < (long)pbVar21) {
              pbVar15 = PTR___sSiN_100995968;
              puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
              local_a0 = pbVar21;
              __ss23CustomStringConvertibleP11descriptionSSvgTj();
              if (pbVar15 == pbVar7 && puVar6 == puVar8) {
                _swift_bridgeObjectRelease(puVar6);
                _swift_bridgeObjectRelease(puVar8);
                _swift_release(lVar20);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                _swift_bridgeObjectRelease(puVar6);
                _swift_bridgeObjectRelease(puVar8);
                _swift_release(lVar20);
                if (((ulong)pbVar15 & 1) == 0) goto joined_r0x0001001d679c;
              }
              puVar8 = local_d8;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar8 & 1) == 0) {
                puVar8 = (undefined *)0x0;
                FUN_100034a14(0,*(long *)(local_d8 + 0x10) + 1,1);
                local_d8 = puVar8;
              }
              uVar3 = *(ulong *)(local_d8 + 0x10);
              if (*(ulong *)(local_d8 + 0x18) >> 1 <= uVar3) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(local_d8 + 0x18));
                FUN_100034a14(puVar8,uVar3 + 1,1,local_d8);
                local_d8 = puVar8;
              }
              *(ulong *)(local_d8 + 0x10) = uVar3 + 1;
              *(byte **)(local_d8 + uVar3 * 8 + 0x20) = pbVar21;
              goto joined_r0x0001001d679c;
            }
          }
        }
        else {
          _swift_bridgeObjectRetain(puVar8);
          pbVar21 = pbVar7;
          puVar6 = puVar8;
          FUN_10000c2c8(pbVar7,puVar8,10);
          _swift_bridgeObjectRelease(puVar8);
          if (((ulong)puVar6 & 1) == 0) goto LAB_1001d6b20;
        }
        _swift_bridgeObjectRelease(puVar8);
        _swift_release(lVar20);
        goto joined_r0x0001001d679c;
      }
      _swift_bridgeObjectRelease(puVar8);
      _swift_release(lVar20);
    }
    goto joined_r0x0001001d679c;
  }
  bVar5 = SCARRY8(lVar25,1);
  lVar25 = lVar25 + 1;
  if (bVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d7054);
    (*pcVar4)();
  }
  if (lVar25 < (long)(uVar13 + 0x3f >> 6)) {
    uVar19 = ((ulong *)(lVar23 + 0x40))[lVar25];
    goto joined_r0x0001001d679c;
  }
  _swift_bridgeObjectRelease(lVar23);
  _swift_release(lVar23);
  puVar8 = local_d8;
  puVar6 = local_d8;
  FUN_100074f60();
  _swift_bridgeObjectRelease(puVar8);
  puVar8 = puVar6;
  FUN_1001e01bc();
  _swift_bridgeObjectRelease(puVar6);
  local_a0 = (byte *)0x6e6f6973736573;
  uStack_98 = 0xe700000000000000;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_88 = puVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  puVar8 = local_e8;
  puVar1 = (undefined8 *)(local_e8 + _TtC14UURemoteServer15TerminalSession::name);
  uVar18 = puVar1[1];
  *puVar1 = local_a0;
  puVar1[1] = uStack_98;
  _swift_bridgeObjectRelease(uVar18);
  param_1 = (undefined *)(ulong)local_dc;
LAB_1001d6de8:
  lVar23 = _TtC14UURemoteServer15TerminalManager::sessions;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,&local_a0,0x21,0);
  _swift_retain(puVar8);
  uVar18 = *(undefined8 *)(unaff_x20 + lVar23);
  _swift_isUniquelyReferenced_nonNull_native(uVar18);
  local_88 = *(undefined **)(unaff_x20 + lVar23);
  *(undefined8 *)(unaff_x20 + lVar23) = 0x8000000000000000;
  FUN_100062068(puVar8,param_1,uVar18);
  *(undefined **)(unaff_x20 + lVar23) = local_88;
  _swift_endAccess(&local_a0);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar24 = SUB84(param_1,0);
  local_100 = CONCAT44(local_100._4_4_,uVar24);
  FUN_1003fb48c(FUN_1001e0274,local_110,0xd000000000000095,0x8000000100889250,0xd000000000000064,
                0x800000010089e430,0x201,0);
  lVar23 = *(long *)(unaff_x20 + local_d0);
  if (lVar23 == 0) {
    FUN_1001d9d5c(param_1,0);
    (*param_12)((ulong)param_1 & 0xffffffff,0,0xf000000000000000,0);
    FUN_1001da754(param_14,param_15 & 1);
  }
  else {
    puVar6 = &DAT_1009a3ab0;
    puVar9 = puVar6;
    _swift_allocObject(&DAT_1009a3ab0,0x18,7);
    _swift_unknownObjectWeakInit(puVar9 + 0x10,unaff_x20);
    puVar10 = &DAT_1009a3b00;
    _swift_allocObject(&DAT_1009a3b00,0x49,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined4 *)(puVar10 + 0x18) = uVar24;
    *(undefined **)(puVar10 + 0x20) = puVar8;
    *(long *)(puVar10 + 0x28) = lVar23;
    *(code **)(puVar10 + 0x30) = param_12;
    *(undefined8 *)(puVar10 + 0x38) = param_13;
    *(undefined8 *)(puVar10 + 0x40) = param_14;
    puVar10[0x48] = param_15 & 1;
    _swift_allocObject(&DAT_1009a3ab0,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10,unaff_x20);
    puVar14 = &DAT_1009a3b28;
    _swift_allocObject(&DAT_1009a3b28,0x30,7);
    *(undefined **)(puVar14 + 0x10) = puVar6;
    *(undefined4 *)(puVar14 + 0x18) = uVar24;
    *(code **)(puVar14 + 0x20) = param_12;
    *(undefined8 *)(puVar14 + 0x28) = param_13;
    _swift_retain_n(lVar23,2);
    _swift_retain_n(param_13,2);
    _swift_retain(puVar8);
    _swift_retain(puVar9);
    _swift_retain(puVar6);
    FUN_1001e7d88(1000,FUN_1001e02b8,puVar10,FUN_1001e02d8,puVar14);
    _swift_release(puVar8);
    _swift_release(lVar23);
    _swift_release(puVar9);
    _swift_release(puVar10);
    _swift_release(puVar6);
    puVar8 = puVar14;
  }
  _swift_release(puVar8);
  return;
}

