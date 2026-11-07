// rea decompile_all
// name: FUN_1003ec478
// address: 0x1003ec478
// body: available
// range: 0x1003ec478-0x1003ecf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1003ec478(undefined8 param_1,long param_2,undefined8 param_3)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ID IVar9;
  char *pcVar10;
  long extraout_x8;
  code *pcVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [8];
  ID local_128;
  undefined8 local_120;
  long local_118;
  
  lVar2 = 0;
  FUN_1005cac3c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = puVar8 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar16 = puVar15 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar14 = puVar16 + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar13 = puVar14 + -extraout_x12_02;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
  _CGImageSourceCreateWithData();
  if (param_2 == 0) {
    (**(code **)(lVar12 + 0x68))(puVar8,4,lVar2);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar1 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar6 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar15 = puVar8;
      FUN_1005cc2b8();
      if (((ulong)puVar15 & 1) == 0) {
        _swift_release(lVar6);
      }
      else {
        IVar9 = 0xd00000000000008d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000008d,0x80000001008b4ff0)
        ;
        pcVar10 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        *(undefined8 *)(puVar13 + -0x10) = 0x80000001008b50a0;
        *(undefined8 *)(puVar13 + -8) = 0xb3;
        FUN_1005cc010(FUN_1003fea8c,0,puVar8,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar10,
                      0xd00000000000001f);
        _swift_release(lVar6);
        _swift_bridgeObjectRelease(pcVar10);
      }
    }
    _objc_msgSend(IVar1,"unlock");
    pcVar11 = *(code **)(lVar12 + 8);
    puVar15 = puVar8;
  }
  else {
    puVar3 = &DAT_100a8d378;
    local_118 = lVar2;
    FUN_100004bb4(&DAT_100a8d378,&DAT_100823728);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x20) =
         *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_100995620;
    puVar5 = PTR___sSbN_1009958c8;
    *(undefined8 *)(puVar3 + 0x18) = 6;
    *(undefined8 *)(puVar3 + 0x10) = 3;
    puVar3[0x28] = 1;
    uVar17 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_100995628;
    *(undefined **)(puVar3 + 0x40) = puVar5;
    *(undefined8 *)(puVar3 + 0x48) = uVar17;
    puVar3[0x50] = 1;
    uVar17 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_100995630;
    *(undefined **)(puVar3 + 0x68) = puVar5;
    *(undefined8 *)(puVar3 + 0x70) = uVar17;
    *(undefined **)(puVar3 + 0x90) = PTR___s12CoreGraphics7CGFloatVN_100996360;
    *(undefined8 *)(puVar3 + 0x78) = param_1;
    puVar4 = puVar3;
    FUN_100406c54(puVar3);
    _swift_setDeallocating(puVar3);
    puVar5 = &DAT_100a8d380;
    FUN_100004bb4(&DAT_100a8d380,&DAT_100823730);
    _swift_arrayDestroy(puVar3 + 0x20,3,puVar5);
    uVar17 = 0;
    FUN_10039845c(0);
    puVar3 = &DAT_100a8ab40;
    FUN_100005c90(&DAT_100a8ab40,FUN_10039845c,&TargetProtocolConformanceDescriptor_10081f0e8);
    puVar5 = puVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar4,uVar17,PTR___sypN_100995e88 + 8,puVar3);
    _swift_bridgeObjectRelease(puVar4);
    _CGImageSourceCreateThumbnailAtIndex(param_2,0,puVar5);
    lVar2 = local_118;
    if (param_2 == 0) {
      (**(code **)(lVar12 + 0x68))(puVar15,4,local_118);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar1 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar6 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        puVar8 = puVar15;
        FUN_1005cc2b8();
        if (((ulong)puVar8 & 1) == 0) {
          _swift_release(lVar6);
        }
        else {
          IVar9 = 0xd00000000000008d;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd00000000000008d,0x80000001008b4ff0);
          pcVar10 = "lastPathComponent";
          IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
          *(undefined8 *)(puVar13 + -0x10) = 0x80000001008b50a0;
          *(undefined8 *)(puVar13 + -8) = 0xc0;
          FUN_1005cc010(FUN_1003fea10,0,puVar15,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar10,
                        0xd00000000000001f);
          _swift_release(lVar6);
          _swift_bridgeObjectRelease(pcVar10);
        }
      }
      _objc_msgSend(IVar1,"unlock");
      pcVar11 = *(code **)(lVar12 + 8);
    }
    else {
      lVar6 = 0;
      _CFDataCreateMutable(0,0);
      lVar2 = local_118;
      if (lVar6 == 0) {
        (**(code **)(lVar12 + 0x68))(puVar16,4,local_118);
        if (DAT_100a89358 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar1 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar6 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          puVar15 = puVar16;
          FUN_1005cc2b8();
          if (((ulong)puVar15 & 1) == 0) {
            _swift_release(lVar6);
          }
          else {
            IVar9 = 0xd00000000000008d;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000008d,0x80000001008b4ff0);
            pcVar10 = "lastPathComponent";
            IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
            *(undefined8 *)(puVar13 + -0x10) = 0x80000001008b50a0;
            *(undefined8 *)(puVar13 + -8) = 0xc6;
            lVar2 = local_118;
            FUN_1005cc010(FUN_1003fe994,0,puVar16,0x65746f6d65525555,0xe800000000000000,IVar9,
                          pcVar10,0xd00000000000001f);
            _swift_release(lVar6);
            _swift_bridgeObjectRelease(pcVar10);
          }
        }
        _objc_msgSend(IVar1,"unlock");
        pcVar11 = *(code **)(lVar12 + 8);
        puVar15 = puVar16;
      }
      else {
        lVar7 = lVar6;
        _CGImageDestinationCreateWithData();
        if (lVar7 == 0) {
          (**(code **)(lVar12 + 0x68))(puVar14,4,lVar2);
          if (DAT_100a89358 != -1) {
            _swift_once(&DAT_100a89358,FUN_1003fba60);
          }
          IVar1 = DAT_100a8e090;
          _objc_msgSend(DAT_100a8e090,"lock");
          lVar6 = DAT_100a8e098;
          if (DAT_100a8e098 != 0) {
            _swift_retain(DAT_100a8e098);
            puVar15 = puVar14;
            FUN_1005cc2b8();
            if (((ulong)puVar15 & 1) == 0) {
              _swift_release(lVar6);
            }
            else {
              local_120 = 0x80000001008b50a0;
              IVar9 = 0xd00000000000008d;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd00000000000008d,0x80000001008b4ff0);
              pcVar10 = "lastPathComponent";
              IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
              *(undefined8 *)(puVar13 + -8) = 0xcc;
              *(undefined8 *)(puVar13 + -0x10) = local_120;
              FUN_1005cc010(FUN_1003fe918,0,puVar14,0x65746f6d65525555,0xe800000000000000,IVar9,
                            pcVar10,0xd00000000000001f);
              _swift_release(lVar6);
              lVar2 = local_118;
              _swift_bridgeObjectRelease(pcVar10);
            }
          }
          _objc_msgSend(IVar1,"unlock");
          pcVar11 = *(code **)(lVar12 + 8);
          puVar15 = puVar14;
        }
        else {
          _CGImageDestinationAddImage();
          _CGImageDestinationFinalize();
          if ((int)lVar7 != 0) {
            __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(lVar6);
            goto LAB_1003ece98;
          }
          (**(code **)(lVar12 + 0x68))(puVar13,4,lVar2);
          if (DAT_100a89358 != -1) {
            _swift_once(&DAT_100a89358,FUN_1003fba60);
          }
          IVar1 = DAT_100a8e090;
          _objc_msgSend(DAT_100a8e090,"lock");
          lVar6 = DAT_100a8e098;
          if (DAT_100a8e098 != 0) {
            _swift_retain(DAT_100a8e098);
            puVar15 = puVar13;
            FUN_1005cc2b8();
            if (((ulong)puVar15 & 1) == 0) {
              _swift_release(lVar6);
            }
            else {
              local_120 = 0x80000001008b50a0;
              IVar9 = 0xd00000000000008d;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd00000000000008d,0x80000001008b4ff0);
              pcVar10 = "lastPathComponent";
              IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              lVar2 = local_118;
              local_128 = IVar9;
              *(undefined8 *)(puVar13 + -8) = 0xd5;
              *(undefined8 *)(puVar13 + -0x10) = local_120;
              FUN_1005cc010(FUN_1003fe89c,0,puVar13,0x65746f6d65525555,0xe800000000000000,local_128,
                            pcVar10,0xd00000000000001f);
              _swift_release(lVar6);
              _swift_bridgeObjectRelease(pcVar10);
            }
          }
          _objc_msgSend(IVar1,"unlock");
          pcVar11 = *(code **)(lVar12 + 8);
          puVar15 = puVar13;
        }
      }
    }
  }
  (*pcVar11)(puVar15,lVar2);
  lVar6 = 0;
  param_2 = -0x1000000000000000;
LAB_1003ece98:
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = lVar6;
  return auVar18;
}

