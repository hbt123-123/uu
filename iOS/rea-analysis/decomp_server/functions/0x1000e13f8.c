// rea decompile_all
// name: FUN_1000e13f8
// address: 0x1000e13f8
// body: available
// range: 0x1000e13f8-0x1000e1ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e1ec8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1000e13f8(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ID *pIVar13;
  undefined8 uVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong extraout_x13;
  long extraout_x14;
  undefined8 extraout_x15;
  ID IVar17;
  ID IVar18;
  long unaff_x20;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  code *pcVar22;
  code *pcVar23;
  long lVar24;
  undefined1 auStack_160 [16];
  long alStack_150 [6];
  undefined1 auStack_120 [12];
  uint local_114;
  long local_110;
  ulong local_108;
  ulong local_100;
  undefined8 local_f8;
  ulong local_f0;
  long local_e8;
  undefined1 *local_e0;
  long local_d8;
  long local_d0;
  ulong local_c8;
  ID local_98 [7];
  
  local_98[5] = *(ID *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar24 = *(long *)(lVar4 + -8);
  local_d0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  puVar21 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar20 = puVar21 + (-extraout_x12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar5 = puVar20 + (-extraout_x12_01 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar19 = (long)(puVar20 + (-extraout_x12_01 - extraout_x12_00)) - extraout_x12_02;
  if (*(long *)(param_5 + 0x10) == 0) {
LAB_1000e1814:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(uVar19 - 0x20) = param_1;
    *(ulong *)(uVar19 - 0x18) = param_2;
    *(ulong *)(uVar19 - 0x10) = param_3;
    *(long *)(uVar19 - 8) = param_4;
    FUN_1003fb4bc(FUN_1000e35d8,uVar19 - 0x30,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000004b,0x8000000100886d50,0x330,0);
  }
  else {
    local_f8 = extraout_x15;
    local_f0 = extraout_x13;
    local_e8 = extraout_x14;
    local_e0 = puVar5;
    _swift_bridgeObjectRetain(param_5);
    lVar6 = param_1;
    uVar9 = param_2;
    FUN_1001a2c70();
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_5);
      goto LAB_1000e1814;
    }
    lVar16 = *(long *)(param_5 + 0x38) + lVar6 * 0x58;
    uVar9 = *(ulong *)(lVar16 + 0x18);
    lVar6 = *(long *)(lVar16 + 0x20);
    uVar8 = *(undefined8 *)(lVar16 + 0x28);
    uVar7 = *(undefined8 *)(lVar16 + 0x30);
    uVar14 = *(undefined8 *)(lVar16 + 0x38);
    uVar2 = *(undefined8 *)(lVar16 + 0x40);
    local_114 = (uint)*(byte *)(lVar16 + 0x50);
    local_110 = lVar4;
    local_108 = uVar19;
    local_100 = param_2;
    local_d8 = param_4;
    local_c8 = param_3;
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(param_5);
    param_3 = local_c8;
    puVar5 = local_e0;
    if ((uVar9 != local_c8) || (lVar6 != local_d8)) {
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar7);
      param_2 = local_100;
      param_4 = local_d8;
      goto LAB_1000e1814;
    }
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_e0,uVar14,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar9 = local_108;
    __s10Foundation3URLV016standardizedFileB0ACvg(local_108);
    lVar4 = local_110;
    pcVar23 = *(code **)(local_e8 + 8);
    (*pcVar23)(puVar5,local_110);
    uVar11 = uVar9;
    FUN_1000d7700(uVar9,param_6);
    puVar5 = local_e0;
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar7);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      uVar11 = local_100;
      *(long *)(uVar19 - 0x30) = param_1;
      *(ulong *)(uVar19 - 0x28) = uVar11;
      lVar24 = local_d8;
      *(ulong *)(uVar19 - 0x20) = local_c8;
      *(long *)(uVar19 - 0x18) = lVar24;
      *(ulong *)(uVar19 - 0x10) = uVar9;
      pcVar22 = FUN_1000e35e4;
      uVar8 = 0x335;
LAB_1000e1960:
      FUN_1003fb4bc(pcVar22,uVar19 - 0x40,0xd0000000000000ae,0x8000000100886ab0,0xd00000000000004b,
                    0x8000000100886d50,uVar8,0);
    }
    else {
      if (local_114 != 0) {
        _swift_bridgeObjectRelease(uVar7);
        IVar17 = *(ID *)(unaff_x20 + 0x10);
        __s10Foundation3URLV4pathSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(param_6);
        IVar17 = _objc_msgSend(IVar17,"fileExistsAtPath:",uVar7);
        if ((int)IVar17 == 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          uVar11 = local_100;
          *(long *)(uVar19 - 0x30) = param_1;
          *(ulong *)(uVar19 - 0x28) = uVar11;
          lVar24 = local_d8;
          *(ulong *)(uVar19 - 0x20) = local_c8;
          *(long *)(uVar19 - 0x18) = lVar24;
          *(ulong *)(uVar19 - 0x10) = uVar9;
          pcVar22 = FUN_1000e3608;
          uVar8 = 0x33a;
          goto LAB_1000e1960;
        }
        (**(code **)(local_e8 + 0x10))(local_e0,uVar9,lVar4);
        uVar8 = 0x6574656c706d6f63;
        uVar14 = 0xe900000000000064;
        __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                  (puVar20,0x6574656c706d6f63,0xe900000000000064,1);
        __s10Foundation4UUIDVACycfC(puVar21);
        __s10Foundation4UUIDV10uuidStringSSvg();
        (**(code **)(lVar24 + 8))(puVar21,local_d0);
        __s10Foundation3URLV22appendingPathComponentyACSSF(local_f8,uVar8,uVar14);
        _swift_bridgeObjectRelease(uVar14);
        (*pcVar23)(puVar20,lVar4);
        lVar24 = 0;
        FUN_1000d7fd0();
        _swift_allocObject();
        uVar9 = local_c8;
        uVar19 = local_100;
        *(undefined8 *)
         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::writtenSize) = 0;
        puVar1 = (undefined4 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::nextBlockID);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)
         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::isCompleted) = 0;
        *(undefined1 *)
         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::isResumable) = 0;
        *(undefined8 *)
         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::handle) = 0;
        *(long *)(lVar24 + 0x10) = param_1;
        *(ulong *)(lVar24 + 0x18) = local_100;
        *(ulong *)(lVar24 + 0x20) = local_c8;
        *(long *)(lVar24 + 0x28) = local_d8;
        pcVar22 = *(code **)(local_e8 + 0x20);
        (*pcVar22)(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::finalURL,local_e0,lVar4);
        (*pcVar22)(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::temporaryURL,local_f8,lVar4);
        *(ulong *)(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::writtenSize) = uVar9;
        puVar1 = (undefined4 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::nextBlockID);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)
         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::isCompleted) = 1;
        *(undefined1 *)
         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::isResumable) = 1;
        _swift_bridgeObjectRetain(uVar19);
        uVar9 = local_108;
LAB_1000e17e0:
        (*pcVar23)(uVar9,lVar4);
        goto LAB_1000e1898;
      }
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_e0,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      uVar11 = local_f0;
      __s10Foundation3URLV016standardizedFileB0ACvg(local_f0);
      (*pcVar23)(puVar5,lVar4);
      uVar10 = uVar11;
      FUN_1000d7700(uVar11,param_7);
      if ((uVar10 & 1) == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar10 = local_100;
        *(long *)(uVar19 - 0x30) = param_1;
        *(ulong *)(uVar19 - 0x28) = uVar10;
        lVar24 = local_d8;
        *(ulong *)(uVar19 - 0x20) = local_c8;
        *(long *)(uVar19 - 0x18) = lVar24;
        *(ulong *)(uVar19 - 0x10) = uVar11;
        pcVar22 = FUN_1000e35f0;
        uVar8 = 0x349;
      }
      else {
        IVar18 = *(ID *)(unaff_x20 + 0x10);
        __s10Foundation3URLV4pathSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(param_7);
        pcVar15 = "fileExistsAtPath:";
        IVar17 = _objc_msgSend(IVar18,"fileExistsAtPath:",uVar10);
        uVar8 = 0;
        if ((int)IVar17 != 0) {
          __s10Foundation3URLV4pathSSvg(0);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar15);
          local_98[0] = 0;
          IVar17 = _objc_msgSend(IVar18,"attributesOfItemAtPath:error:",uVar8,local_98);
          if (IVar17 == 0) {
            IVar17 = local_98[0];
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_98[0]);
            _swift_willThrow(0);
            _swift_errorRelease(IVar17);
            uVar11 = local_f0;
          }
          else {
            uVar11 = 0;
            FUN_100006050();
            puVar12 = &DAT_100a752f0;
            FUN_100005c90(&DAT_100a752f0,FUN_100006050,
                          &TargetProtocolConformanceDescriptor_1008511b8);
            puVar3 = PTR___sypN_100995e88;
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar17,uVar11,PTR___sypN_100995e88 + 8,puVar12);
            if (*(long *)(IVar17 + 0x10) == 0) {
LAB_1000e1c44:
              local_98[2] = 0;
              local_98[1] = 0;
              local_98[4] = 0;
              local_98[3] = 0;
            }
            else {
              lVar24 = *(long *)PTR__NSFileSize_1009952c8;
              _swift_bridgeObjectRetain(IVar17);
              thunk_FUN_1001a2e90(lVar24);
              if ((uVar11 & 1) == 0) {
                _swift_bridgeObjectRelease(IVar17);
                goto LAB_1000e1c44;
              }
              FUN_10003e8bc(*(long *)(IVar17 + 0x38) + lVar24 * 0x20,local_98 + 1);
              _swift_bridgeObjectRelease(IVar17);
            }
            _swift_bridgeObjectRelease(IVar17);
            if (local_98[4] == 0) {
              FUN_100040bb4(local_98 + 1,&DAT_100a766e0,&DAT_10080bdb0);
              uVar11 = local_f0;
            }
            else {
              uVar8 = 0;
              FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
              pIVar13 = local_98;
              _swift_dynamicCast(pIVar13,local_98 + 1,puVar3 + 8,uVar8,6);
              IVar17 = local_98[0];
              uVar11 = local_f0;
              if ((((ulong)pIVar13 & 1) != 0) &&
                 (IVar18 = _objc_msgSend(local_98[0],"unsignedLongLongValue"), uVar10 = local_c8,
                 puVar5 = local_e0, uVar11 = local_f0, IVar18 <= local_c8)) {
                pcVar22 = *(code **)(local_e8 + 0x10);
                (*pcVar22)(local_e0,uVar9,lVar4);
                (*pcVar22)(local_f8,local_f0,lVar4);
                IVar17 = _objc_msgSend(IVar17,"unsignedLongLongValue");
                lVar24 = 0;
                FUN_1000d7fd0();
                _swift_allocObject();
                uVar19 = local_100;
                *(undefined8 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::writtenSize) = 0;
                puVar1 = (undefined4 *)
                         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                   ::nextBlockID);
                *puVar1 = 0;
                *(undefined1 *)(puVar1 + 1) = 1;
                *(undefined1 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::isCompleted) = 0;
                *(undefined1 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::isResumable) = 0;
                *(undefined8 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::handle) = 0;
                *(long *)(lVar24 + 0x10) = param_1;
                *(ulong *)(lVar24 + 0x18) = local_100;
                *(ulong *)(lVar24 + 0x20) = uVar10;
                *(long *)(lVar24 + 0x28) = local_d8;
                pcVar22 = *(code **)(local_e8 + 0x20);
                (*pcVar22)(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                    ::finalURL,puVar5,lVar4);
                (*pcVar22)(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                    ::temporaryURL,local_f8,lVar4);
                *(ID *)(lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                 ::writtenSize) = IVar17;
                puVar1 = (undefined4 *)
                         (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                   ::nextBlockID);
                *puVar1 = 0;
                *(undefined1 *)(puVar1 + 1) = 1;
                *(undefined1 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::isCompleted) = 0;
                *(undefined1 *)
                 (lVar24 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::isResumable) = 1;
                _swift_bridgeObjectRetain(uVar19);
                (*pcVar23)(local_f0,lVar4);
                goto LAB_1000e17e0;
              }
            }
          }
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar10 = local_100;
        *(long *)(uVar19 - 0x30) = param_1;
        *(ulong *)(uVar19 - 0x28) = uVar10;
        lVar24 = local_d8;
        *(ulong *)(uVar19 - 0x20) = local_c8;
        *(long *)(uVar19 - 0x18) = lVar24;
        *(ulong *)(uVar19 - 0x10) = uVar11;
        pcVar22 = FUN_1000e35fc;
        uVar8 = 0x34f;
      }
      FUN_1003fb4bc(pcVar22,uVar19 - 0x40,0xd0000000000000ae,0x8000000100886ab0,0xd00000000000004b,
                    0x8000000100886d50,uVar8,0);
      (*pcVar23)(uVar11,lVar4);
    }
    (*pcVar23)(uVar9,lVar4);
  }
  lVar24 = 0;
LAB_1000e1898:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_98[5]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(lVar24);
  }
  return;
}

