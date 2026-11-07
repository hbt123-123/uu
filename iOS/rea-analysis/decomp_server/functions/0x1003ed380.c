// rea decompile_all
// name: FUN_1003ed380
// address: 0x1003ed380
// body: available
// range: 0x1003ed380-0x1003edadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003ed380(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ID IVar11;
  undefined8 *puVar12;
  ID IVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined1 *puVar17;
  long extraout_x8;
  long extraout_x12;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  ID local_d0;
  undefined8 local_c8;
  char *local_c0;
  long local_b8;
  undefined1 *local_b0;
  ulong local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  undefined1 *local_80;
  ulong local_78;
  
  lVar4 = 0;
  FUN_1005cac3c();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  uVar7 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar19 = (undefined1 *)(uVar7 - extraout_x12);
  puVar5 = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  puVar15 = puVar5;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  IVar6 = _objc_msgSend((ID)puVar5,"initWithContentsOfURL:",puVar15);
  local_88 = lVar18;
  if (IVar6 == 0) {
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(undefined8 *)(puVar19 + -0x10) = param_1;
    (**(code **)(lVar18 + 0x68))(uVar7,4,lVar4);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar6 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar1 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar9 = uVar7;
      FUN_1005cc2b8();
      if ((uVar9 & 1) == 0) {
        _swift_release(lVar1);
      }
      else {
        IVar11 = 0xd00000000000008d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000008d,0x80000001008b4ff0)
        ;
        pcVar16 = "lastPathComponent";
        IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(puVar19 + -0x30) = FUN_1003ee78c;
        *(undefined1 **)(puVar19 + -0x28) = puVar19 + -0x20;
        *(undefined8 *)(puVar19 + -0x50) = 0x80000001008b5100;
        *(undefined8 *)(puVar19 + -0x48) = 0x28;
        lVar18 = local_88;
        FUN_1005cc010(FUN_1003a85e4,puVar19 + -0x40,uVar7,0x65746f6d65525555,0xe800000000000000,
                      IVar11,pcVar16,0xd00000000000001b);
        _swift_release(lVar1);
        _swift_bridgeObjectRelease(pcVar16);
      }
    }
    _objc_msgSend(IVar6,"unlock");
    (**(code **)(lVar18 + 8))(uVar7,lVar4);
    puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar7 = _objc_msgSend(IVar6,"representations");
    uVar8 = 0;
    FUN_100009eb4(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar7,uVar8);
    if (uVar7 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar9 = uVar7 & 0xffffffffffffff8;
      if ((long)uVar7 < 0) {
        uVar9 = uVar7;
      }
      local_a8 = uVar7;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar7 = local_a8;
    }
    PTR___swiftEmptyArrayStorage_100995ea0 = puVar15;
    local_a8 = uVar7;
    if (uVar9 == 0) {
      _swift_bridgeObjectRelease(uVar7);
      puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_90 = uVar9;
      if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003edac8);
        (*pcVar3)();
      }
      uVar20 = 0;
      local_78 = uVar7 & 0xc000000000000001;
      local_c0 = "FileNoFoundError";
      local_c8 = 0x80000001008b5100;
      local_9c = 4;
      local_d0 = IVar6;
      local_b8 = lVar4;
      local_98 = param_1;
      local_80 = puVar19;
      do {
        if (local_78 == 0) {
          uVar10 = *(ulong *)(uVar7 + uVar20 * 8 + 0x20);
        }
        else {
          uVar10 = uVar20;
          FUN_100169c14(uVar20,uVar7);
        }
        _swift_dynamicCastObjCClass(uVar10,&_OBJC_CLASS___NSBitmapImageRep);
        if (uVar10 != 0) {
          IVar6 = _objc_msgSend(uVar10,"pixelsWide");
          IVar11 = _objc_msgSend(uVar10,"pixelsHigh");
          uVar8 = 0;
          FUN_100005ef8(0);
          puVar12 = &DAT_100a752c0;
          FUN_100005c90(&DAT_100a752c0,FUN_100005ef8,&TargetProtocolConformanceDescriptor_100809344)
          ;
          puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (PTR___swiftEmptyDictionarySingleton_100995ea8,uVar8,PTR___sypN_100995e88 + 8,
                     puVar12);
          pcVar16 = "representationUsingType:properties:";
          IVar13 = _objc_msgSend(uVar10,"representationUsingType:properties:",4,puVar5);
          if (IVar13 == 0) {
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(double *)(puVar19 + -0x20) = (double)(long)IVar6;
            *(double *)(puVar19 + -0x18) = (double)(long)IVar11;
            *(undefined8 *)(puVar19 + -0x10) = local_98;
            (**(code **)(lVar18 + 0x68))(local_80,local_9c,lVar4);
            if (DAT_100a89358 != -1) {
              _swift_once(&DAT_100a89358,FUN_1003fba60);
            }
            IVar6 = DAT_100a8e090;
            _objc_msgSend(DAT_100a8e090,"lock");
            lVar1 = DAT_100a8e098;
            if (DAT_100a8e098 != 0) {
              _swift_retain(DAT_100a8e098);
              puVar2 = local_80;
              puVar17 = local_80;
              FUN_1005cc2b8();
              if (((ulong)puVar17 & 1) == 0) {
                _swift_release(lVar1);
                uVar7 = local_a8;
              }
              else {
                IVar11 = 0xd00000000000008d;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd00000000000008d,(ulong)local_c0 | 0x8000000000000000);
                pcVar16 = "lastPathComponent";
                local_b0 = puVar19;
                IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
                (*(code *)PTR____chkstk_darwin_100995498)(0);
                puVar17 = puVar19 + -0x50;
                *(code **)(puVar19 + -0x40) = FUN_1003ee794;
                *(undefined1 **)(puVar19 + -0x38) = puVar19 + -0x30;
                *(undefined8 *)(puVar19 + -0x58) = 0x3a;
                *(undefined8 *)(puVar19 + -0x60) = local_c8;
                puVar19 = local_b0;
                FUN_1005cc010(thunk_FUN_1003a85e4,puVar17,puVar2,0x65746f6d65525555,
                              0xe800000000000000,IVar11,pcVar16,0xd00000000000001b);
                _swift_release(lVar1);
                lVar4 = local_b8;
                _swift_bridgeObjectRelease(pcVar16);
                lVar18 = local_88;
                uVar7 = local_a8;
              }
            }
            _objc_msgSend(IVar6,"unlock");
            (**(code **)(lVar18 + 8))(local_80,lVar4);
            uVar9 = local_90;
          }
          else {
            __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
            FUN_100008184(IVar13,pcVar16);
            puVar5 = puVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar14 = puVar15;
            if (((ulong)puVar5 & 1) == 0) {
              puVar14 = (undefined *)0x0;
              FUN_10039ec90(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
            }
            uVar10 = *(ulong *)(puVar14 + 0x10);
            puVar15 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar10) {
              puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
              FUN_10039ec90(puVar15,uVar10 + 1,1,puVar14);
            }
            *(ulong *)(puVar15 + 0x10) = uVar10 + 1;
            *(double *)(puVar15 + uVar10 * 0x20 + 0x20) = (double)(long)IVar6;
            *(double *)(puVar15 + uVar10 * 0x20 + 0x28) = (double)(long)IVar11;
            *(ID *)(puVar15 + uVar10 * 0x20 + 0x30) = IVar13;
            *(char **)(puVar15 + uVar10 * 0x20 + 0x38) = pcVar16;
            FUN_100006cdc(IVar13,pcVar16);
            lVar18 = local_88;
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar9 != uVar20);
      _swift_bridgeObjectRelease(uVar7);
    }
  }
  return puVar15;
}

