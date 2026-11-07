// rea decompile_all
// name: FUN_1000da798
// address: 0x1000da798
// body: available
// range: 0x1000da798-0x1000db79b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000da798(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7,undefined *param_8,
             long param_9)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 uVar15;
  undefined8 *puVar16;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_1e0 [16];
  uint auStack_1d0 [2];
  undefined8 uStack_1c8;
  undefined8 auStack_1c0 [2];
  uint auStack_1b0 [2];
  ulong uStack_1a8;
  undefined8 local_1a0;
  long local_198;
  ulong local_190 [2];
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  ulong local_140;
  undefined8 local_138;
  long local_130;
  undefined *local_128;
  undefined8 local_120;
  long local_118;
  code *local_110;
  long local_108;
  long local_100;
  undefined *local_f0;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 auStack_98 [24];
  long local_80;
  undefined *local_78 [3];
  
  lVar4 = 0;
  uStack_178._4_4_ = param_1;
  local_120 = param_4;
  local_110 = (code *)param_5;
  __s10Foundation3URLVMa();
  local_100 = *(long *)(lVar4 + -8);
  local_118 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_100 + 0x40));
  lVar4 = (long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12;
  local_160 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar14 = lVar4 - extraout_x12_00;
  local_140 = uVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = uVar14 - extraout_x12_01;
  local_108 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_02;
  local_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar14 = lVar4 - extraout_x12_03;
  puVar10 = &DAT_100a77cf0;
  FUN_100004bb4(&DAT_100a77cf0,&DAT_10080d400);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = uVar14 - extraout_x8_00;
  lVar4 = 0;
  FUN_1000eb43c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar21 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)
            (unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::resumeStore);
  local_138 = _TtC14UURemoteServer23FileTransferResumeStore::queue;
  local_d0 = uVar15;
  uStack_c8 = param_2;
  local_c0 = param_3;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (lVar19,FUN_1000e34c4,auStack_e0,puVar10);
  lVar4 = lVar19;
  _swift_getEnumCaseMultiPayload(lVar19,puVar10);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar19,&DAT_100a77cf0,&DAT_10080d400);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar21 + -0x10) = param_2;
    *(undefined8 *)(lVar21 + -8) = param_3;
    FUN_1003fb4ec(FUN_1000e34e0,lVar21 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000004e,0x8000000100886c40,0x2c2,0);
    uVar15 = 1;
    puVar10 = (undefined *)0xb;
    goto LAB_1000db778;
  }
  local_190[1] = param_3;
  FUN_1000e34e8(lVar19,lVar21);
  puVar10 = *(undefined **)(lVar21 + 0x20);
  local_128 = param_8;
  if ((puVar10 == param_7 && *(undefined **)(lVar21 + 0x28) == param_8) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar10,*(undefined **)(lVar21 + 0x28),param_7,param_8,0), lVar4 = lVar21,
     ((ulong)puVar10 & 1) != 0)) {
    local_158 = 0;
    local_180 = param_7;
    uVar11 = *(undefined8 *)(lVar21 + 0x18);
    local_198 = lVar21;
    FUN_1000d6df8(*(undefined8 *)(lVar21 + 0x10),uVar11);
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(uVar14);
    _swift_bridgeObjectRelease(uVar11);
    lVar4 = local_130;
    __s10Foundation3URLV016standardizedFileB0ACvg(local_130);
    lVar19 = local_118;
    pcVar18 = *(code **)(local_100 + 8);
    uVar5 = uVar14;
    lVar17 = local_118;
    (*pcVar18)();
    __s10Foundation3URLV4pathSSvg();
    (*pcVar18)(lVar4,lVar19);
    FUN_1000d6df8(local_110,param_6);
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(uVar14);
    _swift_bridgeObjectRelease(param_6);
    __s10Foundation3URLV016standardizedFileB0ACvg(lVar4);
    uVar9 = uVar14;
    lVar12 = lVar19;
    (*pcVar18)();
    __s10Foundation3URLV4pathSSvg();
    (*pcVar18)(lVar4,lVar19);
    if ((uVar5 == uVar9) && (lVar17 == lVar12)) {
      _swift_bridgeObjectRelease(lVar17);
      _swift_bridgeObjectRelease(lVar12);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar5,lVar17,uVar9,lVar12,0);
      _swift_bridgeObjectRelease(lVar17);
      _swift_bridgeObjectRelease(lVar12);
      lVar4 = local_198;
      if ((uVar5 & 1) == 0) goto LAB_1000db13c;
    }
    uVar5 = local_190[1];
    lVar4 = local_198;
    local_1a0 = _TtC14UURemoteServer28FileTransferReceiveOperation::temporaryRootURL;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
              (uVar14,param_2,local_190[1],1);
    __s10Foundation3URLV016standardizedFileB0ACvg(local_108);
    lVar19 = local_118;
    local_110 = pcVar18;
    (*pcVar18)(uVar14,local_118);
    uVar15 = *(undefined8 *)(lVar4 + 0x30);
    FUN_1000e2f40(uVar15,param_2,uVar5);
    local_f0 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_138 = uVar15;
    FUN_1000cd198();
    local_78[0] = PTR___swiftEmptySetSingleton_100995eb0;
    if (*(long *)(param_9 + 0x10) != 0) {
      local_190[0] = (ulong)local_180 & 0xffffffffffff;
      if (((ulong)local_128 & 0x2000000000000000) != 0) {
        local_190[0] = (ulong)local_128 >> 0x38 & 0xf;
      }
      puVar16 = (undefined8 *)(param_9 + 0x38);
      local_158 = -*(long *)(param_9 + 0x10);
      lVar17 = 0x7fffffff;
      lVar4 = 1;
      local_150 = param_2;
      do {
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1000db79c);
          (*pcVar18)();
        }
        puVar10 = (undefined *)puVar16[-3];
        puVar2 = (undefined *)puVar16[-2];
        uVar15 = puVar16[-1];
        uVar11 = *puVar16;
        _swift_bridgeObjectRetain_n(puVar2,2);
        puVar6 = puVar10;
        FUN_1000d7374(puVar10,puVar2);
        _swift_bridgeObjectRelease(puVar2);
        puVar7 = local_78[0];
        if (((ulong)puVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(local_f0);
          _swift_bridgeObjectRelease(local_138);
          _swift_bridgeObjectRelease(puVar7);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(uint *)(lVar21 + -0x30) = uStack_178._4_4_;
          *(undefined **)(lVar21 + -0x28) = puVar10;
          *(undefined **)(lVar21 + -0x20) = puVar2;
          *(undefined8 *)(lVar21 + -0x18) = uVar15;
          *(undefined8 *)(lVar21 + -0x10) = uVar11;
          FUN_1003fb4ec(FUN_1000e358c,lVar21 + -0x40,0xd0000000000000ae,0x8000000100886ab0,
                        0xd00000000000004e,0x8000000100886c40,0x2d7,0);
          _swift_bridgeObjectRelease(puVar2);
          (*local_110)(local_108,local_118);
          FUN_1000e3550(local_198);
LAB_1000db770:
          uVar15 = 1;
          puVar10 = (undefined *)0x4;
          goto LAB_1000db778;
        }
        puVar6 = puVar10;
        FUN_1000e13f8(puVar10,puVar2,uVar15,uVar11,local_138,local_120,local_108);
        puVar7 = local_128;
        if (puVar6 == (undefined *)0x0) {
          local_168 = uVar15;
          if (local_190[0] == 0) {
            _swift_bridgeObjectRetain(puVar2);
            puVar7 = puVar10;
            puVar6 = puVar2;
          }
          else {
            local_b0 = local_180;
            local_a8 = local_128;
            _swift_bridgeObjectRetain(puVar2);
            _swift_bridgeObjectRetain(puVar7);
            __sSS6appendyySSF(0x2f,0xe100000000000000);
            puVar7 = local_a8;
            _swift_bridgeObjectRetain(local_a8);
            __sSS6appendyySSF(puVar10,puVar2);
            _swift_bridgeObjectRelease(puVar7);
            _swift_bridgeObjectRelease(puVar2);
            puVar7 = local_b0;
            puVar6 = local_a8;
          }
          uVar15 = local_120;
          __s10Foundation3URLV22appendingPathComponentyACSSF(uVar14,puVar7,puVar6);
          _swift_bridgeObjectRelease(puVar6);
          uVar5 = local_140;
          __s10Foundation3URLV016standardizedFileB0ACvg(local_140);
          lVar19 = local_118;
          (*local_110)(uVar14,local_118);
          uVar9 = uVar5;
          FUN_1000d7700(uVar5,uVar15);
          puVar7 = local_78[0];
          if ((uVar9 & 1) == 0) {
            _swift_bridgeObjectRelease(local_f0);
            _swift_bridgeObjectRelease(local_138);
            _swift_bridgeObjectRelease(puVar7);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(uint *)(lVar21 + -0x30) = uStack_178._4_4_;
            *(undefined **)(lVar21 + -0x28) = puVar10;
            *(undefined **)(lVar21 + -0x20) = puVar2;
            *(undefined8 *)(lVar21 + -0x18) = local_168;
            *(undefined8 *)(lVar21 + -0x10) = uVar11;
            *(ulong *)(lVar21 + -8) = uVar5;
            FUN_1003fb4ec(FUN_1000e35ac,lVar21 + -0x40,0xd0000000000000ae,0x8000000100886ab0,
                          0xd00000000000004e,0x8000000100886c40,0x2ea,0);
            _swift_bridgeObjectRelease(puVar2);
            pcVar18 = local_110;
            (*local_110)(local_108,lVar19);
            FUN_1000e3550(local_198);
            (*pcVar18)(uVar5,lVar19);
            goto LAB_1000db770;
          }
          FUN_1000dc6e0(uVar14,uVar5,2,local_78);
          lVar12 = local_160;
          local_170 = uVar11;
          __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                    (local_160,0x6873657266,0xe500000000000000,1);
          puVar7 = PTR___sSiN_100995968;
          puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          local_80 = lVar4;
          __ss23CustomStringConvertibleP11descriptionSSvgTj();
          local_b0 = puVar7;
          local_a8 = puVar6;
          __sSS6appendyySSF(0x6964616f6c70752e,0xea0000000000676e);
          puVar7 = local_a8;
          lVar8 = local_130;
          __s10Foundation3URLV22appendingPathComponentyACSSF(local_130,local_b0,local_a8);
          _swift_bridgeObjectRelease(puVar7);
          (*local_110)(lVar12,lVar19);
          pcVar18 = *(code **)(local_100 + 0x10);
          (*pcVar18)(lVar12,uVar14,lVar19);
          (*pcVar18)(local_148,lVar8,lVar19);
          lVar8 = 0;
          FUN_1000d7fd0();
          _swift_allocObject();
          *(undefined8 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::writtenSize) = 0;
          puVar1 = (undefined4 *)
                   (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::nextBlockID);
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 1;
          *(undefined1 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isCompleted) = 0;
          *(undefined1 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isResumable) = 0;
          *(undefined8 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::handle) = 0;
          *(undefined **)(lVar8 + 0x10) = puVar10;
          *(undefined **)(lVar8 + 0x18) = puVar2;
          *(undefined8 *)(lVar8 + 0x20) = local_168;
          *(undefined8 *)(lVar8 + 0x28) = local_170;
          pcVar18 = *(code **)(local_100 + 0x20);
          (*pcVar18)(lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                             ::finalURL,lVar12,lVar19);
          (*pcVar18)(lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                             ::temporaryURL,local_148,lVar19);
          *(undefined8 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::writtenSize) = 0;
          puVar1 = (undefined4 *)
                   (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::nextBlockID);
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 1;
          *(undefined1 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isCompleted) = 0;
          *(undefined1 *)
           (lVar8 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                    ::isResumable) = 0;
          puVar10 = local_f0;
          _swift_isUniquelyReferenced_nonNull_native(local_f0);
          local_b0 = local_f0;
          FUN_100061cdc(lVar8,lVar4,puVar10);
          local_f0 = local_b0;
          pcVar18 = local_110;
          (*local_110)(local_130,lVar19);
          (*pcVar18)(uVar14,lVar19);
          (*pcVar18)(local_140,lVar19);
        }
        else {
          _swift_bridgeObjectRelease(puVar2);
          lVar19 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::finalURL;
          _swift_beginAccess(puVar6 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                      ::finalURL,auStack_98,0,0);
          lVar12 = local_118;
          puVar10 = puVar6 + lVar19;
          uVar5 = uVar14;
          (**(code **)(local_100 + 0x10))(uVar14,puVar10,local_118);
          __s10Foundation3URLV4pathSSvg();
          (*local_110)(uVar14,lVar12);
          FUN_10006d958(&local_b0,uVar5,puVar10);
          _swift_bridgeObjectRelease(local_a8);
          _swift_retain(puVar6);
          puVar10 = local_f0;
          _swift_isUniquelyReferenced_nonNull_native(local_f0);
          local_b0 = local_f0;
          FUN_100061cdc(puVar6,lVar4,puVar10);
          _swift_release(puVar6);
          local_f0 = local_b0;
        }
        lVar17 = lVar17 + -1;
        lVar4 = lVar4 + 1;
        puVar16 = puVar16 + 4;
        lVar19 = local_118;
        uVar5 = local_190[1];
        param_2 = local_150;
      } while (local_158 + lVar4 != 1);
    }
    uVar15 = local_120;
    puVar10 = local_128;
    _swift_bridgeObjectRelease(local_78[0]);
    _swift_bridgeObjectRelease(local_138);
    lVar17 = local_100;
    (**(code **)(local_100 + 0x10))(uVar14,uVar15,lVar19);
    lVar4 = local_130;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(local_130,param_2,uVar5,1);
    uVar9 = 0;
    FUN_1000d8124();
    _swift_allocObject();
    uVar20 = (ulong)uStack_178._4_4_;
    *(uint *)(uVar9 + 0x10) = uStack_178._4_4_;
    *(undefined8 *)(uVar9 + 0x18) = param_2;
    *(ulong *)(uVar9 + 0x20) = uVar5;
    *(undefined **)(uVar9 + 0x28) = local_180;
    *(undefined **)(uVar9 + 0x30) = puVar10;
    pcVar18 = *(code **)(lVar17 + 0x20);
    (*pcVar18)(uVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                       ::targetURL,uVar14,lVar19);
    (*pcVar18)(uVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                       ::temporaryDirectoryURL,lVar4,lVar19);
    *(undefined1 *)
     (uVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::
              strategy) = 4;
    *(undefined **)
     (uVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::
              files) = local_f0;
    lVar4 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
    ppuVar13 = &local_b0;
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                       ppuVar13,0x20,0);
    lVar19 = *(long *)(unaff_x20 + lVar4);
    if ((*(long *)(lVar19 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)ppuVar13 & 1) == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar20 * 8);
      _swift_retain(uVar15);
    }
    uVar14 = local_190[1];
    _swift_endAccess(&local_b0);
    _swift_bridgeObjectRetain(puVar10);
    _swift_bridgeObjectRetain(uVar14);
    FUN_1000dbca4(uVar15);
    _swift_release(uVar15);
    _swift_beginAccess(unaff_x20 + lVar4,&local_b0,0x21,0);
    _swift_retain(uVar9);
    uVar15 = *(undefined8 *)(unaff_x20 + lVar4);
    _swift_isUniquelyReferenced_nonNull_native(uVar15);
    uVar3 = uStack_178._4_4_;
    local_80 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
    FUN_100061b4c(uVar9,uStack_178._4_4_,uVar15);
    *(long *)(unaff_x20 + lVar4) = local_80;
    _swift_endAccess(&local_b0);
    lVar4 = _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID;
    _swift_beginAccess(unaff_x20 +
                       _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID,
                       &local_b0,0x21,0);
    uVar15 = *(undefined8 *)(unaff_x20 + lVar4);
    _swift_isUniquelyReferenced_nonNull_native(uVar15);
    local_80 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
    FUN_1000619fc(uVar3,param_2,uVar14,uVar15);
    *(long *)(unaff_x20 + lVar4) = local_80;
    _swift_endAccess(&local_b0);
    uVar14 = uVar9;
    FUN_1000dbf54(uVar9,0);
    if ((uVar14 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(lVar21 + -0x10) = uVar3;
      FUN_1003fb4ec(FUN_1000e35d0,lVar21 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd00000000000004e,0x8000000100886c40,0x30d,0);
      _swift_release(uVar9);
      (*local_110)(local_108,local_118);
      FUN_1000e3550(local_198);
      uVar15 = 1;
      puVar10 = (undefined *)0x7;
    }
    else {
      _swift_release(uVar9);
      (*local_110)(local_108,local_118);
      FUN_1000e3550(local_198);
      uVar15 = 0;
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  else {
LAB_1000db13c:
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar21 + -0x20) = uVar15;
    *(undefined8 *)(lVar21 + -0x18) = param_2;
    uVar5 = local_190[1];
    *(ulong *)(lVar21 + -0x10) = local_190[1];
    puVar10 = &DAT_100a77cf8;
    FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (auStack_98,FUN_1000e352c,lVar21 + -0x30,puVar10);
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(uVar14,param_2,uVar5,1);
    FUN_1000dfb64(uVar14);
    (**(code **)(local_100 + 8))(uVar14,local_118);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar21 + -0x10) = param_2;
    *(ulong *)(lVar21 + -8) = uVar5;
    FUN_1003fb4ec(FUN_1000e3548,lVar21 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000004e,0x8000000100886c40,0x2ca,0);
    FUN_1000e3550(lVar4);
    uVar15 = 1;
    puVar10 = (undefined *)0xb;
  }
LAB_1000db778:
  auVar22._8_8_ = uVar15;
  auVar22._0_8_ = puVar10;
  return auVar22;
}

