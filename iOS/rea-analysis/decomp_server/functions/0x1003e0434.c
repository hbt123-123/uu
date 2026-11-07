// rea decompile_all
// name: FUN_1003e0434
// address: 0x1003e0434
// body: available
// range: 0x1003e0434-0x1003e1b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003e0434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ID IVar8;
  undefined8 *puVar9;
  ID IVar10;
  char *pcVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [16];
  long alStack_150 [2];
  undefined1 auStack_140 [16];
  long alStack_130 [2];
  long local_120 [4];
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined8 *local_e8;
  ulong local_e0;
  long local_d8;
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70 [2];
  
  puVar1 = &DAT_100a8ce48;
  FUN_100004bb4(&DAT_100a8ce48,&DAT_100823358);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)local_120 - extraout_x8;
  lVar2 = 0;
  FUN_100277ad0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar15 = (undefined8 *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_e8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)puVar15 - extraout_x12;
  lVar3 = 0;
  local_d8 = lVar13;
  FUN_1005cac3c();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  uVar16 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e0 = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_00;
  local_f0 = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_01;
  local_f8 = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_02;
  local_120[1] = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_03;
  local_120[2] = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_04;
  local_120[3] = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_05;
  local_100 = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_06;
  lVar4 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  uVar22 = uVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar24 = uVar22 - extraout_x12_07;
  puVar1 = &DAT_100a8ce50;
  FUN_100004bb4(&DAT_100a8ce50,&DAT_100823360);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar24 - extraout_x8_03;
  lVar5 = 0;
  __s10Foundation8URLErrorVMa();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar19 = lVar23 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_70[0] = param_1;
  _swift_errorRetain(param_1);
  puVar1 = &DAT_100a75b40;
  FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
  lVar6 = lVar23;
  _swift_dynamicCast(lVar23,local_70,puVar1,lVar5,6);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar13 + 0x38))(lVar23,1,1,lVar5);
    FUN_100040bb4(lVar23,&DAT_100a8ce50,&DAT_100823360);
    _swift_getErrorValue(param_1,auStack_78,local_90);
    FUN_100277a34(lVar17,uStack_88,local_80);
    lVar6 = lVar17;
    (**(code **)(lVar12 + 0x30))(lVar17,1,lVar2);
    lVar13 = local_d8;
    if ((int)lVar6 == 1) {
      FUN_100040bb4(lVar17,&DAT_100a8ce48,&DAT_100823358);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(lVar19 + -0x10) = param_1;
      uVar16 = local_e0;
      (**(code **)(lVar14 + 0x68))(local_e0,4,lVar3);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar10 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar13 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar22 = uVar16;
        FUN_1005cc2b8();
        if ((uVar22 & 1) == 0) {
          _swift_release(lVar13);
        }
        else {
          IVar8 = 0xd0000000000000a3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd0000000000000a3,0x80000001008b4b50);
          pcVar11 = "lastPathComponent";
          IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)(lVar19 + -0x30) = FUN_1003e2618;
          *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
          *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
          *(undefined8 *)(lVar19 + -0x48) = 0x83;
          uVar16 = local_e0;
          FUN_1005cc010(FUN_1003a85e4,lVar19 + -0x40,local_e0,0x65746f6d65525555,0xe800000000000000,
                        IVar8,pcVar11,0xd00000000000001f);
          _swift_release(lVar13);
          _swift_bridgeObjectRelease(pcVar11);
        }
      }
      _objc_msgSend(IVar10,"unlock");
      (**(code **)(lVar14 + 8))(uVar16,lVar3);
      return;
    }
    FUN_10026531c(lVar17,local_d8);
    puVar15 = local_e8;
    FUN_1003e2620(lVar13,local_e8);
    puVar9 = puVar15;
    _swift_getEnumCaseMultiPayload(puVar15,lVar2);
    uVar16 = local_f8;
    if ((int)puVar9 == 0xd) {
      uVar18 = *puVar15;
      (**(code **)(lVar14 + 0x68))(local_f8,2,lVar3);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar10 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar6 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar22 = uVar16;
        FUN_1005cc2b8();
        if ((uVar22 & 1) == 0) {
          _swift_release(lVar6);
        }
        else {
          IVar8 = 0xd0000000000000a3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd0000000000000a3,0x80000001008b4b50);
          pcVar11 = "lastPathComponent";
          IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
          uVar16 = local_f8;
          *(undefined8 *)(lVar19 + -0x10) = 0x80000001008b4c00;
          *(undefined8 *)(lVar19 + -8) = 0x7d;
          lVar13 = local_d8;
          FUN_1005cc010(FUN_1003fe630,0,uVar16,0x65746f6d65525555,0xe800000000000000,IVar8,pcVar11,
                        0xd00000000000001f);
          _swift_release(lVar6);
          _swift_bridgeObjectRelease(pcVar11);
        }
      }
      _objc_msgSend(IVar10,"unlock");
      (**(code **)(lVar14 + 8))(uVar16,lVar3);
      FUN_1003e0434(uVar18,param_2,param_3);
      _swift_errorRelease(uVar18);
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar19 + -0x10) = lVar13;
      uVar16 = local_f0;
      (**(code **)(lVar14 + 0x68))(local_f0,4,lVar3);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar10 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar6 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar22 = uVar16;
        FUN_1005cc2b8();
        if ((uVar22 & 1) == 0) {
          _swift_release(lVar6);
        }
        else {
          IVar8 = 0xd0000000000000a3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd0000000000000a3,0x80000001008b4b50);
          pcVar11 = "lastPathComponent";
          IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)(lVar19 + -0x30) = FUN_1003e2664;
          *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
          *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
          *(undefined8 *)(lVar19 + -0x48) = 0x80;
          puVar15 = local_e8;
          uVar16 = local_f0;
          FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,local_f0,0x65746f6d65525555,
                        0xe800000000000000,IVar8,pcVar11,0xd00000000000001f);
          _swift_release(lVar6);
          _swift_bridgeObjectRelease(pcVar11);
          lVar13 = local_d8;
        }
      }
      _objc_msgSend(IVar10,"unlock");
      (**(code **)(lVar14 + 8))(uVar16,lVar3);
      FUN_10033fe40(puVar15);
    }
    FUN_10033fe40(lVar13);
    return;
  }
  (**(code **)(lVar13 + 0x38))(lVar23,0,1,lVar5);
  (**(code **)(lVar13 + 0x20))(lVar19,lVar23,lVar5);
  puVar1 = &DAT_100a8ce58;
  FUN_100005c90(&DAT_100a8ce58,PTR___s10Foundation8URLErrorVMa_1009962f0,
                PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_1009962e8);
  __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(lVar24,lVar5,puVar1);
  __s10Foundation8URLErrorV4CodeV14cannotFindHostAEvgZ(uVar22);
  puVar1 = &DAT_100a8ce60;
  FUN_100005c90(&DAT_100a8ce60,PTR___s10Foundation8URLErrorV4CodeVMa_1009962c8,
                PTR___s10Foundation8URLErrorV4CodeVSQAAMc_1009962e0);
  uVar7 = uVar22;
  __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
  pcVar20 = *(code **)(lVar21 + 8);
  (*pcVar20)(uVar22,lVar4);
  if ((uVar7 & 1) == 0) {
    __s10Foundation8URLErrorV4CodeV15dnsLookupFailedAEvgZ(uVar22);
    uVar7 = uVar22;
    __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
    (*pcVar20)(uVar22,lVar4);
    if ((uVar7 & 1) != 0) goto LAB_1003e0804;
    __s10Foundation8URLErrorV4CodeV8timedOutAEvgZ(uVar22);
    uVar16 = uVar22;
    __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
    (*pcVar20)(uVar22,lVar4);
    if ((uVar16 & 1) == 0) {
      __s10Foundation8URLErrorV4CodeV19cannotConnectToHostAEvgZ(uVar22);
      uVar16 = uVar22;
      __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
      (*pcVar20)(uVar22,lVar4);
      if ((uVar16 & 1) == 0) {
        __s10Foundation8URLErrorV4CodeV22secureConnectionFailedAEvgZ(uVar22);
        uVar16 = uVar22;
        __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
        (*pcVar20)(uVar22,lVar4);
        local_120[0] = lVar13;
        if ((uVar16 & 1) == 0) {
          __s10Foundation8URLErrorV4CodeV31serverCertificateHasUnknownRootAEvgZ(uVar22);
          uVar16 = uVar22;
          __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
          (*pcVar20)(uVar22,lVar4);
          if ((uVar16 & 1) != 0) goto LAB_1003e14f4;
          __s10Foundation8URLErrorV4CodeV28serverCertificateNotYetValidAEvgZ(uVar22);
          uVar16 = uVar22;
          __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
          (*pcVar20)(uVar22,lVar4);
          if ((uVar16 & 1) != 0) goto LAB_1003e14f4;
          __s10Foundation8URLErrorV4CodeV26serverCertificateUntrustedAEvgZ(uVar22);
          uVar16 = uVar22;
          __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
          (*pcVar20)(uVar22,lVar4);
          if ((uVar16 & 1) != 0) goto LAB_1003e14f4;
          __s10Foundation8URLErrorV4CodeV25clientCertificateRejectedAEvgZ(uVar22);
          uVar16 = uVar22;
          __sSQ2eeoiySbx_xtFZTj(uVar22,lVar24,lVar4,puVar1);
          (*pcVar20)(uVar22,lVar4);
          (*pcVar20)(lVar24,lVar4);
          if ((uVar16 & 1) == 0) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)(lVar19 + -0x10) = lVar19;
            uVar16 = local_120[1];
            (**(code **)(lVar14 + 0x68))(local_120[1],4,lVar3);
            if (DAT_100a89358 != -1) {
              _swift_once(&DAT_100a89358,FUN_1003fba60);
            }
            IVar10 = DAT_100a8e090;
            _objc_msgSend(DAT_100a8e090,"lock");
            lVar13 = DAT_100a8e098;
            if (DAT_100a8e098 != 0) {
              _swift_retain(DAT_100a8e098);
              uVar22 = uVar16;
              FUN_1005cc2b8();
              if ((uVar22 & 1) == 0) {
                _swift_release(lVar13);
              }
              else {
                IVar8 = 0xd0000000000000a3;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd0000000000000a3,0x80000001008b4b50);
                pcVar11 = "lastPathComponent";
                IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
                (*(code *)PTR____chkstk_darwin_100995498)(0);
                *(code **)(lVar19 + -0x30) = FUN_1003e266c;
                *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
                *(undefined8 *)(lVar19 + -0x48) = 0x78;
                *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
                uVar16 = local_120[1];
                FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,local_120[1],0x65746f6d65525555,
                              0xe800000000000000,IVar8,pcVar11,0xd00000000000001f);
                _swift_release(lVar13);
                _swift_bridgeObjectRelease(pcVar11);
              }
            }
            _objc_msgSend(IVar10,"unlock");
            (**(code **)(lVar14 + 8))(uVar16,lVar3);
            lVar13 = local_120[0];
            goto LAB_1003e1150;
          }
        }
        else {
LAB_1003e14f4:
          (*pcVar20)(lVar24,lVar4);
        }
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)(lVar19 + -0x10) = lVar19;
        uVar16 = local_120[2];
        (**(code **)(lVar14 + 0x68))(local_120[2],4,lVar3);
        if (DAT_100a89358 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar10 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar13 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          uVar22 = uVar16;
          FUN_1005cc2b8();
          if ((uVar22 & 1) == 0) {
            _swift_release(lVar13);
          }
          else {
            IVar8 = 0xd0000000000000a3;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd0000000000000a3,0x80000001008b4b50);
            pcVar11 = "lastPathComponent";
            IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(code **)(lVar19 + -0x30) = FUN_1003e2674;
            *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
            *(undefined8 *)(lVar19 + -0x48) = 0x75;
            *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
            uVar16 = local_120[2];
            FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,local_120[2],0x65746f6d65525555,
                          0xe800000000000000,IVar8,pcVar11,0xd00000000000001f);
            _swift_release(lVar13);
            _swift_bridgeObjectRelease(pcVar11);
          }
        }
        _objc_msgSend(IVar10,"unlock");
        (**(code **)(lVar14 + 8))(uVar16,lVar3);
        if (DAT_100a89188 != -1) {
          _swift_once(&DAT_100a89188,FUN_1003a018c);
        }
        IVar10 = NSNotificationCenter::defaultCenter
                           ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
        lVar13 = local_120[0];
      }
      else {
        (*pcVar20)(lVar24,lVar4);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)(lVar19 + -0x10) = lVar19;
        uVar16 = local_120[3];
        (**(code **)(lVar14 + 0x68))(local_120[3],4,lVar3);
        if (DAT_100a89358 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar10 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar6 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          uVar22 = uVar16;
          FUN_1005cc2b8();
          if ((uVar22 & 1) == 0) {
            _swift_release(lVar6);
          }
          else {
            IVar8 = 0xd0000000000000a3;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd0000000000000a3,0x80000001008b4b50);
            pcVar11 = "lastPathComponent";
            IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(code **)(lVar19 + -0x30) = FUN_1003e267c;
            *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
            *(undefined8 *)(lVar19 + -0x48) = 0x6e;
            *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
            uVar16 = local_120[3];
            FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,local_120[3],0x65746f6d65525555,
                          0xe800000000000000,IVar8,pcVar11,0xd00000000000001f);
            _swift_release(lVar6);
            _swift_bridgeObjectRelease(pcVar11);
          }
        }
        _objc_msgSend(IVar10,"unlock");
        (**(code **)(lVar14 + 8))(uVar16,lVar3);
        if (DAT_100a89188 != -1) {
          _swift_once(&DAT_100a89188,FUN_1003a018c);
        }
        IVar10 = NSNotificationCenter::defaultCenter
                           ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
      }
    }
    else {
      (*pcVar20)(lVar24,lVar4);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar19 + -0x10) = lVar19;
      uVar16 = local_100;
      (**(code **)(lVar14 + 0x68))(local_100,4,lVar3);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar10 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar6 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar22 = uVar16;
        FUN_1005cc2b8();
        if ((uVar22 & 1) == 0) {
          _swift_release(lVar6);
        }
        else {
          IVar8 = 0xd0000000000000a3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd0000000000000a3,0x80000001008b4b50);
          pcVar11 = "lastPathComponent";
          IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)(lVar19 + -0x30) = FUN_1003e2684;
          *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
          *(undefined8 *)(lVar19 + -0x48) = 0x6b;
          *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
          uVar16 = local_100;
          FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,local_100,0x65746f6d65525555,
                        0xe800000000000000,IVar8,pcVar11,0xd00000000000001f);
          _swift_release(lVar6);
          _swift_bridgeObjectRelease(pcVar11);
        }
      }
      _objc_msgSend(IVar10,"unlock");
      (**(code **)(lVar14 + 8))(uVar16,lVar3);
      if (DAT_100a89188 != -1) {
        _swift_once(&DAT_100a89188,FUN_1003a018c);
      }
      IVar10 = NSNotificationCenter::defaultCenter
                         ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    }
  }
  else {
LAB_1003e0804:
    (*pcVar20)(lVar24,lVar4);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar19 + -0x10) = lVar19;
    (**(code **)(lVar14 + 0x68))(uVar16,4,lVar3);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar10 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar6 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar22 = uVar16;
      FUN_1005cc2b8();
      if ((uVar22 & 1) == 0) {
        _swift_release(lVar6);
      }
      else {
        IVar8 = 0xd0000000000000a3;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a3,0x80000001008b4b50)
        ;
        pcVar11 = "lastPathComponent";
        IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(lVar19 + -0x30) = FUN_1003e268c;
        *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
        *(undefined8 *)(lVar19 + -0x48) = 0x68;
        *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b4c00;
        FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,uVar16,0x65746f6d65525555,
                      0xe800000000000000,IVar8,pcVar11,0xd00000000000001f);
        _swift_release(lVar6);
        _swift_bridgeObjectRelease(pcVar11);
      }
    }
    _objc_msgSend(IVar10,"unlock");
    (**(code **)(lVar14 + 8))(uVar16,lVar3);
    if (DAT_100a89188 != -1) {
      _swift_once(&DAT_100a89188,FUN_1003a018c);
    }
    IVar10 = NSNotificationCenter::defaultCenter
                       ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  }
  if (DAT_100a89210 != -1) {
    _swift_once(&DAT_100a89210,FUN_1003aa284);
  }
  uVar18 = DAT_100b36778;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  NSNotificationCenter::postNotificationName_object_
            (IVar10,"postNotificationName:object:",uVar18,param_2);
LAB_1003e1150:
  (**(code **)(lVar13 + 8))(lVar19,lVar5);
  return;
}

