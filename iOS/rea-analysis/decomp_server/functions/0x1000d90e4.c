// rea decompile_all
// name: FUN_1000d90e4
// address: 0x1000d90e4
// body: available
// range: 0x1000d90e4-0x1000da4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d90e4(ulong *param_1,ulong param_2,undefined8 param_3,uint param_4,undefined *param_5,
                  undefined *param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,byte param_11)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  byte bVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined8 *puVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  ulong unaff_x21;
  undefined8 uVar22;
  byte *pbVar23;
  undefined8 uVar24;
  ulong *puVar25;
  ID IVar26;
  code *pcVar27;
  byte abStack_1c0 [16];
  uint auStack_1b0 [2];
  byte abStack_1a8 [8];
  uint auStack_1a0 [2];
  ulong uStack_198;
  ulong uStack_190;
  byte abStack_188 [8];
  byte abStack_180 [8];
  undefined *local_178;
  undefined *local_170;
  long local_168;
  ulong local_160;
  uint local_154;
  code *local_150;
  undefined *local_148;
  undefined8 *local_140;
  long local_138;
  undefined *local_130;
  code *local_128;
  undefined8 local_120;
  ulong local_118;
  long local_110;
  undefined *local_108;
  undefined8 local_100;
  uint local_f4;
  ulong *local_f0;
  long local_e8;
  byte *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined *local_88;
  undefined *puStack_80;
  long local_70;
  undefined *local_58;
  
  puVar3 = (undefined *)0x0;
  local_d8 = param_9;
  local_d0 = param_7;
  local_98 = param_8;
  __s10Foundation3URLVMa();
  local_b0 = *(long *)(puVar3 + -8);
  local_a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  local_e0 = abStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = (long)(abStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_e8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_00;
  local_a0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_01;
  local_c0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar3 = (undefined *)(lVar17 - extraout_x12_02);
  local_b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar19 = (long)puVar3 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar19 - extraout_x12_04;
  puVar3 = &DAT_100a77ce8;
  local_c8 = lVar17;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar23 = (byte *)(lVar17 - extraout_x8_00);
  uVar16 = param_2;
  FUN_1000d761c(param_2,param_3);
  if ((uVar16 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(pbVar23 + -0x20) = param_4;
    *(ulong *)(pbVar23 + -0x18) = param_2;
    *(undefined8 *)(pbVar23 + -0x10) = param_3;
    pcVar20 = FUN_1000e2e3c;
    uVar24 = 200;
LAB_1000d93f0:
    FUN_1003fb4ec(pcVar20,pbVar23 + -0x30,0xd0000000000000ae,0x8000000100886ab0,0xd000000000000047,
                  0x8000000100886b90,uVar24,0);
    uVar16 = 4;
    goto LAB_1000d9400;
  }
  uVar16 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar16 = (ulong)param_6 >> 0x38 & 0xf;
  }
  local_120 = param_3;
  local_118 = param_2;
  local_f4 = param_4;
  local_f0 = param_1;
  if (uVar16 == 0) {
    lVar17 = *(long *)(local_d0 + 0x10);
    if (lVar17 != 0) goto LAB_1000d9340;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(pbVar23 + -0x10) = local_f4;
    FUN_1003fb4ec(FUN_1000e34bc,pbVar23 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd000000000000047,0x8000000100886b90,0xd0,0);
    uVar16 = 4;
  }
  else {
    puVar4 = param_5;
    FUN_1000d7374(param_5,param_6);
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(pbVar23 + -0x20) = local_f4;
      *(undefined **)(pbVar23 + -0x18) = param_5;
      *(undefined **)(pbVar23 + -0x10) = param_6;
      pcVar20 = FUN_1000e2e48;
      uVar24 = 0xcc;
      goto LAB_1000d93f0;
    }
    lVar17 = *(long *)(local_d0 + 0x10);
LAB_1000d9340:
    local_110 = lVar19;
    FUN_1000d8c54(pbVar23,local_d8,param_10);
    pbVar5 = pbVar23;
    _swift_getEnumCaseMultiPayload(pbVar23,puVar3);
    lVar19 = local_c8;
    if ((int)pbVar5 != 1) {
      local_150 = *(code **)(local_b0 + 0x20);
      (*local_150)(local_c8,pbVar23,local_a8);
      lVar9 = local_98;
      lVar21 = local_110;
      local_154 = (uint)param_11;
      if (local_154 == 0) {
        local_154 = 2;
      }
      else if (param_11 == 4) {
        *(long *)(pbVar23 + -0x10) = local_d0;
        uVar6 = (ulong)local_f4;
        uVar16 = local_118;
        FUN_1000da798(uVar6,local_118,local_120,lVar19,local_d8,param_10,param_5,param_6);
        (**(code **)(local_b0 + 8))(lVar19,local_a8);
        *local_f0 = uVar6;
        bVar15 = (byte)uVar16 & 1;
        goto LAB_1000d9538;
      }
      local_170 = param_5;
      local_160 = uVar16;
      __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                (local_110,local_118,local_120,1);
      FUN_1000db79c(lVar21);
      uVar2 = local_154;
      puVar3 = local_170;
      if (unaff_x21 != 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(pbVar23 + -0x10) = unaff_x21;
        FUN_1003fb4ec(thunk_FUN_1000e3724,pbVar23 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                      0xd000000000000047,0x8000000100886b90,0xe9,0);
        uVar16 = unaff_x21;
        FUN_1000e3240();
        _swift_errorRelease(unaff_x21);
        puVar3 = local_a8;
        pcVar20 = *(code **)(local_b0 + 8);
        (*pcVar20)(lVar21,local_a8);
        (*pcVar20)(lVar19,puVar3);
        *local_f0 = uVar16 & 0xff;
        *(undefined1 *)(local_f0 + 1) = 1;
        return;
      }
      local_178 = param_6;
      if (lVar17 != 0) {
        local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_1000cd198();
        local_58 = PTR___swiftEmptySetSingleton_100995eb0;
        puVar18 = (undefined8 *)(local_d0 + 0x38);
        local_168 = -lVar17;
        lVar19 = 0x7fffffff;
        lVar17 = 1;
        do {
          puVar25 = local_f0;
          puVar4 = (undefined *)puVar18[-3];
          puVar10 = (undefined *)puVar18[-2];
          local_100 = puVar18[-1];
          local_d8 = *puVar18;
          _swift_bridgeObjectRetain_n(puVar10,2);
          puVar7 = puVar4;
          FUN_1000d7374(puVar4,puVar10);
          _swift_bridgeObjectRelease(puVar10);
          puVar11 = local_58;
          if (((ulong)puVar7 & 1) == 0) {
            _swift_bridgeObjectRelease(local_148);
            _swift_bridgeObjectRelease(puVar3);
            _swift_bridgeObjectRelease(puVar11);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(uint *)(pbVar23 + -0x30) = local_f4;
            *(undefined **)(pbVar23 + -0x28) = puVar4;
            *(undefined **)(pbVar23 + -0x20) = puVar10;
            uVar24 = local_d8;
            *(undefined8 *)(pbVar23 + -0x18) = local_100;
            *(undefined8 *)(pbVar23 + -0x10) = uVar24;
            FUN_1003fb4ec(FUN_1000e3494,pbVar23 + -0x40,0xd0000000000000ae,0x8000000100886ab0,
                          0xd000000000000047,0x8000000100886b90,0x113,0);
            _swift_bridgeObjectRelease(puVar10);
            lVar17 = local_110;
            FUN_1000dfb64(local_110);
            puVar3 = local_a8;
            pcVar20 = *(code **)(local_b0 + 8);
            (*pcVar20)(lVar17,local_a8);
            (*pcVar20)(local_c8,puVar3);
            uVar16 = 4;
            goto LAB_1000da1dc;
          }
          local_140 = puVar18;
          local_138 = lVar19;
          local_130 = puVar3;
          local_108 = puVar4;
          local_d0 = lVar17;
          if (local_160 == 0) {
            _swift_bridgeObjectRetain(puVar10);
            puVar3 = puVar10;
          }
          else {
            local_88 = local_170;
            puStack_80 = local_178;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(puVar10);
            __sSS6appendyySSF(0x2f,0xe100000000000000);
            puVar3 = puStack_80;
            _swift_bridgeObjectRetain(puStack_80);
            __sSS6appendyySSF(puVar4,puVar10);
            _swift_bridgeObjectRelease(puVar3);
            _swift_bridgeObjectRelease(puVar10);
            puVar4 = local_88;
            puVar3 = puStack_80;
          }
          puVar11 = local_b8;
          __s10Foundation3URLV22appendingPathComponentyACSSF(local_b8,puVar4,puVar3);
          _swift_bridgeObjectRelease(puVar3);
          __s10Foundation3URLV016standardizedFileB0ACvg(local_a0);
          puVar3 = local_a8;
          pcVar20 = *(code **)(local_b0 + 8);
          puVar4 = puVar11;
          puVar8 = local_a8;
          (*pcVar20)();
          __s10Foundation3URLV016standardizedFileB0ACvg(puVar11);
          __s10Foundation3URLV4pathSSvg();
          puVar7 = puVar11;
          puVar13 = puVar3;
          (*pcVar20)();
          __s10Foundation3URLV016standardizedFileB0ACvg(puVar11);
          __s10Foundation3URLV4pathSSvg();
          local_128 = pcVar20;
          (*pcVar20)(puVar11,puVar3);
          if (((puVar4 == puVar7) && (puVar8 == puVar13)) ||
             (puVar11 = puVar4, puVar3 = puVar8,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (puVar4,puVar8,puVar7,puVar13,0), ((ulong)puVar11 & 1) != 0)) {
            _swift_bridgeObjectRelease(puVar13);
            _swift_bridgeObjectRelease(puVar8);
          }
          else {
            local_88 = puVar7;
            puStack_80 = puVar13;
            _swift_bridgeObjectRetain(puVar13);
            __sSS6appendyySSF(0x2f,0xe100000000000000);
            _swift_bridgeObjectRelease(puVar13);
            puVar11 = puStack_80;
            puVar7 = local_88;
            puVar3 = puStack_80;
            __sSS9hasPrefixySbSSF(local_88,puStack_80,puVar4,puVar8);
            _swift_bridgeObjectRelease(puVar11);
            _swift_bridgeObjectRelease(puVar8);
            puVar4 = local_58;
            if (((ulong)puVar7 & 1) == 0) {
              _swift_bridgeObjectRelease(local_148);
              _swift_bridgeObjectRelease(local_130);
              _swift_bridgeObjectRelease(puVar4);
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(uint *)(pbVar23 + -0x30) = local_f4;
              uVar24 = local_100;
              *(undefined **)(pbVar23 + -0x28) = local_108;
              *(undefined **)(pbVar23 + -0x20) = puVar10;
              uVar22 = local_d8;
              *(undefined8 *)(pbVar23 + -0x18) = uVar24;
              *(undefined8 *)(pbVar23 + -0x10) = uVar22;
              lVar19 = local_a0;
              *(long *)(pbVar23 + -8) = local_a0;
              FUN_1003fb4ec(FUN_1000e34a0,pbVar23 + -0x40,0xd0000000000000ae,0x8000000100886ab0,
                            0xd000000000000047,0x8000000100886b90,0x11b,0);
              _swift_bridgeObjectRelease(puVar10);
              lVar17 = local_110;
              FUN_1000dfb64(local_110);
              puVar3 = local_a8;
              pcVar20 = local_128;
              (*local_128)(lVar17,local_a8);
              (*pcVar20)(local_c8,puVar3);
              *local_f0 = 4;
              *(undefined1 *)(local_f0 + 1) = 1;
              (*pcVar20)(lVar19,puVar3);
              return;
            }
          }
          lVar19 = local_a0;
          lVar17 = local_d0;
          IVar26 = *(ID *)(local_98 + 0x10);
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(puVar3);
          IVar26 = _objc_msgSend(IVar26,"fileExistsAtPath:",puVar8);
          if ((int)IVar26 != 0) {
            _swift_bridgeObjectRetain(puVar10);
            puVar3 = local_148;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = (undefined *)0x0;
              FUN_100035d38(0,*(long *)(local_148 + 0x10) + 1,1);
              local_148 = puVar3;
            }
            uVar16 = *(ulong *)(local_148 + 0x10);
            if (*(ulong *)(local_148 + 0x18) >> 1 <= uVar16) {
              puVar3 = (undefined *)(ulong)(1 < *(ulong *)(local_148 + 0x18));
              FUN_100035d38(puVar3,uVar16 + 1,1,local_148);
              local_148 = puVar3;
            }
            *(ulong *)(local_148 + 0x10) = uVar16 + 1;
            *(undefined **)(local_148 + uVar16 * 0x20 + 0x20) = local_108;
            *(undefined **)(local_148 + uVar16 * 0x20 + 0x28) = puVar10;
            *(undefined8 *)(local_148 + uVar16 * 0x20 + 0x30) = local_100;
            *(undefined8 *)(local_148 + uVar16 * 0x20 + 0x38) = local_d8;
          }
          puVar4 = local_b8;
          lVar9 = local_c0;
          FUN_1000dc6e0(local_b8,lVar19,local_154,&local_58);
          local_70 = lVar17;
          puVar3 = PTR___sSiN_100995968;
          puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          __ss23CustomStringConvertibleP11descriptionSSvgTj();
          local_88 = puVar3;
          puStack_80 = puVar11;
          __sSS6appendyySSF(0x6964616f6c70752e,0xea0000000000676e);
          puVar3 = puStack_80;
          __s10Foundation3URLV22appendingPathComponentyACSSF(lVar9,local_88,puStack_80);
          _swift_bridgeObjectRelease(puVar3);
          puVar11 = local_a8;
          lVar21 = local_e8;
          lVar19 = local_138;
          if (local_138 == 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1000da4f8);
            (*pcVar20)();
          }
          pcVar27 = *(code **)(local_b0 + 0x10);
          (*pcVar27)(local_e8,puVar4,local_a8);
          pbVar5 = local_e0;
          (*pcVar27)(local_e0,lVar9,puVar11);
          lVar9 = 0;
          FUN_1000d7fd0();
          _swift_allocObject();
          lVar17 = local_d0;
          pcVar20 = local_150;
          *(undefined8 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::writtenSize) = 0;
          puVar1 = (undefined4 *)
                   (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::nextBlockID);
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 1;
          *(undefined1 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isCompleted) = 0;
          *(undefined1 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isResumable) = 0;
          *(undefined8 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::handle) = 0;
          *(undefined **)(lVar9 + 0x10) = local_108;
          *(undefined **)(lVar9 + 0x18) = puVar10;
          *(undefined8 *)(lVar9 + 0x20) = local_100;
          *(undefined8 *)(lVar9 + 0x28) = local_d8;
          (*local_150)(lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                               ::finalURL,lVar21,puVar11);
          (*pcVar20)(lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                             ::temporaryURL,pbVar5,puVar11);
          puVar3 = local_130;
          *(undefined8 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::writtenSize) = 0;
          puVar1 = (undefined4 *)
                   (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::nextBlockID);
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 1;
          *(undefined1 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isCompleted) = 0;
          *(undefined1 *)
           (lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isResumable) = 0;
          puVar10 = local_130;
          _swift_isUniquelyReferenced_nonNull_native(local_130);
          local_88 = puVar3;
          FUN_100061cdc(lVar9,lVar17,puVar10);
          puVar3 = local_88;
          pcVar20 = local_128;
          (*local_128)(local_c0,puVar11);
          (*pcVar20)(puVar4,puVar11);
          (*pcVar20)(local_a0,puVar11);
          puVar25 = local_f0;
          lVar19 = lVar19 + -1;
          lVar17 = lVar17 + 1;
          puVar18 = local_140 + 4;
        } while (local_168 + lVar17 != 1);
        _swift_bridgeObjectRelease(local_58);
        puVar10 = local_a8;
        puVar4 = local_b8;
        (*pcVar27)(local_b8,local_c8,local_a8);
        lVar17 = local_c0;
        (*pcVar27)(local_c0,local_110,puVar10);
        uVar16 = 0;
        FUN_1000d8124();
        _swift_allocObject();
        uVar2 = local_f4;
        uVar24 = local_120;
        pcVar20 = local_150;
        uVar6 = (ulong)local_f4;
        *(uint *)(uVar16 + 0x10) = local_f4;
        *(ulong *)(uVar16 + 0x18) = local_118;
        *(undefined8 *)(uVar16 + 0x20) = local_120;
        *(undefined **)(uVar16 + 0x28) = local_170;
        *(undefined **)(uVar16 + 0x30) = local_178;
        (*local_150)(uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                              ::targetURL,puVar4,puVar10);
        (*pcVar20)(uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                            ::temporaryDirectoryURL,lVar17,puVar10);
        lVar19 = local_98;
        *(char *)(uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                           ::strategy) = (char)local_154;
        *(undefined **)
         (uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                   ::files) = puVar3;
        lVar17 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
        ppuVar14 = &local_88;
        _swift_beginAccess(local_98 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                           ppuVar14,0x20,0);
        lVar21 = *(long *)(lVar19 + lVar17);
        if ((*(long *)(lVar21 + 0x10) == 0) ||
           (uVar12 = uVar6, thunk_FUN_1001a2c34(), ((ulong)ppuVar14 & 1) == 0)) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + uVar12 * 8);
          _swift_retain(uVar22);
        }
        _swift_endAccess(&local_88);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(local_178);
        FUN_1000dbca4(uVar22);
        _swift_release(uVar22);
        _swift_beginAccess(lVar19 + lVar17,&local_88,0x21,0);
        _swift_retain(uVar16);
        uVar22 = *(undefined8 *)(lVar19 + lVar17);
        _swift_isUniquelyReferenced_nonNull_native(uVar22);
        local_70 = *(undefined8 *)(lVar19 + lVar17);
        *(undefined8 *)(lVar19 + lVar17) = 0x8000000000000000;
        FUN_100061b4c(uVar16,uVar6,uVar22);
        *(long *)(lVar19 + lVar17) = local_70;
        _swift_endAccess(&local_88);
        lVar17 = _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID;
        _swift_beginAccess(lVar19 + _TtC14UURemoteServer28FileTransferReceiveOperation::
                                    taskIDByUniqueID,&local_88,0x21,0);
        uVar22 = *(undefined8 *)(lVar19 + lVar17);
        _swift_isUniquelyReferenced_nonNull_native(uVar22);
        local_70 = *(undefined8 *)(lVar19 + lVar17);
        *(undefined8 *)(lVar19 + lVar17) = 0x8000000000000000;
        FUN_1000619fc(uVar6,local_118,uVar24,uVar22);
        *(long *)(lVar19 + lVar17) = local_70;
        _swift_endAccess(&local_88);
        uVar6 = uVar16;
        FUN_1000dbf54(uVar16,0);
        if ((uVar6 & 1) != 0) {
          _swift_release(uVar16);
          puVar3 = local_a8;
          pcVar20 = local_128;
          (*local_128)(local_110,local_a8);
          (*pcVar20)(local_c8,puVar3);
          *puVar25 = (ulong)local_148;
          *(undefined1 *)(puVar25 + 1) = 0;
          return;
        }
        _swift_bridgeObjectRelease(local_148);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)(pbVar23 + -0x10) = uVar2;
        FUN_1003fb4ec(FUN_1000e34ac,pbVar23 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                      0xd000000000000047,0x8000000100886b90,0x13e,0);
        _swift_release(uVar16);
        puVar3 = local_a8;
        pcVar20 = local_128;
        (*local_128)(local_110,local_a8);
        (*pcVar20)(local_c8,puVar3);
        uVar16 = 7;
LAB_1000da1dc:
        *puVar25 = uVar16;
        *(undefined1 *)(puVar25 + 1) = 1;
        return;
      }
      puVar11 = local_170;
      FUN_1000db8f4(local_170,param_6,lVar19,local_154);
      puVar10 = local_a8;
      puVar4 = local_b8;
      lVar17 = local_110;
      if (((uint)puVar11 >> 8 & 1) != 0) {
        FUN_1000dfb64(local_110);
        puVar3 = local_a8;
        pcVar20 = *(code **)(local_b0 + 8);
        (*pcVar20)(lVar17,local_a8);
        (*pcVar20)(lVar19,puVar3);
        *local_f0 = (ulong)puVar11 & 0xff;
        *(undefined1 *)(local_f0 + 1) = 1;
        return;
      }
      pcVar20 = *(code **)(local_b0 + 0x10);
      (*pcVar20)(local_b8,lVar19,local_a8);
      lVar17 = local_c0;
      (*pcVar20)(local_c0,local_110,puVar10);
      puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1000cd198();
      uVar16 = 0;
      FUN_1000d8124();
      _swift_allocObject();
      pcVar20 = local_150;
      uVar6 = (ulong)local_f4;
      *(uint *)(uVar16 + 0x10) = local_f4;
      *(ulong *)(uVar16 + 0x18) = local_118;
      *(undefined8 *)(uVar16 + 0x20) = local_120;
      *(undefined **)(uVar16 + 0x28) = puVar3;
      *(undefined **)(uVar16 + 0x30) = param_6;
      (*local_150)(uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                            ::targetURL,puVar4,puVar10);
      (*pcVar20)(uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                          ::temporaryDirectoryURL,lVar17,puVar10);
      *(char *)(uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                         ::strategy) = (char)uVar2;
      *(undefined **)
       (uVar16 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::
                 files) = puVar11;
      lVar17 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
      ppuVar14 = &local_88;
      _swift_beginAccess(lVar9 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                         ppuVar14,0x20,0);
      param_1 = local_f0;
      lVar19 = *(long *)(lVar9 + lVar17);
      if ((*(long *)(lVar19 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)ppuVar14 & 1) == 0)) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar6 * 8);
        _swift_retain(uVar24);
      }
      _swift_endAccess(&local_88);
      uVar22 = local_120;
      _swift_bridgeObjectRetain(local_120);
      _swift_bridgeObjectRetain(local_178);
      FUN_1000dbca4(uVar24);
      _swift_release(uVar24);
      _swift_beginAccess(lVar9 + lVar17,&local_88,0x21,0);
      _swift_retain(uVar16);
      uVar24 = *(undefined8 *)(lVar9 + lVar17);
      _swift_isUniquelyReferenced_nonNull_native(uVar24);
      uVar2 = local_f4;
      local_58 = *(undefined **)(lVar9 + lVar17);
      *(undefined8 *)(lVar9 + lVar17) = 0x8000000000000000;
      FUN_100061b4c(uVar16,local_f4,uVar24);
      *(undefined **)(lVar9 + lVar17) = local_58;
      _swift_endAccess(&local_88);
      lVar17 = _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID;
      _swift_beginAccess(lVar9 + _TtC14UURemoteServer28FileTransferReceiveOperation::
                                 taskIDByUniqueID,&local_88,0x21,0);
      uVar24 = *(undefined8 *)(lVar9 + lVar17);
      _swift_isUniquelyReferenced_nonNull_native(uVar24);
      local_58 = *(undefined **)(lVar9 + lVar17);
      *(undefined8 *)(lVar9 + lVar17) = 0x8000000000000000;
      FUN_1000619fc(uVar2,local_118,uVar22,uVar24);
      *(undefined **)(lVar9 + lVar17) = local_58;
      _swift_endAccess(&local_88);
      uVar6 = uVar16;
      FUN_1000dbf54(uVar16,0);
      if ((uVar6 & 1) != 0) {
        _swift_release(uVar16);
        puVar3 = local_a8;
        pcVar20 = *(code **)(local_b0 + 8);
        (*pcVar20)(local_110,local_a8);
        (*pcVar20)(local_c8,puVar3);
        *param_1 = (ulong)PTR___swiftEmptyArrayStorage_100995ea0;
        *(undefined1 *)(param_1 + 1) = 0;
        return;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(pbVar23 + -0x10) = uVar2;
      FUN_1003fb4ec(FUN_1000e34b4,pbVar23 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd000000000000047,0x8000000100886b90,0x105,0);
      _swift_release(uVar16);
      puVar3 = local_a8;
      pcVar20 = *(code **)(local_b0 + 8);
      (*pcVar20)(local_110,local_a8);
      (*pcVar20)(local_c8,puVar3);
      uVar16 = 7;
LAB_1000d9400:
      *param_1 = uVar16;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    uVar16 = (ulong)*pbVar23;
  }
  *local_f0 = uVar16;
  bVar15 = 1;
LAB_1000d9538:
  *(byte *)(local_f0 + 1) = bVar15;
  return;
}

