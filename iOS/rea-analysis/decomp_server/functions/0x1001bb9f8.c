// rea decompile_all
// name: FUN_1001bb9f8
// address: 0x1001bb9f8
// body: available
// range: 0x1001bb9f8-0x1001bbe23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001bb9f8(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = _TtC14UURemoteServer16ClipboardHandler::ref;
  uVar15 = 0xec00000064657463;
  uVar16 = 0x656e6e6f63736964;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_78,0,0);
  lVar9 = unaff_x20 + lVar9;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + _TtC14UURemoteServer22StreamerConnectSession::_peerState);
    plVar5 = plVar1;
    _swift_beginAccess(plVar1,auStack_90,0,0);
    if (plVar1[1] == 5) {
      FUN_1000c815c();
      lVar8 = plVar5[2];
      _swift_release();
      if ((char)lVar8 == '\x01') {
        FUN_1000c7b64();
        lVar8 = plVar5[0xc];
        _swift_release();
        lVar3 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler;
        if (((char)lVar8 == '\x01') &&
           ((*(byte *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) & 1) == 0)) {
          lVar8 = *(long *)(lVar9 + _TtC14UURemoteServer22StreamerConnectSession::
                                    ___lazy_storage___appDataHandler);
          if ((*(byte *)(lVar8 + 0x71) & 1) == 0) {
            if ((*(byte *)(lVar8 + 0x70) & 1) == 0) {
              if (*(ulong *)(lVar8 + 0x68) == 2) goto LAB_1001bbc1c;
            }
            else if (1 < *(ulong *)(lVar8 + 0x68)) {
LAB_1001bbc1c:
              FUN_1003db8c4();
              (**(code **)(*plVar5 + 0x108))(&local_98);
              _swift_release();
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0xd0))();
                _swift_release(local_98);
                if ((((uint)plVar5 & 0xff) != 2) && (((ulong)plVar5 & 1) != 0)) goto LAB_1001bbb44;
              }
              uVar15 = 0x800000010089c810;
              uVar16 = 0xd00000000000001d;
              goto LAB_1001bbaec;
            }
          }
LAB_1001bbb44:
          uVar6 = 5;
          FUN_10000af20();
          if ((uVar6 & 1) != 0) {
            lVar8 = *(long *)(lVar9 + lVar3);
            uVar6 = *(ulong *)(lVar8 + 0x40);
            bVar10 = *(byte *)(lVar8 + 0x48);
            bVar2 = *(byte *)(lVar8 + 0x49);
            if ((bVar2 & 1) == 0) {
              if ((bVar10 & 1) == 0) {
                uVar16 = 1;
              }
              else {
                uVar16 = *(undefined8 *)(&DAT_100811978 + uVar6 * 8);
              }
            }
            else {
              uVar16 = 0;
            }
            uVar15 = *(undefined8 *)(lVar8 + 0x50);
            uVar14 = *(undefined8 *)(lVar8 + 0x58);
            _swift_bridgeObjectRetain(uVar14);
            uVar7 = 5;
            FUN_10000b50c(5,uVar16,bVar2,uVar15,uVar14);
            _swift_bridgeObjectRelease(uVar14);
            if ((bVar2 & 1) == 0) {
              if ((bVar10 & 1) == 0) {
                if (1 < uVar6 - 3) goto LAB_1001bbcf4;
              }
              else if (uVar6 < 3) goto LAB_1001bbcf4;
            }
            else {
LAB_1001bbcf4:
              uVar7 = 0;
            }
            uVar14 = *(undefined8 *)
                      (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
            uVar12 = ((undefined8 *)
                     (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID))[1];
            lVar9 = *(long *)(lVar9 + lVar3);
            if (((*(byte *)(lVar9 + 0x49) & 1) == 0) && ((*(byte *)(lVar9 + 0x48) & 1) != 0)) {
              lVar9 = *(long *)(lVar9 + 0x40);
              if (lVar9 < 2) {
                if (lVar9 == 0) goto LAB_1001bbd78;
                uVar11 = 0xe300000000000000;
                uVar18 = 0x534f69;
              }
              else if (lVar9 == 2) {
                uVar11 = 0xe700000000000000;
                uVar18 = 0x64696f72646e41;
              }
              else if (lVar9 == 3) {
                uVar11 = 0xe700000000000000;
                uVar18 = 0x73776f646e6957;
              }
              else {
                uVar11 = 0xe300000000000000;
                uVar18 = 0x63614d;
              }
            }
            else {
LAB_1001bbd78:
              uVar18 = 0;
              uVar11 = 0xe000000000000000;
            }
            uVar17 = *(undefined8 *)
                      (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
            uVar13 = ((undefined8 *)
                     (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath))[1];
            bVar10 = (byte)uVar7;
            bVar4 = (uVar7 & 1) == 0;
            uVar16 = 0x7964616572;
            if (bVar4) {
              uVar16 = 0xd000000000000016;
            }
            uVar15 = 0xe500000000000000;
            if (bVar4) {
              uVar15 = 0x800000010089c7f0;
            }
            _swift_bridgeObjectRetain(uVar12);
            _swift_bridgeObjectRetain(uVar13);
            goto LAB_1001bbaf8;
          }
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_1001be4a8,0,0xd00000000000009f,0x8000000100892750,0xd000000000000011,
                        0x800000010089c7b0,0xe2,0);
          uVar15 = 0x800000010089c7d0;
          uVar16 = 0xd00000000000001f;
        }
      }
    }
  }
LAB_1001bbaec:
  uVar18 = 0;
  uVar17 = 0;
  uVar14 = 0;
  bVar10 = 0;
  uVar12 = 0xe000000000000000;
  uVar11 = 0xe000000000000000;
  uVar13 = 0xe000000000000000;
LAB_1001bbaf8:
  *param_1 = uVar14;
  param_1[1] = uVar12;
  *(byte *)(param_1 + 2) = bVar10 & 1;
  param_1[3] = uVar18;
  param_1[4] = uVar11;
  param_1[5] = uVar17;
  param_1[6] = uVar13;
  param_1[7] = uVar16;
  param_1[8] = uVar15;
  return;
}

