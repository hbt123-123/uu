// rea decompile_all
// name: FUN_1003ebaac
// address: 0x1003ebaac
// body: available
// range: 0x1003ebaac-0x1003ec477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1003ebaac(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long extraout_x8;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auVar19 [16];
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 local_108;
  long local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  long local_d0 [14];
  
  lVar1 = 0;
  FUN_1005cac3c();
  lVar15 = *(long *)(lVar1 + -8);
  lVar13 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  puVar10 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar16 = puVar10 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar18 = puVar16 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar17 = puVar18 + -extraout_x12_01;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  _CGImageSourceCreateWithURL();
  if (lVar13 == 0) {
    (**(code **)(lVar15 + 0x68))(puVar10,4,lVar1);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar5 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar13 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar16 = puVar10;
      FUN_1005cc2b8();
      if (((ulong)puVar16 & 1) == 0) {
        _swift_release(lVar13);
      }
      else {
        IVar4 = 0xd00000000000008d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000008d,0x80000001008b4ff0)
        ;
        pcVar12 = "lastPathComponent";
        IVar4 = _objc_msgSend(IVar4,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
        *(undefined8 *)(puVar17 + -0x10) = 0x80000001008b5080;
        *(undefined8 *)(puVar17 + -8) = 0x7d;
        FUN_1005cc010(FUN_1003fe820,0,puVar10,0x65746f6d65525555,0xe800000000000000,IVar4,pcVar12,
                      0xd00000000000001a);
        _swift_release(lVar13);
        _swift_bridgeObjectRelease(pcVar12);
      }
    }
    _objc_msgSend(IVar5,"unlock");
    pcVar14 = *(code **)(lVar15 + 8);
  }
  else {
    lVar2 = lVar13;
    _CGImageSourceGetCount();
    if (lVar2 < 1) {
      (**(code **)(lVar15 + 0x68))(puVar16,4,lVar1);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar5 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar13 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        puVar10 = puVar16;
        FUN_1005cc2b8();
        if (((ulong)puVar10 & 1) == 0) {
          _swift_release(lVar13);
        }
        else {
          IVar4 = 0xd00000000000008d;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd00000000000008d,0x80000001008b4ff0);
          pcVar12 = "lastPathComponent";
          IVar4 = _objc_msgSend(IVar4,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
          *(undefined8 *)(puVar17 + -0x10) = 0x80000001008b5080;
          *(undefined8 *)(puVar17 + -8) = 0x84;
          FUN_1005cc010(FUN_1003fe7a4,0,puVar16,0x65746f6d65525555,0xe800000000000000,IVar4,pcVar12,
                        0xd00000000000001a);
          _swift_release(lVar13);
          _swift_bridgeObjectRelease(pcVar12);
        }
      }
      _objc_msgSend(IVar5,"unlock");
      pcVar14 = *(code **)(lVar15 + 8);
      puVar10 = puVar16;
    }
    else {
      puVar3 = &_OBJC_CLASS___NSMutableData;
      _objc_allocWithZone();
      IVar4 = _objc_msgSend((ID)puVar3,"init");
      IVar5 = IVar4;
      _CGImageDestinationCreateWithData(IVar4,*(undefined8 *)PTR__kUTTypePNG_1009955f0,1,0);
      if (IVar5 == 0) {
        (**(code **)(lVar15 + 0x68))(puVar18,4,lVar1);
        if (DAT_100a89358 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar5 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar13 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          puVar10 = puVar18;
          FUN_1005cc2b8();
          if (((ulong)puVar10 & 1) == 0) {
            _swift_release(lVar13);
          }
          else {
            IVar4 = 0xd00000000000008d;
            local_100 = lVar1;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000008d,0x80000001008b4ff0);
            pcVar12 = "lastPathComponent";
            IVar4 = _objc_msgSend(IVar4,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
            *(undefined8 *)(puVar17 + -0x10) = 0x80000001008b5080;
            *(undefined8 *)(puVar17 + -8) = 0x92;
            lVar1 = local_100;
            FUN_1005cc010(FUN_1003fe728,0,puVar18,0x65746f6d65525555,0xe800000000000000,IVar4,
                          pcVar12,0xd00000000000001a);
            _swift_release(lVar13);
            _swift_bridgeObjectRelease(pcVar12);
          }
        }
        _objc_msgSend(IVar5,"unlock");
        pcVar14 = *(code **)(lVar15 + 8);
        puVar10 = puVar18;
      }
      else {
        lVar2 = lVar13;
        _CGImageSourceCopyPropertiesAtIndex(lVar13,0,0);
        if ((lVar2 == 0) ||
           (_swift_dynamicCastObjCClass(lVar2,&_OBJC_CLASS___NSDictionary), lVar2 == 0)) {
LAB_1003ec104:
          _CGImageDestinationAddImageFromSource(IVar5,lVar13,0,0);
        }
        else {
          local_d0[0] = 0;
          uVar6 = 0;
          FUN_10039845c();
          puVar3 = &DAT_100a8ab40;
          FUN_100005c90(&DAT_100a8ab40,FUN_10039845c,&TargetProtocolConformanceDescriptor_10081f0e8)
          ;
          __sSD10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo12NSDictionaryC_SDyxq_GSgztFZ
                    (lVar2,local_d0,uVar6,PTR___sypN_100995e88 + 8,puVar3);
          lVar2 = local_d0[0];
          if (local_d0[0] == 0) goto LAB_1003ec104;
          puVar7 = &DAT_100a8d378;
          local_108 = uVar6;
          local_100 = lVar1;
          FUN_100004bb4(&DAT_100a8d378,&DAT_100823728);
          _swift_initStackObject();
          *(undefined8 *)(puVar7 + 0x20) =
               *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_100995610;
          *(undefined8 *)(puVar7 + 0x18) = 2;
          *(undefined8 *)(puVar7 + 0x10) = 1;
          *(undefined **)(puVar7 + 0x40) = PTR___sSdN_1009958f0;
          *(undefined8 *)(puVar7 + 0x28) = 0x3ff0000000000000;
          puVar8 = puVar7;
          FUN_100406c54();
          _swift_setDeallocating(puVar7);
          uVar11 = 0;
          FUN_100040bb4(puVar7 + 0x20,&DAT_100a8d380,&DAT_100823730);
          lVar1 = *(long *)PTR__kCGImagePropertyOrientation_100995618;
          if (*(long *)(lVar2 + 0x10) == 0) {
LAB_1003ec158:
            uStack_e8 = 0;
            local_f0 = 0;
            local_d8 = 0;
            uStack_e0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(lVar2);
            lVar9 = lVar1;
            FUN_1003e7e5c(lVar1);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar2);
              goto LAB_1003ec158;
            }
            FUN_10003e8bc(*(long *)(lVar2 + 0x38) + lVar9 * 0x20,&local_f0);
            _swift_bridgeObjectRelease(lVar2);
          }
          uVar6 = local_108;
          _swift_bridgeObjectRelease(lVar2);
          if (local_d8 == 0) {
            FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
          }
          else {
            FUN_10007f3d4(&local_f0,local_d0);
            FUN_10003e8bc(local_d0,&local_f0);
            puVar7 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native(puVar8);
            local_f8 = puVar8;
            FUN_1003a69ec(&local_f0,lVar1,puVar7);
            FUN_10003f094(local_d0);
            puVar8 = local_f8;
          }
          lVar1 = local_100;
          puVar7 = puVar8;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (puVar8,uVar6,PTR___sypN_100995e88 + 8,puVar3);
          _swift_bridgeObjectRelease(puVar8);
          _CGImageDestinationAddImageFromSource(IVar5,lVar13,0,puVar7);
        }
        _CGImageDestinationFinalize();
        if ((int)IVar5 != 0) {
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar4);
          goto LAB_1003ec3f8;
        }
        (**(code **)(lVar15 + 0x68))(puVar17,4,lVar1);
        if (DAT_100a89358 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar5 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar13 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          puVar10 = puVar17;
          FUN_1005cc2b8();
          if (((ulong)puVar10 & 1) == 0) {
            _swift_release(lVar13);
          }
          else {
            local_108 = 0x80000001008b5080;
            IVar4 = 0xd00000000000008d;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000008d,0x80000001008b4ff0);
            pcVar12 = "lastPathComponent";
            IVar4 = _objc_msgSend(IVar4,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
            local_100 = lVar1;
            *(undefined8 *)(puVar17 + -8) = 0xa9;
            *(undefined8 *)(puVar17 + -0x10) = local_108;
            FUN_1005cc010(FUN_1003fe6ac,0,puVar17,0x65746f6d65525555,0xe800000000000000,IVar4,
                          pcVar12,0xd00000000000001a);
            _swift_release(lVar13);
            lVar1 = local_100;
            _swift_bridgeObjectRelease(pcVar12);
          }
        }
        _objc_msgSend(IVar5,"unlock");
        pcVar14 = *(code **)(lVar15 + 8);
        puVar10 = puVar17;
      }
    }
  }
  (*pcVar14)(puVar10,lVar1);
  IVar4 = 0;
  lVar13 = -0x1000000000000000;
LAB_1003ec3f8:
  auVar19._8_8_ = lVar13;
  auVar19._0_8_ = IVar4;
  return auVar19;
}

