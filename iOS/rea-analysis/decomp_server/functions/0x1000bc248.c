// rea decompile_all
// name: FUN_1000bc248
// address: 0x1000bc248
// body: available
// range: 0x1000bc248-0x1000bc6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000bc248(long param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ID *pIVar10;
  long *plVar11;
  ID IVar12;
  long *plVar13;
  ID IVar14;
  ID *pIVar15;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar5 != 0) &&
     (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar5 != 0)) {
    lVar9 = lVar5;
    FUN_1000c7b64();
    bVar2 = *(byte *)(lVar9 + 0x81);
    _swift_release();
    if ((((bVar2 & 1) == 0) &&
        (lVar9 = lVar5 + _TtC14UURemoteServer22StreamerConnectSession::_peerState,
        _swift_beginAccess(lVar9,auStack_90,0,0), *(long *)(lVar9 + 8) == 5)) &&
       (((*(byte *)(*(long *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::
                                      ___lazy_storage___appDataHandler) + 0x81) & 1) != 0 ||
        (*(long *)(*(long *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::
                                     ___lazy_storage___appDataHandler) + 0x78) != 6)))) {
      _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
      uVar6 = *(ulong *)(param_1 + 0x10);
      if (uVar6 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar6 & 0xffffffffffffff8;
        if ((long)uVar6 < 0) {
          uVar4 = uVar6;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar4 == 0) {
        plVar11 = (long *)0x0;
        FUN_1000b9b50();
        FUN_1003b2720();
        lVar9 = *plVar11;
        lVar5 = lVar9;
        _swift_retain();
        FUN_10039a5f0();
        _swift_release(lVar9);
        if (lVar5 == 2) {
          FUN_1000ba3ac();
          FUN_1000bba58();
        }
        FUN_1000b6da8();
        FUN_1000c5300();
        _swift_release(lVar9);
        FUN_1000b76b4();
      }
      else {
        plVar11 = *(long **)(param_1 + 0x10);
        if ((ulong)plVar11 >> 0x3e == 0) {
          plVar13 = *(long **)(((ulong)plVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar13 = (long *)((ulong)plVar11 & 0xffffffffffffff8);
          if ((long)plVar11 < 0) {
            plVar13 = plVar11;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        _swift_bridgeObjectRetain(plVar11);
        if (plVar13 != (long *)0x0) {
          uVar6 = 0;
          do {
            if (((ulong)plVar11 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)plVar11 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1000bc61c);
                (*pcVar3)();
              }
              uVar4 = plVar11[uVar6 + 4];
            }
            else {
              uVar4 = uVar6;
              FUN_10016a00c(uVar6,plVar11);
            }
            plVar1 = (long *)(uVar6 + 1);
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000bc618);
              (*pcVar3)();
            }
            IVar12 = uVar4;
            FUN_1000b6da8();
            if (*(char *)(IVar12 + 0x50) == '\x01') {
              puVar7 = &DAT_100a77208;
              if (DAT_100a73b50 != -1) {
                _swift_once(&DAT_100a73b50,FUN_1000c5570);
                puVar7 = &DAT_100a77208;
              }
            }
            else {
              puVar7 = &DAT_100a77200;
              if (DAT_100a73b48 != -1) {
                _swift_once(&DAT_100a73b48,FUN_1000c554c);
                puVar7 = &DAT_100a77200;
              }
            }
            uVar8 = *puVar7;
            _swift_release();
            _objc_msgSend(uVar4,"setLevel:",uVar8);
            _objc_msgSend(uVar4,"setSharingType:",0);
            uVar6 = uVar6 + 1;
          } while (plVar1 != plVar13);
        }
        _swift_bridgeObjectRelease();
        FUN_1000b6da8();
        FUN_1000c5300();
        _swift_release();
        FUN_1000b76b4();
        FUN_1003b2720();
        lVar9 = *plVar11;
        lVar5 = lVar9;
        _swift_retain();
        FUN_10039a5f0();
        _swift_release(lVar9);
        if (lVar5 == 2) {
          FUN_1000ba3ac();
          FUN_1000bba58();
        }
        else {
          _swift_beginAccess(param_1 + 0x18,auStack_c0,0,0);
          pIVar10 = *(ID **)(param_1 + 0x18);
          IVar12 = pIVar10[2];
          _swift_bridgeObjectRetain(pIVar10);
          if (IVar12 != 0) {
            IVar14 = 0;
            pIVar15 = pIVar10;
            do {
              pIVar15 = pIVar15 + 4;
              if (pIVar10[2] <= IVar14) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1000bc620);
                (*pcVar3)();
              }
              IVar14 = IVar14 + 1;
              _objc_msgSend(*pIVar15,"setImage:",0);
            } while (IVar12 != IVar14);
          }
          _swift_bridgeObjectRelease(pIVar10);
        }
      }
      _swift_release(param_1);
      return;
    }
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000bc6bc,0,0xd00000000000009f,0x8000000100882d60,0x7265764f776f6873,
                0xed0000292879616c,0x1e8,0);
  _swift_release(param_1);
  return;
}

