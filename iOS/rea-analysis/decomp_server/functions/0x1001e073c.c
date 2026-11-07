// rea decompile_all
// name: FUN_1001e073c
// address: 0x1001e073c
// body: available
// range: 0x1001e073c-0x1001e132f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e073c(ulong param_1,ulong param_2,ulong param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  code *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 extraout_w12;
  undefined *puVar18;
  long lVar19;
  undefined4 uVar20;
  undefined *puVar21;
  code *pcVar22;
  ulong uVar23;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [16];
  undefined *local_170;
  undefined *local_168;
  ulong *local_160;
  long local_158;
  long local_150;
  undefined4 local_144;
  long local_140;
  ulong local_138;
  undefined8 local_130;
  code *local_128;
  long local_120;
  long local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  lVar13 = (long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_100 = lVar13;
  __s8Dispatch0A3QoSVMa();
  local_110 = *(long *)(lVar5 + -8);
  lStack_108 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_118 = lVar13;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar19 = *(long *)(lVar5 + -8);
  local_120 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  pcVar22 = (code *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_1009a3c18;
  pcVar12 = (code *)0x7;
  _swift_allocObject(&DAT_1009a3c18,0x20);
  *(code **)(puVar6 + 0x10) = param_5;
  *(undefined8 *)(puVar6 + 0x18) = param_6;
  _swift_retain(param_6);
  FUN_1001e0038();
  lVar5 = _TtC14UURemoteServer15TerminalManager::sessions;
  uVar20 = (undefined4)param_1;
  if ((param_2 & 1) == 0) {
    _swift_bridgeObjectRelease(pcVar12);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(pcVar22 + -0x10) = uVar20;
    FUN_1003fb4bc(FUN_1001e135c,pcVar22 + -0x20,0xd000000000000095,0x8000000100889250,
                  0xd000000000000029,0x800000010089ea40,0xcd,0);
    uStack_e8 = 0xd000000000000016;
    local_f0 = (undefined *)0x1;
    local_e0 = (code *)0x800000010089ea70;
    puStack_d8 = (undefined *)0xd000000000000016;
    local_d0 = (code *)0x800000010089ea70;
    (*param_5)(&local_f0);
  }
  else {
    ppuVar11 = &local_f0;
    local_140 = lVar4;
    local_130 = param_6;
    local_128 = param_5;
    _swift_beginAccess(param_4 + _TtC14UURemoteServer15TerminalManager::sessions,ppuVar11,0x20,0);
    lVar5 = *(long *)(param_4 + lVar5);
    if ((*(long *)(lVar5 + 0x10) == 0) ||
       (uVar16 = param_1, local_138 = param_3, thunk_FUN_1001a2c34(), uVar23 = local_138,
       ((ulong)ppuVar11 & 1) == 0)) {
      _swift_endAccess(&local_f0);
      _swift_bridgeObjectRelease(pcVar12);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(pcVar22 + -0x10) = uVar20;
      FUN_1003fb4bc(FUN_1001e1364,pcVar22 + -0x20,0xd000000000000095,0x8000000100889250,
                    0xd000000000000029,0x800000010089ea40,0xd5,0);
      uStack_e8 = 0xd000000000000011;
      local_f0 = (undefined *)0x2;
      local_e0 = (code *)0x800000010088a4f0;
      puStack_d8 = (undefined *)0xd000000000000011;
      local_d0 = (code *)0x800000010088a4f0;
      (*local_128)(&local_f0);
    }
    else {
      puVar18 = *(undefined **)(*(long *)(lVar5 + 0x38) + uVar16 * 8);
      _swift_endAccess(&local_f0);
      lVar4 = _TtC14UURemoteServer15TerminalManager::renamingSessionIds;
      _swift_beginAccess(param_4 + _TtC14UURemoteServer15TerminalManager::renamingSessionIds,
                         auStack_a8,0,0);
      local_150 = lVar4;
      thunk_FUN_100152fd0(param_1,*(undefined8 *)(param_4 + lVar4));
      if ((param_1 & 1) == 0) {
        local_160 = (ulong *)(puVar18 + _TtC14UURemoteServer15TerminalSession::name);
        uVar16 = *local_160;
        local_144 = uVar20;
        if ((uVar16 != uVar23 || (code *)local_160[1] != pcVar12) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar16,(code *)local_160[1],uVar23,pcVar12,0), (uVar16 & 1) == 0)) {
          local_170 = puVar6;
          local_168 = puVar18;
          FUN_100004bb4(&DAT_100a7d4e8,&DAT_100812788);
          lVar13 = lVar5;
          __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
          lVar4 = 0;
          uVar16 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
          uVar23 = 0xffffffffffffffff;
          if ((long)uVar16 < 0x40) {
            uVar23 = ~(-1L << (uVar16 & 0x3f));
          }
          uVar23 = uVar23 & *(ulong *)(lVar5 + 0x40);
          local_158 = lVar13 + 0x40;
          if (uVar23 == 0) goto LAB_1001e0d84;
          do {
            uVar14 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            uVar23 = uVar23 - 1 & uVar23;
            while( true ) {
              uVar14 = LZCOUNT(uVar14);
              uVar15 = uVar14 | lVar4 << 6;
              uVar20 = *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar15 * 4);
              puVar9 = (undefined8 *)
                       (*(long *)(*(long *)(lVar5 + 0x38) + uVar15 * 8) +
                       _TtC14UURemoteServer15TerminalSession::name);
              uVar2 = *puVar9;
              uVar3 = puVar9[1];
              uVar17 = (uVar14 & 0xffffffffffffffc0 | lVar4 << 6) >> 3;
              *(ulong *)(local_158 + uVar17) =
                   *(ulong *)(local_158 + uVar17) | 1L << (uVar14 & 0x3f);
              *(undefined4 *)(*(long *)(lVar13 + 0x30) + uVar15 * 4) = uVar20;
              puVar9 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar15 * 0x10);
              *puVar9 = uVar2;
              puVar9[1] = uVar3;
              if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1001e1330);
                (*pcVar12)();
              }
              *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
              _swift_bridgeObjectRetain();
              if (uVar23 != 0) break;
LAB_1001e0d84:
              do {
                puVar6 = local_168;
                lVar1 = lVar4 + 1;
                if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1001e132c);
                  (*pcVar12)();
                }
                if ((long)(uVar16 + 0x3f >> 6) <= lVar1) {
                  _swift_retain(local_168);
                  uVar23 = local_138;
                  uVar14 = local_138;
                  FUN_1001e063c(local_138,pcVar12,local_144,lVar13);
                  _swift_release(lVar13);
                  uVar16 = local_138;
                  puVar21 = local_170;
                  if ((uVar14 & 1) != 0) {
                    FUN_100401b14(0);
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    *(undefined4 *)(pcVar22 + -0x20) = extraout_w12;
                    *(ulong *)(pcVar22 + -0x18) = uVar23;
                    *(code **)(pcVar22 + -0x10) = pcVar12;
                    FUN_1003fb4bc(FUN_1001e13a0,pcVar22 + -0x30,0xd000000000000095,
                                  0x8000000100889250,0xd000000000000029,0x800000010089ea40,0xeb,0);
                    _swift_bridgeObjectRelease(pcVar12);
                    uStack_e8 = 0xd000000000000015;
                    local_f0 = (undefined *)0x3;
                    local_e0 = (code *)0x800000010089ea90;
                    puStack_d8 = (undefined *)0xd000000000000015;
                    local_d0 = (code *)0x800000010089ea90;
                    (*local_128)(&local_f0);
                    _swift_release(local_170);
                    goto LAB_1001e0b7c;
                  }
                  if (*(long *)(puVar6 + _TtC14UURemoteServer15TerminalSession::tmuxController) != 0
                     ) {
                    lVar5 = *(long *)((long)(puVar6 + _TtC14UURemoteServer15TerminalSession::
                                                      tmuxSessionName) + 8);
                    if ((lVar5 != 0) &&
                       (lVar4 = *(long *)(param_4 +
                                         _TtC14UURemoteServer15TerminalManager::tmuxController),
                       lVar4 != 0)) {
                      local_130 = *(undefined8 *)
                                   (puVar6 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName)
                      ;
                      _swift_beginAccess(param_4 + local_150,&local_f0,0x21,0);
                      _swift_bridgeObjectRetain(lVar5);
                      _swift_retain(lVar4);
                      uVar20 = local_144;
                      local_158 = lVar4;
                      FUN_10006d93c(&local_80,local_144);
                      _swift_endAccess(&local_f0);
                      FUN_100004b70(0);
                      lVar4 = local_120;
                      (**(code **)(lVar19 + 0x68))
                                (pcVar22,*(undefined4 *)
                                          PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60
                                 ,local_120);
                      pcVar7 = pcVar22;
                      __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
                      local_128 = pcVar7;
                      (**(code **)(lVar19 + 8))(pcVar22,lVar4);
                      puVar18 = &DAT_1009a3ab0;
                      _swift_allocObject(&DAT_1009a3ab0,0x18,7);
                      _swift_unknownObjectWeakInit(puVar18 + 0x10,param_4);
                      puVar8 = &DAT_1009a3c40;
                      _swift_allocObject(&DAT_1009a3c40,0x18,7);
                      _swift_weakInit(puVar8 + 0x10,puVar6);
                      puVar6 = &DAT_1009a3c68;
                      _swift_allocObject(&DAT_1009a3c68,0x60,7);
                      lVar4 = local_158;
                      *(long *)(puVar6 + 0x10) = local_158;
                      *(undefined8 *)(puVar6 + 0x18) = local_130;
                      *(long *)(puVar6 + 0x20) = lVar5;
                      *(ulong *)(puVar6 + 0x28) = local_138;
                      *(code **)(puVar6 + 0x30) = pcVar12;
                      *(undefined **)(puVar6 + 0x38) = puVar18;
                      *(undefined4 *)(puVar6 + 0x40) = uVar20;
                      *(undefined **)(puVar6 + 0x48) = puVar8;
                      *(code **)(puVar6 + 0x50) = FUN_1001e1354;
                      *(undefined **)(puVar6 + 0x58) = puVar21;
                      local_d0 = thunk_FUN_1001e4970;
                      local_f0 = PTR___NSConcreteStackBlock_100995490;
                      uStack_e8 = 0x42000000;
                      local_e0 = FUN_1000acdb4;
                      puStack_d8 = &DAT_1009a3c80;
                      local_c8 = puVar6;
                      aBlock = __Block_copy(&local_f0);
                      _swift_retain(lVar4);
                      _swift_retain(puVar18);
                      _swift_retain(puVar8);
                      _swift_retain(puVar21);
                      lVar4 = local_118;
                      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
                      local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
                      puVar9 = &DAT_100a75a90;
                      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
                      puVar6 = &DAT_100a75a98;
                      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
                      puVar10 = &DAT_100a75aa0;
                      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
                      lVar13 = local_100;
                      lVar5 = local_140;
                      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                                (local_100,&local_80,puVar6,puVar10,local_140,puVar9);
                      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                                (0,lVar4,lVar13,aBlock);
                      __Block_release(aBlock);
                      _swift_release(local_168);
                      _swift_release(local_158);
                      (**(code **)(local_f8 + 8))(lVar13,lVar5);
                      (**(code **)(local_110 + 8))(lVar4,lStack_108);
                      puVar6 = local_c8;
                      _swift_release(puVar21);
                      _swift_release(puVar18);
                      _swift_release(puVar8);
                      goto LAB_1001e0b7c;
                    }
                  }
                  uVar23 = local_160[1];
                  *local_160 = local_138;
                  local_160[1] = (ulong)pcVar12;
                  _swift_bridgeObjectRetain(pcVar12);
                  _swift_bridgeObjectRelease(uVar23);
                  FUN_100401b14(0);
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(undefined4 *)(pcVar22 + -0x20) = local_144;
                  *(ulong *)(pcVar22 + -0x18) = uVar16;
                  *(code **)(pcVar22 + -0x10) = pcVar12;
                  FUN_1003fb48c(FUN_1001e136c,pcVar22 + -0x30,0xd000000000000095,0x8000000100889250,
                                0xd000000000000029,0x800000010089ea40,0xf3,0);
                  _swift_bridgeObjectRelease();
                  puVar18 = puVar6;
                  goto LAB_1001e0c78;
                }
                uVar23 = ((ulong *)(lVar5 + 0x40))[lVar1];
                lVar4 = lVar4 + 1;
              } while (uVar23 == 0);
              uVar14 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              uVar23 = uVar23 - 1 & uVar23;
              lVar4 = lVar1;
            }
          } while( true );
        }
        _swift_retain(puVar18);
        _swift_bridgeObjectRelease(pcVar12);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(pcVar22 + -0x10) = local_144;
        pcVar12 = FUN_1001e13ac;
        FUN_1003fb48c(FUN_1001e13ac,pcVar22 + -0x20,0xd000000000000095,0x8000000100889250,
                      0xd000000000000029,0x800000010089ea40,0xe3,0);
        puVar21 = puVar6;
LAB_1001e0c78:
        puVar6 = puVar18;
        FUN_1005dc5d4();
        uStack_e8 = *(undefined8 *)(pcVar12 + 8);
        local_f0 = *(undefined **)pcVar12;
        puStack_d8 = *(undefined **)(pcVar12 + 0x18);
        local_e0 = *(code **)(pcVar12 + 0x10);
        local_d0 = *(code **)(pcVar12 + 0x20);
        uStack_88 = *(undefined8 *)(pcVar12 + 0x10);
        local_90 = *(undefined8 *)(pcVar12 + 8);
        uStack_78 = *(undefined8 *)(pcVar12 + 0x20);
        local_80 = *(undefined **)(pcVar12 + 0x18);
        FUN_100102fb4(&local_90,auStack_b8);
        FUN_100102fb4(&local_80,auStack_b8);
        (*local_128)(&local_f0);
        FUN_1000a9ec8(&local_90);
        FUN_1000a9ec8(&local_80);
        _swift_release(puVar21);
      }
      else {
        _swift_retain(puVar18);
        _swift_bridgeObjectRelease(pcVar12);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(pcVar22 + -0x10) = uVar20;
        FUN_1003fb4bc(FUN_1001e13b4,pcVar22 + -0x20,0xd000000000000095,0x8000000100889250,
                      0xd000000000000029,0x800000010089ea40,0xdc,0);
        uStack_e8 = 0xd000000000000016;
        local_f0 = (undefined *)0x1;
        local_e0 = (code *)0x800000010089ea70;
        puStack_d8 = (undefined *)0xd000000000000016;
        local_d0 = (code *)0x800000010089ea70;
        (*local_128)(&local_f0);
        _swift_release(puVar6);
        puVar6 = puVar18;
      }
    }
  }
LAB_1001e0b7c:
  _swift_release(puVar6);
  return;
}

